﻿#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include "740. Delete and Earn.h"

int main()
{
	cout << "============================ Start ============================" << endl;


	map <int, int>dic;
	dic[0];
	dic[7];
	dic[-5];
	dic[2];
	dic[3];
	dic[4];

	for (auto it = dic.begin(); it != dic.end(); it++)
	{
		cout << it->first << " - " << it->second << endl;
	}


	vector<int> v = vector<int>{ 12, 32, 93, 17, 100, 72, 40, 71, 37, 92, 58, 34, 29, 78, 11, 84, 77, 90, 92, 35, 12, 5, 27, 92, 91, 23, 65, 91, 85, 14, 42, 28, 80, 85, 38, 71, 62, 82, 66, 3, 33, 33, 55, 60, 48, 78, 63, 11, 20, 51, 78, 42, 37, 21, 100, 13, 60, 57, 91, 53, 49, 15, 45, 19, 51, 2, 96, 22, 32, 2, 46, 62, 58, 11, 29, 6, 74, 38, 70, 97, 4, 22, 76, 19, 1, 90, 63, 55, 64, 44, 90, 51, 36, 16, 65, 95, 64, 59, 53, 93 };
	//3451

	Solution ans;
	ans.deleteAndEarn(v);


	cout << "============================= End =============================" << endl;
}