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
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    vector<int> a(n, 0); 

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1] || (i >= 2 && s[i] == s[i - 2]))
        {
            a[i] = 1; 
        }
    }

    for (int i = 1; i < n; i++)
    { 
        a[i] += a[i - 1];
    }

    while (q--) 
    {
        int l, r;
        cin >> l >> r;

        l--; r--; 

        if (r - l < 2)
        {
            no;
            continue;
        }

        if (l < r && s[l] == s[l + 1]) 
        {
            yes;
            continue;
        } 
        else if (a[r] != a[l + 1])
        {
            yes;
        } 
        else 
        {
            no;
        }
    }
}

int main() 
{
    Tahmid;

    int t;
    cin >> t;

    while (t--) 
    {
        ans(); 
    }

    return 0;
}
