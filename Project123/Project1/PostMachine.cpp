#include "PostMachineState.cpp"
#include <vector>
#include <sstream>

static std::vector<std::string> split(const std::string& str, char ch)
{
	auto result = std::vector<std::string>{};
	auto ss = std::stringstream{ str };

	for (std::string line; std::getline(ss, line, ch);)
		result.push_back(line);

	return result;
}

class PostMachine
{
private:
	PostMachineState* state;
	int instructionIndex;
	int caretIndex;
	std::vector<std::string> program;
	std::string error;

public:
	PostMachine()
	{
		this->instructionIndex = caretIndex = 0;
		this->state = new PostMachineState();
		this->error = "";
	}

	void SetProgram(std::vector<std::string> program) { this->program = program; this->instructionIndex = this->caretIndex = 0; }
	int GetCaretIndex() { return this->caretIndex; }
	PostMachineState* GetState() { return this->state; }
	int GetInstructionIndex() { return this->instructionIndex; }
	bool IsRunning() { return this->instructionIndex < this->program.size() && this->error == ""; }

	void Step()
	{
		auto cmd = this->program[this->instructionIndex];
		auto parts = split(cmd, ' ');
		auto opcode = parts[0];

		if (opcode == "1" || opcode == "0")
		{
			this->state->Set(this->caretIndex, opcode == "1");
			this->instructionIndex++;
		}
		else if (opcode == "<" || opcode == ">")
		{
			this->caretIndex += opcode == ">" ? 1 : -1;
			this->instructionIndex++;
		}
		else if (opcode == "?")
		{
			this->instructionIndex = std::stoi(parts[this->state->Get(this->caretIndex) ? 2 : 1]) - 1;
		}
		else if (opcode == "!")
			this->instructionIndex = program.size();
		else
		{
			this->error = "Unknown opcode " + opcode + " at pos " + std::to_string(this->instructionIndex);
		}
	}
};

