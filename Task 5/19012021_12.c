#include <stdio.h>

int main(){
    int nX = 0;
    int nY = 0;
    scanf("%d", &nX);
    scanf("%d", &nY);
    
    if (nX != nY) {
        printf("%d and %d are not equal\n", nX, nY);
    } else {
        printf("%d and %d are equal\n", nX, nY);
    }

    if (nX < nY) {
        printf("%d is less than %d\n", nX, nY);
    } else if (nX > nY) {
        printf("%d is less than %d\n", nY, nX);
    }

    return 0;
}
