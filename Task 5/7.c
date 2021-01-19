#include <stdio.h>
    int main()
{
    int nA = 1;
    int nB = (nA ==1)? 1:0;
    if (nA ==1){
        nB = 1;
    }else{
        nB = 0; //false

    }
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);

    scanf("%d", &nA);
    nB = (nA>nB ? 2:0);
    printf("\nbigger: %d", nB);
    return 0;
}
