#include <stdio.h>
//1.���һ������ͳ�ƶ����ļ���β֮ǰ��ȡ���ַ���
//   $./IO001<filename
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//		putchar(ch);
//	return 0;
//}


//2.��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ������Ҫ���ӡÿ��������ַ���
//����Ӧ��ASCIIʮ����ֵ��ע�⣬��ASCII�����У��ո��ַ�ǰ����ַ����ǷǴ�ӡ�ַ���Ҫ���⴦
//����Щ�ַ�������Ǵ�ӡ�ַ��ǻ��з����Ʊ������ֱ��ӡ\n��\t������ʹ�ÿ����ַ���ʾ��
//���磬ASCII��1��Ctrl+A������ʾΪ^A��ע�⣬A��ASCIIֵ��Ctrl+A��ֵ����64��
//�����Ǵ�ӡ�ַ�Ҳ�����Ƶ���Ӧ��ϵ��

int main()
{
	printf("������һ�����룬#�������\n");
	char ch;
	int count = 0;
	while ((ch = getchar()) != '#')
	{
		if(ch>' ')
		printf("%c is %d\n", ch, ch);
		else
		{
			if (ch == '\t')
				printf("\\t");
			if (ch == '\n')
				printf("\\n");
			if (ch == ' ')
				printf(" <-�ո�");
			if(ch>=1&&ch<=64&&ch!=' '&&ch!='\n')
				printf("^%c is %d", ch+64,ch);
			printf("\n");
			
		}
		count++;
	}
	printf("�ܹ���ӡ��%d���ַ�", count);
	return 0;
}