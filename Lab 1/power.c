#include <stdio.h>
long power (int base, unsigned int n){
    long finalNumber = base;
    int counter = n - 1;
    while(counter > 0){
        finalNumber = finalNumber * base; 
	counter--;    
}
    return finalNumber;
}

int main(){
    int firstTen = 1;
    while(firstTen < 11){
    
        printf("%d to the power of %d is %ld\n", 2, firstTen,power(2, firstTen));
        firstTen++;
    }
    return 0;
}
