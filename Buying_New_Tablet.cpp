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

struct Tablet
{
    LL w, h, p;
};


void ans()
{
    LL n, m, c = 0;
    cin >> n >> m;
    Tablet a[n + 1] [3 + 1];
    vector<pair<LL, LL>> v;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i]->w >> a[i]->h >> a[i]->p;

        LL s = a[i]->w * a[i]->h;

        v.push_back({s, a[i]->p});
    }
    
    sort(v.rbegin(), v.rend());

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i].second <= m)
        {
            if (v[i].first > c)
            {
                c = v[i].first;
            }
        }
    }
    if(c > 0)
    {
        cout << c << endl;
    }
    else
    {
        cout << "no tablet" << endl;
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