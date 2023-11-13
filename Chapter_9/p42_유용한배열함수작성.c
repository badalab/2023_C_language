#include <stdio.h>
#define SIZE 5

// 함수 원형 선언
double get_array_avg(int values[], int n);
void print_array(int values[], int n);

void main() {
	int i;
	int data[SIZE] = { 10, 20, 30, 40, 50 };
	double result;

	print_array(data, SIZE);
	result = get_array_avg(data, SIZE);
	printf("배열 원소들의 평균 = %f\n", result);

}

// 배열 요소의 평균을 계산하는 함수
double get_array_avg(int values[], int n) {
	int i;
	double sum = 0.0;
	for (i = 0; i < n; i++)
		sum += values[i];
	return sum / n;
}

// 배열 요소를 화면에 출력하는 함수
void print_array(int values[], int n) {
	int i;
	printf("[ ");
	for (i = 0; i < n; i++)
		printf("%d ", values[i]);
	printf("]\n");
}
