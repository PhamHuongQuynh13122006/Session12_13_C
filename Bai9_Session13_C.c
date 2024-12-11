#include<stdio.h>
#include<math.h>
//nhapsohang,socot,phan tu
void Input(int rows, int cols,int arr[100][100]){
    for(int i = 0; i < cols; i ++){
        for(int j = 0; j < rows; j++){
            printf("Phan tu thu [%d][%d] cho ma tran : ", i + 1, j + 1);
            scanf("%d",&arr[i][j]);
        }
    }
}
// in theo ma trannn
void Output(int rows, int cols, int arr[100][100]){
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            printf("%d\t", arr[i][j]);
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
    printf("Cac phan tu tren duong cheo phu la : ");
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
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Nhap so cot: ");
            scanf("%d", &cols);
            printf("Nhap so hang: ");
            scanf("%d", &rows);
            Input(rows, cols, arr);
        break;
        case 2:
        Output(rows, cols, arr);
        break;
        case 3:
        Conners(arr, rows, cols);
        break;
        case 4:
        namtrenduongbien(rows, cols, arr);
        break;
        case 5:
        cheochinhcheophu(rows, cols, arr);
        break;
        case 6:
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
