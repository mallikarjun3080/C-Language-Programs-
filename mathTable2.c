

#include <stdio.h>


int main(int argc, char** argv) {
    

    int n=2;
    int i;
    int r;

    printf("enter number to print math table:");
    scanf("%d", &n);

    
    
    for (i = 1; i <= 10; ++i) {
        
        for(r=n;r<=n+5;++r){
             printf("%3d * %3d = %3d   ", r, i, (r * i));
        }
        printf("\n");
       
    }
    
    
    return 0;
}
