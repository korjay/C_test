#include <stdio.h>

int main(int argc, char** argv) {
	double arr[5] = {0};
	int i;
	double max, num1, num2, num3, num4, num5;
	i, max, num1, num2, num3, num4, num5 = 0;
	
	for(i = 0; i <5; i++){
		printf("5개의 정수를 입력하시오 : ");
		scanf("%lf", &arr[i]);
	}
	
	printf("5개의 정수 : ");
	for(i = 0; i <5; i++){
		if(max<arr[i])
			max = arr[i];
		printf("%lf ", arr[i]);
	}
	
//	
//	for(i = 0; i <5; i++){
//		if(max<arr[i])
//			max = arr[i];
//	}

	printf("\n");
	printf("가장 큰 수는 : %lf", max);
	
	return 0;
}
