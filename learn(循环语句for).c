#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//whileѭ���ṹ

//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d ", i);
//
//		i++;//��������
//	}
//	return 0;
//}

//forѭ��
//���������ֽ����һ��

/*for (���ʽ1�����ʽ2�����ʽ3)//���ʽ1Ϊ��ʼ�������ʽ2Ϊ�жϲ��֣����ʽ3Ϊ��������
	ѭ�����;
*/

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		/*if (i == 5)
//			break;
//		*/
//		if (i == 5)
//			continue;
//		//������whileѭ��һ��������ѭ��
//		printf("%d\n", i);
//	}
//	return 0;
//}


//ѭ�����ڲ��ܸı�ѭ������

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%d\n", i);
//		i = 5;
//		//��ѭ��
//
//	}
//	return 0;
//}


//ѭ��������ȡǰ�պ������д��(<10 �� >=9 )

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//�������ֶ�����ʡ��

//int main()
//{
//	for (;;)
//	{
//		//�жϲ��ֵ�ʡ�� - ��Ϊ�� ������ѭ��
//		printf("hehe\n");
//	}
//	return 0;
//}


//��ʼ����ʡ�Բ����Ĵ���

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)//ʡ��j = 0
//		//����3���ٴ�0��ʼ ��ִ���ڲ�ѭ��
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}
	return 0;

}



int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//k=0��ֵ �޷�����ѭ��
	{
		k++;
	}
	return 0;
}








