#include <stdio.h> 
 
void deret(int i){ 
    if(i<10){ 
        printf("%d ",i); 
        deret(++i); 
    } 
} 
 
main(){ 
    int i=0; 
    deret(i); 
}
