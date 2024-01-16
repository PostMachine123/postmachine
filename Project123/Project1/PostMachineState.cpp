#include <bitset>
#include <set>
#include <algorithm>

#define MAIN_SURFACE_SIZE_BYTES 256 /* 256 * 8 = 2048 - вместительность основного пространства (для индексов 0 - 2047 включительно) */

class PostMachineState
{
private:
	std::bitset<MAIN_SURFACE_SIZE_BYTES> bitset; 
	std::set<int> set; // для хранения меток вне основного пространства
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