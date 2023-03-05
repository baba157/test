#include<stdio.h>
void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}
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
void Selection_sort(int a[], int n){
	for(int i = 0; i < n - 1; i++)
	{
		int min = i;
		
		for(int j = i + 1; j < n; j++)
			if(a[min] > a[j])
				min = j;
		swap(a[i], a[min]);
	}
}
int main(){
    int a[100];
    int n;
    nhap(a,n);
    Selection_sort(a,n);
    xuat(a,n);
    return 0;
}