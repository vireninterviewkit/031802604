#include<string.h>
#include<stdio.h> 
#include<math.h>

typedef struct n
{
	int id;
	int num;
}n;

int main()
{
	long long int i,ii,t; 
	n p[10];
	for(i=0;i<10;i++)
	{
		p[i].id=i;
		p[i].num=0;
	}
	scanf("%lld",&t);
	while(t)
	{
		i=t%10;
		p[i].num++;
		t=t/10;
	}
	for(i=0;i<9;i++)
	{
		for(ii=0;ii<9-i;ii++)
		{
			if(p[ii].num<p[ii+1].num)
			{
				t=p[ii].id;
				p[ii].id=p[ii+1].id;
				p[ii+1].id=t;
				t=p[ii].num;
				p[ii].num=p[ii+1].num;
				p[ii+1].num=t;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		while(p[i].num--)
		{
			printf("%d",p[i].id);
		}
	}

	
	return 0;
}
