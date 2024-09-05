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
    int n, c, f;
    cin >> n;
    vector<int> a(n), v;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    v.push_back(a[0]);
    for (int i = 1; i < n; i++) 
    {
        v.push_back(gcd(v[i - 1], a[i]));
    }

    c = *max_element(a.begin(), a.end());
    if (v.back() == c)
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
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}