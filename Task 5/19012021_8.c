#include <stdio.h> 

int isLetter(char c);

int main(){
    printf("Please write a letter from the ASCII table:");
    char c = getchar();
    isLetter(c);

    return 0;
}

int isLetter(char c){
    int inDecimal = (int) c;
    if ((inDecimal >= 65 && inDecimal <= 90) || (inDecimal >= 97 && inDecimal <= 122)){
        printf("Yes, it is a letter.");
        return 1;
    }
    printf("No, it is not a letter.");
    return 0;
}
