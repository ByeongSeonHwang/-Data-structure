#include <stdio.h>

int main()
{

	int kor =0;
	int math = 0;
	int eng = 0;
	int total = 0;
	float avg = 0;
	char grade ;
	printf("국어, 수학, 영어 입력 : \n");
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
	printf("총합 : %d\n",kor);
	printf("평균 : %.2f\n",avg);
	printf("등급 : %c\n",grade);

	return 0;
}