
#pragma warning(disable: 4996)

#include <stdio.h> 
#include <stdlib.h>
#include<string.h>



void edit();
void menu();
void view_list();
void new_acc();
void transact();
void see();
void erase();
void easter_egg();

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

// menu로 이동하는 분기점이 되는 함수 
void call_menu() {
	
	int c_key;
	
	printf("menu로 돌아 가시겠습니까? 원하신다면 1을 입력해 주십시오:");
	scanf("%d", &c_key);

	if (c_key == 1) {
		menu();
	}else{
		
	}
	
}
void reset_acc(struct Account p) {
	strcpy(p.account_num, "0");
	p.age = 0;
	p.birth;
	p.deposit_am = 0;
	p.deposit_tm = 0;
	strcpy(p.name, "0");
	strcpy(p.phone_num, "0");
}


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
void erase() {
	int key = 0;
	printf("삭제할 계정을 입력해주세요 [1,2,3]");
	scanf("%d", &key);

	if (key == 1) {
		reset_acc(person[0]);
	}
	else if (key == 2) {
		reset_acc(person[1]);
	}
	else if (key == 3) {
		reset_acc(person[2]);
	}
	printf("계정삭제가 완료되었습니다\n");
	call_menu();
}

void see() {
	int key = 0;

	printf("몇번 고객님을 보시겠습니까?");
	scanf("%d", &key);

	if (key == 1) {
		printAccount(person[0]);
	}
	else if (key == 2) {
		printAccount(person[1]);
	}
	else if (key == 3) {
		printAccount(person[2]);
	}
	else {
		see();
	}
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
		call_menu();
	}
	else if (key == 3) {
		printf("3번 입력\n");
		transact();
		call_menu();

	}
	else if (key == 4) {
		printf("4번 입력\n");
		see();
		call_menu();
	}
	else if (key == 5) {
		printf("5번 입력\n");
		erase();
		call_menu();
	}
	else if (key == 6) {
		printf("6번 입력\n");
		view_list();
		call_menu();
	}
	else if (key == 7) {

	}
	else {
		easter_egg();
		

	}


}


void edit()
{
	int i;
	int x;

	printf("정보를 수정할 고객고유 번호를 선택하세요(0,1,2):");
	scanf("%d", &i);
	printf("\n");

	while (1)
	{
		printf("< %s님의 고객정보입니다. >\n", person[i].name);
		printAccount(person[i]);
		printf("\n");


		printf("정보를 수정합니다.\n");
		printf("이름:");
		scanf("%s", person[i].name);
		printf("나이:");
		scanf("%d", &person[i].age);
		printf("생일");
		scanf("%s", &person[i].birth);
		printf("핸드폰번호:");
		scanf("%s", person[i].phone_num);
		printf("\n");
		printf("정보 수정이 완료되었습니다.\n");

		printf("정보 수정을 계속 하시겠습니까?(1번:yes, 2번:no)");
		scanf("%d", &x);

		if (x == 1)
		{
			continue;
		}
		else if (x == 2)
			break;
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
	int i = 0;
	int x = 0;

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
		printf("고객님의 고유번호는 %d번 입니다.\n", i);
		printf("계정이 생성 되었습니다.\n");

		printf("계정을 계속 생성 하시겠습니까(YES : 1 , NO = 2)?:");
		scanf("%d", &x);

		if (x == 1)
		{
			continue;
		}
		else if (x == 2)
			break;



	}

}
void easter_egg()
{
	int i;
	char j;
	
	for (i = 0; i <= 10000; i++)
	{
		printf("!#@%^!@$&@$^@#!#%!%#!%#!%#\n");
		printf("!%#^$*^$*^##$#$^##@@@%#%%%\n");
		printf("!%@&@*$%@%*(^)^@$%*#$*####\n");



	}
	
                                               
printf("                    .:::;;:::.                    \n");
printf("                  .$$$$$$$$$$$$.                  \n");
printf("                ~=$$=,,,,,,,,=$$=~                \n");
printf("               ~$$;.          .;$$~               \n");
printf("              -$$                $$-              \n");
printf("              $$.                .$$              \n");
printf("             ;$!                  !$;             \n");
printf("             ;$                    $;             \n");
printf("             =!                    !$             \n");
printf("             $:                    !$             \n");
printf("             $!                    !$             \n");
printf("             $!                    !$             \n");
printf("             $*                    *$             \n");
printf("             ;$                    $!             \n");
printf("             !$.  ~6::      ::7-   $;             \n");
printf("             :$! ,$$$$$    $$$$$, ;$:             \n");
printf("             ;$, -$$$#$*  !$$$$$~ ,$;             \n");
printf("             ;$  ~$$$$#;  ;#$$$$~  $;             \n");
printf("             ;$  ,$$$$$    $$$$$,  $;             \n");
printf("             ;$   ,---  !!  ---,   $;             \n");
printf("             ;$~       ~$$-       ~$;             \n");
printf("              $$$      #$$$      $$$              \n");
printf("           *$12$$$$-   $$$$   -$$$$$$$*           \n");
printf("          !$**$$$$$:   :,,:   :$$$$$**$!          \n");
printf("          !$  ~$$$$:          :$$$$~  $!          \n");
printf("          =$   ~$=$!          *$$=:   $=          \n");
printf("         $$*    ~=$=$$$$~~$$$$$$=:    =$$         \n");
printf("         $$       .=$$$10$$$$$$,.      $$         \n");
printf("         $$-         ;*$$$$!;         -$$         \n");
printf("          $$$$$#,       ==       .$$#$$$          \n");
printf("          ,$$$$$$$*~          ~*$$$*$$$,          \n");
printf("          *$$$$$$$$*;        ;*$$$$$=$$=          \n");
printf("         $$$$$$$$*              *$$$$*$$$         \n");
printf("         $$           ;!$$11           $$         \n");
printf("         $$-      .-$$$$!!$$$$-.      -*$         \n");
printf("         ,$$     $$$$$~    ~$$$$$     $$,         \n");
printf("          $*   :*$$~~        ~~$$*:   *$          \n");
printf("          $$,,~$$;              ;$$~,,$$          \n");
printf("          !$$$$$,                .$$$$$!          \n");
printf("          1::;:2                   3:;:4           \n");

while (1)
{
	printf("보안 키를 입력하세요(hin:해골 속 숫자):");
	scanf("%d", &j);

	if (j == 56)
	{
		printf("시스템이 정상적으로 복구 되었습니다.\n");
		break;


	}
	else if (j != 56)
	{

		continue;

	}

}

menu();

  }    



