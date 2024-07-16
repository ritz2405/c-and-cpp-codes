#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int xa,ya,xb,yb,xc,yc;
	cin>>xa>>ya>>xb>>yb>>xc>>yc;
	int left = min(xa,xc), right = max(xa,xc);
	int bottom = min(ya,yc), top = max(ya,yc);

	bool ans = false;

	if(xb >= left && xb <= right)
	{
		if(yb == bottom || yb==top)
		{
			ans = true;
		}
	}

	if(yb >= bottom && yb <= top)
	{
		if(xb == left || xb == right)
		{
			ans = true;
		}
	}
	cout<<(ans ? "YES" : "NO") << "\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}