#include <stdio.h>

int main(void)
 {
   
  
   float a=64;
      
      
   int x = 0;
   float b =0;
   
    for ( x = 0; x < 10000; x++ ) {
        
        b = b + 0.001;
        
     //   printf("%f",b*b);
        
     if((b*b)>(a-0.1)&&(b*b)<(a+0.1)){
   
 //  printf("%i",x);
   
       printf("%f",b);
       printf("\n");
       
      }
       
   }
   
    return 0;
   
}
