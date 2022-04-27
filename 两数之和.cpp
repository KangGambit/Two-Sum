#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
	vector<int> twosum(vector<int>& nums, int target) {
		unordered_map<int, int> map;
		for (int i = 0; i < nums.size(); i++) {
			auto dif = map.find(target-nums[i]);
			if (dif != map.end())	return{ i,dif->second };
			map[nums[i]] = i;
		}
		return {};
	}
};

int main() {
	vector<int> nums = {3,7,11,13,17,19,23,29};
	int target = 18;
	Solution s;
	vector<int> res = s.twosum(nums, target);
	for (auto i : res) cout << i << " ";
	cout << endl;
	return 0;
}