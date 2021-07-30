#include<stdio.h>
#include<string.h>
int main(){
    char msg[3];
    printf("Enter a string");
    fgets(msg,3,stdin);

    printf("%s",msg);
    printf("%ld", strlen(msg)-1);
}