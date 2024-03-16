#include <stdio.h>

int main() {

	int n = 3;
	int arr_2d[3][3] = {};

	// 1. 첫 번째 행에 전부 숫자 1을 채웁니다.
	for (int j = 0; j < n; j++) {
		arr_2d[0][j] = 1;
	}

	// 2. 두 번째 행부터 마지막 행까지 전부 숫자를 채웁니다.
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr_2d[i][j] = arr_2d[i - 1][j] + 2;
		}
	}

	// 출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr_2d[i][j]);
		}
		printf("\n");
	}

	return 0;

}