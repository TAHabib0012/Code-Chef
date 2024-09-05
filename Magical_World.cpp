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
    int n, m, k;
    cin >> n >> m >> k;

    if((n * m) <= (k * k))
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        int c = 0;
        int f = min(n, 1);

        if (f * m <= k * k) 
        {
            c = 1;
        }
        else
        {
            int x = min(m, 1);
            if (n * x <= k * k)
            {
                c = 1;
            }
            else
            {
                int f = min(n, 1);
                int x = min(m, 1);
                
                if (f * x <= k * k) 
                {
                    c = 2;
                }
            }
            
        }
        
        cout << c << endl;
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