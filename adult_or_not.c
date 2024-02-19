#include<stdio.h>
#include<math.h>
int main(){
int age;
printf("Enter Your Age: ");
scanf("%d",&age);

if(age>=18){
    printf("YES YOU ARE A ADULT\n");
    printf("YES YOU CAN VOTE\n");}

else if(13<age<19){
    printf("WELCOME TO TEEN AGE\N");
}

else{
        printf("U R STILL A BABY\n");
    }
printf("Thankyou");
return 0;
        }

