#include<stdio.h>
#include<math.h>
int main(){

printf("%d\n", 4>3 && 5>2); /* and operator untill dono true ni hunde result will be false */
printf("%d\n", 3>4 && 5>2);
printf("%d\n", 3>4 || 5>2); /* or operator ik v true hai te result will be true*/
printf("%d\n", !( (5>1) && (3>4)) );
int a;
printf("enter a no. : ");
scanf("%d",&a);
printf("%d\n",a%2==0);
return 0;
}
