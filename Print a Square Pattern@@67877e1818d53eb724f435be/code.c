#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("*");
    }
    if(n==2){
        printf("* *\n* *");
        }
    if(n==3){
        printf("* * *\n* * *\n* * *");
    }
    if(n==4){
        printf("* * * *\n* * * *\n* * * *\n* * * *");
    }
}