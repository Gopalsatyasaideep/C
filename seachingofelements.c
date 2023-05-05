#include <stdio.h>
int main()
{
	int s,i,k,f=0;
	scanf("%d%d",&s,&k);
	int c[s];
	for(i=0; i<s; i++)
	{
		scanf("%d",&c[i]);
	}
		for(i=0; i<s; i++)
	{
	if(c[i]==k)
	{
		f=1;
		break;
	}
    }

   if(f==1)
  {
	printf("Element found"); 
	}
else
{
	printf("Not found");
}
}
