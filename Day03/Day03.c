#include<stdio.h>


//재귀 함수
/*
재귀 : 원래의 자리로 되돌아가거나 되돌아옴. 반복, 되풀이
*/

//void Func(int n) {
//	if (n == 0) {
//		return; //return 값 부분이 비워져 있다면 아무값을 리턴하지않고 끝내는 작업이다.
//	}
//	printf("Function!!\n");
//	Func(n-1);
//}


//int Func(int num) {
//	if (num == 1) {
//		return 1;
//	}
//	else {
//		return num + Func(num - 1);
//	}
//}

//팩토리얼
//int Func(int num) 
//{
//	if (num == 1) return 1;
//	
//	else
//	return num * Func(num - 1);
//
//}

//피보나치
//int Fibo(int num)
//{
//	if (num ==1 || num==2) {
//		return 1;
//	}
//	else {
//		return Fibo(num - 1) + Fibo(num - 2);
//	}
//
//	return 0;
//}

//하노이
void Hanoi(int num, char A, char B, char C ) {
	if (num == 1) {
		printf("%d -> %c\n", num, C);
	}
	else {
		Hanoi(num-1,A,C,B);
		printf("%d -> %c\n", num, C);
		Hanoi(num-1, B, A, C);
	}
}

int main() {

	//팩토리얼
	/*int num;
	printf("숫자 입력 >>");
	scanf("%d", &num);

	int total = Func(num);
	printf("출력 : %d", total);*/

	//피보나치
	//int num;
	//int sum;
	//printf("숫자 입력 >>");
	//scanf("%d", &num);

	//for (int i = 0; i <= num; i++) {
	//	sum = Fibo(i);
	//}
	//printf("출력 : %d", sum);
	
	int num;
	
	printf("숫자 입력 >>");
	scanf("%d", &num);

	Hanoi(num,'A','B','C');

	




	return 0;
}