//Задача 4: В какъв ред ще се изпълнят операциите? true = x&&y&x<<1;
//Какво ще се принтира на екрана?
//В какъв ред ще се изпълнят операциите? true = x&&y^x<<1;
//Какво ще се принтира на екрана?

#include <stdio.h>

int main(){
    int x = 10;
    int y = 10;
    int true = x&&y&x<<1;
    printf("%d\n", true);

    true = x&&y^x<<1;
    printf("%d\n", true);
    return 0;

}