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
    vector<int> a(n + 1), b;

    for (int i = 0; i < n + 1; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.begin() + n, greater<int>());

    
    bool hae = false;
    int z = 0;
    while (!hae && z< 10000)
    {
        hae = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= 2 * a.back())
            {
                swap(a[i], a.back());
                break;
            }
            
        }

        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s = s + a[i];
        }
        b.push_back(s);
        z++;
    }
    
    
    sort(b.begin(), b.end());
    
    cout << b[0] << endl;
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

