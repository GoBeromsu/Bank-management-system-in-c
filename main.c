
#pragma warning(disable: 4996)

#include <stdio.h> 
#include <stdlib.h>
#include<string.h>


void delete_();
void edit();
void menu();
void view_list();
void new_acc();
void transact();
void see();
void erase();
void easter_egg();

struct Account {

	char name[10]; //�̸�  
	int age; // ����  
	char birth[10]; // ������� ex.990112  
	char phone_num[30]; // ��ȭ��ȣ ex. 01040121143  
	int deposit_am; //amount, ���� �ݾ�  
	int deposit_tm; // term, ���� �Ⱓ  
	char account_num[30]; //���¹�ȣ
	char id[20]; //���̵�
	int passowrd; //��й�ȣ
};

// menu�� �̵��ϴ� �б����� �Ǵ� �Լ� 
void call_menu() {

	int c_key = 0;

	printf("menu�� ���� ���ðڽ��ϱ�? ���ϽŴٸ� 1�� �Է��� �ֽʽÿ�:");
	scanf("%d", &c_key);

	if (c_key == 1) {
		menu();
	}
	else {
		call_menu();
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

	//	struct Account person[5]; // ����ü �迭 ����  
	//	 
	   // ����ü ���� �� ���� 

   //	strcpy(person[0].name, "������"); 
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

// ����ü�� �Է��ϸ� ������ ������ִ� �� ��  
void printAccount(struct Account p) {
	printf("�̸�:%s\n", p.name);
	printf("����:%d\n", p.age);
	printf("����:%s\n", p.birth);
	printf("���� �ݾ�:%d\n", p.deposit_am);
	printf("���� �Ⱓ:%d\n", p.deposit_tm);
	printf("�ڵ��� ��ȣ:%s\n", p.phone_num);
	printf("���¹�ȣ:%s\n", p.account_num);

}
void erase() {
	int key = 0;
	printf("������ ������ �Է����ּ��� [1,2,3]");
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
	printf("���������� �Ϸ�Ǿ����ϴ�\n");
	call_menu();
}

void see() {
	int key = 0;

	printf("��� �������� ���ðڽ��ϱ�?");
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
	printf("1.Create new account(���� �����)\n");
	printf("2.Update information of existing account(��������)\n");
	printf("3.For transaction(���� �����)\n");
	printf("4.Check the details of existing account(����������ȸ)\n");
	printf("5.Removing existing account(���»���)\n");
	printf("6.View customer's list(��������Ʈ)\n");
	printf("7.Exit(������)\n");
	printf("\n");

	int key = 0;
	printf("Enter your choice:");
	scanf("%d", &key);

	if (key == 1) {
		printf("1�� �Է�\n");
		new_acc();
		menu();
	}
	else if (key == 2) {
		printf("2�� �Է�\n");
		edit();
		
	}
	else if (key == 3) {
		printf("3�� �Է�\n");
		transact();
		call_menu();

	}
	else if (key == 4) {
		printf("4�� �Է�\n");
		see();
		call_menu();
	}
	else if (key == 5) {
		printf("5�� �Է�\n");
		erase();
		call_menu();
	}
	else if (key == 6) {
		printf("6�� �Է�\n");
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

	printf("������ ������ �������� ��ȣ�� �����ϼ���(0,1,2):");
	scanf("%d", &i);
	printf("\n");

		printf("< %s���� ���������Դϴ�. >\n", person[i].name);
		printAccount(person[i]);
		printf("\n");


		printf("������ �����մϴ�.\n");
		printf("�̸�:");
		scanf("%s", person[i].name);
		printf("����:");
		scanf("%d", &person[i].age);
		printf("����");
		scanf("%s", &person[i].birth);
		printf("�ڵ�����ȣ:");
		scanf("%s", person[i].phone_num);
		printf("\n");
		printf("��ġ�� : ");
		scanf("%s", person[i].deposit_am);

		printf("���� ������ �Ϸ�Ǿ����ϴ�.\n");

		printf("���� ������ ��� �Ͻðڽ��ϱ�?(YES : 1, NO : 2)");
		scanf("%d", &x);

		if (x == 1)
		{
			edit();
		}
		else if (x == 2)
			call_menu();
	
}

void view_list()
{
	printf("���� %s�� ���������Դϴ�.\n", person[0].name);
	printAccount(person[0]);
	printf("���� %s�� ���������Դϴ�.\n", person[1].name);
	printAccount(person[1]);
	printf("���� %s�� ���������Դϴ�.\n", person[2].name);
	printAccount(person[2]);


}

void transact()
{

	int x, y, z;
	int i = 0;

	printf("���¸� �����ϼ���(1��:%s���� ����,2��:%s���� ����,3��:%s���� ����):", person[0].name, person[1].name, person[2].name);
	scanf("%d", &x);

	if (x == 1)
	{
		printf("--%s���� ���°� ���� �Ǿ����ϴ�--.\n", person[0].name);
		printf("����� ���θ� �����ϼ���(1��:�Ա�,2��:���):");
		scanf("%d", &y);

		if (y == 1)
		{
			printf("�Ա��Ͻ� �ݾ�:");
			scanf("%d", &z);

			person[0].deposit_am = z + person[0].deposit_am;

			printf("�Ա��� �Ϸ� �Ǿ����ϴ�.\n");
			printf("����ݾ�:%d\n", person[0].deposit_am);
		}
		else if (y == 2)
		{
			printf("����Ͻ� �ݾ�:");
			scanf("%d", &z);
			printf("���� ������ ������ȣ(0,1,2)");
			scanf("%d", &i);
			printf("���� ���¹�ȣ:");
			scanf("%s", person[i].account_num);

			person[0].deposit_am = person[0].deposit_am - z;
			person[i].deposit_am = person[i].deposit_am + z;

			printf("����� �Ϸ� �Ǿ����ϴ�.\n");
			printf("���� �ݾ�:%d\n", person[0].deposit_am);

		}
	}
	else if (x == 2)
	{
		printf("--%s���� ���°� ���� �Ǿ����ϴ�--.\n", person[1].name);
		printf("����� ���θ� �����ϼ���(1��:�Ա�,2��:���):");
		scanf("%d", &y);


		if (y == 1)
		{
			printf("�Ա��Ͻ� �ݾ�:");
			scanf("%d", &z);

			person[1].deposit_am = z + person[1].deposit_am;

			printf("�Ա��� �Ϸ� �Ǿ����ϴ�.\n");
			printf("����ݾ�:%d\n", person[1].deposit_am);
		}
		else if (y == 2)
		{
			printf("����Ͻ� �ݾ�:");
			scanf("%d", &z);
			printf("���� ������ ������ȣ(0,1,2)");
			scanf("%d", &i);
			printf("���� ���¹�ȣ:");
			scanf("%s", person[i].account_num);

			person[1].deposit_am = person[1].deposit_am - z;
			person[i].deposit_am = person[i].deposit_am + z;

			printf("����� �Ϸ� �Ǿ����ϴ�.\n");
			printf("���� �ݾ�:%d\n", person[1].deposit_am);
		}
	}
	else if (x == 3)
	{
		printf("--%s���� ���°� ���� �Ǿ����ϴ�--.\n", person[2].name);
		printf("����� ���θ� �����ϼ���(1��:�Ա�,2��:���):");
		scanf("%d", &y);



		if (y == 1)
		{
			printf("�Ա��Ͻ� �ݾ�:");
			scanf("%d", &z);

			person[2].deposit_am = z + person[2].deposit_am;

			printf("�Ա��� �Ϸ� �Ǿ����ϴ�.\n");
			printf("����ݾ�:%d\n", person[2].deposit_am);
		}
		else if (y == 2)
		{
			printf("����Ͻ� �ݾ�:");
			scanf("%d", &z);
			printf("���� ������ ������ȣ(0,1,2)");
			scanf("%d", &i);
			printf("���� ���¹�ȣ:");
			scanf("%s", person[i].account_num);

			person[2].deposit_am = person[2].deposit_am - z;
			person[i].deposit_am = person[i].deposit_am + z;

			printf("����� �Ϸ� �Ǿ����ϴ�.\n");
			printf("���� �ݾ�:%d\n", person[2].deposit_am);
		}

	}



}

void new_acc()
{
	int i = 0;
	int x = 0;

	while (1)
	{
		printf("-----�������� ������ �����մϴ�.-----\n");
		printf("\n");
		printf("������ȣ�� �Է��ϼ���(0,1,2):");
		scanf("%d", &i);

		printf("�̸�:");
		scanf("%s", person[i].name);

		printf("����:");
		scanf("%d", &person[i].age);

		printf("����:");
		scanf("%s", person[i].birth);

		printf("�ڵ�����ȣ:");
		scanf("%s", person[i].phone_num);

		printf("��ġ��:");
		scanf("%d", &person[i].deposit_am);

		printf("���¹�ȣ:");
		scanf("%s", person[i].account_num);

		printf("\n");
		printf("�������� ������ȣ�� %d�� �Դϴ�.\n", i);
		printf("������ ���� �Ǿ����ϴ�.\n");

		printf("������ ��� ���� �Ͻðڽ��ϱ�(YES : 1 , NO = 2)?:");
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
	int count=0;

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
		printf("���� Ű�� �Է��ϼ���//5�� �Է°���//(hin:�ذ� �� ����):");
		scanf("%d", &j);

		count++;

		if (j == 56)
		{
			printf("�ý����� ���������� ���� �Ǿ����ϴ�.\n");
			break;


		}
		else if (j != 56)
		{
			if (count > 4)
			{
				delete_();
				break;
			}
			continue;

		}


	}

	menu();

}

void delete_()
{
	printf("�ý����� ���� �Ǿ����ϴ�.\n");
	exit(1);

}

