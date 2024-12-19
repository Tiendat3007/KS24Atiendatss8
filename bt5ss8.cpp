#include <stdio.h>
int main() {
    int MaTran[3][3] = {{1, 2, 3},{4, 5, 6},{9, 8, 7}};
    int sum;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
              if (i==0||i==2||j==0||j==2) {
                sum += MaTran[i][j];
                	 printf("cac so ngoai bien la: %d\n", MaTran[i][j]);
            }
        }
    }
    printf("......matran......\n");
    for(int i = 0;i<3;i++ ){
	for(int j = 0;j<3;j++){
		printf("%d ",MaTran[i][j]);
	}
	printf("\n");
}
        printf("tong cac so o bien la: %d\n", sum);
    
    return 0;
}

