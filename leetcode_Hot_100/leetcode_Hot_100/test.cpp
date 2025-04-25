//class Solution {
//public:
//    vector<int> twoSum(vector<int>& price, int target) {
//        unordered_map<int, int> hash;
//        int n = price.size();
//        for (int i = 0; i < n; i++)
//        {
//            if (hash.count(target - price[i])) return { price[i],target - price[i] };
//            else hash[price[i]] = target - price[i];
//        }
//        return { -1,-1 };
//    }
//};

//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int ret = 0;
//        int n = height.size();
//        for (int left = 0, right = n - 1; left < right;)
//        {
//            ret = max(ret, min(height[left], height[right]) * (right - left));
//            if (height[left] < height[right]) left++;
//            else right--;
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int n = nums.size();
//        for (int cur = 0, dest = -1; cur < n; cur++)
//        {
//            if (nums[cur] != 0)
//            {
//                swap(nums[++dest], nums[cur]);
//            }
//        }
//    }
//};

//class Solution {
//public:
//    int longestConsecutive(vector<int>& nums) {
//        if (nums.size() == 0) return 0;
//        if (nums.size() == 1) return 1;
//        set<int> st;
//        for (auto i : nums) st.insert(i);
//        vector<int> arr;
//        for (auto i : st) arr.push_back(i);
//        int n = arr.size();
//        int ret = 1;
//        int sum = 1;
//        for (int i = 0; i + 1 < n; i++)
//        {
//            if (arr[i] + 1 == arr[i + 1]) sum++;
//            else sum = 1;
//            ret = max(sum, ret);
//        }
//
//        return ret;
//    }
//};

//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        unordered_map<string, vector<string>> hash;
//        for (auto s : strs)
//        {
//            string tmp = s;
//            sort(tmp.begin(), tmp.end());
//            hash[tmp].push_back(s);
//        }
//        vector<vector<string>> ret;
//        for (auto i : hash)
//        {
//            ret.push_back(i.second);
//        }
//
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        unordered_map<int, int> hash;
//        int n = nums.size();
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (hash.count(target - nums[i]))
//                return { hash[target - nums[i]],i };
//            else hash[nums[i]] = i;
//        }
//        return { -1,-1 };
//    }
//};