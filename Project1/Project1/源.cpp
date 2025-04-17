#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

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