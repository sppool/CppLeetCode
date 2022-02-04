#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <vector>
#include <map>

#include "53. Maximum Subarray.h"

int main()
{
	cout << "============================ Start ============================" << endl;

	Solution ans;
	vector<int> v = vector<int>{5, 4, -1, 7, 8};
	ans.maxSubArray(v);

	cout << "============================= End =============================" << endl;
}