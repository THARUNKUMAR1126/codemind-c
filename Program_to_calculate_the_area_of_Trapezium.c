#include<stdio.h>
int main()
{
    int a,b,h;
    float area;
    scanf("%d%d%d",&a,&b,&h);
    area=(a+b)*h/2.0;
    printf("%0.4f",area);
}