#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t>0)
	{   int n,m,x,y;
	    scanf("%d %d" ,&n,&m);
      scanf("%d %d",&x,&y);
      for(int i=1;i<=n;i++)
      { 
        char s[m];
        scanf("%s",s);
        int f=0,p=0;
        for(int j=0;s[j]!='\0';j++)
        {
          if(s[j]=='F')
            {f++;}
          if(s[j]=='P')
            {p++;}
        }
                
        if((f>=x)||(f==(x-1)&&p>=y))
        {
          printf("1");
        }
        else 
        {
          printf("0");
        }           
      }
    printf("\n");  
   t--;
	}
	return 0;
}