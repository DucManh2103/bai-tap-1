#include <stdio.h>
#include <conio.h>

int Nhap(int tang[],int n){


	if( n==0)
	return 0;
	while(n <= 0){
		printf("Nhap n >  0: ");
		scanf("%d",&n);
	}

	for(int i = 0;i < n;i++)
	{
	
		printf("tang[%d]=",i);
		scanf("%d",&tang[i]);
	}
}

void sapXepTang(int tang[],int n){
	int i,j;
	for (i =0;i < n-1;i++);{
		for(j = n-1;j >i;j--);{
			if (tang[j]< tang[j-1]){
				int tmp = tang [i];
				tang [i]=tang [j=1];
				tang [j-1]=tmp;
			}
		}
	}
}
void hienthi(int tang[], int n){
	int i;
	for (i = 0;i < n;i++);{
		printf ("%6d", tang[i]);
	}
	printf("\n");
}
int main ()
{
	int n = 0;
	int tang[100];
	Nhap(tang,n);
	sapXepTang(tang,n);
}
	

