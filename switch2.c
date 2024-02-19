#include<stdio.h>
#include<math.h>
int main(){

int day;
printf("Enter day(1-7): ");
scanf("%s",&day);
switch (day){
case 'm':printf("monday");
        break;
case 't':printf("tuesday");
        break;
case 'w':printf("wednesday");
        break;
case 'T':printf("thursday");
        break;
case 'f':printf("friday");
        break;
case 's':printf("saturday");
        break;
case 'S':printf("sunday");
        break;
default :printf("this is not a valid no.");

}

return 0;
}
