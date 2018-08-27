
/* 
 * File:   main.c
 * Author: Mallikarjuna Reddy
 *
 * Created on 27 August, 2018, 11:23 AM
 */

#include <stdio.h>

int main(int argc, char** argv) {

    int n=20;
    int c;
   
     for (int r = 1; r <= n; ++r) {
       
        for ( c = 1; c <= n; ++c) {

            
             if(r==1||r==n||c==1||c==(n-r+1)||c==r||c==n||r==n/2||c==n/2){
                printf("*");
            }else{
               
                printf(" ");
            }
        }
      
          
        printf("\n");
    }

    
    



    return 0;
}



