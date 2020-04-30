#include<stdio.h>
#include<math.h>
// in bugFix branch
int sum(int x,int y)
{
  int result =0;
  result=x+y;
  return result;
}
//added to testing branch
int mulitply(int x,int y)
{
  return x*y;
}

int divide(int x,int y)
{
	if(y==0)
	return -1;
  return x/y;
}

int main()
{
	printf("%d",sum(2,3));
}
