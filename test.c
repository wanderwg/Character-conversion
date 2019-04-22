#include<stdio.h>
#include<stdlib.h>
int main() {
	char ch;
	while (1) {
		printf("请输入一个字符：\n");
		while ((ch = getchar()) != '/n') {  //使用while循环判断，当遇到‘/n’时不执行循环内语句，借此消掉‘/n’的问题
			if (ch >= 'a'&&ch <= 'z') {
				printf("%c\n", ch - 32);
				break;
			}
			else if (ch >= 'A'&&ch <= 'Z') {
				printf("%c\n", ch + 32);
				break;
			}
			else if (ch >= '0'&&ch <= '9') {
				;
				break;
			}
		}
	}
	system("pause");
	return 0;
}