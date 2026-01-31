#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>

using namespace std;

// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//         unordered_map<char,int> hash;
//         for(auto& ch : jewels){
//             hash[ch]++;
//         }
//         int ret = 0;
//         for(auto& ch : stones){
//             if(hash.count(ch)) ret++;
//         }
//         return ret;
//     }
// };

// class Solution {
// public:
//     int mySqrt(int x) {
//         int left = 0,right = x;
//         while(left < right){
//             int mid = left + (right - left) / 2 + 1;
//             if(x / mid >= mid){
//                 left = mid;
//             }
//             else{
//                 right = mid - 1;
//             }
//         }
//         return left;
//     }
// };

// class Solution {
// public:
//     bool judge(string& s,int left,int right){
//         while(left < right){
//             if(s[left] != s[right]){
//                 return false;
//             }
//             ++left;
//             --right;
//         }
//         return true;
//     }

//     bool validPalindrome(string s) {
//         int n = s.size();
//         if(n <= 1) return true;
//         int left = 0,right = n - 1;
//         while(left < right){
//             if(s[left] != s[right]){
//                 return judge(s,left + 1,right) || judge(s,left,right - 1);
//             }else{
//                 ++left;
//                 --right;
//             }
//         }
//         return true;
//     }
// };

// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         s = " " + s;
//         s = s.substr(0,s.find_last_not_of(' '));
//         string ret  = s.substr(s.find_last_of(' '));
//         return ret.size();
//     }
// };

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         for(int left = 0,right = n - 1;left <= right;){
//             int mid = left + (right - left) / 2;
//             if(nums[mid] > target){
//                 right = mid - 1;
//             }
//             else if(nums[mid] < target){
//                 left = mid + 1;
//             }
//             else{
//                 return mid;
//             }
//         }
//         return -1;
//     }
// };

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         for(int left = 0,right = n - 1;left <= right;){
//             int mid = left + (right - left) / 2;
//             if(nums[mid] > target){
//                 right = mid - 1;
//             }
//             else if(nums[mid] < target){
//                 left = mid + 1;
//             }
//             else{
//                 return mid;
//             }
//         }
//         return -1;
//     }
// };

// class Solution {
// public:
//     string minWindow(string s, string t) {
//         unordered_map<char,int> hs,ht;
//         string ret;
//         for(auto& ch : t) ht[ch]++;
//         int left = 0,right = 0, count = 0;
//         for(;right < s.size();right++){
//             hs[s[right]]++;

//             if(hs[s[right]] <= ht[s[right]]) count++;

//             while(hs[s[left]] > ht[s[left]]){
//                 hs[s[left]]--;
//                 left++;
//             }
//             if(count == t.size()){
//                 if(ret.empty() || right - left + 1 < ret.size()){
//                     ret = s.substr(left,right - left + 1);
//                 }
//             }
//         }
//         return ret;
//     }
// };

// class Solution {
// public:
//     string reverseOnlyLetters(string s) {
//         int left = 0,right = s.size() - 1;
//         while(left < right){
//             while(left < right && !isalpha(s[left]) ){
//                 left++;
//             }
//             while(left < right && !isalpha(s[right])){
//                 right--;
//             }
//             swap(s[left++],s[right--]);
//         }
//         return s;
//     }
// };

// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int left = 0,right = 0;
//         int n = s.size();
//         int arr[26] = {0};
//         int maxlen = 0;
//         while(right < n){
//             arr[s[right] - 'A']++;
//             maxlen = max(maxlen,arr[s[right] - 'A']);
//             if(right - left + 1 - maxlen > k){
//                 arr[s[left] - 'A']--;
//                 left++;
//             }
//             right++;
//         }
//         return right - left;
//     }
// };

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int a = -0x3f3f3f3f,b = -0x3f3f3f3f;
//         for(auto& num : nums){
//             if(num > a){
//                 b = a;
//                 a = num;
//             }else if(num > b){
//                 b = num;
//             }
//         }
//         return (a - 1)*(b - 1);
//     }
// };

// /**
//  * struct TreeNode {
//  *	int val;
//  *	struct TreeNode *left;
//  *	struct TreeNode *right;
//  *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      * 
//      * @param root TreeNode类 
//      * @return bool布尔型
//      */
//     void dfs(TreeNode* root,int index,int& count,int& maxindex){
//         if(!root) return ;

//         dfs(root->left,2*index,count,maxindex);
//         dfs(root->right,2*index + 1,count,maxindex);
//         count++;
//         maxindex = max(index,maxindex);
//     }
//     bool isCompleteTree(TreeNode* root) {
//         // write code here
//         int maxindex = -0x3f,count = 0;
//         if(!root) return true;

//         dfs(root,1,count,maxindex);
//         return count == maxindex;
//     }
// };

// /**
//  * struct TreeNode {
//  *	int val;
//  *	struct TreeNode *left;
//  *	struct TreeNode *right;
//  *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      * 
//      * @param root TreeNode类 
//      * @param o1 int整型 
//      * @param o2 int整型 
//      * @return int整型
//      */
//     int lowestCommonAncestor(TreeNode* root, int o1, int o2) {
//         // write code here
//         return dfs(root,o1,o2)->val;
//     }

//     TreeNode* dfs(TreeNode* root, int o1, int o2){
//         if(root == nullptr || root->val == o1 || root->val == o2) return root;

//         TreeNode* left = dfs(root->left,o1,o2);
//         TreeNode* right = dfs(root->right,o1,o2);

//         if(left != nullptr && right != nullptr) return root;

//         return left != nullptr ? left:right;
//     }
// };

// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      * 
//      * @param num int整型vector 
//      * @return int整型vector<vector<>>
//      */
//      int n = 0;
//      vector<vector<int>> ret;
//      bool vec[7] = {false};
//     vector<vector<int> > permute(vector<int>& num) {
//         // write code here
//         n = num.size();
//         for(int i = 0;i < n;i++){
//             vec[i] = true;
//             dfs(num,{num[i]});
//             vec[i] = false;
//         }
//         return ret;
//     }

//     void dfs(vector<int>& num,vector<int> tmp){
//         if(tmp.size() == n){
//             ret.push_back(tmp);
//             return ;
//         }
//         for(int i = 0;i < n;i++){
//             if(!vec[i]){
//                 tmp.push_back(num[i]);
//                 vec[i] = true;
//                 dfs(num,tmp);
//                 vec[i] = false;
//                 tmp.pop_back();
//             }
//         }
//     }
// };

// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      * 
//      * @param numbers int整型vector 
//      * @param target int整型 
//      * @return int整型vector
//      */
    
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         // write code here
//         unordered_map<int,int> hash;
//         for(int i = 0;i < numbers.size();i++){
//             hash[numbers[i]] = i + 1;
//         }

//         set<int> st;

//         for(int i = 0;i < numbers.size();i++){
//             int a = numbers[i];
//             int b = target - a;
//             auto it = hash.find(b);
//             if(it != hash.end()){
//                 int index1 = i + 1;
//                 int index2 = it->second;
//                 if(index1 < index2){
//                     st.insert(index1);
//                     st.insert(index2);
//                 }
//                 else if(index1 > index2){
//                     st.insert(index2);
//                     st.insert(index1);
//                 }
//                 else{
//                     continue;
//                 }
//             }
//         }
//         return {st.begin(),st.end()};
//     }
// };

// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      * 判断岛屿数量
//      * @param grid char字符型vector<vector<>> 
//      * @return int整型
//      */
//     int dx[4] = {0,0,1,-1};
//     int dy[4] = {1,-1,0,0};
//     int ret = 0;
//     int n = 0;
//     int m = 0;
//     int solve(vector<vector<char> >& grid) {
//         // write code here
//         n = grid.size();
//         m = grid[0].size();
//         for(int i = 0;i < n;i++){
//             for(int j = 0;j < m;j++){
//                 if(grid[i][j] == '1'){
//                     ret++;
//                     grid[i][j] = '0';
//                     bfs(grid,i,j);
//                 }
//             }
//         }
//         return ret;
//     }
//     void bfs(vector<vector<char> >& grid,int x,int y){
//         for(int k = 0;k < 4;k++){
//             int a = x + dx[k],b = y + dy[k];
//             if(a >= 0 && a < n && b >= 0 && b < m && grid[a][b] == '1'){
//                 grid[a][b] = '0';
//                 bfs(grid,a,b);
//             }
//         }
//     }
// };

// /**
//  * struct Interval {
//  *	int start;
//  *	int end;
//  *	Interval(int s, int e) : start(start), end(e) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      * 
//      * @param intervals Interval类vector 
//      * @return Interval类vector
//      */
//     static bool cmp(Interval&a,Interval&b){
//         return a.start < b.start;
//     }

//     vector<Interval> merge(vector<Interval>& intervals) {
//         // write code here
//         vector<Interval> res;
//         if(intervals.size() == 0){
//             return res;
//         }
//         sort(intervals.begin(),intervals.end(),cmp);
//         res.push_back(intervals[0]);
//         for(int i = 1;i < intervals.size();i++){
//             if(intervals[i].start <= res.back().end){
//                 res.back().end = max(res.back().end,intervals[i].end);
//             }
//             else{
//                 res.push_back(intervals[i]);
//             }
//         }
//         return res;
//     }
// };

// class Solution
// {
// public:
//     void push(int node) {
//         stack1.push(node);
//     }

//     int pop() {
//         if(stack2.empty()){
//             while(!stack1.empty()){
//                 int tmp = stack1.top();
//                 stack1.pop();
//                 stack2.push(tmp);
//             }
//         }
//         int tmp = stack2.top();
//         stack2.pop();
//         return tmp;
//     }

// private:
//     stack<int> stack1;
//     stack<int> stack2;
// };


// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      * 反转字符串
//      * @param str string字符串 
//      * @return string字符串
//      */
//     string solve(string str) {
//         // write code here
//         return string(str.rbegin(),str.rend());
//     }
// };

// class Solution {
//   public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param m int整型
//      * @param n int整型
//      * @return int整型
//      */
//     int uniquePaths(int m, int n) {
//         // write code here
//         vector<vector<int>> dp(m,vector<int>(n,1));

//         for (int i = 1; i < m; i++) {
//             for (int j = 1; j < n; j++) {
//                 dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//             }
//         }
//         return dp[m - 1][n - 1];
//     }
// };

// class Solution {
//   public:
//     void merge(int A[], int m, int B[], int n) {
//         int cur1 = 0, cur2 = 0;
//         vector<int> dp(m + n, 0);
//         int i = 0;
//         while (cur1 < m && cur2 < n) {
//             if (A[cur1] <= B[cur2]) {
//                 dp[i++] = A[cur1++];
//             } else {
//                 dp[i++] = B[cur2++];
//             }
//         }
//         while (cur1 < m) {
//             dp[i++] = A[cur1++];
//         }

//         while (cur2 < n) {
//             dp[i++] = B[cur2++];
//         }

//         for (int j = 0; j < m + n; ++j) {
//             A[j] = dp[j];
//         }
//     }
// };

// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param str string字符串 待判断的字符串
//      * @return bool布尔型
//      */
//     bool judge(string str) {
//         // write code here
//         int left = 0,right = str.size() - 1;
//         while(left < right){
//             if(str[left] != str[right]){
//                 return false;
//             }
//             ++left;
//             --right;
//         }
//         return true;
//     }
// };

// #include <algorithm>
// class Solution {
//   public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      * longest common subsequence
//      * @param s1 string字符串 the string
//      * @param s2 string字符串 the string
//      * @return string字符串
//      */
//     string LCS(string s1, string s2) {
//         // write code here
//         int n = s1.size();
//         int m = s2.size();
//         vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= m; j++) {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                 if (s1[i - 1] == s2[j - 1]) {
//                     dp[i][j] = dp[i - 1][j - 1] + 1;
//                 }
//             }
//         }

//         string ans;
//         int i = n, j = m;
//         while (dp[i][j]) {
//             if (dp[i][j] == dp[i - 1][j]) {
//                 i--;
//             } else if (dp[i][j] == dp[i][j - 1]) {
//                 j--;
//             } else if (dp[i][j] == dp[i - 1][j - 1] + 1) {
//                 ans += s1[i - 1];
//                 i--;
//                 j--;
//             }
//         }
//         if (ans.size() == 0) return "-1";
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };

// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param n int整型
//      * @return int整型
//      */
//     int Fibonacci(int n) {
//         // write code here
//         if(n <= 2) return 1;
//         int a = 1,b = 1,c = 0;
//         for(int i = 3;i <= n;i++){
//             c = a + b;
//             a = b;
//             b = c;
//         }
//         return c;
//     }
// };

// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param number int整型
//      * @return int整型
//      */
//     int jumpFloor(int number) {
//         // write code here
//         if(number == 1) return 1;
//         if(number == 2) return 2;
//         int a = 1,b = 2;
//         int c = 0;
//         for(int i = 3;i <= number;i++){
//             c = a + b;
//             a = b;
//             b = c;
//         }
//         return c;
//     }
// };

// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param nums int整型vector
//      * @return int整型
//      */
//     int minNumberDisappeared(vector<int>& nums) {
//         // write code here
//         int n = nums.size();
//         vector<int> ret(n,0);
//         for(int i = 0;i < n;i++){
//             if(n >= nums[i] && nums[i] > 0) ret[nums[i] - 1] = 1;
//         }
//         for(int i = 0;i < n;i++){
//             if(ret[i] < 1) return i + 1;
//         }
//         return n + 1;
//     }
// };

// /**
//  * struct TreeNode {
//  *	int val;
//  *	struct TreeNode *left;
//  *	struct TreeNode *right;
//  *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  * };
//  */
// class Solution {
//     long prev = INT_MIN;
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param root TreeNode类
//      * @return bool布尔型
//      */
//     bool isValidBST(TreeNode* root) {
//         // write code here
//         if(root==nullptr) return true;
//         if(!isValidBST(root->left)) return false;
//         if(prev >= root->val) return false;
//         prev = root->val;
//         return isValidBST(root->right);
//     }
// };

// /**
//  * struct TreeNode {
//  *	int val;
//  *	struct TreeNode *left;
//  *	struct TreeNode *right;
//  *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param pRoot TreeNode类
//      * @return TreeNode类
//      */
//     TreeNode* Mirror(TreeNode* pRoot) {
//         // write code here
//         if(pRoot == nullptr) return nullptr;

//         TreeNode* pleft = pRoot->left;
//         TreeNode* pright = pRoot->right;

//         pRoot->right = Mirror(pleft);
//         pRoot->left = Mirror(pright);

//         return pRoot;
//     }
}
;

// /**
//  * struct TreeNode {
//  *	int val;
//  *	struct TreeNode *left;
//  *	struct TreeNode *right;
//  * };
//  */
// /**
//  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//  *
//  *
//  * @param pRoot TreeNode类
//  * @return bool布尔型
//  */

// bool recursion(struct TreeNode* pRoot1,struct TreeNode* pRoot2){
//     if(pRoot1 == NULL && pRoot2 == NULL) return true;

//     if(pRoot1 == NULL || pRoot2 == NULL || pRoot1->val != pRoot2->val) return false;

//     return recursion(pRoot1->left,pRoot2->right) && recursion(pRoot1->right,pRoot2->left);
// }

// bool isSymmetrical(struct TreeNode* pRoot ) {
//     // write code here
//     return recursion(pRoot,pRoot);
// }

// /**
//  * struct TreeNode {
//  *  int val;
//  *  struct TreeNode *left;
//  *  struct TreeNode *right;
//  *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  * };
//  */
// class Solution {
//     int sum_;
//   public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param root TreeNode类
//      * @param sum int整型
//      * @return bool布尔型
//      */
//     bool hasPathSum(TreeNode* root, int sum) {
//         // write code here
//         sum_ = sum;
//         if (root == nullptr) return false;
//         if(!root->left&&!root->right&&root->val == sum) return true;
//         bool blleft = false, blright = false;
//         if (root->left) {
//             blleft = hasPath(root->left, root->val);
//         }
//         if (root->right) {
//             blright = hasPath(root->right, root->val);
//         }
//         return blleft || blright;
//     }

//     bool hasPath(TreeNode* root, int path) {
//         path += root->val;
//         if (path == sum_) return true;
//         bool blleft = false, blright = false;
//         if (root->left) {
//             blleft = hasPath(root->left, path);
//         }
//         if (root->right) {
//             blright = hasPath(root->right, path);
//         }
//         return blleft || blright;
//     }
// };

// /**
//  * struct TreeNode {
//  *	int val;
//  *	struct TreeNode *left;
//  *	struct TreeNode *right;
//  *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param root TreeNode类
//      * @return int整型
//      */
//     int maxDepth(TreeNode* root) {
//         // write code here
//         if(root == nullptr) return 0;

//         int left = maxDepth(root->left);
//         int right = maxDepth(root->right);

//         return left > right ? left + 1 : right + 1;
//     }
// };

// /**
//  * struct TreeNode {
//  *	int val;
//  *	struct TreeNode *left;
//  *	struct TreeNode *right;
//  *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  * };
//  */
// #include <algorithm>
// class Solution {
//     vector<vector<int>> ret;
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param pRoot TreeNode类
//      * @return int整型vector<vector<>>
//      */
//     vector<vector<int> > Print(TreeNode* pRoot) {
//         // write code here
//         if(pRoot == nullptr) return ret;
//         queue<TreeNode*> q;
//         q.push(pRoot);

//         int levelsize = 1;
//         while(q.size()){
//             vector<int> tmp;
//             while(levelsize){
//                 TreeNode* node = q.front();
//                 q.pop();
//                 if(node->left){
//                     q.push(node->left);
//                 }
//                 if(node->right){
//                     q.push(node->right);
//                 }
//                 tmp.push_back(node->val);
//                 levelsize--;
//             }
//             levelsize = q.size();
//             ret.push_back(tmp);
//         }

//         for(int i = 0;i < ret.size();i++){
//             if(i % 2){
//                 reverse(ret[i].begin(),ret[i].end());
//             }
//         }

//         return ret;
//     }
// };

// /**
//  * struct TreeNode {
//  *	int val;
//  *	struct TreeNode *left;
//  *	struct TreeNode *right;
//  *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  * };
//  */
// class Solution {
//     vector<vector<int>> ret;
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param root TreeNode类
//      * @return int整型vector<vector<>>
//      */
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         // write code here
//         if(root == nullptr) return ret;
//         queue<TreeNode*> q;
//         q.push(root);

//         int levelsize = 1;
//         while(q.size()){
//             vector<int> tmp;
//             while(levelsize){
//                 TreeNode* node = q.front();
//                 q.pop();
//                 if(node->left){
//                     q.push(node->left);
//                 }
//                 if(node->right){
//                     q.push(node->right);
//                 }
//                 tmp.push_back(node->val);
//                 levelsize--;
//             }
//             levelsize = q.size();
//             ret.push_back(tmp);
//         }
//         return ret;
//     }
// };

// /**
//  * struct TreeNode {
//  *	int val;
//  *	struct TreeNode *left;
//  *	struct TreeNode *right;
//  *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  * };
//  */
// class Solution {
//     vector<int> ret;
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param root TreeNode类
//      * @return int整型vector
//      */
//     vector<int> inorderTraversal(TreeNode* root) {
//         // write code here
//         inorder(root);
//         return ret;
//     }
//     void inorder(TreeNode* root){
//         if(root == nullptr) return ;
//         inorder(root->left);
//         ret.push_back(root->val);
//         inorder(root->right);
//     }
// };

// /**
//  * struct TreeNode {
//  *	int val;
//  *	struct TreeNode *left;
//  *	struct TreeNode *right;
//  *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  * };
//  */
// class Solution {
//     vector<int> ret;
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param root TreeNode类
//      * @return int整型vector
//      */
//     vector<int> postorderTraversal(TreeNode* root) {
//         // write code here
//         postorder(root);
//         return ret;
//     }
//     void postorder(TreeNode* root){
//         if(root == nullptr) return ;
//         postorder(root->left);
//         postorder(root->right);

//         ret.push_back(root->val);
//     }
// };

// /**
//  * struct TreeNode {
//  *	int val;
//  *	struct TreeNode *left;
//  *	struct TreeNode *right;
//  *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  * };
//  */
// class Solution {
//     vector<int> ret;
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param root TreeNode类
//      * @return int整型vector
//      */
//     vector<int> preorderTraversal(TreeNode* root) {
//         // write code here
//         preorder(root);
//         return ret;
//     }
//     void preorder(TreeNode*root){
//         if(root == nullptr) return;
//         ret.push_back(root->val);
//         preorder(root->left);
//         preorder(root->right);
//     }
// };
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param target int整型
//      * @param array int整型vector<vector<>>
//      * @return bool布尔型
//      */
//     bool Find(int target, vector<vector<int> >& array) {
//         // write code here
//         bool ret = false;
//         for(auto& arr : array){
//             ret = Search(arr,target);
//             if(ret) return true;
//         }
//         return false;
//     }

//     bool Search(vector<int> &arr,int target){
//         int left = 0,right = arr.size() - 1;
//         while(left <= right){
//             int mid = left + (right - left) / 2;
//             if(arr[mid] < target){
//                 left = mid + 1;
//             }
//             else if(arr[mid] > target){
//                 right = mid - 1;
//             }
//             else return true;
//         }
//         return false;
//     }

// };

// /**
//  * struct ListNode {
//  *	int val;
//  *	struct ListNode *next;
//  *	ListNode(int x) : val(x), next(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param head ListNode类
//      * @return ListNode类
//      */
//     ListNode* deleteDuplicates(ListNode* head) {
//         // write code here
//         if(head == nullptr || head->next == nullptr) return head;

//         ListNode* newhead = new ListNode(-1);
//         newhead->next = head;
//         ListNode* pnode = newhead;
//         while(pnode->next){
//             ListNode* ptmp = pnode->next;
//             bool flag = false;
//             while(ptmp&&ptmp->next&&ptmp->val == ptmp->next->val){
//                 ptmp = ptmp->next;
//                 flag = true;
//             }
//             if(flag){
//                 pnode->next = ptmp->next;
//             }
//             else{
//                 pnode = pnode->next;
//             }
//         }
//         return newhead->next;
//     }
// };

// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param nums int整型vector
//      * @param target int整型
//      * @return int整型
//      */
//     int search(vector<int>& nums, int target) {
//         // write code here
//         int left = 0,right = nums.size() - 1;
//         while(left <= right){
//             int mid = left + (right - left) / 2;
//             if(nums[mid] == target) return mid;
//             else if(nums[mid] > target) right = mid - 1;
//             else left = mid + 1;
//         }
//         return -1;
//     }
// };

// /**
//  * struct ListNode {
//  *	int val;
//  *	struct ListNode *next;
//  *	ListNode(int x) : val(x), next(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param head ListNode类
//      * @return ListNode类
//      */
//     ListNode* oddEvenList(ListNode* head) {
//         // write code here
//         if(head == nullptr){
//             return head;
//         }

//         ListNode* even = head->next;
//         ListNode* odd = head;
//         ListNode* evenhead = even;

//         while(even&&even->next){
//             odd->next = even->next;
//             odd = odd->next;
//             even->next = odd->next;
//             even = even->next;
//         }
//         odd->next = evenhead;
//         return head;
//     }
// };

// /**
//  * struct ListNode {
//  *	int val;
//  *	struct ListNode *next;
//  *	ListNode(int x) : val(x), next(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param head ListNode类
//      * @return ListNode类
//      */
//     ListNode* deleteDuplicates(ListNode* head) {
//         // write code here
//         ListNode* p = head;
//         while(p&&p->next){
//             if(p->val == p->next->val){
//                 ListNode* tmp = p->next;
//                 p->next = p->next->next;
//                 delete tmp;
//             }
//             else{
//                 p = p->next;
//             }
//         }
//         return head;
//     }
// };

// /**
//  * struct ListNode {
//  *  int val;
//  *  struct ListNode *next;
//  *  ListNode(int x) : val(x), next(nullptr) {}
//  * };
//  */
// class Solution {
//   public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param head ListNode类 the head node
//      * @return ListNode类
//      */
//     ListNode* sortInList(ListNode* head) {
//         // write code here
//         if (head == nullptr) return nullptr;
//         vector<int> arr;
//         ListNode* cur = head;
//         while (cur) {
//             arr.push_back(cur->val);
//             cur = cur->next;
//         }
//         sort(arr.begin(),arr.end());

//         ListNode* newhead = new ListNode(-1);
//         ListNode* newtail = newhead;
//         for(auto& num : arr){
//             newtail->next = new ListNode(num);
//             newtail = newtail->next;
//         }

//         return newhead->next;
//     }
// };

// /**
//  * struct ListNode {
//  *	int val;
//  *	struct ListNode *next;
//  *	ListNode(int x) : val(x), next(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param head ListNode类 the head
//      * @return bool布尔型
//      */
//     bool isPail(ListNode* head) {
//         // write code here
//         if(head == nullptr) return true;
//         vector<int> arr;
//         ListNode* cur = head;
//         while(cur){
//             arr.push_back(cur->val);
//             cur = cur->next;
//         }

//         for(int left = 0,right = arr.size() - 1;left < right;left++,right--){
//             if(arr[left] != arr[right]) return false;
//         }

//         return true;
//     }
// };

// /**
//  * struct ListNode {
//  *	int val;
//  *	struct ListNode *next;
//  *	ListNode(int x) : val(x), next(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param head ListNode类
//      * @param n int整型
//      * @return ListNode类
//      */
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         // write code
//         ListNode* newhead = new ListNode(-1);
//         newhead->next = head;
//         ListNode* fast = head;
//         ListNode* slow = head;
//         int count = n;
//         while(fast&&count--){
//             fast = fast->next;
//         }

//         ListNode* pre = newhead;
//         while(fast){
//             pre = slow;
//             slow = slow->next;
//             fast = fast->next;
//         }
//         pre->next = slow->next;
//         delete slow;
//         fast = newhead->next;
//         delete newhead;
//         return fast;
//     }
// };

// /**
//  * struct ListNode {
//  *	int val;
//  *	struct ListNode *next;
//  *	ListNode(int x) : val(x), next(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param pHead ListNode类
//      * @param k int整型
//      * @return ListNode类
//      */
//     ListNode* FindKthToTail(ListNode* pHead, int k) {
//         // write code here
//         if(pHead == nullptr) return nullptr;
//         int count = 0;
//         ListNode* cur = pHead;
//         while(cur){
//             cur = cur->next;
//             count++;
//         }

//         if(count < k){
//             return nullptr;
//         }
//         if(count == k){
//             return pHead;
//         }

//         count = k;
//         ListNode* fast = pHead;
//         ListNode* slow = pHead;

//         while(fast && count--){
//             fast = fast->next;
//         }

//         while(fast){
//             fast = fast->next;
//             slow = slow->next;
//         }
//         return slow;
//     }
// };

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         //双指针划分区间
//         for(int left = -1,right = 0;right < n;right++){
//             if(nums[right] != 0){
//                 //[0,left]之前全是非0元素
//                 swap(nums[++left],nums[right]);
//             }
//         }
//     }
// };

// class Solution {
// public:
//     bool validateBookSequences(vector<int>& putIn, vector<int>& takeOut) {
//         //模拟
//         stack<int> st;

//         int i = 0;
//         for(auto num : putIn){
//             st.push(num);
//             //当前元素一致,出栈
//             while(!st.empty()&&st.top() == takeOut[i]){
//                 st.pop();
//                 i++;
//             }
//         }

//         //还有元素未取出，说明顺序不一致
//         return st.empty();
//     }
// };

// class Solution {
// public:
//     string removeKdigits(string num, int k) {
//         if(k <= 0) return num;

//         vector<char> stack;
//         int count = num.size() - k;

//         for(char ch : num){
//             while(k > 0 && !stack.empty() && stack.back() > ch){
//                 stack.pop_back();
//                 k--;
//             }
//             stack.push_back(ch);
//         }

//         string ret(stack.begin(),stack.begin() + count);

//         ret.erase(0,ret.find_first_not_of('0'));

//         return ret.empty() ? "0" : ret;
//     }
// };

// class Solution {
//     int dx[4] = {0,1,0,-1};
//     int dy[4] = {1,0,-1,0};
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         //模仿
//         int m = matrix.size(),n = matrix[0].size();
//         //记录走过路径
//         vector<int> ret(m * n);
//         int i = 0,j = 0,k = 0;
//         for(int a = 0;a < m * n;a++){
//             ret[a] = matrix[i][j];
//             //走过位置进行标记
//             matrix[i][j] = INT_MAX;
//             int x = i + dx[k];
//             int y = j + dy[k];
//             //越界或者已经走过路径不记录
//             if(x < 0 || x >= m || y < 0 || y >= n || matrix[x][y] == INT_MAX){
//                 //右转90
//                 k = (k + 1) % 4;
//             }
//             i += dx[k];
//             j += dy[k];
//         }

//         return ret;
//     }
// };

// class Solution {
// public:
//     int evalRPN(vector<string>& tokens) {
//         //用栈模拟
//         stack<int> tmp;
//         for(auto s : tokens){
//             char ch = s[0];
//             if(s.size() > 1 || isdigit(ch)){
//                 tmp.push(stoi(s));
//                 continue;
//             }

//             int a = tmp.top();
//             tmp.pop();
//             if(ch == '+'){
//                 tmp.top() += a;
//             }
//             else if(ch == '-'){
//                 tmp.top() -= a;
//             }
//             else if(ch == '*'){
//                 tmp.top() *= a;
//             }
//             else{
//                 tmp.top() /= a;
//             }
//         }
//         return tmp.top();
//     }
// };

// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
//         //-1替换0，寻找和为0的最长连续子串
//         int n = nums.size();
//         //hash统计前缀和
//         unordered_map<int,int> hash(n);
//         //用于计算最长连续子串的长度
//         hash[0] = -1;
//         int ret = 0,sum = 0;
//         for(int i = 0;i < n;i++){
//             sum += nums[i] == 0 ? -1 : 1;
//             //如果此时sum之前出现过，那么上次出现的位置到当前位置和为0
//             if(hash.count(sum)) ret = max(i - hash[sum],ret);
//             else hash[sum] = i;
//         }

//         return ret;
//     }
}
;

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int ret = 0;
//         int n = nums.size();
//         for(int i = 0;i <= n;i++){
//             ret ^= i;
//         }
//         for(auto num : nums){
//             ret ^= num;
//         }
//         return ret;
//     }
// };

// /*
// struct ListNode {
//     int val;
//     struct ListNode *next;
//     ListNode(int x) :
//         val(x), next(NULL) {
//     }
// };
// */
// class Solution {
//   public:
//     //判断是否成环
//     ListNode* hasCycle(ListNode* head) {
//         ListNode* slow = head, *fast = head;
//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//             //如果成环，返回相遇点
//             if (fast == slow) return slow;
//         }
//         return nullptr;
//     }
//     ListNode* EntryNodeOfLoop(ListNode* pHead) {
//         ListNode* meet = hasCycle(pHead);
//         if(meet == nullptr) return meet;

//         ListNode* head = pHead;
//         while(head != meet){
//             head = head->next;
//             meet = meet->next;
//         }
//         return head;
//     }
// };

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode * slow = head,*fast = head;
//         while(fast&&fast->next){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(fast == slow) return true;
//         }
//         return false;
//     }
// };

// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         //滑动窗口
//         int ret = 0,left = 0,count0 = 0;
//         for(int right = 0;right < nums.size();right++){
//             //记录滑动窗口内0的个数
//             count0 += 1 - nums[right];
//             while(count0 > k){
//                 count0 -= 1 - nums[left];
//                 left++;
//             }
//             ret =max(ret,right - left + 1);
//         }
//         return ret;
//     }
// };

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         //去重
//         unordered_set<int> st(nums1.begin(),nums1.end());
//         vector<int> ret;
//         for(int i : nums2){
//             if(st.erase(i)){
//                 //去重，避免第二次加入结果
//                 ret.push_back(i);
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
// class Solution
// {
// public:
//     // 反转链表
//     ListNode *reverseList(ListNode *head)
//     {
//         if (head == nullptr || head->next == nullptr)
//         {
//             return head;
//         }

//         ListNode *newhead = reverseList(head->next);
//         head->next->next = head;
//         head->next = nullptr;

//         return newhead;
//     }

//     ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
//     {
//         //反转链表模拟计算过程
//         l1 = reverseList(l1);
//         l2 = reverseList(l2);

//         int carry = 0;

//         ListNode *newhead = new ListNode(-1);
//         ListNode *l3 = newhead;

//         while (l1 || l2 || carry)
//         {
//             if (l1)
//             {
//                 carry += l1->val;
//                 l1 = l1->next;
//             }
//             if (l2)
//             {
//                 carry += l2->val;
//                 l2 = l2->next;
//             }

//             int val = carry % 10;
//             carry /= 10;

//             l3->next = new ListNode(val);
//             l3 = l3->next;
//         }
//         //运算完再次反转链表，返回结果
//         reverseList(newhead->next);
//         return l3;
//     }
// };

// class Solution {

// public:

// //判断偶数
// bool isEven(int num) {
//     return (num & 1) == 0;
// }
// //判断奇数
// bool isOdd(int num) {
//     return (num & 1) != 0;
// }
//     bool color(string s){
//         return isOdd(s[0] - 'a' + 1) == isOdd(s[1] - '1');
//     }

//     bool checkTwoChessboards(string coordinate1, string coordinate2) {
//         //数字奇偶相同就是黑色，否则白色
//         return color(coordinate1) == color(coordinate2);
//     }
// };

// class Solution {
// public:
//     int longestPalindrome(string s){
//         int ret = 0;
//         int hash[256] = {0};
//         for(auto ch : s){
//             hash[ch]++;
//         }

//         for(int i = 0;i < 256;i++){
//             ret += hash[i] / 2 * 2;
//         }

//         return ret == s.size() ? ret : ret + 1;
//     }
// };

// class Solution {
// public:
//     string removeKdigits(string num, int k) {
//         if(k <= 0) return num;

//         vector<char> stack;
//         int count = num.size() - k;
//         for(char ch : num){
//             //当前数比前一个数小，去掉前一个数
//             while(k > 0 && !stack.empty() && stack.back() > ch){
//                 stack.pop_back();
//                 --k;
//             }
//             stack.push_back(ch);
//         }

//         //k不为0，还需要去掉一些数，此时数据是递增的，直接去掉尾部的数据
//         string ret(stack.begin(),stack.begin() + count);
//         //头部去掉0
//         ret.erase(0,ret.find_first_not_of('0'));
//         return ret.empty() ? "0" : ret;
//     }
// };

// class Solution {
// public:
//     char dismantlingAction(string arr) {
//         //有序哈希表
//         vector<char> key;
//         unordered_map<char,int> hash;

//         for(auto& ch : arr){
//             //字符第一次出现
//             if(hash.find(ch) == hash.end()){
//                 key.push_back(ch);
//             }
//             //记录字符出现次数
//             hash[ch]++;
//         }

//         //返回第一个出现一次的字符
//         for(auto& ch : key){
//             if(hash[ch] == 1){
//                 return ch;
//             }
//         }

//         return ' ';
//     }
// };
// class Solution {
//     vector<int> tmp;
// public:
//     int reversePairs(vector<int>& record) {
//         tmp.resize(record.size());
//         int n = record.size();
//         return mergeSort(record,0,n - 1);
//     }

//     int mergeSort(vector<int>& record,int left,int right){
//         if(left >= right) return 0;
//         int ret = 0;

//         int mid = left + (right - left) / 2;

//         ret += mergeSort(record,left,mid);
//         ret += mergeSort(record,mid + 1,right);

//         int cur1 = left,cur2 = mid + 1,i = 0;
//         while(cur1 <= mid && cur2 <= right){
//             if(record[cur1] > record[cur2]){
//                 ret += right - cur2 + 1;
//             }
//             tmp[i++] = record[cur1] > record[cur2] ? record[cur1++]:record[cur2++];
//         }

//         while(cur1 <= mid){
//             tmp[i++] = record[cur1++];
//         }
//         while(cur2 <= right){
//             tmp[i++] = record[cur2++];
//         }

//         for(int j = left;j <= right;j++){
//             record[j] = tmp[j - left];
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
//     ListNode* partition(ListNode* head, int x) {
//         ListNode* newhead1 = new ListNode(-1);
//         ListNode* newhead2 = new ListNode(-1);
//         ListNode* cur1 = newhead1,*cur2 = newhead2;
//         ListNode* cur = head;

//         while(cur){
//             if(cur->val < x){
//                 cur1->next = cur;
//                 cur1 = cur1->next;
//             }
//             else{
//                 cur2->next = cur;
//                 cur2 = cur2->next;
//             }
//             cur = cur->next;
//         }

//         cur1->next = newhead2->next;
//         cur2->next = nullptr;

//         return newhead1->next;
//     }
// };

// class Solution {
// public:
//     int mySqrt(int x) {
//         if (x < 1) return 0;
//         long long left = 0, right = x;
//         while (left < right)
//         {
//             long long mid = left + ((right - left + 1) >> 1);
//             if (mid * mid <= x) left = mid;
//             else right = mid - 1;
//         }

//         return left;
//     }
// };
// /**
//  * struct ListNode {
//  *	int val;
//  *	struct ListNode *next;
//  *	ListNode(int x) : val(x), next(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param pHead1 ListNode类
//      * @param pHead2 ListNode类
//      * @return ListNode类
//      */
//     ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
//         // write code here
//         ListNode* newhead = new ListNode(-1);
//         ListNode* newtail = newhead;
//         ListNode* cur1 = pHead1;
//         ListNode* cur2 = pHead2;
//         while(cur1 && cur2){
//             if(cur1->val < cur2->val){
//                 newtail->next = cur1;
//                 newtail = cur1;
//                 cur1 = cur1->next;
//             }
//             else{
//                 newtail->next = cur2;
//                 newtail = cur2;
//                 cur2 = cur2->next;
//             }
//         }

//         if(cur1){
//             newtail->next = cur1;
//         }

//         if(cur2){
//             newtail->next = cur2;
//         }

//         return newhead->next;
//     }
// };

// /**
//  * struct ListNode {
//  *	int val;
//  *	struct ListNode *next;
//  *	ListNode(int x) : val(x), next(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param head ListNode类
//      * @param k int整型
//      * @return ListNode类
//      */
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         // write code here
//         //找到每次反转的尾部
//         ListNode* tail = head;

//         for(int i = 0;i < k;i++){
//             //不足k，不用反转
//             if(tail == nullptr) return head;
//             tail = tail->next;
//         }
//         //翻转时需要的当前前序和当前节点
//         ListNode* pre = nullptr;
//         ListNode* cur = head;

//         while(cur != tail){
//             ListNode* tmp = cur->next;
//             cur->next = pre;
//             pre = cur;
//             cur = tmp;
//         }

//         //递归处理后续要翻转的部分
//         head->next = reverseKGroup(tail,k);
//         //当前pre指向翻转后新的头结点
//         return pre;
//     }
// };

// /**
//  * struct ListNode {
//  *	int val;
//  *	struct ListNode *next;
//  *	ListNode(int x) : val(x), next(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param head ListNode类
//      * @param m int整型
//      * @param n int整型
//      * @return ListNode类
//      */
//     ListNode* reverseBetween(ListNode* head, int m, int n) {

//         //不需要反转的情况
//         if(nullptr == head || m == n){
//             return head;
//         }

//         //哨兵节点方便处理特殊情况
//         ListNode* newhead = new ListNode(-1);
//         newhead->next = head;
//         ListNode* prev = newhead;

//         //
//         for(int i = 1;i < m;i++){
//             prev = prev->next;
//         }

//         //反转区间链表
//         head = prev->next;
//         for(int i = m;i < n;i++){
//             ListNode* next = head->next;
//             head->next = next->next;
//             next->next = prev->next;
//             prev->next = next;
//         }

//         head = newhead->next;
//         delete newhead;
//         return head;
//     }
// };

// /**
//  * struct ListNode {
//  *	int val;
//  *	struct ListNode *next;
//  *	ListNode(int x) : val(x), next(nullptr) {}
//  * };
//  */
// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      *
//      * @param head ListNode类
//      * @return ListNode类
//      */
//     ListNode* ReverseList(ListNode* head) {
//         ListNode* newhead = new ListNode(-1);
//         ListNode* cur = head;

//         while(cur){
//             ListNode* tmp = cur->next;
//             cur->next = newhead->next;
//             newhead->next = cur;
//             cur = tmp;
//         }

//         return newhead->next;
//     }
// };

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int i = matrix.size() - 1,j = 0;

//         while(i >= 0 && j < matrix[0].size()){
//             if(matrix[i][j] < target) j++;
//             else if(matrix[i][j] > target) i--;
//             else return true;
//         }

//         return false;
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
//     void reorderList(ListNode* head) {
//         int count = 0;

//         ListNode* cur1 = head;
//         while(cur1){
//             count++;
//             cur1 = cur1->next;
//         }

//         count /= 2;
//         ListNode* slow = head,*fast = head;
//         while(count--){
//             fast = fast->next;
//         }

//         while(fast&&fast->next){
//             fast = fast->next;
//             slow = slow->next;
//         }

//         ListNode* newhead = new ListNode(-1);

//         ListNode* cur2 = slow;
//         while(cur2){
//             ListNode* tmp = cur2->next;
//             cur2->next = newhead->next;
//             newhead->next = cur2;
//             cur2 = tmp;
//         }

//         cur1 = head;
//         cur2 = newhead->next;

//         while(cur1&&cur2){
//             ListNode* tmp1 = cur1->next;
//             ListNode* tmp2 = cur2->next;

//             cur1->next = cur2;
//             cur2->next = tmp1;

//             cur1 = tmp1;
//             cur2 = tmp2;
//         }

//     }
// };

// class Solution {
// public:
//     string minWindow(string s, string t) {
//         int hash1[256] = {0};
//         int hash2[256] = {0};
//         int kinds = 0;

//         for(auto ch : t){
//             if(hash1[ch]++ == 0){
//                 kinds++;
//             }
//         }

//         int begin = -1,minlen = INT_MAX;
//         for(int left = 0,right = 0,count = 0;right < s.size();right++){
//             if(++hash2[s[right]] == hash1[s[right]]){
//                 count++;
//             }

//             while(count == kinds){
//                 if(minlen > right - left + 1){
//                     minlen = right - left + 1;
//                     begin = left;
//                 }
//                 char out = s[left++];
//                 if(hash2[out]-- == hash1[out]){
//                     count--;
//                 }
//             }
//         }

//         if(begin == -1) return "";
//         return s.substr(begin,minlen);
//     }
// };

// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> dp(n,1);

//         int ret = 1;
//         for(int i = 1;i < n;i++){
//             for(int j = 0;j < i;j++){
//                 if(nums[j] < nums[i])
//                 dp[i] = max(dp[j] + 1,dp[i]);
//             }

//             ret = max(ret,dp[i]);
//         }

//         return ret;
//     }
// };

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int left = -1,right = n;
//         int cur = 0;
//         while(cur < right){
//             if(nums[cur] == 0){
//                 swap(nums[++left],nums[cur++]);
//             }
//             else if(nums[cur] == 2){
//                 swap(nums[--right],nums[cur]);
//             }
//             else{
//                 cur++;
//             }
//         }
//     }
// };

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> ret;

//         int n = nums.size();
//         for(int i = 0;i < n - 2;i++){
//             int x = nums[i];

//             if(i && x == nums[i - 1]) continue;
//             if(x + nums[i + 1] + nums[i + 2] > 0) break;
//             if(x + nums[n - 1] + nums[n - 2] < 0) continue;

//             int j = i + 1,k = n - 1;

//             while(j < k){
//                 if(x + nums[j] + nums[k] < 0) j++;
//                 else if(x + nums[j] + nums[k] > 0) k--;
//                 else
//                 {
//                     ret.push_back({x,nums[j],nums[k]});

//                     for(j++;j < k && nums[j] == nums[j - 1] ;j++);
//                     for(k--;j < k && nums[k] == nums[k + 1] ;k--);
//                 }
//             }
//         }

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
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         queue<TreeNode*> q;
//         vector<vector<int>> ret;
//         int levelSize = 0;

//         if(root == nullptr) return ret;

//         q.push(root);
//         levelSize = 1;

//         while(q.size()){
//             vector<int> tmp;;
//             while(levelSize--){
//                 TreeNode* node = q.front();
//                 tmp.push_back(node->val);
//                 q.pop();

//                 if(node->left){
//                     q.push(node->left);
//                 }
//                 if(node->right){
//                     q.push(node->right);
//                 }
//             }
//             levelSize = q.size();
//             ret.push_back(tmp);
//         }

//         return ret;
//     }
// };

// class Solution {
//     vector<int> tmp;
//     vector<int> index;
//     vector<int> tmpindex;
//     vector<int> counts;
// public:
//     vector<int> countSmaller(vector<int>& nums) {
//         int n = nums.size();
//         tmp.resize(n,0);
//         tmpindex.resize(n,0);
//         index.resize(n,0);//记录下标的映射关系
//         counts.resize(n,0);

//         for(int i = 0;i < nums.size();i++){
//             index[i] = i;
//         }

//         mergeSort(nums,0,nums.size() - 1);
//         return counts;
//     }

//     void mergeSort(vector<int>& nums,int left,int right){
//         if(left >= right) return ;
//         int mid = (left + right) / 2;

//         mergeSort(nums,left,mid);
//         mergeSort(nums,mid + 1,right);

//         int cur1 = left;
//         int cur2 = mid + 1;
//         int i = 0;

//         //合并两个降序数组
//         while(cur1 <= mid && cur2 <= right){
//             if(nums[cur1] <= nums[cur2]){
//                 tmp[i] = nums[cur2];
//                 tmpindex[i++] = index[cur2++];
//             }
//             else{
//                 counts[index[cur1]] += right - cur2 + 1;
//                 tmp[i] = nums[cur1];
//                 tmpindex[i++] = index[cur1++];
//             }
//         }

//         //处理剩下
//         while(cur1 <= mid){
//             tmp[i] = nums[cur1];
//             tmpindex[i++] = index[cur1++];
//         }
//         while(cur2 <= right){
//             tmp[i] = nums[cur2];
//             tmpindex[i++] = index[cur2++];
//         }

//         for(int j = left;j <= right;j++){
//             nums[j] = tmp[j - left];
//             index[j] = tmpindex[j - left];
//         }
//     }

// };

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ret(n);
//         int i = 0;
//         int j = n - 1;
//         for(int k = n - 1;k >= 0;){
//             int x = nums[i]*nums[i];
//             int y = nums[j]*nums[j];
//             if(i <= j && x > y){
//                 ret[k--] = x;
//                 i++;
//             }
//             else{
//                 ret[k--] = y;
//                 j--;
//             }
//         }
//         return ret;
//     }
// };

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> ret;
//         int n = nums.size();

//         for(int i = 0;i < n - 2;i++){
//             int x = nums[i];
//             if(i && x == nums[i - 1]) continue;
//             if(x + nums[i + 1] + nums[i + 2] > 0) break;
//             if(x + nums[n - 2] + nums[n - 1] < 0) continue;

//             int j = i + 1,k = n - 1;
//             while(j < k){
//                 int s = x + nums[j] + nums[k];
//                 if(s > 0){
//                     k--;
//                 }
//                 else if(s < 0){
//                     j++;
//                 }
//                 else{
//                     ret.push_back({x,nums[j],nums[k]});
//                     for(j++;j < k && nums[j] == nums[j - 1];j++);
//                     for(k--;j < k && nums[k] == nums[k + 1];k--);
//                 }
//             }
//         }

//         return ret;
//     }
// };

// class Solution {
//     vector<string> ret;
//     int _n;
// public:
//     vector<string> generateParenthesis(int n) {
//         string path(2 * n,0);
//         _n = n;
//         dfs(0,0,path);
//         return ret;
//     }

//     void dfs(int left,int right,string path){
//         if(right == _n){
//             ret.push_back(path);
//             return;
//         }

//         if(left < _n){
//             path[left + right] = '(';
//             dfs(left + 1,right,path);
//         }

//         if(right < left){
//             path[left + right] = ')';
//             dfs(left,right + 1,path);
//         }
//     }

// };
// class Solution {
// public:
//     string longestPalindrome(string s) {
//         int n = s.size();
//         int ans_left = 0,ans_right = 0;

//         //奇回文串
//         for(int i = 0;i < n;i++){
//             int l = i,r = i;
//             while(l >= 0 && r < n && s[l] == s[r]){
//                 l--;
//                 r++;
//             }
//             if(r - l - 1 > ans_right - ans_left){
//                 ans_left = l + 1;
//                 ans_right = r;
//             }
//         }

//         //偶回文串
//         for(int i = 0;i < n;i++){
//             int l = i,r = i + 1;
//             while(l >= 0 && r < n && s[l] == s[r]){
//                 l--;
//                 r++;
//             }
//             if(r - l - 1 > ans_right - ans_left){
//                 ans_left = l + 1;
//                 ans_right = r;
//             }
//         }

//         return s.substr(ans_left,ans_right - ans_left);
//     }
// };

// class Solution {
//     int tar = 0;
//     set<vector<int>> tmp;
// public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         sort(candidates.begin(),candidates.end());
//         tar = target;
//         vector<int> path;
//         int sum = 0;
//         dfs(candidates,path,sum);
//         return vector<vector<int>>(tmp.begin(),tmp.end());
//     }

//     void dfs(vector<int>& candidates,vector<int> path,int sum)
//     {
//         if(sum == tar){
//             sort(path.begin(),path.end());
//             tmp.insert(path);
//             return;
//         }

//         for(auto num : candidates){
//             if(sum + num <= tar){
//                 path.push_back(num);
//                 sum += num;
//                 dfs(candidates,path,sum);
//                 sum -= num;
//                 path.pop_back();
//             }
//             else{
//                 return;
//             }
//         }

//     }
// };

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size(), n = matrix[0].size();
//         int left = -1, right = m * n;
//         while (left + 1 < right) {
//             int mid = left + (right - left) / 2;
//             int x = matrix[mid / n][mid % n];
//             if (x < target) left = mid;
//             else if (x > target) right = mid;
//             else return true;
//         }
//         return false;
//     }
// };

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> arr(n,1);
//         int left = 1,right = 1;
//         for(int i = 0;i < n;i++){
//             arr[i] = left;
//             left *= nums[i];
//         }
//         for(int i = n - 1;i >= 0;i--){
//             arr[i] *= right;
//             right *= nums[i];
//         }
//         return arr;
//     }
// };

// class Solution
// {
// public:
//     vector<vector<int>> threeSum(vector<int> &nums)
//     {
//         vector<vector<int>> tables;

//         sort(nums.begin(), nums.end());

//         int cur = 0;
//         while (cur <= nums.size() - 3)
//         {
//             int left = cur + 1, right = nums.size() - 1;
//             while (left < right)
//             {
//                 int sum = nums[left] + nums[right];
//                 if (sum < -nums[cur])
//                 {
//                     left++;
//                 }
//                 else if (sum > -nums[cur])
//                 {
//                     right--;
//                 }
//                 else
//                 {

//                     tables.push_back({nums[cur], nums[left], nums[right]});

//                     int num1 = nums[left];
//                     int num2 = nums[right];

//                     left++;
//                     right--;
//                     while (nums[left] == num1 && left < right)
//                     {
//                         left++;
//                     }
//                     while (nums[right] == num2 && left < right)
//                     {
//                         right--;
//                     }
//                 }
//             }

//             int num3 = nums[cur];
//             cur++;
//             while (nums[cur] == num3 && cur <= nums.size() - 3)
//             {
//                 cur++;
//             }

//             if (nums[cur] > 0)
//             {
//                 break;
//             }
//         }

//         return tables;
//     }
// };

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size();
//         int i = n - 2;
//         while(i >= 0 && nums[i] >= nums[i + 1]){
//             --i;
//         }

//         if(i >= 0){
//             int j = n - 1;
//             while(nums[j] <= nums[i]){
//                 j--;
//             }
//             swap(nums[i],nums[j]);
//         }

//         reverse(nums.begin() + i + 1,nums.end());
//     }
// };

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         //基环树，转化为环形链表、
//         int slow = 0,fast = 0;
//         while(true){
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//             if(slow == fast){
//                 break;
//             }
//         }

//         int head = 0;
//         while(slow != head){
//             slow = nums[slow];
//             head = nums[head];
//         }
//         return slow;
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
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
//     bool isInTree(TreeNode* root,TreeNode* node){
//         if(root == nullptr)
//         return false;

//         return root == node ||  isInTree(root->left,node) || isInTree(root->right,node);
//     }

// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root == nullptr)
//         return nullptr;

//         //如果这棵数的根跟一个数相等，这个根就是一个最近公共祖先
//         if(root == q || root == p)
//         return root;

//         //最近两个点一定分布在最近公共祖先的两侧
//         bool qInLeftTree = isInTree(root->left,q);
//         bool qInRightTree = !qInLeftTree;

//         bool pInLeftTree = isInTree(root->left,p);
//         bool pInRightTree = !pInLeftTree;

//         if(qInLeftTree&&pInLeftTree) return lowestCommonAncestor(root->left,p,q);
//         if(qInRightTree&&pInRightTree) return lowestCommonAncestor(root->right,p,q);

//         return root;
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

//     ListNode* mergeList(ListNode* l1,ListNode* l2){
//         ListNode* newhead = new ListNode(-1);
//         ListNode* newtail = newhead;
//         while(l1&&l2){
//             if(l1->val <= l2->val){
//                 newtail->next = l1;
//                 l1 = l1->next;
//                 newtail = newtail->next;
//             }
//             else{
//                 newtail->next = l2;
//                 l2 = l2->next;
//                 newtail = newtail->next;
//             }
//         }

//         newtail->next = l1 ? l1 :l2;

//         return newhead->next;
//     }

//     ListNode* midList(ListNode* head){
//         ListNode* slow = head;
//         ListNode* fast = head;
//         ListNode* prev = slow;

//         while(fast && fast->next != nullptr){
//             prev = slow;
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         prev->next = nullptr;
//         return slow;
//     }

// public:

//     ListNode* sortList(ListNode* head) {
//         if(head == nullptr || head->next == nullptr){
//             return head;
//         }
//         //先找到中间节点
//         ListNode* head2 = midList(head);

//         //左右两端分别有序
//         head = sortList(head);
//         head2 = sortList(head2);

//         //对两端有序链表使用归并
//         return mergeList(head,head2);
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
// vector<int> ret;
//     void _inorderTraversal(TreeNode* root){
//         if(root == nullptr) return ;
//         _inorderTraversal(root->left);
//         ret.push_back(root->val);
//         _inorderTraversal(root->right);
//     }
//     vector<int> inorderTraversal(TreeNode* root){
//         _inorderTraversal(root);
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
//     TreeNode* _buildTree(vector<int>& preorder, vector<int>& inorder,int& previ,int begini,int endi)
//     {
//         if(begini > endi)
//         {
//             return nullptr;
//         }

//         //前序遍历确定根
//         TreeNode* root = new TreeNode(preorder[previ]);

//         int curi = begini;
//         while(inorder[curi] != preorder[previ]){
//             curi++;
//         }

//         previ++;
//         //中序遍历划分左右子树
//         root->left = _buildTree(preorder,inorder,previ,begini,curi - 1);
//         root->right = _buildTree(preorder,inorder,previ,curi + 1,endi);
//         return root;
//     }
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         int i= 0;
//         return _buildTree(preorder,inorder,i,0,inorder.size() - 1);
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
//     unordered_map<long long,int> hash;
//     int ret = 0;
//     int target = 0;
// public:
//     void dfs(TreeNode* root, long long sum){
//         sum += root->val;
//         long long tmp = sum - target;
//         if(hash[tmp] > 0){
//             ret += hash[tmp];
//         }
//         hash[sum]++;
//         if(root->left) dfs(root->left,sum);
//         if(root->right) dfs(root->right,sum);
//         hash[sum]--;
//     }

//     //前缀和，使用哈希表处理查找前缀和效率低下问题
//     int pathSum(TreeNode* root, int targetSum) {
//         //处理根节点符合目标的特殊情况
//         hash[0] = 1;
//         target = targetSum;
//         if(root == nullptr) return 0;
//         dfs(root,0);
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
//     TreeNode* head;
// public:
//     void flatten(TreeNode* root) {
//         if(root == nullptr)
//         {
//             return ;
//         }
//         flatten(root->right);
//         flatten(root->left);
//         root->left = nullptr;
//         root->right = head;
//         head = root;
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
//     vector<int> ret;
// public:
//     void dfs(TreeNode* root,int depth)
//     {
//         if(root == nullptr) return ;
//         //当第一次到达这一层，对应下标没有节点
//         if(depth == ret.size())
//         {
//             ret.push_back(root->val);
//         }
//         dfs(root->right,depth + 1);
//         dfs(root->left,depth + 1);
//     }
//     vector<int> rightSideView(TreeNode* root) {
//         //ret对应下标就是每一层的节点
//         dfs(root,0);
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
// class Compare
// {
//     public:
//             bool operator()(TreeNode*a,TreeNode*b)
//             {
//                 return a->val > b->val;
//             }
// };
// priority_queue<TreeNode*,vector<TreeNode*>,Compare> pq;
// public:

//     void TreePath(TreeNode* root)
//     {
//         if(root == nullptr)
//         return ;
//         pq.push(root);
//         TreePath(root->left);
//         TreePath(root->right);
//     }

//     int kthSmallest(TreeNode* root, int k) {
//         TreePath(root);

//         int ret = 0;
//         while(k--)
//         {
//             ret = pq.top()->val;
//             pq.pop();
//         }
//         return ret;
//     }
// };

// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if(n == 0) return 0;
//         vector<int> dp(n + 1,0);
//         dp[1] = nums[0];
//         for(int i = 2;i <= n;i++)
//         {
//             dp[i] = max(dp[i - 1],dp[i - 2] + nums[i - 1]);
//         }

//         return dp[n];
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
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         return dfs(nums,0,nums.size() - 1);
//     }
//     //因为构建平衡二叉树，这里为了方便直接选取中间点做根节点
//     TreeNode* dfs(vector<int>& nums,int left,int right)
//     {
//         if(left > right)
//         {
//             return nullptr;
//         }

//         int mid = left + (right - left) / 2;

//         TreeNode* root = new TreeNode(nums[mid]);
//         root->left = dfs(nums,left,mid - 1);
//         root->right = dfs(nums,mid + 1,right);
//         return root;
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
//     bool isValidBST(TreeNode* root)
//     {
//         long long prev = LONG_MIN;//每次找到一堆的最大值
//         return _isValidBST(root,prev);
//     }
//     bool _isValidBST(TreeNode* root,long long& prev)
//     {
//         if(root == nullptr) return true;
//         bool left = _isValidBST(root->left,prev);
//         //左子树的最大值与根节点比较
//         if(prev < root->val) prev = root->val;
//         else return false;
//         //根节点的最大值与右子树最大值比较
//         bool right = _isValidBST(root->right,prev);
//         if(left&&right) return true;
//         return false;
//     }
// };

// class Solution {
//     void reverse(vector<int>& nums,int left,int right)
//     {
//         while(left < right)
//         {
//             int tmp = nums[left];
//             nums[left] = nums[right];
//             nums[right] = tmp;
//             left++;
//             right--;
//         }
//     }
// public:
//     void rotate(vector<int>& nums, int k) {
//         k %= nums.size();
//         int n = nums.size();
//         //先将会轮转到左侧的数交换到左边，
//         //再轮转一次，使数据恢复原来的顺序
//         reverse(nums,0,n - 1);
//         reverse(nums,0,k - 1);
//         reverse(nums,k,n - 1);
//     }
// };

// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         unordered_map<int,int> hash;
//         int ret = 0;
//         int sum = 0;
//         hash[0] = 1;
//         for(auto num : nums)
//         {
//             //hash记录到当前位置之前的满足条件的数
//             sum += num;
//             if(hash.count(sum - k)) ret += hash[sum - k];
//             hash[sum]++;
//         }
//         return ret;
//     }
// };

// class Solution {
//     string path;//记录路径
//     vector<string> ret;
//     string s[10] = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
// public:
//     vector<string> letterCombinations(string digits) {
//         if(digits.size() == 0) return ret;
//         dfs(digits,0);
//         return ret;
//     }

//     //pos记录层数
//     void dfs(string digits,int pos){
//         if(path.size() == digits.size()){
//             ret.push_back(path);
//             return ;
//         }
//         for(auto c : s[digits[pos] - '0']){
//             path.push_back(c);
//             dfs(digits,pos + 1);
//             path.pop_back();
//         }
//     }
// };

// class Solution {
// public:
//     vector<int> path;
//     vector<vector<int>> ret;
//     vector<vector<int>> subsets(vector<int>& nums) {

//         dfs(nums,0);
//         return ret;
//     }
//     void dfs(vector<int>& nums,int pos){
//         ret.push_back(path);
//         for(int i = pos;i < nums.size();i++){
//             path.push_back(nums[i]);
//             dfs(nums,i + 1);
//             path.pop_back();
//         }
//     }
// };

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         for(int left = -1,right = 0;right < n;right++)
//         {
//             if(nums[right] != 0)
//             {
//                 swap(nums[++left],nums[right]);
//             }
//         }
//     }
// };
// typedef pair<int,int> PII;
// class Solution {
//     class Compare
//     {
//     public:
//         bool operator()(PII a,PII b)
//         {
//             return a.second < b.second;
//         }
//     };
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int> hash;
//         priority_queue<PII,vector<PII>,Compare> pq;

//         for(auto& num : nums) hash[num]++;

//         vector<int> ret;
//         for(auto num : hash)
//         {
//             pq.push(num);
//         }

//         while(k--)
//         {
//             auto num  = pq.top();
//             pq.pop();
//             ret.push_back(num.first);
//         }
//         return ret;
//     }
// };

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int n = nums.size();
//         for(int i = 0;i < n;i++)
//         {
//             if(target <= nums[i]) return i;
//         }
//         return n;
//     }
// };

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         //排完序后，可以合并的几个区间一定靠在一起，不可以合并的区间与之后的也不可以合并
//         sort(intervals.begin(),intervals.end());

//         vector<vector<int>> ret;
//         int left = intervals[0][0],right = intervals[0][1];
//         for(int i = 1;i < intervals.size();i++)
//         {
//             int a = intervals[i][0],b = intervals[i][1];
//             if(a <= right)
//             {
//                 //因为合并区间left一定<=a,所以只需要比较右边界
//                 right = max(right,b);
//             }
//             else
//             {
//                 ret.push_back({left,right});
//                 left = a;
//                 right = b;
//             }
//         }

//         ret.push_back({left,right});
//         return ret;
//     }
// };

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();
//         int ret = INT_MIN;
//         vector<int> dp(n + 1);
//         for(int i = 1;i <= n;i++){
//             //以i为结尾的最大子数组
//             dp[i] = max(nums[i - 1],dp[i - 1] + nums[i - 1]);
//             ret = max(ret,dp[i]);
//         }
//         return ret;
//     }
// };

// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int n = grid.size(),m = grid[0].size();
//         vector<vector<int>> dp(n + 1,vector<int>(m + 1,INT_MAX));
//         dp[0][1] = dp[1][0] = 0;

//         for(int i = 1;i <= n;i++)
//         {
//             for(int j  = 1;j <= m;j++)
//             {
//                 dp[i][j] = min(dp[i - 1][j],dp[i][j - 1]) + grid[i - 1][j - 1];
//             }
//         }

//         return dp[n][m];
//     }
// };
// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;

//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {

//         if(head == nullptr) return nullptr;

//         unordered_map<Node*,Node*>hash;//原节点与复制节点一一对应
//         Node* cur = head;

//         while(cur)
//         {
//             Node* node = new Node(cur->val);
//             hash[cur] = node;
//             cur = cur->next;
//         }

//         cur = head;
//         Node* newhead = hash[cur];

//         while(cur)
//         {
//             hash[cur]->next = hash[cur->next];

//             if(cur->random)
//             {
//                 hash[cur]->random = hash[cur->random];
//             }
//             else
//             {
//                 hash[cur]->random = nullptr;
//             }
//             cur = cur->next;
//         }

//         return newhead;
//     }
// };

// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;

//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         if(head == nullptr) return head;
//         Node* cur = head;

//         while(cur)//先在每个原节点后面插入拷贝节点
//         {
//             Node* newnode = new Node(cur->val);
//             newnode->next = cur->next;
//             cur->next = newnode;
//             cur = newnode->next;
//         }

//         cur = head;

//         while(cur)//原节点random->next指向的就是复制节点先在对应random应该指向的节点
//         {
//             Node* nextnode = cur->next;
//             if(cur->random)
//             {
//                 nextnode->random = cur->random->next;
//             }
//             else
//             {
//                 nextnode->random = nullptr;
//             }
//             cur = nextnode->next;
//         }

//         cur = head;
//         Node* pcur = cur->next;
//         Node* newhead = pcur;

//         while(cur&&pcur)//把复制链表拆下来
//         {
//             Node* next = nullptr,*pnext = nullptr;

//             next = pcur->next;
//             cur->next = next;
//             if(next)
//             {
//                 pnext = next->next;
//             }
//             pcur->next = pnext;
//             pcur = pnext;
//             cur = next;
//         }

//         return newhead;
//     }
// };

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

// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int n = 0;
// int m = 0;
// typedef pair<int, int> PII;
//
// class Solution
//{
// public:
//     queue<PII> q;
//
//     int orangesRotting(vector<vector<int>>& grid)
//     {
//         n = grid.size(), m = grid[0].size();
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (grid[i][j] == 2)
//                 {
//                     q.emplace(i, j);
//                 }
//                 if (grid[i][j] == 1) count++;
//             }
//         }
//
//         if (!count) return 0;
//
//         int ret = 0;
//         int levelsize = q.size();
//
//         while (q.size())
//         {
//             if (!count) {
//                 return ret;
//             }
//             while (levelsize--)
//             {
//                 auto [a, b] = q.front();
//                 q.pop();
//                 for (int k = 0; k < 4; k++)
//                 {
//                     int x = a + dx[k], y = b + dy[k];
//                     if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 1)
//                     {
//
//                         if (grid[x][y] == 1) {
//                             count--;
//                         }
//                         grid[x][y] = 2;
//                         q.emplace(x, y);
//                     }
//                 }
//
//             }
//             ret++;
//             levelsize = q.size();
//         }
//
//         return count ? -1 : ret;
//     }
// };
//
//
//
// int main() {
//
//     vector<vector<int>> grid{{1,2}};
//     Solution().orangesRotting(grid);
// }

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