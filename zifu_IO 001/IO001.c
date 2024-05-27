#include <stdio.h>
//1.设计一个程序，统计读到文件结尾之前读取的字符数
//   $./IO001<filename
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//		putchar(ch);
//	return 0;
//}


//2.编写一个程序，在遇到EOF之前，把输入作为字符流读取。程序要求打印每个输入的字符及
//其相应的ASCII十进制值。注意，在ASCII序列中，空格字符前面的字符都是非打印字符，要特殊处
//理这些字符。如果非打印字符是换行符或制表符，则分别打印\n或\t。否则，使用控制字符表示法
//例如，ASCII的1是Ctrl+A，可显示为^A。注意，A的ASCII值是Ctrl+A的值加上64。
//其他非打印字符也有类似的相应关系。

int main()
{
	printf("请输入一串代码，#代表结束\n");
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
				printf(" <-空格");
			if(ch>=1&&ch<=64&&ch!=' '&&ch!='\n')
				printf("^%c is %d", ch+64,ch);
			printf("\n");
			
		}
		count++;
	}
	printf("总共打印了%d个字符", count);
	return 0;
}