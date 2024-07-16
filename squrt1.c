#include <stdio.h>
#include<math.h>
int main(void) {
	int n, l, t, rev;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d", &n);
	    rev=sqrt(n);
	    printf("%d\n", rev);
	}
	return 0;
}