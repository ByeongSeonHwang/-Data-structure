#include<stdio.h>


//��� �Լ�
/*
��� : ������ �ڸ��� �ǵ��ư��ų� �ǵ��ƿ�. �ݺ�, ��Ǯ��
*/

//void Func(int n) {
//	if (n == 0) {
//		return; //return �� �κ��� ����� �ִٸ� �ƹ����� ���������ʰ� ������ �۾��̴�.
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

//���丮��
//int Func(int num) 
//{
//	if (num == 1) return 1;
//	
//	else
//	return num * Func(num - 1);
//
//}

//�Ǻ���ġ
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

//�ϳ���
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

	//���丮��
	/*int num;
	printf("���� �Է� >>");
	scanf("%d", &num);

	int total = Func(num);
	printf("��� : %d", total);*/

	//�Ǻ���ġ
	//int num;
	//int sum;
	//printf("���� �Է� >>");
	//scanf("%d", &num);

	//for (int i = 0; i <= num; i++) {
	//	sum = Fibo(i);
	//}
	//printf("��� : %d", sum);
	
	int num;
	
	printf("���� �Է� >>");
	scanf("%d", &num);

	Hanoi(num,'A','B','C');

	




	return 0;
}