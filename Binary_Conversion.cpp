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
    int n, m, c, f, k = 0;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    if(s == t && m % 2 == 0)
    {
        yes;
        return;
    }

    c = count(s.begin(), s.end(), '1');
    f = count(t.begin(), t.end(), '1');

    if (c != f)
    {
        no;
        return;
    }
    

    for (int i = 0; i < n; ++i) 
    {
        if (s[i] != t[i]) 
        {
            k++;
        }
    }

    k = k / 2;
    if(m < k)
    {
        no;
        return;
    }
    if (n == 2) 
    {
		if (t[0] != t[1] && (m - k) % 2 == 1) 
        {
			no;
			return;;
		}
	}
    yes;
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
