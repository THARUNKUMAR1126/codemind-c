#include<stdio.h>
int main()
{
    int n,p=0,sr,r;
    scanf("%d",&n);
    sr=n;
    while(sr!=0)
    {
        r=sr%10;
        sr=sr/10;
        p=p*10+r;
    }
    if(p==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
