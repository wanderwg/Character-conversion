#include<stdio.h>
#include<stdlib.h>
int main() {
	char ch;
	while (1) {
		printf("������һ���ַ���\n");
		while ((ch = getchar()) != '/n') {  //ʹ��whileѭ���жϣ���������/n��ʱ��ִ��ѭ������䣬���������/n��������
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