#include <bitset>
#include <set>
#include <algorithm>

#define MAIN_SURFACE_SIZE_BYTES 256 /* 256 * 8 = 2048 - ��������������� ��������� ������������ (��� �������� 0 - 2047 ������������) */

class PostMachineState
{
private:
	std::bitset<MAIN_SURFACE_SIZE_BYTES> bitset; 
	std::set<int> set; // ��� �������� ����� ��� ��������� ������������
public:
	PostMachineState()
	{
		bitset = std::bitset<MAIN_SURFACE_SIZE_BYTES>();
		set = std::set<int>();
	}

	void Reset()
	{
		bitset = std::bitset<MAIN_SURFACE_SIZE_BYTES>();
		set = std::set<int>();
	}

	void Set(int index, bool value)
	{
		if (index > 0 && index < MAIN_SURFACE_SIZE_BYTES * 8)
			bitset.set(index, value);
		else
		{
			if (set.count(index))
			{
				if (!value)
					set.erase(index);
			}
			else
				set.insert(index);
		}
	}

	bool Get(int index)
	{
		if (index > 0 && index < MAIN_SURFACE_SIZE_BYTES * 8)
			return bitset[index];
		return set.count(index) == 1;
	}

};