#include<iostream>
#include<vector>
#include<string>

using namespace std;

// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int left = 0,right = nums.size() - 1;
//         if(nums.size() == 1) return left;

//         while(left < right){
//             int mid = left + (right - left + 1) / 2;
//             if(nums[mid] > nums[mid - 1]){
//                 left = mid;
//             }
//             else{
//                 right = mid - 1;
//             }
//         }
//         return right;
//     }
// };


// /** 
//  * Forward declaration of guess API.
//  * @param  num   your guess
//  * @return 	     -1 if num is higher than the picked number
//  *			      1 if num is lower than the picked number
//  *               otherwise return 0
//  * int guess(int num);
//  */

// class Solution {
// public:
//     int guessNumber(int n) {
//         int left = 1,right = n;
//         while(left < right){
//             int mid = left + (right - left + 1) / 2;
//             if(guess(mid) == -1){
//                 right = mid - 1;
//             }
//             else{
//                 left = mid;
//             }

//         }
//         return left;
//     }
// };

//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int n = nums.size();
//        for (int dest = -1, cur = 0; cur < n;) {
//            if (nums[cur]) {
//                swap(nums[dest + 1], nums[cur]);
//                dest++;
//                cur++;
//            }
//            else {
//                cur++;
//            }
//        }
//    }
//};


/*class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret(n + 1);
        for(int i = 0;i <= n;i++){
            int count = 0,tmp = i;
            while(tmp){
                count++;
                tmp = tmp & (tmp - 1);
            }
            ret[i] = count;
        }
        return ret;
    */}
};


// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int left = 0,right = 0,n = nums.size();
//         double ret = -std::numeric_limits<double>::infinity(),sum = 0;
//         for(int left = 0,right = 0;right < n;right++){
//           sum += nums[right];
//           while(right - left + 1 > k){
//             sum -= nums[left];
//             left++;
//           }
//           if(sum >= ret && right - left + 1 == k) ret = sum;
//         }

//         return ret / k;
//     }
// };


// class Solution {
// public:
//     bool isValid(string s) {
//         string str;
//         for(auto& ch : s){
//             if(str.empty() || (ch == '(' || ch == '{' || ch == '[')){
//                 str += ch;
//             }
//             else if((str.back() == '(' && ch == ')') || (str.back() == '{' && ch == '}') || (str.back() == '[' && ch == ']')){
//                 str.pop_back();
//             }
//             else{
//                 return false;
//             }
//         }
//         if(str.size()) return false;
//         return true;
//     }
// };

//class Solution {
//    bool view[7] = { false };
//    vector<vector<int>> ret;
//    void _permute(vector<int>& nums, vector<int>& num) {
//
//        if (num.size() == nums.size()) {
//            ret.push_back(num);
//            return;
//        }
//
//        for (int i = 0; i < nums.size(); i++) {
//            if (!view[i]) {
//                view[i] = true;
//                num.push_back(nums[i]);
//                _permute(nums, num);
//                num.pop_back();
//                view[i] = false;
//            }
//        }
//    }
//public:
//    vector<vector<int>> permute(vector<int>& nums) {
//        vector<int> num;
//        for (int i = 0; i < nums.size(); i++) {
//            view[i] = true;
//            num.push_back(nums[i]);
//            _permute(nums, num);
//            num.pop_back();
//            view[i] = false;
//        }
//        return ret;
//    }
//};


//#include "widget.h"
//#include "ui_widget.h"
//
//Widget::Widget(QWidget* parent)
//    : QWidget(parent)
//    , ui(new Ui::Widget)
//{
//    ui->setupUi(this);
//}
//
//Widget::~Widget()
//{
//    delete ui;
//}



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
//    ListNode* detectCycle(ListNode* head) {
//        ListNode* fast = head;
//        ListNode* slow = head;
//        while (fast && fast->next) {
//            slow = slow->next;
//            fast = fast->next->next;
//            if (slow == fast) {
//                ListNode* meet = slow;
//                while (head != meet) {
//                    head = head->next;
//                    meet = meet->next;
//                }
//                return meet;
//            }
//
//        }
//        return nullptr;
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
//
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
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//class Solution {
//public:
//    bool isPalindrome(ListNode* head) {
//        vector<int> v;
//        ListNode* cur = head;
//        while (cur) {
//            v.push_back(cur->val);
//            cur = cur->next;
//        }
//        for (int left = 0, right = v.size() - 1; left <= right; left++, right--) {
//            if (v[left] != v[right]) return false;
//        }
//        return true;
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
//
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        vector<vector<int>> vv;
//        queue<TreeNode*> q;
//        if (root == nullptr) return vv;
//        q.push(root);
//        int levelsize = 1;
//        while (q.size()) {
//            vector<int> v;
//            while (levelsize--) {
//                TreeNode* cur = q.front();
//                q.pop();
//                v.push_back(cur->val);
//                if (cur->left) {
//                    q.push(cur->left);
//                }
//                if (cur->right) {
//                    q.push(cur->right);
//                }
//            }
//            vv.push_back(v);
//            levelsize = q.size();
//        }
//        return vv;
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
//    void _invertTree(TreeNode* root) {
//        if (root == nullptr) return;
//        TreeNode* cur = root->left;
//        root->left = root->right;
//        root->right = cur;
//        invertTree(root->left);
//        invertTree(root->right);
//    }
//    TreeNode* invertTree(TreeNode* root) {
//        _invertTree(root);
//        return root;
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
//    vector<int> ret;
//    void _inorderTraversal(TreeNode* root) {
//        if (root == nullptr) return;
//        _inorderTraversal(root->left);
//        ret.push_back(root->val);
//        _inorderTraversal(root->right);
//    }
//    vector<int> inorderTraversal(TreeNode* root) {
//        _inorderTraversal(root);
//        return ret;
//    }
//};
//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        int tmp = nums[0];
//        int numsize = nums.size();
//        int count = 1;
//        for (int i = 1; i < numsize; i++)
//        {
//            if (tmp == nums[i])
//            {
//                count++;
//            }
//            else
//            {
//                count--;
//                if (count == 0)
//                {
//                    tmp = nums[i];
//                    count = 1;
//                }
//            }
//        }
//        return tmp;
//    }
//};
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

// class Solution {
// public:
//     int largestAltitude(vector<int>& gain) {
//         vector<int> ret(gain.size() + 1,0);
//         int maxval = 0;
//         for(int i = 1;i < ret.size();i++){
//             ret[i] = gain[i - 1] + ret[i - 1];
//             maxval = max(ret[i],maxval);
//         }
//         return maxval;
//     }
// };