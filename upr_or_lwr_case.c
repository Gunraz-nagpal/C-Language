#include<stdio.h>
#include<math.h>
int main(){
char ch;
printf("Enter character: " );
scanf("%c",&ch);
if(ch >='A' && ch <='Z'){
    printf("UPPER CASE CHARACTER\n");}
else if(ch>='a' && ch<='z')
    {printf("lower case character\n");
}

else{
    printf("Not a english character\n");
}
return 0;}

