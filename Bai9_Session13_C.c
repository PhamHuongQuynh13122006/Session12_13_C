#include<stdio.h>
#include<math.h>
void empty(int rows, int cols){
    if(rows == 0 || cols == 0){
        printf("Array is empty");
        return;
    }
}
//nhapsohang,socot,phan tu
void Input(int *rows, int *cols,int arr[100][100]){
    printf("Nhap so hang : ");
    scanf("%d",rows);
    printf("Nhap so cot : ");
    scanf("%d",cols);
    for(int i = 0; i < *rows; i ++){
        for(int j = 0; j < *cols; j++){
            printf("Phan tu thu [%d][%d] cho ma tran : ", i + 1, j + 1);
            scanf("%d ",&arr[i][j]);
        }
    }
}
// in theo ma trannn
void Output(int arr[100][100],int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j ++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
//In ra cac phan tu o goc theo ma tran 
void Conners(int arr[100][100], int rows, int cols){
    if(rows <= 0 || cols <= 0){
        printf("Invalid ^ ^");
        return;
    }
    printf("Phan tu o goc theo ma tran la :\n");
    printf("Goc phia tren ben trai : %d\n", arr[0][0]);
    printf("Goc phia tren ben phai : %d\n", arr[0][cols -1]);
    printf("Goc phia duoi ben trai : %d\n", arr[rows -1][0]);
    printf("Goc phia duoi ben phai : %d\n", arr[rows - 1][cols - 1]);
    printf("=>>\n");
    /*for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[0][0] && arr[0][cols -1] && [rows -1][0] && arr[row - 1][cols - 1]){
                printf("%d\t",arr[i][j]);
            }else{
                printf("\t");
            }
        }
        printf("\n");
    }*/
    // ??? wft lai sai 
}
void namtrenduongbien(int rows, int cols, int arr[100][100]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j ++){
            if(i == 0 || j == 0 || i == rows - 1 || j == cols - 1){
                printf("%d\t",arr[i][j]);
            }else{
                printf("\t");
            }
        }
        printf("\n");
    }
    //))
}
void cheochinhcheophu(int rows, int cols, int arr[100][100]){
    printf("Cac phan tu tren duong cheo chinh la : ");
    for(int i = 0; i < rows; i++){
        printf("%d\t",arr[i][i]);
    }
    printf("\n");
    for(int i = 0; i < rows; i++){
        printf("%d\t",arr[i][cols - i - 1]);
    }
    printf("\n");
}
//so nguyen to theo ma trannnn
// ham ktra so nguyen to 
// ham in so nguyen to theo ma tran
// nhap hang , cot 
// in kqua ...
int isPrime (int n){
    if(n < 2){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
           return 0;
        }
    }
    return 1;
}
void print(int rows, int cols, int arr[100][100]){
    int find = 0;
    printf("ca so nguyen to theo ma tran la : ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(isPrime(arr[i][j])){//atainoodayrnenvdg
                //----isPrime == 1???
                printf("%d\t",arr[i][j]);
                find = 1;
            }
        }
    }
    if(!find){
        printf("Not prime is array");
    }
}
int main(){
    int choice, n, rows = 0, cols = 0, arr[100][100];
    while(1){
    printf("\n\t=====Menu=====\n");
    printf("1. Nhập giá trị các phần tử của mảng\n");
    printf("2. In giá trị các phần tử của mảng theo ma trận\n");
    printf("3. In ra các phần tử ở góc theo ma trận\n");
    printf("4. In ra các phần tử nằm trên đường biên theo ma trận\n");
    printf("5. In ra các phần tử nằm trên đường chéo chính và chéo phụ theo ma trận\n");
    printf("6. In ra các phần tử là số nguyên tố theo ma trận\n");
    printf("7. Thoát\n");
    printf("Your choice is : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        Input(&rows, &cols, arr);
        break;
        case 2:
        empty(rows, cols);
        Output(arr, rows, cols);
        break;
        case 3:
        empty(rows, cols);
        Conners(arr, rows, cols);
        break;
        case 4:
        empty(rows, cols);
        namtrenduongbien(rows, cols, arr);
        break;
        case 5:
        empty(rows, cols);
        cheochinhcheophu(rows, cols, arr);
        break;
        case 6:
        empty(rows, cols);
        //isPrime(n);//wtfffff
        print(rows, cols, arr);
        break;
        case 7:
        printf("Thoat chuong trinh");
        return 0;
        default:
        printf("Lua chon khong hop le");
    }
    }
}
/*
	=====Menu=====
1. Nhập giá trị các phần tử của mảng
2. In giá trị các phần tử của mảng theo ma trận
3. In ra các phần tử ở góc theo ma trận
4. In ra các phần tử nằm trên đường biên theo ma trận
5. In ra các phần tử nằm trên đường chéo chính và chéo phụ theo ma trận
6. In ra các phần tử là số nguyên tố theo ma trận
7. Thoát
Your choice is : 1
Nhap so hang : 3
Nhap so cot : 3
Phan tu thu [1][1] cho ma tran : 2
8
Phan tu thu [1][2] cho ma tran : 8
Phan tu thu [1][3] cho ma tran : 5
Phan tu thu [2][1] cho ma tran : 8
Phan tu thu [2][2] cho ma tran : 4
Phan tu thu [2][3] cho ma tran : 46
Phan tu thu [3][1] cho ma tran : 9
Phan tu thu [3][2] cho ma tran : 86
Phan tu thu [3][3] cho ma tran : 23

	=====Menu=====
1. Nhập giá trị các phần tử của mảng
2. In giá trị các phần tử của mảng theo ma trận
3. In ra các phần tử ở góc theo ma trận
4. In ra các phần tử nằm trên đường biên theo ma trận
5. In ra các phần tử nằm trên đường chéo chính và chéo phụ theo ma trận
6. In ra các phần tử là số nguyên tố theo ma trận
7. Thoát
Your choice is : Lua chon khong hop le*/
//wft loi tu dong chuyen