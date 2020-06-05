#include <stdio.h> 
 
int deretGenap(int i){ 
    if(i<=20) printf("%d ",i); 
    deretGenap(i+=2); 
} 
 
int main(){ 
   deretGenap(0); 
}
