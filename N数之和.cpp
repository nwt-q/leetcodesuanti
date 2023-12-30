class Solution {
public:
    vector<vector<int>> nSum(vector<int>& nums, int n, int target) {
        sort(nums.begin(), nums.end());
        return getNSum(nums, n, 0, target);
    }

private:
    vector<vector<int>> getNSum(vector<int>& nums, int n, int st, int target) {
        int len = nums.size();
        vector<vector<int>> curList;

        if (n == 2) {
            int left = st, right = len - 1;
            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum == target) {
                    curList.push_back({ nums[left], nums[right] });
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    left++;
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        } else if (n > 2) {
            for (int i = st; i < len - n + 1; i++) {
                if (i > st && nums[i - 1] == nums[i]) {
                    continue;
                }
                vector<vector<int>> subList = getNSum(nums, n - 1, i + 1, target - nums[i]);
                for (vector<int>& list : subList) {
                    vector<int> t;
                    t.push_back(nums[i]);
                    t.insert(t.end(), list.begin(), list.end());
                    curList.push_back(t);
                }
            }
        }

        return curList;
    }
};
