//Xay dung ham tim UCLN co 2 tham so 
//ket qua tra ve la UCLN cua 2 doi so truyen vao
//Viet truong chinh khai bao va gan gia tri cho 2 so nguyen bat ky
//Su dung ham da xay dung de tim UCLN cua chung
#include<stdio.h>
int gcd(int a, int b){
        if(b == 0){
            return a;
        return(b, a % b);
        }
    }
int main(){
    printf("%d",gcd(18,12));
    return 0; 
}