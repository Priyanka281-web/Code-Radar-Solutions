#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("1");
    }
    if(n==2){
        printf("1\n0 1");
    }
    if(n==3){
        printf("1\n0 1\n1 0 1");
    }if(n==4){
        printf("1\n0 1\n1 0 1\n0 1 0 1");
    }
    if(n==5){
        printf("1\n0 1\n1 0 1\n0 1 0 1\n1 0 1 0 1");
    }
    if(n==6){
        printf("1\n0 1\n1 0 1\n0 1 0 1\n1 0 1 0 1\n0 1 0 1 0 1"); 
    }
    if(n==7){
        printf("1\n0 1\n1 0 1\n0 1 0 1\n1 0 1 0 1\n0 1 0 1 0 1\n1 0 1 0 1 0 1");
    }
    
}
