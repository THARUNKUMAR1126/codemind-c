#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='1')
    {
        printf("monday");
    }
     else if(ch=='2')
    {
        printf("tuesday");
    }
     else if(ch=='3')
    {
        printf("wednesday");
    }
     else if(ch=='4')
    {
        printf("thursday");
    }
      else if(ch=='5')
    {
        printf("friday");
    }
     else if(ch=='6')
    {
        printf("satarday");
    }
      else if(ch=='7')
    {
        printf("sunday");
    }
    else
    {
        printf("invalid input");
    }
}