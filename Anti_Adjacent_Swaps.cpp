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

    if (is_sorted(a.begin(), a.end()))
    {
        yes
        return;
    }
    if (n == 3)
    {
        if(a[1] > max(a[0], a[2]) || a[1] < min(a[0], a[2]))
        {
            no
            return;
        }
        else
        {
            yes
            return;
        }
    }
    if(n == 2)
    {
        if(a[0] <= a[1])
        {
            yes
            return;
        }
        else
        {
            no
            return;
        }
    }
    yes
    return;

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