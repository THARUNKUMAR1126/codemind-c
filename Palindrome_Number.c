#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int n,r,s=0,q;
        scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s*10+r;
    }
    if(n==s)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
}
}