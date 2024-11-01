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
    LL n, c = 0, f = 0; // Initialize f to 0
    cin >> n;
    vector<LL> a(n), b(n);
    multiset<LL> st;

    for (LL i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (LL i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    for(LL i = 0; i < n; i++)
    {
        if(b[i] >= a[i])
        {
            c++;
        }
        f = f + min(a[i], b[i]); 
        st.insert(abs(a[i] - b[i]));
    }

    if(c == 1 && !st.empty())
    {
        f = f + *(st.begin());
    }
    cout << f << endl;
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
