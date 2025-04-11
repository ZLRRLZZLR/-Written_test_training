#include <string>
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param param string字符串 
     * @return string字符串
     */
    string compressString(string param) {
        char flag = param[0];
        long long num = 0;
        string ret;
        for(auto ch : param)
        {
            if(ch == flag)
            {
                num++;
            }
            else
            {
                ret += flag;
                if(num > 1)
                {
                    ret += to_string(num);
                }
                num = 1;
                flag = ch;
            }
        }

        ret += flag;
        if(num > 1)
        {
            ret += to_string(num);
        }

        return ret;
    }
};


#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    int n = 0,k = 0;
    cin >> n >> k;

    vector<pair<double,int>> arr;
    for(int i = 1;i <= n;i++)
    {
        int a = 0,b = 0;
       cin >> a >> b;
       if(i >= k)
       {
        double num = a / b;
        arr.push_back({num,i});
        }
   }

    sort(arr.begin(),arr.end(),[](pair<double,int> p1,pair<double,int> p2)
    {
        if(p1.first == p2.first) return p1.second < p2.second;
        else return p1.first > p2.first;
    });

    cout << arr[0].second << endl;
    return 0;
}

#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
    int n = 0,m = 0;
    scanf("%d%d",&n,&m);
    vector<vector<long long>> arr(n,vector<long long>(m,0));

    vector<long long> ROWS(n,0);
    vector<long long> LOWS(m,0);


    for(int i = 0 ; i < n ; i++)
    {
        long long tmp = 0;
        for(int j = 0 ; j < m ; j++)
        {
            scanf("%ld",&arr[i][j]);
            tmp += arr[i][j];
        }
        ROWS[i] = tmp;
    }

    for(int j = 0 ; j < m ; j++)
    {
        long long tmp = 0;
        for(int i = 0 ; i < n ; i++)
        {
            tmp += arr[i][j];
        }
        LOWS[j] = tmp;
    }

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            long long num = ROWS[i] + LOWS[j] - arr[i][j];
            printf("%ld ",num);
        }
        printf("\n");
    }


    return 0;
}

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    string s;
    while(n)
    {
        if(n % 10 % 2 == 0) s += '0';
        else s += '1';
        n /= 10;
    }
    while(s.size() > 1 && s.back() == '0')
    {
        s.pop_back();
    }
    int m = s.size() - 1;
    for(;m >= 0;m--)
    {
        cout << s[m];
    }

    return 0;
}


class Solution {
    public:
        /**
         * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
         *
         * 
         * @param str string字符串 原串
         * @param arg char字符型vector 需替换数组
         * @return string字符串
         */
        string formatString(string str, vector<char>& arg) {
            string s;
            int index = 0;
            for(auto ch : str)
            {
                if(s.size() && s.back() == '%' && ch == 's')
                {
                    s.pop_back();
                    s.push_back(arg[index++]);
                }
                else s.push_back(ch);
            }
            int n = arg.size();
            for(;index < n;index++)
            {
                s += arg[index];
            }
            return s;
        }
    };

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> arr(n * 3);
    for(auto& i : arr) cin >> i;
    sort(arr.begin(),arr.end());

    long long sum = 0;
    for(int i = n;i < 2*n;i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;

    return 0;
}




#include<iostream>

using namespace std;

int main()
{
    long long hash1[26] = {0};
    long long hash2[26] = {0};

    string s1 , s2;
    cin >> s1 >> s2;

    for(auto i : s1) hash1[i - 'A']++;
    for(auto i : s2) hash2[i - 'A']++;

    for(int i = 0;i < 26;i++)
    {
        if(hash2[i] != 0 && hash2[i] > hash1[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}



class Solution {
    public:
        /**
         * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
         *
         * 
         * @param arr int整型vector the array
         * @return int整型
         */
        int maxLength(vector<int>& arr) {
            int n = arr.size();
            vector<int> dp(n,1);
            int i = 1;
            int ret = 1;
            for(;i < n;i++)
            {
                if(arr[i - 1] < arr[i])
                {
                    dp[i] = dp[i - 1] + 1;
                }
                ret = max(ret,dp[i]);
            }
    
            return ret;
        }
    };


#include<iostream>

using namespace std;

int main()
{
    int n = 0;
    string s;
    cin >> n >> s;
    int hash[26] = {0};
    char maxval = 0;
    int maxcount = 0;
    for(auto ch : s)
    {
        hash[ch - 'a']++;
        if(hash[ch - 'a'] > maxcount)
        {
            maxcount = hash[ch - 'a'];
            maxval = ch;
        }
    }

    if(maxcount > (n + 1) / 2) {
        cout << "no" << endl;
        return 0;
    }

    string ret(n,' ');
    int index = 0;
    for(int i = 0;i <= maxcount;i++)
    {
        ret[index] = maxval;
        index += 2;
    }

    hash[maxval - 'a'] = 0;

    index = 1;
    for(int i = 0;i < 26;i++)
    {
        if(hash[i] > 0)
        {
            int tmp = hash[i];
            for(int j = 0;j < tmp;j++)
            {
                if(index >= n) index = 1;
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





#include<iostream>

using namespace std;

int main()
{
    int k = 0;
    cin >> k;
    while(k--)
    {
        int n = 0,k = 0;
        string s;
        cin >> n >> k >> s;
        int count = 0;
        int sum = 0;
        for(auto ch : s)
        {
            if(ch == 'W')
            {
                count++;
                if(count >= 3) sum += 3;
                else sum += 1;
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