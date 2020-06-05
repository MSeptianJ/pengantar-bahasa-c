#include <stdio.h> 
 
int faktorial(int i){ 
    if(i==0 || i==1) return 1; 
    return i*faktorial(i-1); 
} 
 
main(){ 
    printf("%d",faktorial(6)); 
}