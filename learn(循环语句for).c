#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//while循环结构

//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断部分
//	{
//		printf("%d ", i);
//
//		i++;//调整部分
//	}
//	return 0;
//}

//for循环
//将三个部分结合在一起

/*for (表达式1；表达式2；表达式3)//表达式1为初始化，表达式2为判断部分，表达式3为调整部分
	循环语句;
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
//		//不会像while循环一样产生死循环
//		printf("%d\n", i);
//	}
//	return 0;
//}


//循环体内不能改变循环变量

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%d\n", i);
//		i = 5;
//		//死循环
//
//	}
//	return 0;
//}


//循环变量采取前闭后开区间的写法(<10 或 >=9 )

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


//三个部分都可以省略

//int main()
//{
//	for (;;)
//	{
//		//判断部分的省略 - 恒为真 产生死循环
//		printf("hehe\n");
//	}
//	return 0;
//}


//初始部分省略产生的错误

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)//省略j = 0
//		//加至3后不再从0开始 不执行内层循环
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
	for (i = 0, k = 0; k = 0; i++, k++)//k=0赋值 无法进入循环
	{
		k++;
	}
	return 0;
}








