#include <stdio.h>
void dao()
{
	char c;
	scanf("%c",&c);
	if( c != '\n')
	{	
		dao();
		printf("%c",c);
	}
}
int main(){
	printf("Nhap chuoi cua ban: ");
	dao();
}