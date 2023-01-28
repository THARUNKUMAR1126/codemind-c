#include<stdio.h>
int main()
{
    int days,years,weeks;
    scanf("%d%d%d",&days,&weeks,&years);
    years=days/365;
    weeks=(days%365)/7;
    days=days-(years*365)+(weeks*7);
    printf("%d
%d",years,weeks);
}