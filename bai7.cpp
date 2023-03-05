#include <stdio.h>
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
int binarySearch(int a[], int l, int r, int x)
{
	if(r < l)
		return -1;
	int mid = (l + r) / 2;
	
	if(a[mid] == x)
		return mid;
	else if(a[mid] < x)
		return binarySearch(a, mid + 1, r, x);
	else 
		return binarySearch(a, l, mid - 1, x);
}
int main(){
	int a[100];
	int n,l,r,x;
	nhap(a,n);
	xuat(a,n);
	binarySearch(a,l,r,x);
}