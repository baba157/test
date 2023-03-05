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
int Linear_search(int a[], int n, int x)
{
	int i=0;
	while((i<n)&&(a[i]!=x)){
		i++;
	}
	if(i==n){
		return -1;
	}
	else{
		return i;
	}
}
int main(){
	int a[100];
	int n,x;
	nhap(a,n);
	xuat(a,n);
	printf("\nNhap x: ");
	scanf("%d",&x);
	if(Linear_search(a,n,x) ==-1){
		printf("Khong tim thay %d trong mang",x);
	}
	else{
		printf("\nVi tri cua gia tri %d trong mang la:%d ",x,Linear_search(a,n,x));
	}
return 0;
}