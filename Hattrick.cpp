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

bool hasa(char a, char b, char c) 
{
    return (a == 'W' && b == 'W' && c == 'W');
}

void ans() 
{
    char a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    if (hasa(a, b, c) 
    || hasa(b, c, d) 
    || hasa(c, d, e)
    || hasa(d, e, f)) 
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