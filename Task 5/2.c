//Задача 2. какъв ще бъде резултатът в променливата true:
//int x = 10;
//int y = 10;
//int z = 30;
//int true = x==y+(z < y)!=20;

#include <stdio.h>
int main(){
int x = 10;
int y = 10;
int z = 30;
int true = x==y+(z < y)!=20; //първо се изчислява стойностите в скобите, която е 0. После се събира с Y
                             //10+0 = 0, тоест 10 е различно от 20 което е True   
printf("%d", true);
return 0;
}