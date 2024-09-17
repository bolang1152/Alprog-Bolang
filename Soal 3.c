#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primeNumber(int bilangan){
    if(bilangan < 1){
        return 0;
    }
    
    for(int i = 2; i< bilangan; i++){
        if(bilangan % 2 == 0){
            return 0;
        }
        
    }
    return 1;
}

int main() {
    int angka;
    scanf("%d", &angka);
    

    if(primeNumber(angka)==0){
        printf("BUKAN");
    } else {
        printf("PRIMA");
    }
    
}