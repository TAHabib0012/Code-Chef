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
    LL n;
    cin >> n;
    vector<LL> a(n), b;
    multiset<LL> st;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        while (st.count(a[i]))
        {
            st.erase(st.find(a[i]));
            a[i] = a[i] + a[i];
        }
        st.insert(a[i]);

        b.push_back(st.size());
    }

    for (LL i = 0; i < b.size(); i++)
    {
        cout << b[i] << HA;
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