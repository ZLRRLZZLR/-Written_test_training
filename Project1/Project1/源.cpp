#include<iostream>
#include<cmath>
#include<vector>

using namespace std;


//#include <iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    while (cin >> n)
//    {
//        int num = 0;
//        while (pow(2, num) - 1 <= n)
//        {
//            num++;
//        }
//
//        cout << pow(2, num - 1) - 1 << endl;
//    }
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 递增路径的最大长度
//     * @param matrix int整型vector<vector<>> 描述矩阵的每个数
//     * @return int整型
//     */
//    int dx[4] = { 1,-1,0,0 };
//    int dy[4] = { 0,0,1,-1 };
//    int n = 0;
//    int m = 0;
//    int ret = 1;
//    int vis[1001][1001];
//    int solve(vector<vector<int> >& matrix) {
//        memset(vis, -1, sizeof(vis));
//        n = matrix.size();
//        m = matrix[0].size();
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                ret = max(ret, dfs(matrix, i, j));
//            }
//        }
//        return ret;
//    }
//    int dfs(vector<vector<int> >& matrix, int i, int j)
//    {
//        if (vis[i][j] != -1) return vis[i][j];
//        int len = 1;
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < n && y >= 0 && y < m && matrix[x][y] > matrix[i][j])
//            {
//                len = max(len, 1 + dfs(matrix, x, y));
//            }
//        }
//        vis[i][j] = len;
//        return len;
//    }
//};
//#include<iostream>
//#include<queue>
//#include <cstring>
//using namespace std;
//
//int n, m;
//int val[31][31];
//char arr[31][31];
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int x1, y1;
//
//typedef pair<int, int> PII;
//int main()
//{
//    cin >> n >> m;
//    queue<PII> q;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            cin >> arr[i][j];
//            if (arr[i][j] == 'k')
//            {
//                q.emplace(i, j);
//                x1 = i, y1 = j;
//            }
//        }
//    }
//    memset(val, -1, sizeof(val));
//    val[x1][y1] = 0;
//    while (q.size())
//    {
//        auto& [a, b] = q.front();
//        q.pop();
//        for (int k = 0; k < 4; k++)
//        {
//            int x = a + dx[k], y = b + dy[k];
//            if (x >= 1 && x <= n && y >= 1 && y <= m && val[x][y] == -1 && arr[x][y] != '*')
//            {
//                val[x][y] = val[a][b] + 1;
//                if (arr[x][y] != 'e')
//                    q.emplace(x, y);
//            }
//        }
//    }
//
//    int ret1 = 1e9;
//    int ret2 = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            if (arr[i][j] == 'e' && val[i][j] != -1)
//            {
//                ret1 = min(val[i][j], ret1);
//                ret2++;
//            }
//        }
//    }
//    if (ret2 == 0) cout << -1 << endl;
//    else cout << ret2 << " " << ret1 << endl;
//
//    return 0;
//}



//#include<iostream>
//#include<string>
//
//using namespace std;
//int main()
//{
//    int i = 0;
//    string s;
//    cin >> s;
//    long long ISBN = 0;
//    for (int j = 0; j < s.size() - 1; j++)
//    {
//        if (s[j] >= '0' && s[j] <= '9')
//        {
//            ISBN += (s[j] - '0') * (i + 1);
//            i++;
//        }
//    }
//
//    ISBN %= 11;
//    if (ISBN == s[s.size() - 1] - '0' || (ISBN == 10 && s[s.size() - 1] == 'X'))
//    {
//        cout << "Right" << endl;
//    }
//    else
//    {
//        s[s.size() - 1] = ISBN == 10 ? 'X' : ISBN + '0';
//        cout << s << endl;
//    }
//
//    return 0;
//}

//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param str string字符串
//     * @return string字符串vector
//     */
//    int n = 0;
//    vector<string> ret;
//    bool vis[11] = { false };
//    string s;
//    string path;
//    void dfs(int pos)
//    {
//        if (pos == n)
//        {
//            ret.push_back(path);
//            return;
//        }
//
//        for (int i = 0; i < n; i++)
//        {
//            if (!vis[i])
//            {
//                if (i > 0 && s[i] == s[i - 1] && vis[i - 1]) continue;//剪纸，去掉相同字母带来的重复
//                path.push_back(s[i]);
//                vis[i] = true;
//                dfs(pos + 1);
//                vis[i] = false;
//                path.pop_back();
//            }
//        }
//
//    }
//
//    vector<string> Permutation(string str)
//    {
//        sort(str.begin(), str.end());
//        n = str.size();
//        s = str;
//        dfs(0);
//        return ret;
//    }
//};

//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param str string字符串
//     * @return string字符串vector
//     */
//    int n = 0;
//    vector<string> ret;
//    bool vis[11] = { false };
//    string s;
//    void dfs(string str)
//    {
//        if (str.size() == n)
//        {
//            ret.push_back(str);
//            return;
//        }
//
//        for (int i = 0; i < n; i++)
//        {
//            if (!vis[i])
//            {
//                if (i > 0 && s[i] == s[i - 1] && vis[i - 1]) continue;//剪纸，去掉相同字母带来的重复
//                string tmp;
//                tmp += str + s[i];
//                vis[i] = true;
//                dfs(tmp);
//                vis[i] = false;
//            }
//        }
//
//    }
//
//    vector<string> Permutation(string str)
//    {
//        sort(str.begin(), str.end());
//        n = str.size();
//        s = str;
//        for (int i = 0; i < n; i++)
//        {
//
//            string tmp;
//            tmp += str[i];
//            vis[i] = true;
//            dfs(tmp);
//            vis[i] = false;
//        }
//
//        return ret;
//    }
//};

//#include <algorithm>
//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> arr(n + 1);
//    for (int i = 1; i <= n; i++) cin >> arr[i];
//
//    int d, k;
//    cin >> k >> d;
//
//    vector<vector<long long>> f(n + 1, vector<long long>(k + 1, -0x3f3f3f3f3f3f3f3f));
//    vector<vector<long long>> g(n + 1, vector<long long>(k + 1, 0x3f3f3f3f3f3f3f3f));
//
//    long long ret = -0x3f3f3f3f3f3f3f3f;
//    for (int i = 1; i <= n; i++)
//    {
//        f[i][1] = g[i][1] = arr[i];
//        for (int j = 2; j <= min(i, k); j++)
//        {
//            for (int prev = max(i - d, j - 1); prev <= i - 1; prev++)
//            {
//                f[i][j] = max(f[i][j], max(f[prev][j - 1] * arr[i], g[prev][j - 1] * arr[i]));
//                g[i][j] = min(g[i][j], min(f[prev][j - 1] * arr[i], g[prev][j - 1] * arr[i]));
//            }
//        }
//    }
//
//    for (int i = k; i <= n; i++) ret = max(ret, f[i][k]);
//    cout << ret << endl;
//    return 0;
//}
////// 64 位输出请用 printf("%lld")

//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 递增路径的最大长度
//     * @param matrix int整型vector<vector<>> 描述矩阵的每个数
//     * @return int整型
//     */
//    int dx[4] = { 1,-1,0,0 };
//    int dy[4] = { 0,0,1,-1 };
//    int n = 0;
//    int m = 0;
//    int ret = 0;
//    bool vis[1001][1001] = { false };
//    int solve(vector<vector<int> >& matrix) {
//        n = matrix.size();
//        m = matrix[0].size();
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                vis[i][j] = true;
//                dfs(matrix, i, j, 1);
//                vis[i][j] = false;
//            }
//        }
//        return ret;
//    }
//    void dfs(vector<vector<int> >& matrix, int i, int j, int pos)
//    {
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && matrix[x][y] > matrix[i][j])
//            {
//                vis[x][y] = true;
//                dfs(matrix, x, y, pos + 1);
//                vis[x][y] = false;
//            }
//        }
//        ret = max(ret, pos);
//    }
//};


//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> arr(n);
//    for (int i = 0; i < n; i++) cin >> arr[i];
//
//    int d, k;
//    cin >> d >> k;
//
//    vector<vector<long long>> f(n + 1, vector<long long>(k + 1, -0x3f3f3f3f3f3f3f3f));
//    vector<vector<long long>> g(n + 1, vector<long long>(k + 1, -0x3f3f3f3f3f3f3f3f));
//
//    for (int i = 1; i <= n; i++)
//    {
//        f[i][1] = arr[i - 1];
//        g[i][1] = arr[i - 1];
//    }
//
//    long long ret = -0x3f3f3f3f3f3f3f3f;
//    for (int i = 2; i <= n; i++)
//    {
//        for (int j = 2; j <= min(i, k); j++)
//        {
//            int left = max(i - d, j - 1);
//            for (int prev = left; prev <= i - 1; prev++)
//            {
//                f[i][j] = max(f[i][j], max(f[prev][j - 1] * arr[i - 1], g[prev][j - 1] * arr[i]));
//                g[i][j] = min(g[i][j], max(f[prev][j - 1] * arr[i - 1], g[prev][j - 1] * arr[i]));
//            }
//            ret = max(ret, f[i][j]);
//        }
//    }
//
//    cout << ret << endl;
//    return 0;
//}
////// 64 位输出请用 printf("%lld")

//#include <iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//using namespace std;
//
//typedef pair<int, int> PII;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    vector<PII> arr;
//    while (n--)
//    {
//        int a, b;
//        cin >> a >> b;
//        arr.emplace_back(a, b);
//    }
//    sort(arr.begin(), arr.end());
//    int ret = 0;
//    int tmp = arr[0].second;
//    for (auto& i : arr)
//    {
//        if (i.first < tmp)
//        {
//            tmp = min(i.second, tmp);
//        }
//        else
//        {
//            ret++;
//            tmp = i.second;
//        }
//    }
//    cout << ret + 1 << endl;
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")


//#include <iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//using namespace std;
//
//typedef pair<int, int> PII;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    vector<PII> arr;
//    while (n--)
//    {
//        int a, b;
//        cin >> a >> b;
//        arr.emplace_back(a, b);
//    }
//    sort(arr.begin(), arr.end());
//    vector<PII> ret;
//    for (auto& i : arr)
//    {
//        auto& [a, b] = i;
//        if (ret.empty() || ret.back().second <= a)
//        {
//            ret.emplace_back(a, b);
//        }
//        else if (ret.back().second > a && ret.back().second > b)
//        {
//            ret.pop_back();
//            ret.emplace_back(a, b);
//        }
//    }
//    cout << ret.size() << endl;
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")


//#include<iostream>
//
//using namespace std;
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        long long n, a, b, ret = 0;
//        cin >> n >> a >> b;
//        if (n <= 2)
//        {
//            cout << min(a, b) << endl;
//        }
//        else
//        {
//            if (3 * a < 2 * b)
//            {
//                ret += n / 2 * a;
//                n %= 2;
//                if (n != 0) ret += min(min(a, b), b - a);
//            }
//            else
//            {
//                ret += n / 3 * b;
//                n %= 3;
//                if (n == 1) ret += min(min(a, b), 2 * a - b);
//                if (n == 2) ret += min(min(a, b), 3 * a - b);
//            }
//            cout << ret << endl;
//        }
//    }
//
//    return 0;
//}


//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n, a, b, ret = 0;
//        cin >> n >> a >> b;
//        if (n <= 2)
//        {
//            cout << min(a, b);
//        }
//        else
//        {
//            if (3 * a < 2 * b)
//            {
//                ret += n / 2 * a;
//                n %= 2;
//                if (n != 0) ret += min(min(a, b), b - a);
//            }
//            else
//            {
//                ret += n / 3 * b;
//                n %= 3;
//                if (n == 1) ret += min(min(a, b), 2 * a - b);
//                else if (n == 2) ret += min(min(a, b), 3 * a - b);
//            }
//            cout << ret << endl;
//        }
//    }
//
//    return 0;
//}


//#include<iostream>
//#include<queue>
//using namespace std;
//
//int main()
//{
//    int n, k;
//    cin >> n >> k;
//    priority_queue<int, vector<int>, greater<int>> heap;
//    for (int i = 0; i < n; i++)
//    {
//        int num;
//        cin >> num;
//        heap.push(num);
//    }
//    int num = 0;
//    int ret = 0;
//    while (heap.top() + num <= k)
//    {
//        ret++;
//        int top = heap.top();
//        heap.pop();
//        num += top;
//        heap.push(top * 2);
//    }
//
//    cout << ret << endl;
//    return 0;
//}


//#include<iostream>
//#include<cmath>
//using namespace std;
//
//bool func(long long num)
//{
//    if (num <= 1) return false;
//    for (long long i = 2; i <= sqrt(num); i++)
//    {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//
//int main()
//{
//    int T = 0;
//    cin >> T;
//    while (T--)
//    {
//        long long a = 0, b = 0;
//        cin >> a >> b;
//        if ((a == 1 && func(b)) || (b == 1 && func(a)))
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
//    }
//    return 0;
//}


//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 该数组最长严格上升子序列的长度
//     * @param a int整型vector 给定的数组
//     * @return int整型
//     */
//    int LIS(vector<int>& a)
//    {
//        vector<int> arr;
//        int n = a.size();
//        for (int i = 0; i < n; i++)
//        {
//            int num = a[i];
//            if (arr.empty() || arr.back() < num)
//            {
//                arr.push_back(num);
//            }
//            else
//            {
//                int left = 0, right = arr.size();
//                while (left < right)
//                {
//                    int mid = left + (right - left) / 2;
//                    if (arr[mid] < num)
//                    {
//                        left = mid + 1;
//                    }
//                    else
//                    {
//                        right = mid;
//                    }
//                }
//                arr[left] = num;
//            }
//        }
//        return arr.size();
//    }
//};


//#include<iostream>
//#include<unordered_set>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//
//int main()
//{
//    string s;
//    cin >> s;
//    reverse(s.begin(), s.end());
//    int i = 0;
//    for (; i < s.size();)
//    {
//        if (s[i] != '0')
//            break;
//        else
//            i++;
//    }
//    s = s.substr(i);
//    unordered_set<char> st;
//    string ret;
//    for (auto& ch : s)
//    {
//        if (!st.count(ch))
//        {
//            st.insert(ch);
//            ret += ch;
//        }
//    }
//
//    cout << ret << endl;
//
//    return 0;
//}

//消除整数
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int T = 0;
//    cin >> T;
//    while (T--)
//    {
//        int H = 0;
//        cin >> H;
//        int ret = 0;
//        long long a = 1;
//        while (H)
//        {
//            H -= a;
//            ret++;
//            if (H % (2 * a) == 0)
//            {
//                a *= 2;
//            }
//        }
//        cout << ret << endl;
//    }
//    return 0;
//}


//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    vector<int> arr(n);
//    for (auto& i : arr) cin >> i;
//    int ret = 0;
//    for (int i = 0; i < n;)
//    {
//        if (i == n - 1)
//        {
//            ret++;
//            break;
//        }
//        if (arr[i] < arr[i + 1])
//        {
//            while (i + 1 < n && arr[i] <= arr[i + 1]) i++;
//            ret++;
//        }
//        else if (arr[i] > arr[i + 1])
//        {
//            while (i + 1 < n && arr[i] >= arr[i + 1]) i++;
//            ret++;
//        }
//        else
//        {
//            while (i + 1 < n && arr[i] == arr[i + 1]) i++;
//        }
//        i++;
//    }
//    cout << ret << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

///**
// * struct TreeNode {
// *	int val;
// *	struct TreeNode *left;
// *	struct TreeNode *right;
// *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// * };
// */
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param root TreeNode类
//     * @return int整型
//     */
//     //树形dp 后序遍历
//    int ret = -0x3f3f3f3f;
//    int PathSum(TreeNode* root)
//    {
//        if (root == nullptr) return 0;
//        int l = max(PathSum(root->left), 0);//左边单径最大和
//        int r = max(PathSum(root->right), 0);//左边单径最大和
//        ret = max(ret, root->val + l + r);//路径最大和
//        return root->val + max(r, l);//经过root的最大单径
//    }
//    int maxPathSum(TreeNode* root)
//    {
//        PathSum(root);
//        return ret;
//    }
//};


//#include<iostream>
//
//using namespace std;
//bool vis[15] = { false };
//int ret = 0;
//int arr[15];
//int n = 0;
//
//void dfs(int pos)
//{
//    if (pos == n)
//    {
//        ret++;
//        return;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (!vis[i] && (arr[i] == i || !vis[arr[i]]))
//        {
//            vis[i] = true;
//            dfs(pos + 1);
//            vis[i] = false;
//        }
//    }
//}
//
//int main()
//{
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) cin >> arr[i];
//
//    for (int i = 1; i <= n; i++)
//    {
//        vis[i] = true;
//        dfs(1);
//        vis[i] = false;
//    }
//
//    cout << ret << endl;
//    return 0;
//}


//#include <iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//    int q = 0;
//    cin >> q;
//    while (q--)
//    {
//        string s;
//        cin >> s;
//
//        int n = s.size();
//        for (int i = n - 1; i >= 0; i--)
//        {
//            if ((s[i] - '0') % 2 == 0)
//            {
//                swap(s[i], s[n - 1]);
//                cout << s << endl;
//                break;
//            }
//        }
//        if ((s[n - 1] - '0') % 2 != 0) cout << -1 << endl;
//    }
//
//}
//// 64 位输出请用 printf("%lld")


//走迷宫
//#include <iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//typedef pair<int, int> PII;
//
//int main()
//{
//    int n, m, x1, x2, y1, y2;
//    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
//    x1 -= 1;
//    y1 -= 1;
//    x2 -= 1;
//    y2 -= 1;
//
//    vector<vector<char>> arr(n, vector<char>(m));
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> arr[i][j];
//        }
//    }
//    queue<PII> q;
//    q.emplace(x1, y1);
//    int level = 1;
//    int ret = 0;
//    while (q.size())
//    {
//        while (level--)
//        {
//            auto& [i, j] = q.front();
//            if (i == x2 && j == y2)
//            {
//                cout << ret << endl;
//                return 0;
//            }
//            q.pop();
//            for (int k = 0; k < 4; k++)
//            {
//                int x = i + dx[k], y = j + dy[k];
//                if (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] == '.')
//                {
//                    q.emplace(x, y);
//                    arr[x][y] = '*';
//                }
//            }
//        }
//        level = q.size();
//        ret++;
//    }
//
//    cout << -1 << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

//#include <functional>
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 计算成功举办活动需要多少名主持人
//     * @param n int整型 有n个活动
//     * @param startEnd int整型vector<vector<>> startEnd[i][0]用于表示第i个活动的开始时间，startEnd[i][1]表示第i个活动的结束时间
//     * @return int整型
//     */
//    int minmumNumberOfHost(int n, vector<vector<int> >& startEnd)
//    {
//        priority_queue<int, vector<int>, greater<int>> pq;
//        sort(startEnd.begin(), startEnd.end());
//        pq.push(startEnd[0][1]);
//        for (int i = 1; i < startEnd.size(); i++)
//        {
//            if (pq.top() <= startEnd[i][0])
//            {
//                pq.pop();
//                pq.push(startEnd[i][1]);
//            }
//            else
//            {
//                pq.push(startEnd[i][1]);
//            }
//        }
//        return pq.size();
//    }
//};


//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n = 0, m = 0;
//    cin >> n >> m;
//    int ret = n;
//    int num = m - 1;
//    while (num--)
//    {
//        ret = ret * (n - 1) % 109;
//    }
//
//    cout << ret << endl;
//    return 0;
//}
//


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//    int n, p;
//    cin >> n >> p;
//    vector<int> arr(n);
//    for (int i = 0; i < n; i++) cin >> arr[i];
//    sort(arr.begin(), arr.end());
//    p *= 2;
//    int ret = 0;
//    for (int left = 0, right = 0; right < n; right++)
//    {
//        while (arr[right] - arr[left] > p)
//        {
//            left++;
//        }
//        ret = max(ret, right - left + 1);
//    }
//
//    cout << ret << endl;
//    return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    double n = 0;
//    cin >> n;
//    vector<long long> arr(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//
//    vector<long long> f(n);
//    vector<long long> g(n);
//    f[0] = arr[0];
//
//    long long ret = f[0];
//    for (int i = 1; i < n; i++)
//    {
//        f[i] = g[i - 1] + arr[i];
//        g[i] = max(f[i - 1], g[i - 1]);
//        ret = max(ret, max(f[i], g[i]));
//    }
//    cout << ret << endl;
//
//    return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//    string s;
//    cin >> s;
//    int n = s.size();
//    int ret = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (i + 1 < n && s[i] == s[i + 1])
//        {
//            ret = 2;
//            break;
//        }
//        else if (i + 2 < n && s[i] == s[i + 2])
//        {
//            ret = 3;
//        }
//    }
//    cout << (ret == 0 ? -1 : ret) << endl;
//    return 0;
//}

//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    vector<int>  arr(n);
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//        sum += arr[i];
//    }
//
//    if (sum % 2 != 0)
//    {
//        cout << "false" << endl;
//        return 0;
//    }
//    vector<bool> dp(n + 1);
//    dp[0] = true;
//    sum /= 2;
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = arr[i - 1]; j <= sum; j++)
//        {
//            dp[j] = dp[j] || dp[j - arr[i - 1]];
//        }
//    }
//    if (dp[sum])    cout << "true" << endl;
//    else cout << "false" << endl;
//
//}
//// 64 位输出请用 printf("%lld")

//#include <iostream>
//#include <string>
//#include <cmath>
//#include <map>
//
//using namespace std;
//
//bool func(int num)
//{
//    if (num <= 1) return false;
//    for (int i = 2; i < num; i++)
//    {
//        if (num % i == 0)
//            return false;
//    }
//    return true;
//}
//
//int main()
//{
//    map<char, int> hash;
//    string s;
//    getline(cin, s);
//    // cout << s << endl;
//    int maxn = -0x3f3f3f3f;
//    int minn = 0X3f3f3f3f;
//    for (auto& ch : s)
//    {
//        if (ch >= 'a' && ch <= 'z')
//            hash[ch]++;
//    }
//    for (auto& [a, b] : hash)
//    {
//        maxn = max(b, maxn);
//        minn = min(b, minn);
//    }
//    int num = maxn - minn;
//    if (func(num))
//    {
//        cout << "Lucky Word" << endl;
//        cout << num << endl;
//    }
//    else
//    {
//        cout << "No Answer" << endl;
//        cout << 0 << endl;
//    }
//    return 0;
//}



//#include <iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//    int sum[2] = { 0 };
//    int n = 0;
//    cin >> n;
//    string s;
//    cin >> s;
//    for (auto ch : s) sum[ch - '0']++;
//
//    int left = 0, right = 0, ret = 0, m = s.size();
//    int count[2] = { 0 };
//
//    while (right < n - 1)
//    {
//        count[s[right] - '0']++;
//
//        if (right - left + 1 > m / 2)
//        {
//            count[s[left] - '0']--;
//            left++;
//        }
//
//        if (right - left + 1 == m / 2 && count[0] * 2 == sum[0] && count[1] * 2 == sum[1])
//        {
//            ret += 2;
//        }
//        right++;
//    }
//    cout << ret << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int N = 0;
//    cin >> N;
//    vector<vector<int>> dp(N + 1, vector<int>(N + 1));
//    int x = 0;
//    for (int i = 1; i <= N; i++)
//    {
//        for (int j = 1; j <= N; j++)
//        {
//            cin >> x;
//            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + x;
//        }
//    }
//
//    int ret = -128;
//    for (int x1 = 1; x1 <= N; x1++)
//    {
//        for (int y1 = 1; y1 <= N; y1++)
//        {
//            for (int x2 = x1; x2 <= N; x2++)
//            {
//                for (int y2 = y1; y2 <= N; y2++)
//                {
//                    ret = max(ret, dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1]);
//                }
//            }
//        }
//    }
//
//    cout << ret << endl;
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param m int整型vector<vector<>>
//     * @return int整型
//     */
//    bool vis[200] = { false };
//    int citys(vector<vector<int> >& m) {
//        int n = m.
//            size();
//        int ret = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (!vis[i])
//            {
//                bfs(m, i);
//                ret++;
//            }
//        }
//        return ret;
//    }
//
//    void bfs(vector<vector<int> >& m, int pos)
//    {
//        queue<int> q;
//        q.emplace(pos);
//        while (q.size())
//        {
//            int pos = q.front();
//            q.pop();
//            for (int i = 0; i < m.size(); i++)
//            {
//                if (!vis[i] && m[pos][i])
//                {
//                    q.push(i);
//                    vis[i] = true;
//                }
//            }
//        }
//    }
//};

///**
// * struct TreeNode {
// *	int val;
// *	struct TreeNode *left;
// *	struct TreeNode *right;
// *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// * };
// */
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param pRoot TreeNode类
//     * @return bool布尔型
//     */
//    int IsBalanced(TreeNode* pRoot)
//    {
//        if (pRoot == nullptr) return 0;
//        int left = IsBalanced(pRoot->left);
//        if (left == -1) return -1;
//        int right = IsBalanced(pRoot->right);
//        if (right == -1) return -1;
//        return abs(left - right) <= 1 ? max(left, right) + 1 : -1;
//    }
//
//    bool IsBalanced_Solution(TreeNode* pRoot) {
//        return IsBalanced(pRoot) != -1;
//    }
//};

//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param m int整型vector<vector<>>
//     * @return int整型
//     */
//    bool vis[200] = { false };
//    int citys(vector<vector<int> >& m) {
//        int n = m.
//            size();
//        int ret = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (!vis[i])
//            {
//                dfs(m, i);
//                ret++;
//            }
//        }
//        return ret;
//    }
//
//    void dfs(vector<vector<int> >& m, int pos)
//    {
//        vis[pos] = true;
//        for (int i = 0; i < m.size(); i++)
//        {
//            if (!vis[i] && m[pos][i])
//                dfs(m, i);
//        }
//    }
//};


//#include <iostream>
//#include<unordered_set>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//    unordered_set<string> hash;
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        string s;
//        cin >> s;
//        sort(s.begin(), s.end());
//        hash.insert(s);
//    }
//
//    cout << hash.size() << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        int h, a, H, A;
//        cin >> h >> a >> H >> A;
//
//        if (a >= H)
//        {
//            cout << -1 << endl;
//            continue;
//        }
//
//        int m = H / a + (H % a != 0 ? 1 : 0);
//        int n = m - 1;
//        int x = n * A;
//
//        int ret = h / x - (h % x == 0 ? 1 : 0);
//        cout << ret << endl;
//    }
//
//    return 0;
//}
// 64 位输出请用 printf("%lld")

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    vector<char> arr(n);
//    int n1 = 0, n0 = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//        if (arr[i] == '1') n1++;
//        if (arr[i] == '0') n0++;
//    }
//    int l1 = 0, l0 = 0;
//    int len = n / 2;
//    int ret = 0;
//    int left = 0, right = 0;
//
//    for (; left < n; right++)
//    {
//        right %= n;
//        if (arr[right] == '1') l1++;
//        if (arr[right] == '0') l0++;
//
//        if (right - left + 1 > len)
//        {
//            if (arr[left] == '1') l1--;
//            if (arr[left] == '0') l0--;
//            left++;
//        }
//
//        if (l1 == n1 && l0 == n0) ret++;
//    }
//
//    cout << ret << endl;
//    return 0;
//}


//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//    int V = 0, n = 0;
//    cin >> V >> n;
//    vector<int> arr;
//    for (int i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        cin >> tmp;
//        arr.push_back(tmp);
//    }
//    vector<int> dp(V + 1, 0);
//
//    int ret = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = V; j >= arr[i]; j--)
//        {
//            dp[j] = max(dp[j], dp[j - arr[i]] + arr[i]);
//            ret = max(ret, dp[j]);
//        }
//    }
//
//    cout << V - ret << endl;
//    return 0;
//}
//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    vector<int> dp(n, 0);
//    int maxval = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> dp[i];
//        maxval = max(dp[i], maxval);
//    }
//    for (auto i : dp)
//    {
//        if (maxval % i == 0)
//        {
//            int x = maxval / i;
//            if (x & (x - 1) != 0)
//            {
//                cout << "NO" << endl;
//                return 0;
//            }
//        }
//        else
//        {
//            cout << "NO" << endl;
//            return 0;
//        }
//    }
//    cout << "YES" << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

//#include <iostream>
//#include<string>
//using namespace std;
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    vector<long long> arr(n, 0);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//
//    long long minval = arr[0];
//    for (int i = 0; i < n; i++)
//    {
//        minval = min(minval, arr[i]);
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != minval && arr[i] != (minval << 1))
//        {
//            cout << "NO" << endl;
//            return 0;
//        }
//    }
//    cout << "YES" << endl;
//
//    return 0;
//}


//int main()
//{
//    string A, B;
//    cin >> A >> B;
//    int n = A.size();
//    int m = B.size();
//
//    int ret = 0x3f3f3f3f;
//    for (int i = 0; i <= m - n; i++)
//    {
//        int tmp = 0;
//        int left = i;
//        for (int j = 0; j < n; j++)
//        {
//            if (A[j] != B[left]) tmp++;
//            left++;
//        }
//        ret = min(tmp, ret);
//    }
//
//    cout << ret << endl;
//}
// 64 位输出请用 printf("%lld")


//#include <iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    cin >> s;
//
//    int n = s.size();
//    vector<vector<int>> dp(n + 1, vector<int>(n + 1.0));
//
//    for (int i = n - 1; i >= 0; i--)
//    {
//        dp[i][i] = 1;
//        for (int j = i + 1; j < n; j++)
//        {
//            if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1] + 2;
//            else dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
//        }
//    }
//
//    cout << dp[0][n - 1] << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

//#include <iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    cin >> s;
//
//    int n = s.size();
//    vector<vector<int>> dp(n + 1, vector<int>(n + 1.0));
//    dp[0][0] = 1;
//    dp[n - 1][n - 1] = 1;
//
//    for (int i = n - 2; i >= 0; i--)
//    {
//        for (int j = 1; j <= n - 1; j++)
//        {
//            if (i == j) dp[i][j] = 1;
//            if (i < j)
//            {
//                if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1] + 2;
//                else dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
//            }
//        }
//    }
//
//    cout << dp[0][n - 1] << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

//#include <iostream>
//using namespace std;
//int n;
//int main()
//{
//    cin >> n;
//    int left = 1, right = n;
//    while (left <= right)
//    {
//        cout << left << " ";
//        left++;
//        if (left <= right)
//        {
//            cout << right << " ";
//            right--;
//        }
//    }
//    return 0;
//}

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//
//    int left = 1, right = n;
//    vector<int> ret;
//    while (left < right)
//    {
//        ret.push_back(left++);
//        ret.push_back(right--);
//    }
//    ret.push_back(right);
//
//    for (int i = 0; i < n - 1; i++)
//    {
//        cout << ret[i] << " ";
//    }
//
//    cout << ret[n - 1];
//    return 0;
//}
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//bool check(string s)
//{
//    int n = s.size();
//    int left = 0, right = n - 1;
//    while (left < right)
//    {
//        if (s[left] != s[right]) return false;
//        else
//        {
//            left++;
//            right--;
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    string s;
//    cin >> s;
//
//    char c = s[0];
//    int flag = 1;
//    for (auto ch : s)
//    {
//        if (c != ch)
//        {
//            flag = 0;
//            break;
//        }
//    }
//    if (flag == 1)
//    {
//        cout << 0 << endl;
//    }
//    else
//    {
//        if (check(s))
//        {
//            cout << s.size() - 1 << endl;
//        }
//        else
//        {
//            cout << s.size() << endl;
//        }
//    }
//    return 0;
//}
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    vector<int> arr(n);
//
//    for (auto& i : arr) cin >> i;
//    vector<int> dp(n + 1, 0);
//
//    int ret = -0x3f3f3f3f;
//    for (int i = 1; i <= n; i++)
//    {
//        dp[i] = max(dp[i - 1], 0) + arr[i - 1];
//
//        ret = max(dp[i], ret);
//    }
//
//    cout << ret << endl;
//    return 0;
//}
//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//int main()
//{
//    long long a = 0, h = 0, b = 0, k = 0;
//    cin >> a >> h >> b >> k;
//    long long ret = 0;
//    long long n = min(h / b, k / a);
//    ret = n * (a + b);
//
//    h -= n * b;
//    k -= n * a;
//
//
//    if (h > 0 && k > 0)
//    {
//        h -= b;
//        k -= a;
//        ret += a + b;
//    }
//    if (h > 0) ret += a * 10;
//    if (k > 0) ret += b * 10;
//
//    cout << ret << endl;
//    return 0;
//}
//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//bool check(unordered_map<char, int>& hash1, unordered_map<char, int>& hash2, vector<string>& v, int left, int right)
//{
//    for (auto& [a, b] : hash1)
//    {
//        if (hash2.count(a))
//        {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    while (n--)
//    {
//        vector<string> v;
//        int num = 0;
//        cin >> num;
//        while (num--)
//        {
//            string s;
//            cin >> s;
//            v.push_back(s);
//        }
//        int k = v.size();
//        int left = 0, right = k - 1;
//        while (left < right)
//        {
//            unordered_map<char, int> hash1;
//            unordered_map<char, int> hash2;
//            for (auto ch : v[left]) hash1[ch]++;
//            for (auto ch : v[right]) hash2[ch]++;
//            if (check(hash1, hash2, v, left, right))
//            {
//                left++;
//                right--;
//            }
//            else
//            {
//                break;
//            }
//        }
//        if (left >= right)
//            cout << "Yes" << endl;
//        else
//            cout << "No" << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b)
//{
//    if (b == 0) return a;
//    return gcd(b, a % b);
//}
//
//
//int main()
//{
//
//    int n = 0, a = 0;
//    while (cin >> n >> a)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            int tmp = 0;
//            cin >> tmp;
//            if (tmp <= a) a += tmp;
//            else a += gcd(a, tmp);
//        }
//
//        cout << a << endl;
//    }
//    return 0;
//}
// 64 位输出请用 printf("%lld")
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 计算01背包问题的结果
//     * @param V int整型 背包的体积
//     * @param n int整型 物品的个数
//     * @param vw int整型vector<vector<>> 第一维度为n,第二维度为2的二维数组,vw[i][0],vw[i][1]分别描述i+1个物品的vi,wi
//     * @return int整型
//     */
//    int knapsack(int V, int n, vector<vector<int> >& vw) {
//        int num = vw.size();
//        vector<int> dp(V + 1, 0);
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = V; j >= vw[i - 1][0]; j--)
//            {
//                dp[j] = max(dp[j], dp[j - vw[i - 1][0]] + vw[i - 1][1]);
//            }
//        }
//
//        return dp[V];
//    }
//};

//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//typedef pair<int, int> PII;
//PII arr[200010];
//int n = 0, k = 0;
//
//int main()
//{
//
//    cin >> n >> k;
//    for (int i = 0; i < n; i++) cin >> arr[i].first;
//    for (int i = 0; i < n; i++) cin >> arr[i].second;
//
//    sort(arr, arr + n, [](PII& a, PII& b)
//        {
//            if (a.second != b.second) return a.second > b.second;
//            return a.first < b.first;
//        });
//
//    long long ret1 = 0, ret2 = 0;
//    for (int i = 0; i < k; i++)
//    {
//        ret1 += arr[i].first;
//        ret2 += arr[i].second;
//    }
//    cout << ret1 << " " << ret2 << endl;
//    return 0;
//}

//#include<iostream>
//#include<vector>
//#include<map>
//#include<cmath>
//
//using namespace std;

//int main()
//{
//    long long n = 0, k = 0;
//    cin >> n >> k;
//    vector<long long> a(n, 0);
//    vector<long long> b(n, 0);
//    long long tmp = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> tmp;
//        if (i - 1 < 0) a[i] = tmp;
//        else a[i] = a[i - 1] + tmp;
//    }
//    tmp = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> tmp;
//        if (i - 1 < 0) b[i] = tmp;
//        else b[i] = b[i - 1] + tmp;
//    }
//
//    long long begin = 0, max1 = 0, max2 = 0, num1 = 0, num2 = 0;
//    for (long long i = 0; i + k - 1 < n; i++)
//    {
//        if (i - 1 < 0)
//        {
//            num1 = a[i + k - 1];
//            num2 = b[i + k - 1];
//        }
//        else
//        {
//            num1 = a[i + k - 1] - a[i - 1];
//            num2 = b[i + k - 1] - b[i - 1];
//        }
//
//        if (num1 > max1)
//        {
//            max1 = num1;
//            max2 = num2;
//            begin = i;
//        }
//        else if (num1 == max1 && num2 < max2)
//        {
//            max1 = num1;
//            max2 = num2;
//            begin = i;
//        }
//        else if (num1 == max1 && num2 == max2)
//        {
//            begin = min(begin, i);
//        }
//    }
//    cout << begin + 1 << endl;
//    return 0;
//}

//#include<iostream>
//#include<vector>
//#include<map>
//#include<cmath>
//
//using namespace std;
//
//int main()
//{
//    int n = 0, k = 0;
//    cin >> n >> k;
//    vector<long long> a(n, 0);
//    vector<long long> b(n, 0);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cin >> b[i];
//    }
//    long long begin = 0, max1 = 0, max2 = 0, num1 = 0, num2 = 0;
//    for (long long left = 0, right = 0; right < n; right++)
//    {
//        num1 += a[right];
//        num2 += b[right];
//        if (right - left + 1 > k)
//        {
//            num1 -= a[left];
//            num2 -= b[left];
//            left++;
//        }
        //if (num1 > max1)
        //{
        //    max1 = num1;
        //    max2 = num2;
        //    begin = left;
        //}
        //else if (num1 == max1 && num2 < max2)
        //{
        //    max1 = num1;
        //    max2 = num2;
        //    begin = left;
        //}
        //else if (num1 == max1 && num2 == max2)
        //{
        //    begin = min(begin, left);
        //}
//    }
//    cout << begin + 1 << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    string s;
//    int k = 0;
//    cin >> s >> k;
//    double count = 0;
//    int n = s.size();
//    double sum = 0;
//    int begin = 0;
//    for (int left = 0, right = 0; right < n; right++)
//    {
//        if (s[right] == 'C' || s[right] == 'G') count += 0.5;
//        if (right - left + 1 > k)
//        {
//            if (s[left] == 'C' || s[left] == 'G') count -= 0.5;
//            left++;
//        }
//        if (right - left + 1 == k && count > sum)
//        {
//            begin = left;
//            sum = count;
//        }
//    }
//    cout << s.substr(begin, k) << endl;
//}
// 64 位输出请用 printf("%lld")
// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//bool check(int n)
//{
//    vector<int> arr;
//    while (n)
//    {
//        arr.push_back(n % 10);
//        n /= 10;
//    }
//    int num = arr.size();
//    for (int left = 0, right = 1; right < num; right++)
//    {
//        int tmp = arr[left] * 10 + arr[right];
//        if (tmp > 10)
//        {
//            int flag = 1;
//            for (int i = 2; i <= sqrt(tmp); i++)
//            {
//                if (tmp % i == 0) flag = 0;
//            }
//            if (flag) return true;
//        }
//        tmp = arr[right * 10] + arr[left];
//        if (tmp > 10)
//        {
//            int flag = 1;
//            for (int i = 2; i <= sqrt(tmp); i++)
//            {
//                if (tmp % i == 0) flag = 0;
//            }
//            if (flag) return true;
//        }
//    }
//    return false;
//}
//
//int main()
//{
//    int a = 0, b = 0;
//    cin >> a >> b;
//    int ret = 0;
//    for (int i = a; i <= b; i++)
//    {
//        if (check(i)) ret++;
//    }
//    cout << ret << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")


//模版拓扑排序
//#include<iostream>
//#include<unordered_map>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//int main()
//{
//    int n = 0, m = 0;
//    cin >> n >> m;
//    unordered_map<int, vector<int>> hash;
//    unordered_map<int, int> in;
//    for (int i = 0; i < m; i++)
//    {
//        int a = 0, b = 0;
//        cin >> a >> b;
//        in[a];
//        hash[a].push_back(b);
//        in[b]++;
//    }
//
//    vector<int> ret;
//    queue<int> q;
//    for (int i = 1; i <= n; i++)
//    {
//        if (in[i] == 0) q.push(i);
//    }
//
//    while (q.size())
//    {
//        int front = q.front();
//        q.pop();
//        ret.push_back(front);
//        for (auto i : hash[front])
//        {
//            if (--in[i] == 0) q.push(i);
//        }
//    }
//
//    if (ret.size() == n)
//    {
//        int i = 0;
//        for (; i < ret.size() - 1; i++)
//        {
//            cout << ret[i] << " ";
//        }
//        cout << ret[i];
//    }
//    else
//    {
//        cout << -1 << endl;
//    }
//
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int hash[100100] = { 0 };
//    int n = 0, m = 0;
//    cin >> n >> m;
//    int maxval = 0;
//    for (int i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        cin >> tmp;
//        if (++hash[tmp] > maxval)
//            maxval = hash[tmp];
//    }
//
//
//    for (int i = 1; i <= maxval; i++)
//    {
//        int ret = 0;
//        for (int j = 0; j < 100100; j++)
//        {
//            if (hash[j] != 0)
//            {
//                ret += (hash[j] / i) + (hash[j] % i == 0 ? 0 : 1);
//            }
//        }
//        if (ret <= m)
//        {
//            cout << i << endl;
//            return 0;
//        }
//    }
//
//    cout << -1 << endl;
//    return 0;
//}



//删除相邻数字的最大分数
//#include <iostream>
//#include<vector>
//#include<cmath>
//
//using namespace std;
//
//int main() {
//    int hash[10010] = { 0 };
//    int n = 0;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        cin >> tmp;
//        hash[tmp] += tmp;
//    }
//
//    vector<int> f(10010, 0);
//    vector<int> g(10010, 0);
//
//    int ret = 0;
//    for (int i = 1; i < 10010; i++)
//    {
//        f[i] = hash[i] + g[i - 1];
//        g[i] = max(f[i - 1], g[i - 1]);
//        ret = max(ret, max(f[i], g[i]));
//    }
//    cout << ret << endl;
//    return 0;
//}
// 64 位输出请用 printf("%lld")
//组队竞赛
//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<int> arr(n * 3, 0);
//    for (auto& i : arr) {
//        cin >> i;
//    }
//    sort(arr.begin(), arr.end());
//    long long ret = 0;
//    for (int i = 3 * n - 2; n--; i -= 2)
//    {
//        ret += arr[i];
//    }
//
//    cout << ret << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")


//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//    int n = 0, maxcount = 0;
//    char maxval;
//    cin >> n;
//    string s;
//    cin >> s;
//    int hash[26] = { 0 };
//    for (auto i : s)
//    {
//        hash[i - 'a']++;
//        if (hash[i - 'a'] > maxcount)
//        {
//            maxval = i;
//            maxcount = hash[i - 'a'];
//        }
//    }
//
//    if (maxcount > (n + 1) / 2)
//    {
//        cout << "no" << endl;
//        return 0;
//    }
//
//    string ret(n, ' ');
//
//    int i = 0;
//    for (; hash[maxval - 'a'] > 0; i += 2)
//    {
//        ret[i] = maxval;
//        hash[maxval - 'a']--;
//    }
//
//    for (int j = 0; j < 26; j++)
//    {
//        while (hash[j] && j + 'a' != maxval)
//        {
//            if (i >= n) i = 1;
//            ret[i] = j + 'a';
//            i += 2;
//            hash[j]--;
//        }
//    }
//    cout << "yes" << endl;
//    cout << ret << endl;
//
//    return 0;
//}

//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param arr int整型vector the array
//     * @return int整型
//     */
//    int maxLength(vector<int>& arr) {
//        int n = arr.size();
//        int ret = 0;
//        int hash[100001] = { 0 };
//        int sum = 0;
//        for (int left = 0, right = 0; right < n; right++)
//        {
//            ret = max(ret, sum);
//            if (hash[arr[right]] > 0)
//            {
//                left = right;
//                memset(hash, sizeof(hash), sizeof(int));
//                sum = 1;
//            }
//            else
//            {
//                hash[arr[right]]++;
//                sum++;
//            }
//        }
//        ret = max(ret, sum);
//        return ret;
//    }
//};
//
//int main()
//{
//    vector<int> v = { 1,2,3,4,1,5,6,7,8,1 };
//    Solution().maxLength(v);
//    return 0;
//}