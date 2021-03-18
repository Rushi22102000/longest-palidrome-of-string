#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int s[]={-2,1,-3,4,-1,2,1,-5,4};
    int r[100][100],i=0,j=0,k=0;
    int l=sizeof(s)/sizeof(int);
    int max=0;
	for(i=0;i<100;i++)
    {for(j=0;j<100;j++)
    {
    r[i][j]=0;   	
	}
	}
	i=0;
	for(i=0;i<l-1;i++)
	{
	  for(k=0;k<l-1-i;k++)
	{
	    for(j=i;j<l-k;j++)
		
		{
			r[k][i]=r[k][i]+s[j];
			
		}
	}
	}
	
max=r[0][0];	
for(i=0;i<l-1;i++)
{
	for(j=0;j<l-1;j++)
	{
		if(r[i][j]>max)
		{
			
			max=r[i][j];
		}
	}
}
  printf("%d",max);
	
}

