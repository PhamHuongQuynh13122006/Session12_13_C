//Xay dung ham co tham so la "mot mang" so nguyen bat ky
//Ket qua tra ve la so "lon nhat" trong mang truyen vao
#include<stdio.h>
int integer(int arr[], int n){
    int max = 0;
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("So lon nhat trong mang la : %d",max);
}
int main(){
    int arr[] = {1,8,1,2,2,6};
    int n = sizeof(arr)/sizeof(int);
    integer(arr,n);

}