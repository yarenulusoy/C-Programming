#include <stdio.h>
#include <stdlib.h>
int recursive(int i){
	int count=0;
		count=count+i;
		return count;
}
int main(){
	void fonk(int,int[]);
	int dizi[]={1,2,3,4};
	int i;
	fonk(4,dizi);
	for(i=0;i<4;i++)
		printf("%d,",dizi[i]);
	return 0;
}
void fonk(int n,int dizi[])
{
	int p[4];
	int i=0;
	while(i<n)
	{
		p[i]=dizi[i]%2;
		i++;
	}
}
