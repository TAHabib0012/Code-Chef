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
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    if (n <= 3) 
    {
        cout << 0 << endl;
        return;
    }
    
    cout << min((a[n - 1] - a[2]), min((a[n - 3] - a[0]), (a[n - 2] - a[1]))) << endl;
}

int main() 
{
    Tahmid;

    int t;
    cin >> t;

    while (t--) {
        ans();
    }

    return 0;
}