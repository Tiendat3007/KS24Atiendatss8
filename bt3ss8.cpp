#include<stdio.h>
int main(){
int n;
printf("hay nhap so hang va cot cua mang:");
scanf("%d",&n);
int MaTran[n][n];
for(int i = 0;i<n;i++ ){
	for(int j = 0;j<n;j++){
		printf("hay nhap gia thi thu (%d,%d):",i,j);
		scanf("%d",&MaTran[i][j]);
	}
}
printf("......matran......\n");
for(int i = 0;i<n;i++ ){
	for(int j = 0;j<n;j++){
		printf("%d ",MaTran[i][j]);
	}
	printf("\n");
}

return 0;
}
