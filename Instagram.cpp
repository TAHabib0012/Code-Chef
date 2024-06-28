#include <bits/stdc++.h>
using namespace std;

void ans() 
{
	int n, m;
    cin >> n >> m;

	if(10 * m < n)
    {
	    cout << "YES" << endl;
	}
    else
    {
        cout << "NO" << endl;
	}
}

 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}