// Xay dung ham kiem tra so nguyen to co 1 tham so, 
// Ket qua tra ve la true neu doi so truyen vao la so nguyen to
//                la false neu khong phai
// Viet chuong trinh yeu cau nguoi dung nhap vao 2 so nguyen 
// Tu ban phim va goi ham voi tung so de kiem tra va in ra ket qua
#include<stdio.h>
#include<math.h>
void isPrime(int n){
    if(n < 2){
        printf("Not integer ^ ^\n");
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            printf("Nott integerr ^ ^\n");
            return 0;
        }
    }
    printf("Are integer !!!\n");
    return 1;
}
int main(){
    int a, b;
    printf("Nhap vao hai so nguyen\n");
    printf("So thu nhat :");
    scanf("%d",&a);
    isPrime(a);
    printf("So thu hai :");
    scanf("%d",&b);
    isPrime(b);
}