#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;


char meone(char* me1) {
	char scissors[80] = "����";
	char rock[80] = "����";
	char paper[80] = "��";
	int x;
	if (strcmp(me1, scissors) == 0)
		x = 0;
	else if (strcmp(me1, rock) == 0)
		x = 1;
	else if (strcmp(me1, paper) == 0)
		x = 2;
	return x;
}

int main()
{
	
	char cp[80];
	 char me1[80], me2[80];
	 char scissors[80] = "����";
	 char rock[80] = "����";
	 char paper[80] = "��";
	 int x;
	 int choice;
	

	 do {
		 srand((unsigned int)time(NULL));
		 int computer = rand() % 3;
		 cout << "û������ ����, ����, ���� �����մϴ�.\n";
		 cout << "����, ����, ���� �Է����ּ��� : ";
		 cin >> me1;

		x = meone(me1);

		 switch (x)
		 {
		 case 0:
			 if (computer == 0)
			 {
				 strcpy(cp, scissors);

				 cout << "���� [" << cp << "]�� �½��ϴ� : ";
				 cin >> me2;
				 if (strcmp(me2, "�̰��") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("�̰��");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
			 }
			 else if (computer == 1) {
				 strcpy(cp, rock);
				 cout << "���� [" << cp << "]�� �½��ϴ� : ";
				 cin >> me2;
				 if (strcmp(me2, "�̰��") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("�̰��");
			 }
			 else
			 {
				 strcpy(cp, paper);
				 cout << "���� [" << cp << "]�� �½��ϴ� : ";
				 cin >> me2;
				 if (strcmp(me2, "�̰��") == 0)
					 printf("�̰��");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
			 }
			 break;
		 case 1:
			 if (computer == 0)
			 {
				 strcpy(cp, scissors);

				 cout << "���� [" << cp << "]�� �½��ϴ� : ";
				 cin >> me2;
				 if (strcmp(me2, "�̰��") == 0)
					 printf("�̰��");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
			 }
			 else if (computer == 1) {
				 strcpy(cp, rock);
				 cout << "���� [" << cp << "]�� �½��ϴ� : ";
				 cin >> me2;
				 if (strcmp(me2, "�̰��") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("�̰��");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
			 }
			 else
			 {
				 strcpy(cp, paper);
				 cout << "���� [" << cp << "]�� �½��ϴ� : ";
				 cin >> me2;
				 if (strcmp(me2, "�̰��") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("�̰��");
			 }
			 break;
		 case 2:
			 if (computer == 0)
			 {
				 strcpy(cp, scissors);

				 cout << "���� [" << cp << "]�� �½��ϴ� : ";
				 cin >> me2;
				 if (strcmp(me2, "�̰��") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("�̰��");
			 }
			 else if (computer == 1) {
				 strcpy(cp, rock);
				 cout << "���� [" << cp << "]�� �½��ϴ� : ";
				 cin >> me2;
				 if (strcmp(me2, "�̰��") == 0)
					 printf("�̰��");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
			 }
			 else
			 {
				 strcpy(cp, paper);
				 cout << "���� [" << cp << "]�� �½��ϴ� : ";
				 cin >> me2;
				 if (strcmp(me2, "�̰��") == 0)
					 printf("����");
				 else if (strcmp(me2, "����") == 0)
					 printf("�̰��");
				 else if (strcmp(me2, "����") == 0)
					 printf("����");
			 }
			 break;
		 }
		 cout << "\n������ ���� �����Ϸ��� 1, �����Ϸ��� 2�� �Է��ϼ���.";
		 cin >> choice;
	 }while (choice == 1);

}

