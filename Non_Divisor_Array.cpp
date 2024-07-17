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
    int n, c = 0, f = 0, k = 1;
    cin >> n;
    vector<int> a;

    while(n)
    {
        n--;
        a.push_back(k);
        c++;
        if (c == pow(2, f))
        {
            c = 0;
            f++;
            k++;
        }
    }

    cout << a.back() << endl;
    for (int i = 0; i < a.size(); i++) 
    {
        cout << a[i] << HA;
    }
    cout << endl;
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