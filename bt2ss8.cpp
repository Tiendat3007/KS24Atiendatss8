#include <stdio.h>
int main() {
    int Array[5]={5,10,15,20,25};
    int number,check = 0;
    printf("hay nhap so ban du doan:");
    scanf("%d",&number);
    for (int i = 0; i < 5; i++) {
    	if(Array[i]==number){
		
        printf("SO BAN VUA NHAP la phan tu thu %d co gia tri la: %d",i,Array[i] );
		check=1;
       }  
	}
		if(!check){
		printf("phan tu khong co trong mang");
	}
 return 0;
}
