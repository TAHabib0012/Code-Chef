/*............Bismillahir Rahmanir Raheem...............*/

#include <bits/stdc++.h>
using namespace std;

#define Tahmid ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define LL long long int
#define ULL unsigned long long 
#define endl '\n'

#define mem(v, x) memset(v, x, sizeof(v))
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define HA " "

const LL NN = 1e9 + 6 + 9;
const LL mod = 998244353;

void ans()
{
    string s, t;
    cin >> s >> t;
    
    vector<int> mp1(26, 0), mp2(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        mp1[s[i] - 'a']++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        mp2[t[i] - 'a']++;
    }
    

    bool hae = false;

    for (int i = 0; i < 26; i++)
    {
        if (mp1[i] > 0 && mp2[i] > 0)
        {
            hae = true;
            break;
        }
    }

    if (hae)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main() 
{
    Tahmid;

    int t;
    cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}
