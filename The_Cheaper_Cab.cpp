#include <bits/stdc++.h>
using namespace std;

void ans() 
{
	int n, m;
    cin >> n >> m;

	if(n < m)
    {
	    cout << "FIRST" << endl;
	}
    else if(n > m)
    {
        cout << "SECOND" << endl;
	}
    else 
    {
        cout << "ANY" << endl;
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