#include <stdio.h>

int main() {
    int t,n,menu;
    scanf("%d",&t);
    while(t--)
    {
         menu=0;
        scanf("%d",&n);
        for(int i=12;i>=1;i--)
        {
            int k=pow(2,i-1);
            int d=n/k;
            if(d>0)
            {
                menu=menu+d;
                n=n%k;
            }
            if(n==0)
               break;
        }
        printf("%d\n",menu);
    }
	
	return 0;
}
