#include<stdio.h>
 
void toh(int,char,char,char);
 
void main()
{
	int n;
	printf("Enter the number of disks: ");
	scanf("%d",&n);
	toh(n,'A','B','C');
}
 
void toh(int n,char x,char y,char z)
{
	if(n>0)
	{
		toh(n-1,x,z,y);
		printf("\n MOVE 3%c -> %c",x,y);
		toh(n-1,z,y,x);
	}
}
