#include <stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return (fibonacci(n-1)+fibonacci(n-2));
}

int main() {
  printf("the fibonacci number of 15 is: %d",fibonacci(10));
  return 0;
} 



