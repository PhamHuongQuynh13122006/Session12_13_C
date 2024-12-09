// Xay dung ham co tham so la mot so nguyen bat ky
//Ket qua tra ve la giai thua cua doi so truyen vao

#include<stdio.h>
int factorial(int n){
    if(n < 0){
        return -1;
    }
    int factorial = 1;
    for(int i = 1; i < n; i++){
        factorial *= i;
    }
    return factorial;
}
int main(){
    int n = 22;
    printf("Giai thua cua %d la : %d", n, factorial(n));
}