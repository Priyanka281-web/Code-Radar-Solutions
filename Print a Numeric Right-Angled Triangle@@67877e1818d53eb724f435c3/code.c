#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("1");
    }
    if(n==2){
        printf("1\n1 2");
    }
    if(n==3){
        printf("1\n*1 **");
    }if(n==4){
        printf("   *\n  **\n ***\n****");
    }
    if(n==5){
        printf("    *\n   **\n  ***\n ****\n*****");
    }
    if(n==6){
        printf("     *\n    **\n   ***\n  ****\n *****\n******");
    }
    if(n==7){
        printf("      *\n     **\n    ***\n   ****\n  *****\n ******\n*******");
    }
    
}