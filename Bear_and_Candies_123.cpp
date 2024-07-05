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
    int n, m, s = 0, f = 0 , c = 0;
    cin >> n >> m;
    s = n + m;
    for(int i = 0; i <= s; i++)
    {
        if(i % 2 == 0)
        {
            c = c + i;
        }
        else if(i % 2 == 1)
        {
            f = f + i;
        }
        if(c > m)
        {
            c = c - i;
            break;
        }
        else if(f > n)
        {
            f = f - i;
            break;
        }
    }
    if(c > f)
    {
        cout << "Bob" << endl;
    }
    else if(f > c)
    {
    cout << "Limak" << endl;
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