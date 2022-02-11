#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <vector>
#include <bitset>
#include <map>
#include "1588. Sum of All Odd Length Subarrays.h"

int main()
{
	cout << "============================ Start ============================" << endl;
	//vector<int> v = vector<int>{ 1, 4, 2, 5, 3 };
	Solution ans;
	//ans.CreatArr();
	ans.SubArr(7, 1);
	ans.SubArr(7, 3);
	ans.SubArr(7, 5);
	ans.SubArr(7, 7);
	cout << "============================= End =============================" << endl;
}