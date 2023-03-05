#include<stdio.h>
void nhap(int a[], int &n){   
    printf("Nhap n: ");
    scanf("%d",&n);  
     
    for(int i=0; i<n; i++){
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void xuat(int a[], int n){
    printf("Mang vua nhap la: \n");
    for(int i=0;i<n;i++){
        printf("%5d",a[i]);
    }
}
void insertion_sort(int a[],int &n) { 
    int i,j,k; 
    for(i=1;i<n;i++){ 
    k = a[i]; 
    j = i - 1; 
        while (j >= 0 && a[j] > k){ 
            a[j+1] = a[j]; 
            j =j-1; 
        } 
        a[j+1]=k; 
    } 
}
int main(){
    int a[100];
    int n;
    nhap(a,n);
    insertion_sort(a,n);
    xuat(a,n);
    return 0;
}