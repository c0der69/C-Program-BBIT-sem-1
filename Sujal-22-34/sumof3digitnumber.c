#include <stdio.h>
main()
{
	int n,r1,r2,r3,q1,q2,q3,ans;
	printf("Enter any 3 digit no.");
	scanf("%d", &n);
	
	q1=n/10;
	r1= n%10;
	q2= q1/10;
	r2= q1%10;
	q3=q2/10;
	r3=q2%10;
	ans=r1+r2+r3;
	printf("sum of 3 digit no=%d" ,ans);
	
}
