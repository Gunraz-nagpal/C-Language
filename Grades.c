#include<stdio.h>
#include<math.h>
int main(){
int marks;
printf("Enter marks (0-100): " );
scanf("%d",&marks);
if (marks<30){
    printf("YOU GOT C GRADE\n");}
else if(marks>30 && marks<70)
    {printf("YOU GOT B GRADE\n");
}
else if(marks>70 && marks<90){
    printf("YOU GOT A GRADE\n");
}
else{
        printf("PDHAKU KEEDEYA YOU GOT A+ GRADE\n");
}

printf("CONGRATULATIONS");
return 0;}
