//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int ret = 0;
//        for (auto& num : nums) ret ^= num;
//        return ret;
//    }
//};

//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        int hash[128] = { 0 };
//        int ret = 0;
//        for (int left = 0, right = 0; right < s.size(); right++)
//        {
//            hash[s[right]]++;
//            while (hash[s[right]] > 1)
//            {
//                hash[s[left]]--;
//                left++;
//            }
//            ret = max(right - left + 1, ret);
//        }
//        return ret;
//    }
//};
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//class Solution {
//public:
//    bool _isSymmetric(TreeNode* q, TreeNode* p)
//    {
//        if (q == nullptr && p == nullptr)
//            return true;
//        if (q == nullptr || p == nullptr)
//            return false;
//        if (q->val != p->val)
//            return false;
//
//        return _isSymmetric(q->left, p->right) && _isSymmetric(q->right, p->left);
//    }
//    bool isSymmetric(TreeNode* root) {
//        if (root == nullptr) return true;
//        return _isSymmetric(root->left, root->right);
//    }
//};
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//class Solution {
//public:
//    int maxDepth(TreeNode* root) {
//        if (root == nullptr) return 0;
//        int leftheight = maxDepth(root->left);
//        int rightheight = maxDepth(root->right);
//        return (leftheight > rightheight ? leftheight : rightheight) + 1;
//    }
//};
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//class Solution {
//public:
//    bool hasCycle(ListNode* head) {
//        if (head == nullptr || head->next == nullptr) return false;
//        ListNode* fast = head;
//        ListNode* slow = head;
//        while (fast && fast->next)
//        {
//            slow = slow->next;
//            fast = fast->next->next;
//            if (slow == fast) return true;
//
//        }
//        return false;
//    }
//};
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