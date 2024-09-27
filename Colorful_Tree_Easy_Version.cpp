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
    LL n;
    cin >> n;
    LL m = n - 1;
    vector<vector<LL>> a(n + 1);
    
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        a[x].push_back(y);
        a[y].push_back(x);
    }
    
    LL c = 0, f = 0, s;
    
    for (LL i = 1; i <= n; ++i) 
    {
        if (a[i].size() == 1) 
        {
            c++;
        } 
        else 
        {
            f++;
        }
    }

    s = (c * 3) + (f * 2);
    cout << s << endl;
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