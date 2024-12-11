#include<stdio.h>
#include<math.h>

void empty(int n) {
    if(n == 0) {
        printf("array is empty ^ ^\n");
        return;
    }
}
void position(int pos, int n) {
    if(pos < 0 || pos > n) {
        printf("Valid position ^ ^\n");
        return;
    }
}
void input(int arr[], int *n) {
    printf("Nhap so phan tu : ");
    scanf("%d", n);
    for(int i = 0; i < *n; i++) {
        printf("Phan tu thu %d \t", i + 1);
        scanf("%d", &arr[i]);
    }
}
void output(int arr[], int n) {
    printf("Cac phan tu trong mang la :\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void add(int arr[], int *n, int pos) {
    if(*n >= 100) {
        printf("Mang da day khong the them phan tu :\n");
        return;
    }
    printf("Them phan tu vao vi tri chi dinh :\n");
    for(int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    scanf("%d", &arr[pos]);
    (*n)++;
    for(int i = 0; i < *n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void fix(int arr[], int pos, int n) {
    printf("Nhap vi tri sua mot phan tu :\n");
    scanf("%d", &pos);
    if(pos < 0 || pos >= n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &arr[pos]);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void delete(int arr[], int *n, int pos) {
    printf("Chon vi tri de xoa phan tu (0-%d) :\n", *n - 1);
    scanf("%d", &pos);
    if(pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    for(int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}
void giam(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void tang(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int linearSearch(int arr[], int n, int value) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}
int binarySearch(int arr[], int n, int value) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == value)
            return mid;
        if (arr[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main() {
    int choice, n = 0, arr[100], pos;
    while(1) {
        printf("\n\t=====MENU=====\n");
        printf("1. Nhập số phần tử cần nhập và giá trị các phần tử\n");
        printf("2. In ra giá trị các phần tử đang quản lý\n");
        printf("3. Thêm một phần tử vào vị trí chỉ định\n");
        printf("4. Sửa một phần tử ở vị trí chỉ định\n");
        printf("5. Xóa một phần tử ở vị trí chỉ định\n");
        printf("6. Sắp xếp các phần tử\n");
        printf("7. Tìm kiếm phần tử nhập vào\n");
        printf("8. Thoát\n");
        printf("Your choice is : ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                input(arr, &n);
                break;
            case 2:
                empty(n);
                output(arr, n);
                break;
            case 3:
                printf("Nhap vi tri can them: ");
                scanf("%d", &pos);
                add(arr, &n, pos);
                break;
            case 4:
                fix(arr, pos, n);
                break;
            case 5:
                delete(arr, &n, pos);
                break;
            case 6: {
                int Sub_menu;
                printf("\ta. Giam dan\n");
                printf("\tb. Tang dan\n");
                getchar();
                Sub_menu = getchar();
                if(Sub_menu == 'a') {
                    giam(arr, n);
                } else if(Sub_menu == 'b') {
                    tang(arr, n);
                } else {
                    printf("Lua chon khong hop le\n");
                }
                break;
            }
            case 7: {
                int value, Sub_menu;
                printf("Nhap phan tu can tim kiem : ");
                scanf("%d", &value);
                printf("\ta. Tim kiem tuyen tinh\n");
                printf("\tb. Tim kiem nhi phan\n");
                getchar();
                Sub_menu = getchar();
                if(Sub_menu == 'a') {
                    int result = linearSearch(arr, n, value);
                    if (result != -1) {
                        printf("Tim thay tai vi tri %d\n", result);
                    } else {
                        printf("Khong tim thay\n");
                    }
                } else if(Sub_menu == 'b') {
                    int result = binarySearch(arr, n, value);
                    if (result != -1) {
                        printf("Tim thay tai vi tri %d\n", result);
                    } else {
                        printf("Khong tim thay\n");
                    }
                } else {
                    printf("Lua chon khong hop le ^ ^\n");
                }
                break;
            }
            case 8:
                printf("Thoat chuong trinh !!\n");
                return 0;
            default:
                printf("Lua chon khong hop le !!!\n");
        }
    }
}
