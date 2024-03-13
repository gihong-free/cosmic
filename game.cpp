#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;


char meone(char* me1) {
	char scissors[80] = "가위";
	char rock[80] = "바위";
	char paper[80] = "보";
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
	 char scissors[80] = "가위";
	 char rock[80] = "바위";
	 char paper[80] = "보";
	 int x;
	 int choice;
	

	 do {
		 srand((unsigned int)time(NULL));
		 int computer = rand() % 3;
		 cout << "청개구리 가위, 바위, 보를 시작합니다.\n";
		 cout << "가위, 바위, 보를 입력해주세요 : ";
		 cin >> me1;

		x = meone(me1);

		 switch (x)
		 {
		 case 0:
			 if (computer == 0)
			 {
				 strcpy(cp, scissors);

				 cout << "상대는 [" << cp << "]를 냈습니다 : ";
				 cin >> me2;
				 if (strcmp(me2, "이겼다") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "개굴") == 0)
					 printf("이겼다");
				 else if (strcmp(me2, "졌다") == 0)
					 printf("졌다");
			 }
			 else if (computer == 1) {
				 strcpy(cp, rock);
				 cout << "상대는 [" << cp << "]를 냈습니다 : ";
				 cin >> me2;
				 if (strcmp(me2, "이겼다") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "개굴") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "졌다") == 0)
					 printf("이겼다");
			 }
			 else
			 {
				 strcpy(cp, paper);
				 cout << "상대는 [" << cp << "]를 냈습니다 : ";
				 cin >> me2;
				 if (strcmp(me2, "이겼다") == 0)
					 printf("이겼다");
				 else if (strcmp(me2, "개굴") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "졌다") == 0)
					 printf("졌다");
			 }
			 break;
		 case 1:
			 if (computer == 0)
			 {
				 strcpy(cp, scissors);

				 cout << "상대는 [" << cp << "]를 냈습니다 : ";
				 cin >> me2;
				 if (strcmp(me2, "이겼다") == 0)
					 printf("이겼다");
				 else if (strcmp(me2, "개굴") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "졌다") == 0)
					 printf("졌다");
			 }
			 else if (computer == 1) {
				 strcpy(cp, rock);
				 cout << "상대는 [" << cp << "]를 냈습니다 : ";
				 cin >> me2;
				 if (strcmp(me2, "이겼다") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "개굴") == 0)
					 printf("이겼다");
				 else if (strcmp(me2, "졌다") == 0)
					 printf("졌다");
			 }
			 else
			 {
				 strcpy(cp, paper);
				 cout << "상대는 [" << cp << "]를 냈습니다 : ";
				 cin >> me2;
				 if (strcmp(me2, "이겼다") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "개굴") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "졌다") == 0)
					 printf("이겼다");
			 }
			 break;
		 case 2:
			 if (computer == 0)
			 {
				 strcpy(cp, scissors);

				 cout << "상대는 [" << cp << "]를 냈습니다 : ";
				 cin >> me2;
				 if (strcmp(me2, "이겼다") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "개굴") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "졌다") == 0)
					 printf("이겼다");
			 }
			 else if (computer == 1) {
				 strcpy(cp, rock);
				 cout << "상대는 [" << cp << "]를 냈습니다 : ";
				 cin >> me2;
				 if (strcmp(me2, "이겼다") == 0)
					 printf("이겼다");
				 else if (strcmp(me2, "개굴") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "졌다") == 0)
					 printf("졌다");
			 }
			 else
			 {
				 strcpy(cp, paper);
				 cout << "상대는 [" << cp << "]를 냈습니다 : ";
				 cin >> me2;
				 if (strcmp(me2, "이겼다") == 0)
					 printf("졌다");
				 else if (strcmp(me2, "개굴") == 0)
					 printf("이겼다");
				 else if (strcmp(me2, "졌다") == 0)
					 printf("졌다");
			 }
			 break;
		 }
		 cout << "\n게임을 새로 시작하려면 1, 종료하려면 2를 입력하세요.";
		 cin >> choice;
	 }while (choice == 1);

}

