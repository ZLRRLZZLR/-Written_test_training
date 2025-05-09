
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    int n;
    cin >>n >> s;

    int ret = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            for(int k = j + 1;k < n;k++)
            {
                if(s[j] == s[k] && s[i] != s[j])
                ret++;
            }
        }
    }

    cout << ret << endl;
    return 0;
}



#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;


int main()
{
    string s;
    cin >> s;
    reverse(s.begin(),s.end());

    int i = 0;
    for(;i < s.size();)
    {
        if(s[i] != '0')
        break;
        else
        i++;
    }
    s = s.substr(i);
    set<char> st(s.begin(),s.end());
    auto bg = st.rbegin();
    string ret;
    while(bg != st.rend())
    {
        ret += *bg;
        bg++;
    }
    cout << stoi(ret) << endl;
    return 0;
}



#include<iostream>
#include<vector>

using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n = 0;
int m = 0;
int ret1 = 0;
int ret2 = 0x3f3f3f3f;
bool vis[31][31] = {false};

    void dfs(vector<vector<char>>& matrix,int i,int j,int pos)
    {
        if(matrix[i][j] == 'e')
        {
            ret1++;
            ret2 = min(ret2,pos);
            return ;
        }
        for(int k = 0;k < 4;k++)
        {
            int x = i + dx[k],y = j + dy[k];
            if(x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && (matrix[x][y] == '.' || matrix[x][y] == 'e'))
            {
                vis[x][y] = true;
                dfs(matrix,x,y,pos + 1);
                vis[x][y] = false;
            }
        }
    }

int main()
{
    cin >> n >> m;
    vector<vector<char>> arr(n,vector<char>(m));
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(arr[i][j] == 'k')
            {
            vis[i][j] = true;
            dfs(arr,i,j,0);
            vis[i][j] = false;
            break;
            }
        }
    }

    if(ret1 == 0) cout << -1 << endl;
    else cout << ret1 << " " << ret2 << endl;
    return 0;
}


class Solution {
    public:
        /**
         * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
         *
         * 递增路径的最大长度
         * @param matrix int整型vector<vector<>> 描述矩阵的每个数
         * @return int整型
         */
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    int n = 0;
    int m = 0;
    int ret = 0;
    bool vis[1001][1001] = {false};
        int solve(vector<vector<int> >& matrix) {
             n = matrix.size();
             m = matrix[0].size();
            for(int i = 0;i < n;i++)
            {
                for(int j = 0;j < m;j++)
                {
                    vis[i][j] = true;
                    dfs(matrix,i,j,1);
                    vis[i][j] = false;
                }
            }
            return ret;
        }
        void dfs(vector<vector<int> >& matrix,int i,int j,int pos)
        {
            for(int k = 0;k < 4;k++)
            {
                int x = i + dx[k],y = j + dy[k];
                if(x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && matrix[x][y] > matrix[i][j])
                {
                    vis[x][y] = true;
                    dfs(matrix,x,y,pos + 1);
                    vis[x][y] = false;
                }
            }
            ret = max(ret,pos);
        }
    };



#include<iostream>
#include<string>

using namespace std;
int main()
{
    int i = 0;
    string s;
    cin >> s;
    long long ISBN = 0;
    for(int j = 0;j < s.size() - 1;j++)
    {
        if(s[j] >= '0' && s[j] <= '9')
        {
            ISBN += (s[j] - '0') * (i + 1);
            i++;
        }
    }

    ISBN %= 11;
    if(ISBN != 10)
    {
    if(ISBN + '0' == s[s.size() - 1])
    {
        cout << "Right" << endl;
    }
    else
    {
        s[s.size() - 1] = ISBN + '0';
        cout << s << endl;
    }
    }
    else
    {
        if(s[s.size() - 1] == 'X')
        {
                    cout << "Right" << endl;
        }
            else
    {
        s[s.size() - 1] = 'X';
        cout << s << endl;
    }
    }


    return 0;
}

#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n ;
    cin >> n;
    if(n == 1) 
    {
        cout << 1 << endl;
        return 0;
    }
    if(n == 2)
    {
        cout << 2 << endl;
        return 0;
    }
    int a = 2;
    int c = 0;
    for(int i = 3;i <= n;i++)
    {
        c = a * 2;
        a = c;
    }

    cout << c << endl;
    return 0;
}

class Solution {
    public:
        /**
         * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
         *
         * 
         * @param str string字符串 
         * @return string字符串vector
         */
        int n = 0;
        vector<string> ret;
        set<string> st;
        bool vis[11] = {false};
        string s;
        void dfs(string str)
        {
            if(str.size() == n)
            {
                st.insert(str);
                return ;
            }
    
            for(int i = 0;i < n;i++)
            {
                if(!vis[i])
                {
                string tmp;
                tmp += str + s[i];
                vis[i] = true;
                dfs(tmp);
                vis[i] = false;
                }
            }
    
        }
    
        vector<string> Permutation(string str) 
        {
            n = str.size();
            s = str;
            for(int i = 0;i < n;i++)
            {
    
                string tmp;
                tmp += str[i];
                vis[i] = true;
                dfs(tmp);
                vis[i] = false;
            }
    
            return vector<string>(st.begin(),st.end());
        }
    };


#include<iostream>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<char,int> hash;
    int n = s.size();
    int ret = 0;
    for(int left = 0,right = 0;right < n;right++)
    {
        hash[s[right]]++;
        while(hash.size() > 2)
        {
            if(--hash[s[left]] == 0) hash.erase(s[left]);
            left++;
        }
        ret = max(ret,right - left + 1);
    }

    cout << ret << endl;
    return 0;
}

#include<iostream>
#include <string>
#include<cmath>
#include<algorithm>

using namespace std;

bool func(long long num)
{
    for(long long i = 2;i <= sqrt(num);i++)
    {
        if(num % i == 0) 
        {
            //cout << num << ":" << i << endl;
            return false;
        }
    }
    return true;
}


int main()
{
    string t;
    cin >> t;
    string tmp = t.substr(0,t.size() - 1);
    reverse(tmp.begin(),tmp.end());
    t += tmp;
    long long num = stoll(t);
    //cout << num << endl;
    if(func(num))
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << "noprime" << endl;
    }

    return 0;
}


#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> arr(n);
    int sum = 0;
    for(int i = 0;i < n;i++)
    {
        arr[i] = s[i] - '0';
        sum += arr[i];
    }

    if(sum % 2)
    {
        cout << "No" << endl;
    }
    else
    {
        sum /= 2;
        vector<bool> dp(sum + 1);
        dp[0] = true;

        for(int i = 1;i <= n;i++)
        {
            for(int j = sum;j >= arr[i - 1];j--)
            {
                dp[j] = dp[j] || dp[j - arr[i - 1]];
            }
        }

        if(dp[sum])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}



#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m;
    string s1 , s2;
    cin >> s1 >> s2;

    vector<vector<int>> dp(n + 1,vector<int>(m + 1));

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            if(s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
        }
    }

    cout << dp[n][m] <<endl;
    return 0;
}



#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n = 0,k = 0;
    cin >> n >> k;

    vector<int> arr(n);
    for(auto& i : arr) cin >> i;

    sort(arr.begin(),arr.end());
    int ret = 0;
    for(int left = 0,right = 0;right < n;right++)
    {
        while(arr[right] - arr[left] > k)
        {
            left++;
        }

        //cout << arr[left] << " : "<< arr[right] << endl;
        ret = max(ret,right - left + 1);
    }

    cout << ret << endl;
    return 0;
}



#include<iostream>
#include<cmath>
using namespace std;

bool func(long long a,long long b)
{
    long long num = a * b;
    if(num <= 1) return false;
    for(long long i = 2;i <= sqrt(num);i++)
    {
        if(num % i == 0) return false;
    }
    return true;
}


int main()
{
    int T = 0;
    cin >> T;
    while(T--)
    {
        long long a = 0,b = 0;
        cin >> a >> b;
        if(func(a,b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}




#include<iostream>
using namespace std;

int main()
{
    int q = 0;
    cin >> q;
    while(q--)
    {
        string s;
        cin >> s;
        int i = 0;
        for(;i < s.size();i++)
        {
            if(s[i] % 2 == 0) break;
        }
        if(i == s.size())
        {
            cout << -1 << endl;
        }
        else
        {
            string ret = s.substr(0,i) + s.substr(i + 1,s.size()) + s[i];
            int pos = 0;
            for(;pos < ret.size() ;pos++)
            {
                if(ret[pos] != '0') break;
            }
            ret = ret.substr(pos,ret.size());
            while(pos > 0)
            {
                ret += '0';
                pos--;
            }
            cout << ret << endl;
        }
    }
    return 0;
}



class Solution {
    public:
        /**
         * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
         *
         * 计算成功举办活动需要多少名主持人
         * @param n int整型 有n个活动
         * @param startEnd int整型vector<vector<>> startEnd[i][0]用于表示第i个活动的开始时间，startEnd[i][1]表示第i个活动的结束时间
         * @return int整型
         */
        int minmumNumberOfHost(int n, vector<vector<int> >& startEnd) {
            sort(startEnd.begin(),startEnd.end(),[&](vector<int>a,vector<int>b)
            {
                return a[0] == b[0] ? a[1] < b[1] : a[0] < b[0];
            });
    
            unordered_set<int> hash;
            long long ret = 1,flag = startEnd[0][1];
            for(long long i = 1;i < n;i++)
            {
                if(flag > startEnd[i][0])
                {
                    ret++;
                }
                startEnd[i][1];
            }
            return ret;
        }
    };


#include<iostream>
#include<vector>
#include<string>
using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
bool vis[1001][1001] = {false};

int n = 0,m = 0;
int x1 = 0,y1 = 0,x2 = 0,y2 = 0;
int ret = 0x3f3f3f3f;
int pos = 0;


void dfs(vector<string>& arr,int i,int j)
{
    if(i == x2 && j == y2)
    {
        ret = min(ret,pos);
        return ;
    }
    for(int k = 0;k < 4;k++)
    {
        int x = i + dx[k],y = j + dy[k];
        if(x >= 0 && x < m && y >= 0 && y < n && !vis[x][y] && arr[x][y] == '.')
        {
            vis[x][y] = true;
            pos++;
            dfs(arr,x,y);
            vis[x][y] = false;
            pos--;
        }
    }
}

int main()
{
    vector<string> arr;
    cin >> n >> m;

    cin >> x1 >> y1 >> x2 >> y2;
    x1--;
    y1--;
    x2--;
    y2--;
    for(int i = 0;i < n;i++)
    {
        string s;
        cin >> s;
        arr.push_back(s);
    }

    dfs(arr,x1,y1);
    cout << (ret == 0x3f3f3f3f ? -1 : ret) << endl;
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int n = 0,m = 0;
    cin >> n >> m;

    long long ret = n;
    int tmp = m - 1;
    while(tmp--)
    {
        ret *= (n - 1) % 109;
    }
    cout << ret << endl;
    return 0;
}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long n = 0,p = 0;
    cin >> n >> p;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
    {
        cin >>arr[i];
    }
    sort(arr.begin(),arr.end());

    int pos = n / 2;
    int left = arr[pos] - p;
    int right = arr[pos] + p;
    int ret = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] >= left && arr[i] <= right) ret++;
    }

    cout << ret << endl;
    return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long n = 0,p = 0;
    cin >> n >> p;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
    {
        cin >>arr[i];
    }
    sort(arr.begin(),arr.end());

    for(int i = 0;i < n;i++)
    {

    }

    return 0;
}


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    double n = 0;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    vector<long long> f(n);
    vector<long long> g(n);
    f[0] = arr[0];

    long long ret = f[0];
    for(int i = 1;i < n;i++)
    {
        f[i] = g[i - 1] + arr[i];
        g[i] = max(f[i - 1],g[i - 1]);
        ret = max(ret,max(f[i],g[i]));
    }
    cout << ret << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int sum = 0;
    vector<int> arr(n);
    // cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        // cout << arr[i];
    }
    sort(arr.begin(), arr.end());
    sum /= 2;
    int tmp = 0;
    for (int left = 0, right = 0; right < n; right++)
    {
        tmp += arr[right];
        // cout << arr[right];
        if (tmp == sum)
        {
            cout << "true" << endl;
            return 0;
        }
        if (tmp > sum)
        {
            tmp -= arr[left--];
        }
    }
    cout << "false" << endl;

    return 0;
}

#include <iostream>
#include <string>
#include <cmath>
#include <map>

using namespace std;

bool func(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    map<char, int> hash;
    string s;
    getline(cin, s);
    // cout << s << endl;
    int maxn = -0x3f3f3f3f;
    int minn = 0X3f3f3f3f;
    for (auto &ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
            hash[ch]++;
    }
    for (auto &[a, b] : hash)
    {
        maxn = max(b, maxn);
        minn = min(b, minn);
    }
    int num = maxn - minn;
    if (num && func(num))
    {
        cout << "Lucky Word" << endl;
        cout << num << endl;
    }
    else
    {
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }
    return 0;
}

class Solution
{
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param schedule int整型vector<vector<>>
     * @return bool布尔型
     */
    bool hostschedule(vector<vector<int>> &schedule)
    {
        sort(schedule.begin(), schedule.end(), [&](vector<int> a, vector<int> b)
             { return a[0] == b[0] ? a[1] < b[1] : a[0] < b[0]; });
        int n = schedule.size();
        int flag = schedule[0][1];
        for (int i = 1; i < n; i++)
        {
            // cout << flag << " " << schedule[i][0] << endl;
            if (flag <= schedule[i][0])
            {

                flag = schedule[i][1];
            }
            else
                return false;
        }
        return true;
    }
};

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int V = 0, n = 0;
    cin >> V >> n;
    vector<int> v;
    int cur = n;
    while (cur--)
    {
        int tmp = 0;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for (int left = 0, right = n - 1; left <= right;)
    {
        if (V >= v[right])
            V -= v[right--];
        else if (V >= v[left])
            V -= v[left++];
        else
            break;
    }

    cout << V << endl;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<long long> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long minval = arr[0];
    for (int i = 0; i < n; i++)
    {
        minval = min(minval, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != minval && arr[i] != (minval << 1))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B;
    cin >> B >> A;
    int n = A.size(), m = B.size();
    int hash[26] = {0};
    for (auto ch : A)
    {
        hash[ch - 'a']++;
    }
    for (auto ch : B)
    {
        hash[ch - 'a']--;
    }
    int gap = n - m;
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] < 0)
            hash[i] = 0;
        while (hash[i] > 0 && gap > 0)
        {
            hash[i]--;
            gap--;
        }
        if (gap == 0)
            break;
    }
    int ret = 0;
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > 0)
            ret++;
    }

    cout << ret << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int V = 0, n = 0;
    cin >> V >> n;
    vector<int> v;
    int cur = n;
    while (cur--)
    {
        int tmp = 0;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for (int left = 0, right = n - 1; left <= right;)
    {
        if (V >= v[right])
            V -= v[right--];
        else if (V >= v[left])
            V -= v[left++];
        else
            break;
    }

    cout << V << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    long long n = 0;
    cin >> n;

    vector<double> arr(n);
    for (auto &i : arr)
        cin >> i;

    vector<double> dp(n + 1, 0);
    double ret = -0x3f3f3f3f;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i - 1] < 0)
            dp[i] = arr[i - 1];
        else
            dp[i] = max(arr[i - 1], dp[i - 1] + arr[i - 1]);
        ret = max(ret, dp[i]);
    }

    cout << (long long)ret << endl;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long t = 0;
    cin >> t;
    while (t--)
    {
        long long n = 0;
        string s;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string tmp;
            cin >> tmp;
            s += tmp[0];
        }

        if (n == 1)
        {
            cout << "Yes" << endl;
            continue;
        }

        int m = n - 1, left = 0, right = 0;
        if (n % 2 == 0)
        {
            left = m / 2;
            right = left + 1;
        }
        else
        {
            left = right = m / 2;
        }

        int flag = 1;
        while (left >= 0 && right < n)
        {
            if (s[left] != s[right])
            {
                cout << "No" << endl;
                flag = 0;
                break;
            }
            left--;
            right++;
        }
        if (flag)
            cout << "Yes" << endl;
    }
    return 0;
}

#include <string>
class Solution
{
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param param string字符串
     * @return string字符串
     */
    string compressString(string param)
    {
        char flag = param[0];
        long long num = 0;
        string ret;
        for (auto ch : param)
        {
            if (ch == flag)
            {
                num++;
            }
            else
            {
                ret += flag;
                if (num > 1)
                {
                    ret += to_string(num);
                }
                num = 1;
                flag = ch;
            }
        }

        ret += flag;
        if (num > 1)
        {
            ret += to_string(num);
        }

        return ret;
    }
};

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0, k = 0;
    cin >> n >> k;

    vector<pair<double, int>> arr;
    for (int i = 1; i <= n; i++)
    {
        int a = 0, b = 0;
        cin >> a >> b;
        if (i >= k)
        {
            double num = a / b;
            arr.push_back({num, i});
        }
    }

    sort(arr.begin(), arr.end(), [](pair<double, int> p1, pair<double, int> p2)
         {
        if(p1.first == p2.first) return p1.second < p2.second;
        else return p1.first > p2.first; });

    cout << arr[0].second << endl;
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n = 0, m = 0;
    scanf("%d%d", &n, &m);
    vector<vector<long long>> arr(n, vector<long long>(m, 0));

    vector<long long> ROWS(n, 0);
    vector<long long> LOWS(m, 0);

    for (int i = 0; i < n; i++)
    {
        long long tmp = 0;
        for (int j = 0; j < m; j++)
        {
            scanf("%ld", &arr[i][j]);
            tmp += arr[i][j];
        }
        ROWS[i] = tmp;
    }

    for (int j = 0; j < m; j++)
    {
        long long tmp = 0;
        for (int i = 0; i < n; i++)
        {
            tmp += arr[i][j];
        }
        LOWS[j] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            long long num = ROWS[i] + LOWS[j] - arr[i][j];
            printf("%ld ", num);
        }
        printf("\n");
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    string s;
    while (n)
    {
        if (n % 10 % 2 == 0)
            s += '0';
        else
            s += '1';
        n /= 10;
    }
    while (s.size() > 1 && s.back() == '0')
    {
        s.pop_back();
    }
    int m = s.size() - 1;
    for (; m >= 0; m--)
    {
        cout << s[m];
    }

    return 0;
}

class Solution
{
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param str string字符串 原串
     * @param arg char字符型vector 需替换数组
     * @return string字符串
     */
    string formatString(string str, vector<char> &arg)
    {
        string s;
        int index = 0;
        for (auto ch : str)
        {
            if (s.size() && s.back() == '%' && ch == 's')
            {
                s.pop_back();
                s.push_back(arg[index++]);
            }
            else
                s.push_back(ch);
        }
        int n = arg.size();
        for (; index < n; index++)
        {
            s += arg[index];
        }
        return s;
    }
};

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> arr(n * 3);
    for (auto &i : arr)
        cin >> i;
    sort(arr.begin(), arr.end());

    long long sum = 0;
    for (int i = n; i < 2 * n; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long hash1[26] = {0};
    long long hash2[26] = {0};

    string s1, s2;
    cin >> s1 >> s2;

    for (auto i : s1)
        hash1[i - 'A']++;
    for (auto i : s2)
        hash2[i - 'A']++;

    for (int i = 0; i < 26; i++)
    {
        if (hash2[i] != 0 && hash2[i] > hash1[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}

class Solution
{
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param arr int整型vector the array
     * @return int整型
     */
    int maxLength(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> dp(n, 1);
        int i = 1;
        int ret = 1;
        for (; i < n; i++)
        {
            if (arr[i - 1] < arr[i])
            {
                dp[i] = dp[i - 1] + 1;
            }
            ret = max(ret, dp[i]);
        }

        return ret;
    }
};

#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    string s;
    cin >> n >> s;
    int hash[26] = {0};
    char maxval = 0;
    int maxcount = 0;
    for (auto ch : s)
    {
        hash[ch - 'a']++;
        if (hash[ch - 'a'] > maxcount)
        {
            maxcount = hash[ch - 'a'];
            maxval = ch;
        }
    }

    if (maxcount > (n + 1) / 2)
    {
        cout << "no" << endl;
        return 0;
    }

    string ret(n, ' ');
    int index = 0;
    for (int i = 0; i <= maxcount; i++)
    {
        ret[index] = maxval;
        index += 2;
    }

    hash[maxval - 'a'] = 0;

    index = 1;
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > 0)
        {
            int tmp = hash[i];
            for (int j = 0; j < tmp; j++)
            {
                if (index >= n)
                    index = 1;
                ret[index] = j + 'a';
                hash[j]--;
                index += 2;
            }
        }
    }
    cout << "yes" << endl;
    cout << ret << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int k = 0;
    cin >> k;
    while (k--)
    {
        int n = 0, k = 0;
        string s;
        cin >> n >> k >> s;
        int count = 0;
        int sum = 0;
        for (auto ch : s)
        {
            if (ch == 'W')
            {
                count++;
                if (count >= 3)
                    sum += 3;
                else
                    sum += 1;
            }
            else
            {
                count = 0;
                sum -= 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}