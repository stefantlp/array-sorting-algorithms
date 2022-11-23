#include <stdio.h>
#include <stdlib.h>
void sortare_bubble(int v[], unsigned int n);
{
	int i,ok=1;
	while(ok!=1)
	{
		ok=0;
		for(i=0;i<n;i++)
			if(v[i]>v[i+1])
			{
				ok=1;
				v[i]=v[i]+v[i+1];
				v[i+1]=v[i]-v[i+1];
				v[i]=v[i]-v[i+1];
			}
	}
}
int main()
{
	int v[100][100],i;
	unsigned int n;
	scanf("%u",&n);
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);
	sortare_bubble(v,n);
	return 0;
}
