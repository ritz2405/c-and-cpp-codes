// Online C compiler to run C program online
#include <stdio.h>
int func();
int func(int i)
{
    if(i%2)
    {
        printf("%d\n", i++);
    }
    else
    {
        int r = func(func(i-1));
        printf("%d\n", r);
    }
}

int main() {
    // Write C code here
    func(6);
    
    return 0;
}
// 10011
// 10000
// 10011