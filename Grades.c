#include<stdio.h>
int main()
{
    int p,c,b,m,cp;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cp);
    float percentage;
	percentage=(p+c+b+m+cp)/5;
	if(percentage>=90)
	{
		printf("Grade A");
	 } 
	 else if(percentage>=80)
	 {
	 	printf("Grade B");
	 }
	 else if(percentage>=70)
	 {
	 	printf("Grade C");
	 }
	 else if(percentage>=60)
	 {
	     printf("Grade D");
	 }
}