#include <stdio.h>


int main(void)
 {
    
   
    float a=64;
       
       
    int x = 0;
    float b =0;
    
     for ( x = 0; x < 10000000; x++ ) {
         
         b = b + 0.000001;
         
      //   printf("%f",b*b);
         
      if((b*b)>(a-0.0000001)&&(b*b)<(a+0.0000001)){
    
  //  printf("%i",x);
    
        printf("%f",b);
        printf("\n");
     
       }
        
    }
    
     return 0;
    
 }
