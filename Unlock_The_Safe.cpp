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
    LL n, m;
    cin >> n >> m;
    vector<LL> a(n), b(n);

    for (LL i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (LL i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    LL x = 0, mv = 9;

    for (LL i = 0; i < n; i++)
    {
        LL y = min(((b[i] - a[i] + 9) % 9), ((a[i] - b[i] + 9) % 9));
        LL c = 9 - 2 * y;

        x = x + y;
        mv = min(mv, c);
    }

    if ((m >= x) && ((m - x) % 2 == 0 || mv <= (m - x)))
    {
        yes;
    }
    else
    {
        no;
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