


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