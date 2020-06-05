#include <stdio.h>
#include <string.h>

typedef char String[100];

int cek(String input, int i, int j){

  int k=j/2;
  if (j==k){
    printf("kata tersebut polindrome \n");
    return 1;
  } else if(input[i] != input[j]){
    printf("kata tesebut tidak polindrome \n");
    return 0;
  } else{
    return cek(input, i+1, j-1);
  }

}

void main(){

  printf("Masukkan sebuah kata:");
  String input;
  scanf("%s", &input);
  printf("", cek(input, 0, strlen(input)-1));

}
