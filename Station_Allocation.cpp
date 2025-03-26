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
    LL n, s = 0;
    cin >> n;
    vector<LL> a(n);

    for (LL i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a.begin(), a.end());

    LL m;
    cin >> m;

    while (m--)
    {
        LL x, y;
        cin >> x >> y;
        LL z = LLONG_MAX;

        LL k = lower_bound(a.begin(), a.end(), x) - a.begin();

        if (k < n)
        {
            LL c = 0;
            LL ss = s - a[k];
            LL f = max(0LL, y - ss);
            z = min(z, c + f);
        }

        if (k > 0)
        {
            LL i = k - 1;
            LL c = x - a[i];
            LL ss = s - a[i];
            LL f = max(0LL, y - ss);
            z = min(z, c + f);
        }

        cout << z << endl;
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
