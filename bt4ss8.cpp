#include <stdio.h>
int main() {
    int MaTran[3][3] = {{1, 2, 3},{4, 5, 6},{9, 8, 7}};
        int max = MaTran[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
              if (MaTran[i][j] > max) {
                max = MaTran[i][j];
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
        printf("Phan tu lon nhat trong mang la: %d\n", max);
    
    return 0;
}

