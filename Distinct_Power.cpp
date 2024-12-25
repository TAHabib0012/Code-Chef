/*............Bismillahir Rahmanir Raheem...............*/

#include <bits/stdc++.h>
using namespace std;

#define Tahmid ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define LL long long int
#define endl '\n'

void ans() 
{
    LL n, c = 0;
    cin >> n;
    vector<LL> a(n);
    vector<pair<LL, LL>> p(n);

    for (LL i = 0; i < n; i++) 
    {
        cin >> a[i];
        p[i] = {a[i], i};
    }

    sort(p.rbegin(), p.rend());

    vector<LL> b(n);
    
    for (LL i  = 1; i <= n; i++) 
    {
        LL x = p[i - 1].second;
        b[x] = i;
    }
    
    for (LL i = 0; i < n - 1; i++) 
    {
        if (abs(b[i] - b[i + 1]) == 1) 
        {
            c++;
        }
    }

    cout << (n - c) << endl;;
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
