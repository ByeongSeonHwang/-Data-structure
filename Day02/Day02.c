#include <stdio.h>

int main()
{

	int kor =0;
	int math = 0;
	int eng = 0;
	int total = 0;
	float avg = 0;
	char grade ;
	printf("����, ����, ���� �Է� : \n");
	scanf("%d %d %d",&kor,&math,&eng);
	total = kor + math + eng;
	avg = (float)total / 3;

	if (avg >= 90) {
		grade = 'A';
	}
	else if (avg >= 80) {
		grade = 'B';
	}
	else if (avg >= 70) {
		grade = 'C';
	}
	else if (avg >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
	printf("���� : %d\n",kor);
	printf("��� : %.2f\n",avg);
	printf("��� : %c\n",grade);

	return 0;
}