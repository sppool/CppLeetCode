//Runtime: 4 ms, faster than 69.51 % of C++ online submissions for Sum of All Odd Length Subarrays.
//Memory Usage: 9.3 MB, less than 7.95 % of C++ online submissions for Sum of All Odd Length Subarrays.

#pragma once
/*

1  11  222  2332  34543  356653  4688864

*/
#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int sumOddLengthSubarrays(vector<int>& arr)
	{
		int res = 0;
		int n = arr.size();
		vector<int> W_arr = CreatArr(n);

		for (int i = 0; i < n; i++)
		{
			res += (W_arr[i] * arr[i]);
		}

		return res;
	}

	vector<int> SubArr(int n, int sub_size)
	{
		vector<int> res = vector<int>(n, 1);
			// ³Ì°ª­­¨î min(sub_size - 1, n - sub_size)
			int v1 = sub_size - 1;
			int v2 = n - sub_size;
			for (int i = 0; i < n; i++)
			{
				res[i] += min(min(v1, v2), min(i, n - 1 - i));
			}
		return res;
	}

	void AddArr(vector<int>& init, vector<int> v)
	{
		int n = init.size();

		for (int i = 0; i < n; i++)
		{
			init[i] += v[i];
		}
	}

	vector<int> CreatArr(int n)
	{
		vector<int> init = vector<int>(n, 0);
		for (int i = 1; i <= n; i += 2)
		{
			AddArr(init, SubArr(n, i));
		}

		return init;
	}
};