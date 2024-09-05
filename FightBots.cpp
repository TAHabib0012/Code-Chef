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
    int n, m, k, r = 0, u = 0;
    cin >> n >> m >> k;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'R')
        {
            r++;
        }
        if(s[i] == 'L')
        {
            r--;
        }
        if(s[i] == 'U')
        {
            u++;
        }
        if(s[i] == 'D')
        {
            u--;
        }
    }
    

    int x = abs(m - r) + abs(k - u);
    
    if(x <= n)
    {
        if(n == x)
        {
            cout << "Yes" << endl;
        }
        else if (n > x)
        {
            n =  n - x;
            if(n % 2 == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
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