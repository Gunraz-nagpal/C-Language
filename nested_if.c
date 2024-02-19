#include<stdio.h>
#include<math.h>
int main(){

int number;
printf("Enter a number: ");
scanf("%d",&number);

if(number>=0){
    printf("IT IS A POSITIVE NO.\n");
    if(number%2==0){
        printf("number is even/n");}
        else{
                printf("number is odd\n");
        }
    }


else {
        printf("IT IS A NEGATIVE NUMBER\n");
}
return 0;
}
