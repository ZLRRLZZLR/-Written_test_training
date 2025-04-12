#include<iostream>
#include<cmath>
#include<vector>

using namespace std;



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