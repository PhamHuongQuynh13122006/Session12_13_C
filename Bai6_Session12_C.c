//Xay dung kiem tra so hoan hao co mot tham so
//Ket qua tra ve la true neu doi so truyen vao la so hoan hao
//               la false neu khong phai 
//Viet chuong trinh yeu cau nguoi dung nhap vao 2 so nguyen tu ban phim 
//Va goi ham voi tung so de kiem tra va in ra ket qua
#include<stdio.h>
void Perfect(int n){
    int number = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            number = number + i;
        }
    }
    if(number == n){
        printf("True\n");
        printf("So hoan hao\n");
    }else if(number != n){
        printf("False\n");
        printf("Khong phai so hoan hao\n");
    }
}
int main(){
    int a, b;
    printf("Nhap hai so nguyen : \n");
    printf("So thu nhat : \t");
    scanf("%d",&a);
    Perfect(a);
    printf("So thu hai : \t");
    scanf("%d",&b);
    Perfect(b);
    return 0;
}