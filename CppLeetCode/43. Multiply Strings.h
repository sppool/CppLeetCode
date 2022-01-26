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
		vector<vector<int>> tmp = GetArr(num1, num2);


	}

	vector<vector<int>> GetArr(string num1, string num2)
	{
		int n = num1.size() + num2.size() - 1;
		int z = 0;
		vector<vector<int>> arr;
		vector<int>* p;
		int val;
		for (int i = num1.size() - 1; i >= 0; i--)
		{
			p = new vector<int>;

			for (int t = 0; t < z; t++)
			{
				(*p).push_back(0);
			}
			z++;

			for (int j = num2.size() - 1; j >= 0; j--)
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

	

		return res;
	}

};