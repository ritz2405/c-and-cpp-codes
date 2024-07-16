#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cases;
	scanf("%d", &cases);
	while(cases--)
	{
		int b,w,x,y,z;
		scanf("%d%d%d%d%d", &b, &w, &x, &y, &z);
		long long res = (long long)b*x + (long long)w*y;
		res = min(res, (long long)b*x + (long long)w*(x+z));
		res = min(res, (long long)b*(y+z) + (long long)w*y);
		printf("%d\n", res);
	}
	return 0;
}