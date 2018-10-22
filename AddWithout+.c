#include <stdio.h>
int add(int x,int y)
{
   int sum, carry,i=1;
   do
   {
       sum =x^y;
       printf("\n(%d) sum is : %d",i,sum);
       carry = (x&y)<<1;
       printf("\n(%d) carry is : %d",i,carry);
       x = sum;
       printf("\n(%d) x is : %d",i,x);
       y = carry;
       printf("\n(%d) y is : %d",i,y);

       i++;
       
   }while(carry!=0);
   return x;
}
int main(void) {
   int sum1;
   int a,b;
   scanf("%d %d",&a,&b);
   sum1=add(a,b);
   printf("\n\n\n%d",sum1);
   return 0;
}