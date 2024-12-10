//Xay dung ham tao ma tran 2 chieu co hai tham so la so hang va so cot 
//Khi goi ham nguoi dung se phai nhap vao tung gia tri trong ma tran
//Ham co ket qua tra ve la 1 mang 2 chieu voi so hang va so cot giong voi gia tri truyen vao
//Viet chuong trinh yeu cau nguoi dung nhap vao so hnag , so cot va su dung ham de tao ma tran
//In ma tran ra man hinh de kiem tra ket qua 
#include<stdio.h>
void Matrix(int *rows, int *cols, int arr[100][100]){
printf("Nhap vao so hang : ");
scanf("%d",rows);
printf("Nhap vao so cot : ");
scanf("%d",cols);
for(int i = 0; i < *rows; i++){
    for(int j = 0; j < *cols; j++){
        printf("Nhap phan tu thu [%d][%d] : ",i, j);
        scanf("%d",&arr[i][j]);
    }
}
}
int main(){
int rows , cols, arr[100][100];
 Matrix(&rows, &cols, arr);
}