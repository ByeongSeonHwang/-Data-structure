#include<stdio.h>


//����ü
//���� ���� ������� ��Ƽ� '�ϳ��� ���ο� �ڷ���' �� ����� ���
//����ü ������ ����� ������ ���� ����ü������.����� �������� �����Ѵ�.
//ex)struct Data d;
//d.data1 = 10;
//����ü��ũ��� ����ü ������� ��� ���� ũ���̴�.
//�⺻ ����ü �����ϴ� ���:
// struct ����ü�̸�{
//	 ���;
// };

//�⺻ ����ü ����
//struct Data {
//	int data1;
//	int data2;
//	double data3;
//};

//��Ī�� �̿��� ����ü ����
//typedef struct Data {
//	int data1;
//	int data2;
//}Da;

//�͸� ����ü ����
//�͸� ����ü�� ����ϸ� ����ü �̸����� ���� x,��Ī�� ��� ����
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
	//printf("d�� ũ�� : %d\n", sizeof(d));

	struct Data d;

	printf("���� ���� ���� ���� �Է� >>");
	scanf("%d %d %d", &d.kor, &d.mat, &d.eng);

	TotalMet(&d);
	printf("�հ� : %d\n", d.total);
	AvgMet(&d);
	printf("��� : %.2f\n", d.avg);
	GradeMet(&d);
	printf("��� : %c\n", d.grade);

	return 0;
}