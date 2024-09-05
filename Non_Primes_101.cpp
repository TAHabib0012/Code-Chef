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

const int MM = 1000;

vector<bool> V(MM + 1, true);

bool wow(int f)
{
    if(f <= 1)
    {
        return false;
    }
    if(f == 2 || f == 3)
    {
        return true;
    }
    if(f % 2 == 0 || f % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= f; i+= 6)
    {
        if(f % i == 0 || f % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

void ans() 
{
    int n;
    cin >> n;
    vector<int> a(n), v;
    map<int, int> mp;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for(int i = 4; i <= 200; i++)
    {
        if(!wow(i))
        {
            v.push_back(i);
        }
            
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < v.size(); j++)
        {
            if(mp.count(v[j] - a[i]))
            {
                cout << mp[v[j] - a[i]] << HA << i + 1 << endl;;
                return ;
            }
        }
        mp[a[i]] = i + 1;
    }

    cout << -1 << endl;
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
