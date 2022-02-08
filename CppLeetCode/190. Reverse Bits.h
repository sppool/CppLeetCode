//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Reverse Bits.
//Memory Usage: 5.9 MB, less than 81.50 % of C++ online submissions for Reverse Bits.

#pragma once

#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <bitset>

#include <vector>

class Solution
{
public:
	uint32_t reverseBits(uint32_t n)
	{
		uint32_t sum = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((n >> i) & 1)
			{
				sum += pow((uint32_t)2, 31 - i);
			}
		}

		return sum;
	}

	uint32_t reverseBits2(uint32_t n) // STL
	{
		string str = bitset<32>(n).to_string();  // 2string
		reverse(str.begin(), str.end()); // ¤ÏÂàstr

		return bitset<32>(str).to_ulong();
	}
};