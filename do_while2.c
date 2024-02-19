
#include<stdio.h>
int main(){
    int n;
do{
printf("ENTER A NO: ");
scanf("%d",&n);
printf("%d\n",n);

if(n%7==0){
    break;}
}while(1);
printf("YOU ENTERED A MULTIPLE OF 7");
return 0;
}
