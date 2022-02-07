//Runtime: 6 ms, faster than 70.10 % of C++ online submissions for Min Cost Climbing Stairs.
//Memory Usage: 13.7 MB, less than 48.35 % of C++ online submissions for Min Cost Climbing Stairs.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int minCostClimbingStairs(vector<int>& cost)
	{
		int n = cost.size();
		int cost2 = cost[0]; // cost前2步
		int cost1 = cost[1]; // cost前1步
		int cost_ = (cost1 <= cost2) ? cost1 : cost2;

		for (int i = 2; i < n; i++)
		{
			cost_ += cost[i];
			cost2 = cost1;
			cost1 = cost_;
			cost_ = (cost1 <= cost2) ? cost1 : cost2;
		}

		return cost_;
	}
};