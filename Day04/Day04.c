#include<stdio.h>


//구조체
//여러 개의 멤버들을 모아서 '하나의 새로운 자료형' 을 만드는 방식
//구조체 변수의 멤버에 접근할 때는 구조체변수명.멤버명 형식으로 접근한다.
//ex)struct Data d;
//d.data1 = 10;
//구조체의크기는 구조체 멤버들을 모두 더한 크기이다.
//기본 구조체 정의하는 방법:
// struct 구조체이름{
//	 멤버;
// };

//기본 구조체 정의
//struct Data {
//	int data1;
//	int data2;
//	double data3;
//};

//별칭을 이용한 구조체 정의
//typedef struct Data {
//	int data1;
//	int data2;
//}Da;

//익명 구조체 정의
//익명 구조체를 사용하면 구조체 이름으로 선언 x,별칭만 사용 가능
//typedef struct{
//	int data1;
//	int data2;
//}Da;

struct Data {
	int kor, mat, eng, total;
	double avg;
	char grade;
};

void TotalMet(struct Data* d) {
	d->total = d->kor + d->mat + d->eng;
	
}



void AvgMet(struct Data* d) {
	d->avg = d->total / 3;
}

void GradeMet(struct Data* d) {
	
	if (d->avg >= 90) {
		d->grade = 'A';
	}
	else if (d->avg >= 80) {
		d->grade = 'B';
	}
	else if (d->avg >= 70) {
		d->grade = 'C';
	}
	else if (d->avg >= 60) {
		d->grade = 'D';
	}
	else{
		d->grade = 'F';
	}
}

int main() {
	//struct Data d;
	//Da d2;
	//d.data1 = 10;
	//d.data2 = 20;
	//d2.data1 = 30;
	//d2.data2 = 40;
	//printf("%d %d\n", d.data1, d.data2);
	//printf("%d %d\n", d2.data1, d2.data2);
	//printf("d의 크기 : %d\n", sizeof(d));

	struct Data d;

	printf("국어 수학 영어 점수 입력 >>");
	scanf("%d %d %d", &d.kor, &d.mat, &d.eng);

	TotalMet(&d);
	printf("합계 : %d\n", d.total);
	AvgMet(&d);
	printf("평균 : %.2f\n", d.avg);
	GradeMet(&d);
	printf("등급 : %c\n", d.grade);

	return 0;
}