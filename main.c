#include <stdio.h> 
#include <stdlib.h>
#include<string.h>
void edit();
void menu();
void view_list();

 struct Account {
	
		char name[10]; //이름  
	 	int age; // 나이  
		int birth; // 생년월일 ex.990112  
		char phone_num[30]; // 전화번호 ex. 01040121143  
		int deposit_am; //amount, 예금 금액  
		int deposit_tm; // term, 예금 기간  
		int account_num;
};


 int main(void) {
	
		 //	struct Account person[5]; // 구조체 배열 선언  
		 //	 
		 	// 구조체 접근 법 예시 
		
		//	strcpy(person[0].name, "고범수"); 
		//	strcpy(person[0].phone_num, "01040121143"); 
		 //	person[0].birth = 990112; 
		 //	person[0].age= 22; 
		 //	person[0].deposit_am = 100 ; 
		 //	person[0].deposit_tm = 3; 
		 //	 
		 //	printAccount(person[0]); 
		

		 	menu();
	
		 	return 0;
	
}
// 구조체를 입력하면 정보를 출력해주는 함 수  
 void printAccount(struct Account p) {
	 	printf("%s\n", p.name);
	 	printf("%d\n", p.age);
	 	printf("%d\n", p.birth);
	 	printf("%d\n", p.deposit_am);
		printf("%d\n", p.deposit_tm);
		printf("%s\n", p.phone_num);
		printf("%d\n", p.account_num);
	
}
 void menu()
 {
	

		printf("CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM\n");
	 	printf(" --WELCOME TO THE MAIN MENU-- \n");
		printf("\n");
	 	printf("1.Create new account(계좌 만들기)\n");
	 	printf("2.Update information of existing account(정보수정)\n");
		printf("3.For transaction(현금 입출금)\n");
	 	printf("4.Check the details of existing account(계좌정보조회)\n");
	 	printf("5.Removing existing account(계좌삭제)\n");
	 	printf("6.View customer's list(고객리스트)\n");
	 	printf("7.Exit(나가기)\n");
	 	printf("\n");

		 	int key = 0;
	 	scanf("%d", &key);
	
		if (key == 1) {
				printf("1번 입력");
		
	}
	 	else if (key == 2) {
		 		printf("2번 입력");
		
	}
	 	else if (key == 3) {
		 		printf("3번 입력");
		
	}
	 	else if (key == 4) {
		 		printf("4번 입력");
		
	}
	 	else if (key == 5) {
		 		printf("5번 입력");
		
	}
	 	else if (key == 6) {
		 		printf("6번 입력");
		
	}
	 	else {
				menu();
		
	}
	

		 }

 struct Account person[2];

void edit()
{
	int x;

	printf("< %s님의 고객정보입니다. >\n", person[0].name);
	printAccount(person[0]);
	printf("\n");
	printf("< %s님의 고객정보입니다. >\n", person[1].name);
	printAccount(person[1]);
	printf("-----------------------");
	printf("\n");
	printf("< %s님의 고객정보입니다. >\n", person[2].name);
	printAccount(person[2]);
	printf("-----------------------");
	printf("\n");
	printf("정보를 수정할 고객을 선택하세요(1번,2번,3번):");
	scanf("%d", &x);
	printf("\n");

	if (x == 1)
	{
		printf("정보를 수정합니다.\n");
		printf("이름:");
		scanf("%s", &person[0].name);
		printf("나이:");
		scanf("%d", &person[0].age);
		printf("생일");
		scanf("%s", &person[0].birth);
		printf("핸드폰번호:");
		scanf("%d", person[0].phone_num);
		printf("\n");
		printf("정보 수정이 완료되었습니다.");
	}
	else if (x == 2)
	{
		printf("정보를 수정합니다.\n");
		printf("이름:");
		scanf("%s", &person[1].name);
		printf("나이:");
		scanf("%d", &person[1].age);
		printf("생일");
		scanf("%s", &person[1].birth);
		printf("핸드폰번호:");
		scanf("%d", person[1].phone_num);
		printf("\n");
		printf("정보 수정이 완료되었습니다.");
	}
	else if (x == 3)
	{
		printf("정보를 수정합니다.\n");
		printf("이름:");
		scanf("%s", &person[2].name);
		printf("나이:");
		scanf("%d", &person[2].age);
		printf("생일");
		scanf("%s", &person[2].birth);
		printf("핸드폰번호:");
		scanf("%d", person[2].phone_num);
		printf("\n");
		printf("정보 수정이 완료되었습니다.");
	}

}

void view_list()
{
	printf("고객 %s의 계좌정보입니다.\n",person[0].name);
	printAccount(person[0]);	
	printf("고객 %s의 계좌정보입니다.\n",person[1].name);
	printAccount(person[1]);
	printf("고객 %s의 계좌정보입니다.\n",person[2].name);
	printAccount(person[2]);


}
