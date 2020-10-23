#include<stdio.h>



struct stu {
	char name [10];
	int kor, mat, eng, total;
	double avg;
	char grade;
};
void totlaMet(struct stu* d) {
	d->total = d->kor + d->mat + d->eng;
}

void avgMet(struct stu* d) {
	d->avg = d->total / 3;
}

void gradeMet(struct stu* d) {
	if (d->avg >= 90) {
		d->grade = 'A';
	}
	else if(d->avg >=80){
		d->grade ='B';
	}
	else if (d->avg >= 70) {
		d->grade = 'C';
	}
	else if (d->avg >= 60) {
		d->grade = 'D';
	}
	else {
		d->grade = 'F';
	}
}

void printMet(struct stu* d) {
	

	totlaMet(d);
	avgMet(d);
	gradeMet(d);

	printf("\n%s의 성적 : \n", d->name);
	printf("총합 : %d\n", d->total);
	printf("평균 : %.2f\n", d->avg);
	printf("등급 : %c\n", d->grade);
}

typedef struct {
	int data1;
	int data2;
}Da;

/*
포인터와 배열의 관계
 : 포인터와 배열은 밀접한 관계를 갖고 있으나, 분명한 차이점이 있다.
 : 배열은 선언하게되면 기본적으로 배열 자기 자신의 시작 주소를 갖고 있다.
*/

int main() {

	//Da d[3];
	//d[0].data1 = 10;
	//d[0].data2 = 20;
	//printf("%d %d\n", d[0].data1, d[0].data2);


	/*struct stu st[3];

	for (int i = 0; i <= 2; i++) {
		
	printf("학생이름 입력 : ");
	scanf("%s", st[i].name);
	printf("%s의 국어 수학 영어 점수 입력 : \n", st[i].name);
	scanf("%d %d %d", &st[i].kor, &st[i].mat, &st[i].eng);


	}

	for (int i = 0; i <= 2; i++) {
		printMet(&st[i]);
	}*/

	/*Da d;
	Da* pd;

	pd = &d;

	pd->data1 = 10;
	pd->data2 = 20;
	printf("%d %d\n", d.data1, d.data2);

	printf("d의 크기 : %d\n", sizeof(d));
	printf("pd의 크기 : %d\n", sizeof(pd));*/
	
	//char str[10];
	//printf("str의 주소 : %p\n", &str);
	//printf("str의 값 : %p\n", str);

	//printf("입력 : ");
	//scanf("%s", str);
	////& = 앤퍼센드
	//printf("출력 : %s\n", str);

	char str1[10] = "Hello";
	char* str2 = "ABCDE";

	printf("%c %c\n", *str2,*(str2 +1));

	//str1[0] = 'B';
	//str2[0] = 'G'; //상수로 구성되어있어 한번 선언되면 바꿀수 없다.

	//printf("str1 : %c%c%c%c%c\n", str1[0], str1[1], str1[2], str1[3], str1[4]);
	//printf("str2 : %c%c%c%c%c\n", str2[0], str2[1], str2[2], str2[3], str2[4]);
	return 0;
}