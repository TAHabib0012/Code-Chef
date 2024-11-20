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


bool wow(vector<LL> a, LL n, LL m, LL k)
{
    LL c = 0, l = a[0] - k, r = a[0] + k;

    for (LL i = 1; i < n; i++)
    {
        LL x = max(l, a[i] - k);
        LL y = min(r, a[i] + k);

        if(x > y)
        {
            c++;
            x = a[i] - k;
            y = a[i] + k;
        }

        l = x;
        r = y;
    }
    
    if (c <= m)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
    
}


void ans()
{
    LL n, m;
    cin >> n >> m;
    vector<LL> a(n);

    for (LL i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    LL l = 0, r = NN, c = 0;

    while (l <= r)
    {
        LL k = l + (r - l) / 2;

        if(wow(a, n, m, k))
        {
            c = k;
            r = k - 1;
        }
        else
        {
            l = k + 1;
        }
    }
    cout << c << endl;
    
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