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

	printf("\n%s�� ���� : \n", d->name);
	printf("���� : %d\n", d->total);
	printf("��� : %.2f\n", d->avg);
	printf("��� : %c\n", d->grade);
}

typedef struct {
	int data1;
	int data2;
}Da;

/*
�����Ϳ� �迭�� ����
 : �����Ϳ� �迭�� ������ ���踦 ���� ������, �и��� �������� �ִ�.
 : �迭�� �����ϰԵǸ� �⺻������ �迭 �ڱ� �ڽ��� ���� �ּҸ� ���� �ִ�.
*/

int main() {

	//Da d[3];
	//d[0].data1 = 10;
	//d[0].data2 = 20;
	//printf("%d %d\n", d[0].data1, d[0].data2);


	/*struct stu st[3];

	for (int i = 0; i <= 2; i++) {
		
	printf("�л��̸� �Է� : ");
	scanf("%s", st[i].name);
	printf("%s�� ���� ���� ���� ���� �Է� : \n", st[i].name);
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

	printf("d�� ũ�� : %d\n", sizeof(d));
	printf("pd�� ũ�� : %d\n", sizeof(pd));*/
	
	//char str[10];
	//printf("str�� �ּ� : %p\n", &str);
	//printf("str�� �� : %p\n", str);

	//printf("�Է� : ");
	//scanf("%s", str);
	////& = ���ۼ���
	//printf("��� : %s\n", str);

	char str1[10] = "Hello";
	char* str2 = "ABCDE";

	printf("%c %c\n", *str2,*(str2 +1));

	//str1[0] = 'B';
	//str2[0] = 'G'; //����� �����Ǿ��־� �ѹ� ����Ǹ� �ٲܼ� ����.

	//printf("str1 : %c%c%c%c%c\n", str1[0], str1[1], str1[2], str1[3], str1[4]);
	//printf("str2 : %c%c%c%c%c\n", str2[0], str2[1], str2[2], str2[3], str2[4]);
	return 0;
}