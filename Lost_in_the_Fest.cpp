/*............Bismillahir Rahmanir Raheem...............*/

#include <bits/stdc++.h>
using namespace std;

#define Tahmid                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
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
    LL n;
    cin >> n;
    vector<LL> a(n);

    for (LL i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    LL j = -1, x = a[n - 1];

    for (LL i = 0; i < n - 1; i++)
    {
        if (a[i] >= x)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (n - 1 - j) << endl;
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