#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include<queue>

using namespace std;

// class Solution {
// public:
//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//         unordered_map<int,vector<int>> edges;
//         vector<int> in(numCourses);

//         for(auto edge : prerequisites)
//         {
//             int a = edge[0],b = edge[1];//记录边和每个点的入度
//             edges[b].push_back(a);
//             in[a]++;
//         }

//         queue<int> q;
//         for(int i = 0;i < in.size();i++)
//         {
//             if(in[i] == 0) q.push(i);//入度为0的点入队列
//         }

//         while(q.size())
//         {
//             int front = q.front();
//             q.pop();
//             for(auto num : edges[front])//依次遍历入度为0的点，并根据边，遍历完后减少对应指向点的入度
//             {
//                 in[num]--;
//                 if(in[num] == 0) q.push(num);
//             }
//         }

//         for(auto i : in)
//         {
//             if(i) return false;//如果还有点入度不为0，说明有环
//         }

//         return true;
//     }
// };

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
//     int ret = -1;
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         dfs(root);
//         return ret;
//     }

//     int dfs(TreeNode* root){
//         if(root == nullptr) return -1;

//         int left = dfs(root->left) + 1;
//         int right = dfs(root->right) + 1;

//         ret = max(ret,left + right);

//         return max(left,right);
//     }

// };

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int gap = 0;
//         ListNode* cur1 = l1;
//         ListNode* cur2 = l2;
//         ListNode* newhead = new ListNode;//哨兵节点，较少特殊判断的处理
//         ListNode* newtail = newhead;

//         while(cur1 || cur2 || gap){
//             int num = gap;

//             if(cur1){
//                 num += cur1->val;
//                 cur1 = cur1->next;
//             }

//             if(cur2){
//                 num += cur2->val;
//                 cur2 = cur2->next;
//             }

//             gap = num / 10;
//             num %= 10;

//             newtail->next = new ListNode(num);
//             newtail = newtail->next;
//         }

//         cur1 = newhead->next;

//         delete newhead;

//         return cur1;
//     }
// };
// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         int hp[256] = {0};
//         for(auto e : p) hp[e]++;

//         //count记录滑动窗口内有效的字符个数
//         int count = 0;
//         int hs[256] = {0};

//         vector<int> ret;
//         int n = s.size();
//         for(int left = 0,right = 0;right < n;right++){
//             ++hs[s[right]];

//             //<=说明刚刚加上的是有效字符
//             if(hs[s[right]] <= hp[s[right]]){
//                 count++;
//             }

//             if(right - left + 1 > p.size()){
//                 --hs[s[left]];

//                 //<说明刚刚删除的是有效字符
//                 if(hs[s[left]] < hp[s[left]]){
//                     count--;
//                 }
//                 left++;
//             }

//             //有效字符个数等于p,是字母异位词
//             if(count == p.size())
//             ret.push_back(left);
//         }

//         return ret;
//     }
// };


// class LRUCache {
// public:
//     LRUCache(int capacity) 
//         :_capacity(capacity)
//     {    
//     }
    
//     int get(int key) {
//         auto it = _hashMap.find(key);
//         if(it != _hashMap.end()){
//             _list.splice(_list.begin(),_list,it->second);
//             return it->second->second;
//         }
//         else{
//             return -1;
//         }
//     }
    
//     void put(int key, int value) {
//         auto it = _hashMap.find(key);
//         if(it != _hashMap.end()){
//             it->second->second = value;
//             _list.splice(_list.begin(),_list,it->second);
//         }
//         else{
//             _list.push_front(make_pair(key,value));
//             _hashMap[key] = _list.begin();
//         }
//         if(_capacity < _hashMap.size()){
//             auto it = _list.back();
//             _hashMap.erase(it.first);
//             _list.pop_back();
//         }
//     }

// private:
//     int _capacity;
//     typedef list<pair<int,int>>::iterator Iterator;
//     unordered_map<int,Iterator> _hashMap;
//     list<pair<int,int>> _list;
// };

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//int n = 0;
//int m = 0;
//typedef pair<int, int> PII;
//
//class Solution
//{
//public:
//    queue<PII> q;
//
//    int orangesRotting(vector<vector<int>>& grid)
//    {
//        n = grid.size(), m = grid[0].size();
//        int count = 0;
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (grid[i][j] == 2)
//                {
//                    q.emplace(i, j);
//                }
//                if (grid[i][j] == 1) count++;
//            }
//        }
//
//        if (!count) return 0;
//
//        int ret = 0;
//        int levelsize = q.size();
//
//        while (q.size())
//        {
//            if (!count) {
//                return ret;
//            }
//            while (levelsize--)
//            {
//                auto [a, b] = q.front();
//                q.pop();
//                for (int k = 0; k < 4; k++)
//                {
//                    int x = a + dx[k], y = b + dy[k];
//                    if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 1)
//                    {
//
//                        if (grid[x][y] == 1) {
//                            count--;
//                        }
//                        grid[x][y] = 2;
//                        q.emplace(x, y);
//                    }
//                }
//
//            }
//            ret++;
//            levelsize = q.size();
//        }
//
//        return count ? -1 : ret;
//    }
//};
//
//
//
//int main() {
//
//    vector<vector<int>> grid{{1,2}};
//    Solution().orangesRotting(grid);
//}



// class Solution {
// public:
//     vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int> hash1,hash2;
//         for(auto num : nums1) hash1.insert(num);//去除数组中的重复元素
//         for(auto num : nums2) hash2.insert(num);

//         vector<vector<int>> ret(2);

//     //在hash去重后的数据中找数
//         for(auto num : hash1){//比较找到num1中独有的数
//             if(!hash2.count(num)){
//                 ret[0].emplace_back(num);
//             }
//         }

//         for(auto num : hash2){//比较找到num2中独有的数
//             if(!hash1.count(num)){
//                 ret[1].emplace_back(num);
//             }
//         }

//         return ret;
//     }
// };
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int ret = 0;
//         int n = height.size();
//         for(int left = 0,right = n - 1;left < right;)
//         {
//             ret = max(ret,min(height[left] , height[right]) * (right - left));
//              if(height[left] < height[right]) left++;
//              else right--;
//         }
//         return ret;
//     }
// };

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         for(int dest = -1,cur = 0;cur < n;){
//             if(nums[cur]){
//                 swap(nums[dest + 1],nums[cur]);
//                 dest++;
//                 cur++;
//             }
//             else{
//                 cur++;
//             }
//         }
//     }
// };

// class Solution {
// public:
//     bool equationsPossible(vector<string>& equations) {
//         vector<int> set(26, -1);

//         // 寻找一个数据的根
//         auto FindRoot = [&set](int x)
//         {
//             while (set[x] >= 0)
//             {
//                 x = set[x];
//             }
//             return x;
//         };

//         for(auto& equation : equations){
//             if(equation[1] == '='){
//                 int root1 = FindRoot(equation[0] - 'a');
//                 int root2 = FindRoot(equation[3] - 'a');
//                 if(root1 != root2){
//                     set[root1] += set[root2];
//                     set[root2] = root1;
//                 }
//             }
//         }

//         for(auto& equation : equations){
//             if(equation[1] == '!'){
//                 int root1 = FindRoot(equation[0] - 'a');
//                 int root2 = FindRoot(equation[3] - 'a');
//                 if(root1 == root2){
//                     return false;
//                 }
//             }
//         }

//         return true;
//     }
// };
// class Solution
// {
// public:
//     int findCircleNum(vector<vector<int>> &isConnected)
//     {
//         vector<int> set(isConnected.size(), -1);

//         // 寻找一个数据的根
//         auto FindRoot = [&](int x) -> int
//         {
//             while (set[x] >= 0)
//             {
//                 x = set[x];
//             }
//             return x;
//         };

//         int n = isConnected.size();
//         int m = isConnected[0].size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (isConnected[i][j])
//                 {
//                     int root1 = FindRoot(i);
//                     int root2 = FindRoot(j);
//                     if (root1 != root2)
//                     {
//                         set[root1] += set[root2];
//                         set[root2] = root1;
//                     }
//                 }
//             }
//         }

//         int sum = 0;
//         for (auto num : set)
//         {
//             if (num < 0)
//                 sum++;
//         }
//         return sum;
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

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head->next == nullptr) {
//             delete head;
//             return nullptr;
//         }

//         ListNode* prev = nullptr,* slow = head,* fast = head;

//         int num = n;
//         while(num--){
//             fast = fast->next;
//         }

//         while(fast){
//             fast = fast->next;
//             prev = slow;
//             slow = slow->next;
//         }

//         if(prev == nullptr){
//             prev = slow;
//             slow = slow->next;
//             delete prev;
//             return slow;
//         }

//         prev->next = slow->next;

//         delete slow;
//         return head;
//     }
// };

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         if(head == nullptr || head->next == nullptr) return head;
//         ListNode* tmp = swapPairs(head->next->next);
//         ListNode* prev = head,*cur = head->next;

//         cur->next = prev;
//         prev->next = tmp;

//         head = cur;

//         return head;
//     }
// };

// class Solution {

// int dx[4] = {0,0,1,-1};
// int dy[4] = {-1,1,0,0};
// int n,m;
// typedef pair<int,int> PII;

// public:
//     void bfs(queue<PII>& q , vector<vector<char>>& grid){
//         while(q.size()){
//             auto[a,b] = q.front();
//             q.pop();
//             for(int k = 0;k < 4;k++){
//                 int x = a + dx[k],y = b + dy[k];
//                 if((x >= 0 && x < n && y >= 0 && y < m )&& grid[x][y] == '1'){
//                     q.emplace(x,y);
//                     grid[x][y] = '0';
//                 }
//             }
//         }
//     }

//     int numIslands(vector<vector<char>>& grid) {
//         int ret = 0;
//         queue<PII> q;
//         n = grid.size(),m = grid[0].size();

//         for(int i = 0;i < n;i++){
//             for(int j = 0;j < m;j++){
//                 if(grid[i][j] == '1'){
//                     ret++;
//                     grid[i][j] = '0';
//                     q.emplace(i,j);
//                     bfs(q , grid);
//                 }
//             }
//         }

//         return ret;
//     }
// };

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(list1 == nullptr) return list2;
//         if(list2 == nullptr) return list1;

//         ListNode* newhead = new ListNode;
//         ListNode* newtail = newhead;

//         ListNode* cur1 = list1,*cur2 = list2;

//         while(cur1 && cur2){
//             if(cur1->val > cur2->val){
//                 newtail->next = cur2;
//                 cur2 = cur2->next;
//             }
//             else{
//                 newtail->next = cur1;
//                 cur1 = cur1->next;
//             }
//             newtail = newtail->next;
//         }
//         if(cur1) newtail->next = cur1;
//         if(cur2) newtail->next = cur2;

//         cur1 = newhead->next;
//         delete newhead;

//         return cur1;
//     }
// };

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int,vector<int>,less<int>> st(nums.begin(),nums.end());

//         int ret = 0;
//         while(k--){
//             ret = st.top();
//             st.pop();
//         }
//         return ret;
//     }
// };

// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         int l1 = 0,l2 = 0;
//         string ret;
//         while(l1 < word1.size() && l2 < word2.size()){
//             ret += word1[l1++];
//             ret += word2[l2++];
//         }

//         while(l1 < word1.size()){
//             ret += word1[l1++];
//         }

//         while(l2 < word2.size()){
//             ret += word2[l2++];
//         }
//         return ret;
//     }
// };

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {

//         ListNode* prev = nullptr,*slow = head,*fast = head;
//         while(fast&&fast->next){
//             prev = slow;
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         if(prev){
//             prev->next = slow->next;
//             delete slow;
//             return head;
//         }

//         return nullptr;
//     }
// };

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* newhead = new ListNode;
//         ListNode* cur = head;
//         while(cur){
//             ListNode* tmp = cur;
//             cur = cur->next;
//             tmp->next = newhead->next;
//             newhead->next = tmp;
//         }
//         return newhead->next;
//     }
// };

// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();
//         if(n <= 1) return 0;
//         vector<int> dp(n + 1 , 1000);
//         dp[0] = dp[1] = 0;
//         for(int i = 2;i <= n;i++){
//             dp[i] = min(dp[i - 1] + cost[i - 1],dp[i - 2] + cost[i - 2]);
//         }
//         return dp[n];
//     }
// };

// class Solution {
// public:
//     int tribonacci(int n) {
//         int a = 0 , b = 1 , c = 1 , d = 0;
//         if(n == 0) return a;
//         else if(n == 1) return b;
//         else if(n == 2) return c;

//         for(int i = 3;i <= n;i++){
//             d = a + b + c;
//             a = b;
//             b = c;
//             c = d;
//         }
//         return c;
//     }
// };

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ret = 0;
//         for(auto& num : nums) ret ^= num;
//         return ret;
//     }
// };
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if(root == nullptr) return 0;
//         int leftheight = maxDepth(root->left);
//         int rightheight = maxDepth(root->right);
//         return leftheight > rightheight ? leftheight + 1: rightheight + 1;
//     }
// };

// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         int s1 = 0,t1 = 0;
//         while(s1 < s.size() && t1 < t.size()){
//             if(s[s1] == t[t1]){
//                 s1++;
//                 t1++;
//             }
//             else{
//                 t1++;
//             }
//         }
//         if(s1 < s.size()) return false;
//         return true;
//     }
// };

// class Solution {
// public:
//     string removeStars(string s) {
//         string ret;
//         for (auto& ch : s) {
//             if (ch != '*' || ret.empty()) ret.push_back(ch);
//             else ret.pop_back();
//         }
//
//         return ret;
//     }
// };

// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int, int> hash, ret;
//
//         for (auto& num : arr) hash[num]++;
//
//         for (auto& num : hash) {
//             ret[num.second]++;
//         }
//
//         for (auto& val : ret) {
//             if (val.second > 1) return false;
//
//         }
//
//         return true;
//     }
// };

////class Solution {
////public:
////    bool uniqueOccurrences(vector<int>& arr) {
////        unordered_map<int, int> hash, ret;
////
////        for (auto& num : arr) hash[num]++;
////
////        for (auto& num : arr) {
////            ret[hash[num]]++;
////        }
////
////        for (auto& val : hash) {
////            if (val.second > 1) return false;
////
////        }
////
////        return true;
////    }
////};
////
////int main() {
////
////    vector<int> arr{ 1,2,2,1,1,3 };
////
////    Solution().uniqueOccurrences(arr);
////
////    return 0;
////}

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

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         for (int dest = -1, cur = 0; cur < n;) {
//             if (nums[cur]) {
//                 swap(nums[dest + 1], nums[cur]);
//                 dest++;
//                 cur++;
//             }
//             else {
//                 cur++;
//             }
//         }
//     }
// };

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
////    */
//};

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

// class Solution {
//     bool view[7] = { false };
//     vector<vector<int>> ret;
//     void _permute(vector<int>& nums, vector<int>& num) {
//
//         if (num.size() == nums.size()) {
//             ret.push_back(num);
//             return;
//         }
//
//         for (int i = 0; i < nums.size(); i++) {
//             if (!view[i]) {
//                 view[i] = true;
//                 num.push_back(nums[i]);
//                 _permute(nums, num);
//                 num.pop_back();
//                 view[i] = false;
//             }
//         }
//     }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<int> num;
//         for (int i = 0; i < nums.size(); i++) {
//             view[i] = true;
//             num.push_back(nums[i]);
//             _permute(nums, num);
//             num.pop_back();
//             view[i] = false;
//         }
//         return ret;
//     }
// };

// #include "widget.h"
// #include "ui_widget.h"
//
// Widget::Widget(QWidget* parent)
//     : QWidget(parent)
//     , ui(new Ui::Widget)
//{
//     ui->setupUi(this);
// }
//
// Widget::~Widget()
//{
//     delete ui;
// }

///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
// class Solution {
// public:
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
// class Solution {
// public:
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
// class Solution {
// public:
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
// class Solution {
// public:
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
// class Solution {
// public:
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
// class Solution {
// public:
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
// class Solution {
// public:
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
// class Solution {
// public:
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
// class Solution {
// public:
//    int singleNumber(vector<int>& nums) {
//        int ret = 0;
//        for (auto& num : nums) ret ^= num;
//        return ret;
//    }
//};

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int hash[128] = { 0 };
//         int ret = 0;
//         for (int left = 0, right = 0; right < s.size(); right++)
//         {
//             hash[s[right]]++;
//             while (hash[s[right]] > 1)
//             {
//                 hash[s[left]]--;
//                 left++;
//             }
//             ret = max(right - left + 1, ret);
//         }
//         return ret;
//     }
// };
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
// class Solution {
// public:
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
// class Solution {
// public:
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
// class Solution {
// public:
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
// class Solution {
// public:
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

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int ret = 0;
//         int n = height.size();
//         for (int left = 0, right = n - 1; left < right;)
//         {
//             ret = max(ret, min(height[left], height[right]) * (right - left));
//             if (height[left] < height[right]) left++;
//             else right--;
//         }
//         return ret;
//     }
// };
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         for (int cur = 0, dest = -1; cur < n; cur++)
//         {
//             if (nums[cur] != 0)
//             {
//                 swap(nums[++dest], nums[cur]);
//             }
//         }
//     }
// };

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.size() == 0) return 0;
//         if (nums.size() == 1) return 1;
//         set<int> st;
//         for (auto i : nums) st.insert(i);
//         vector<int> arr;
//         for (auto i : st) arr.push_back(i);
//         int n = arr.size();
//         int ret = 1;
//         int sum = 1;
//         for (int i = 0; i + 1 < n; i++)
//         {
//             if (arr[i] + 1 == arr[i + 1]) sum++;
//             else sum = 1;
//             ret = max(sum, ret);
//         }
//
//         return ret;
//     }
// };

// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string, vector<string>> hash;
//         for (auto s : strs)
//         {
//             string tmp = s;
//             sort(tmp.begin(), tmp.end());
//             hash[tmp].push_back(s);
//         }
//         vector<vector<string>> ret;
//         for (auto i : hash)
//         {
//             ret.push_back(i.second);
//         }
//
//         return ret;
//     }
// };
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> hash;
//         int n = nums.size();
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (hash.count(target - nums[i]))
//                 return { hash[target - nums[i]],i };
//             else hash[nums[i]] = i;
//         }
//         return { -1,-1 };
//     }
// };

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

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int sum = 0;
//         for(auto num:nums) sum += num;
//         vector<int> arr(nums.size());
//         for(int i = 1;i < nums.size();i++){
//             arr[i] = nums[i - 1] + arr[i - 1];
//         }
//         for(int i = 0;i < nums.size();i++){
//             if(arr[i] == sum - arr[i] - nums[i]) return i;
//         }
//         return -1;
//     }
// };

// class Solution {
// public:
//     vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int> hash1,hash2;
//         for(auto num : nums1) hash1.insert(num);//去除数组中的重复元素
//         for(auto num : nums2) hash2.insert(num);

//         vector<vector<int>> ret(2);

//     //在hash去重后的数据中找数
//         for(auto num : hash1){//比较找到num1中独有的数
//             if(!hash2.count(num)){
//                 ret[0].emplace_back(num);
//             }
//         }

//         for(auto num : hash2){//比较找到num2中独有的数
//             if(!hash1.count(num)){
//                 ret[1].emplace_back(num);
//             }
//         }

//         return ret;
//     }
// };