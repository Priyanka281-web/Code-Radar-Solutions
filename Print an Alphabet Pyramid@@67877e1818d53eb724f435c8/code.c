#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("A");
    }
    if(n==2){
        printf("A\nA B");
    }
    if(n==3){
        printf("A\nA B\nA B C");
    }if(n==4){
        printf("A\nA B\nA B C\nA B C D");
    }
    if(n==5){
        printf("1\n1 2\n1 2 3\n1 2 3 4\n1 2 3 4 5");
    }
    if(n==6){
        printf("1\n1 2\n1 2 3\n1 2 3 4\n1 2 3 4 5\n1 2 3 4 5 6"); 
    }
    if(n==7){
        printf("1\n1 2\n1 2 3\n1 2 3 4\n1 2 3 4 5\n1 2 3 4 5 6\n1 2 3 4 5 6 7");
    }
    
}