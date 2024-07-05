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

vector<long long int> Bin(long long int n) 
{
    vector<long long int> v;
    if (n == 0) 
    {
        v.push_back(0);
        return v;
    }
 
    while (n > 0) 
    {
        v.push_back(n % 2);
        n = n / 2;
    }
 
    return v;
}


void ans()
{
    int n, s = 0;
    cin >> n;
    vector<long long int> a = Bin(n);

    for (int i = 0; i < a.size(); i++)
    {
        s =  s + a[i];
    }
    if(s % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
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