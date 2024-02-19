
#include<stdio.h>
void namaste();
void bonjour();

int main(){
    printf("ENTER YOUR NATIONALITY :\n'I' FOR INDIAN\n " );
    printf("& \n'F' FOR FRENCH\n");
    char ch;
    scanf("%c",&ch);
    if (ch== 'I'){
        namaste();
    }
    else{
    bonjour();
    }
return 0;
}

void namaste(){
printf("NAMASTE JI \n");}
void bonjour(){
printf("BONJOUR!!\n");
}
