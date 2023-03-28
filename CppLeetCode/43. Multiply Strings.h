//Runtime: 101 ms, faster than 12.93 % of C++ online submissions for Multiply Strings.
//Memory Usage: 24.7 MB, less than 11.83 % of C++ online submissions for Multiply Strings.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <map>

class Solution
{
public:
	string multiply(string num1, string num2)
	{
		if (num1 == "0" || num2 == "0")
			return "0";

		vector<vector<int>> arr = GetArr(num1, num2);
		vector<int> sumArr = GetArrSum(arr);
		ArrCarry(sumArr);

		string res = "";
		for (int i = sumArr.size() - 1; i >= 0; --i)
		{
			res += to_string(sumArr[i]);
		}

		// 刪除前面的0
		int i = 0;
		while (res[i] == '0')
		{
			++i;
		}
		res = res.substr(i);

		return res;
	}

	vector<vector<int>> GetArr(string num1, string num2)
	{

		int n = num1.size() + num2.size() - 1;
		int z = 0;
		vector<vector<int>> arr;
		vector<int>* p;
		int val;
		for (int i = num1.size() - 1; i >= 0; --i)
		{
			p = new vector<int>;

			for (int t = 0; t < z; t++)
			{
				(*p).push_back(0);
			}
			z++;

			for (int j = num2.size() - 1; j >= 0; --j)
			{
				val = stoi(num1.substr(i, 1)) * stoi(num2.substr(j, 1));
				(*p).push_back(val);
			}

			while ((*p).size() < n)
			{
				(*p).push_back(0);
			}

			arr.push_back(*p);
			delete p;
		}

		return arr;
	}

	vector<int> GetArrSum(vector<vector<int>> v)
	{
		vector<int> res;
		int val;
		for (int i = 0; i < v[0].size(); ++i)
		{
			val = 0;
			for (int j = 0; j < v.size(); ++j)
			{
				val += v[j][i];
			}
			res.push_back(val);
		}

		return res;
	}

	void ArrCarry(vector<int>& v)
	{
		v.push_back(0); // 進位使用
		int val;
		int ind;
		for (int i = 0; i < v.size(); ++i)
		{
			ind = 1;
			val = v[i];
			while ((val / (int)pow(10, ind)) != 0)
			{
				v[i + ind] += (val / (int)pow(10, ind) % 10); // 進位數
				ind++;
			}
			v[i] = val % 10;
		}
	}
};

/*
		|             9   9   9 |
		|       ×     6   7   8 |
		|-----------------------|
		|     0   0  72  72  72 |
		|     0  63  63  63   0 | (GetArr)
		|    54  54  54   0   0 |
		|-----------------------|
		|    54 117 189 135  72 | (GetArrSum)
		|-----------------------|
		|    54 117 189 142   2 | (ArrCarry)
		|-----------------------|	 
		|    54 117 203   2   2 |	  	
		|-----------------------|     ||
		|    54 137   3   2   2 |	 \  /
		|-----------------------|	  \/
		| 0  67   7   3   2   2 |
		|-----------------------|
		| 6   7   7   3   2   2 | (ArrCarry)
*/