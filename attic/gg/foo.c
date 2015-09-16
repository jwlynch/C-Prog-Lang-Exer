#include <stdio.h>

int main(void)
{
   
  
   double a=3.9+0.1;
      
      
  int x = 0;
   double b =0;
  
    for ( x = 0; x < 1000; x++ ) {
        
        b = b +0.1;
        
       printf("%f",b);
        
     if((b*b)==a){
   
 //  printf("%i",x);
   
       printf("%f",b);
       printf("\n");
       
      }
       
   }
   
    return 0;
   
}
