#include<stdio.h>
#include<math.h>
int main(){
    int marks;
    printf("enter ur marks: ");
    scanf("%d",&marks);
    if(marks<33 && marks>0){
        printf("FAIL");
    }
    else if(marks>100){printf("you entered wrong marks");}
    else{
        printf("PASS");}
 return 0;
}

