#include "func.h"

int num;
char inputString[128] = { 0 };


void main()
{

	prt_start();

	while (1)
	{
		split_w1();

		switch (num)
		{
		case 1:
			split_c1();
			break;

		case 2:
			split_c2();
			break;

		default:
			printf("�˼��մϴ� �ٽ� �������ּ���!\n\n");
			continue;
		}

		break;
	}

	// ( E1 ) : �Է¹��� �ʾ��� �� ��Ȳ ����ؾ���
	// �� �˰����ζ�� �ƹ��͵� �Է¹��� �ʾ��� �� ������ �߻��� �� ����
	if (num == EOF)
		prt_motivation();

	prt_end();
}