#include <stdio.h> 
#include <stdlib.h>
#include<string.h>
void edit();
void menu();
void view_list();
void new_acc();
void transact();

struct Account {

	char name[10]; //이름  
	int age; // 나이  
	char birth[10]; // 생년월일 ex.990112  
	char phone_num[30]; // 전화번호 ex. 01040121143  
	int deposit_am; //amount, 예금 금액  
	int deposit_tm; // term, 예금 기간  
	char account_num[30]; //계좌번호
	char id[20]; //아이디
	int passowrd; //비밀번호
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

struct Account person[3];

// 구조체를 입력하면 정보를 출력해주는 함 수  
void printAccount(struct Account p) {
	printf("이름:%s\n", p.name);
	printf("나이:%d\n", p.age);
	printf("생일:%s\n", p.birth);
	printf("예금 금액:%d\n", p.deposit_am);
	printf("예금 기간:%d\n", p.deposit_tm);
	printf("핸드폰 번호:%s\n", p.phone_num);
	printf("계좌번호:%s\n", p.account_num);

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
	printf("Enter your choice:");
	scanf("%d", &key);

	if (key == 1) {
		printf("1번 입력\n");
		new_acc();
		menu();
	}
	else if (key == 2) {
		printf("2번 입력\n");
		edit();
		menu();
	}
	else if (key == 3) {
		printf("3번 입력\n");
		transact();
		menu();

	}
	else if (key == 4) {
		printf("4번 입력\n");

	}
	else if (key == 5) {
		printf("5번 입력\n");

	}
	else if (key == 6) {
		printf("6번 입력\n");
		view_list();
		menu();
	}
	else if(key==7){
		
	}
	else {
		menu();

	}


}


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
		scanf("%s", person[0].name);
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
		scanf("%d", person[1].age);
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
		scanf("%d", person[2].age);
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
	printf("고객 %s의 계좌정보입니다.\n", person[0].name);
	printAccount(person[0]);
	printf("고객 %s의 계좌정보입니다.\n", person[1].name);
	printAccount(person[1]);
	printf("고객 %s의 계좌정보입니다.\n", person[2].name);
	printAccount(person[2]);


}

void transact()
{

	int x, y, z;
	int i = 0;

	printf("계좌를 선택하세요(1번:%s님의 계좌,2번:%s님의 계좌,3번:%s님의 계좌):", person[0].name, person[1].name, person[2].name);
	scanf("%d", &x);

	if (x == 1)
	{
		printf("--%s님의 계좌가 선택 되었습니다--.\n", person[0].name);
		printf("입출금 여부를 선택하세요(1번:입금,2번:출금):");
		scanf("%d", &y);

		if (y == 1)
		{
			printf("입금하실 금액:");
			scanf("%d", &z);

			person[0].deposit_am = z + person[0].deposit_am;

			printf("입금이 완료 되었습니다.\n");
			printf("현재금액:%d\n", person[0].deposit_am);
		}
		else if (y == 2)
		{
			printf("출금하실 금액:");
			scanf("%d", &z);
			printf("보낼 계좌의 고유번호(0,1,2)");
			scanf("%d", &i);
			printf("보낼 계좌번호:");
			scanf("%s", person[i].account_num);

			person[0].deposit_am = person[0].deposit_am - z;
			person[i].deposit_am = person[i].deposit_am + z;

			printf("출금이 완료 되었습니다.\n");
			printf("현재 금액:%d\n", person[0].deposit_am);

		}
	}
	else if (x == 2)
	{
		printf("--%s님의 계좌가 선택 되었습니다--.\n", person[1].name);
		printf("입출금 여부를 선택하세요(1번:입금,2번:출금):");
		scanf("%d", &y);


		if (y == 1)
		{
			printf("입금하실 금액:");
			scanf("%d", &z);

			person[1].deposit_am = z + person[1].deposit_am;

			printf("입금이 완료 되었습니다.\n");
			printf("현재금액:%d\n", person[1].deposit_am);
		}
		else if (y == 2)
		{
			printf("출금하실 금액:");
			scanf("%d", &z);
			printf("보낼 계좌의 고유번호(0,1,2)");
			scanf("%d", &i);
			printf("보낼 계좌번호:");
			scanf("%s", person[i].account_num);

			person[1].deposit_am = person[1].deposit_am - z;
			person[i].deposit_am = person[i].deposit_am + z;

			printf("출금이 완료 되었습니다.\n");
			printf("현재 금액:%d\n", person[1].deposit_am);
		}
	}
	else if (x == 3)
	{
		printf("--%s님의 계좌가 선택 되었습니다--.\n", person[2].name);
		printf("입출금 여부를 선택하세요(1번:입금,2번:출금):");
		scanf("%d", &y);



		if (y == 1)
		{
			printf("입금하실 금액:");
			scanf("%d", &z);

			person[2].deposit_am = z + person[2].deposit_am;

			printf("입금이 완료 되었습니다.\n");
			printf("현재금액:%d\n", person[2].deposit_am);
		}
		else if (y == 2)
		{
			printf("출금하실 금액:");
			scanf("%d", &z);
			printf("보낼 계좌의 고유번호(0,1,2)");
			scanf("%d", &i);
			printf("보낼 계좌번호:");
			scanf("%s", person[i].account_num);

			person[2].deposit_am = person[2].deposit_am - z;
			person[i].deposit_am = person[i].deposit_am + z;

			printf("출금이 완료 되었습니다.\n");
			printf("현재 금액:%d\n", person[2].deposit_am);
		}

	}



}

void new_acc()
{
	int i=0;
	int x=0;

	while (1)
	{
		printf("-----고객님의 계정을 생성합니다.-----\n");
		printf("\n");
		printf("고유번호를 입력하세요(0,1,2):");
		scanf("%d", &i);

		printf("이름:");
		scanf("%s", person[i].name);

		printf("나이:");
		scanf("%d", &person[i].age);

		printf("생일:");
        scanf("%s", person[i].birth);

		printf("핸드폰번호:");
		scanf("%s", person[i].phone_num);
	
		printf("예치금:");
		scanf("%d", &person[i].deposit_am);

		printf("계좌번호:");
		scanf("%s", person[i].account_num);

		printf("\n");
		printf("고객님의 고유번호는 %d번 입니다.\n",i);
		printf("계정이 생성 되었습니다.\n");
	
		printf("계정을 계속 생성 하시겠습니까(1번:yes ,2번:no)?:");
		scanf("%d", &x);

		if (x == 1)
		{
			continue;
		}
		else if (x == 2)
			break;


				
	}

}



