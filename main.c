#include <stdio.h> 
#include <stdlib.h>
#include<string.h>
void edit();
void menu();
void view_list();
void new_acc();
void transact();

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


int main(void) {

	//	struct Account person[5]; // ����ü �迭 ����  
	//	 
	   // ����ü ���� �� ���� 

   //	strcpy(person[0].name, "�����"); 
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
	printf("6.View customer's list(������Ʈ)\n");
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
		menu();
	}
	else if (key == 3) {
		printf("3�� �Է�\n");
		transact();
		menu();

	}
	else if (key == 4) {
		printf("4�� �Է�\n");

	}
	else if (key == 5) {
		printf("5�� �Է�\n");

	}
	else if (key == 6) {
		printf("6�� �Է�\n");
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

	printf("< %s���� �������Դϴ�. >\n", person[0].name);
	printAccount(person[0]);
	printf("\n");
	printf("< %s���� �������Դϴ�. >\n", person[1].name);
	printAccount(person[1]);
	printf("-----------------------");
	printf("\n");
	printf("< %s���� �������Դϴ�. >\n", person[2].name);
	printAccount(person[2]);
	printf("-----------------------");
	printf("\n");
	printf("������ ������ ���� �����ϼ���(1��,2��,3��):");
	scanf("%d", &x);
	printf("\n");

	if (x == 1)
	{
		printf("������ �����մϴ�.\n");
		printf("�̸�:");
		scanf("%s", person[0].name);
		printf("����:");
		scanf("%d", &person[0].age);
		printf("����");
		scanf("%s", &person[0].birth);
		printf("�ڵ�����ȣ:");
		scanf("%d", person[0].phone_num);
		printf("\n");
		printf("���� ������ �Ϸ�Ǿ����ϴ�.");
	}
	else if (x == 2)
	{
		printf("������ �����մϴ�.\n");
		printf("�̸�:");
		scanf("%s", &person[1].name);
		printf("����:");
		scanf("%d", person[1].age);
		printf("����");
		scanf("%s", &person[1].birth);
		printf("�ڵ�����ȣ:");
		scanf("%d", person[1].phone_num);
		printf("\n");
		printf("���� ������ �Ϸ�Ǿ����ϴ�.");
	}
	else if (x == 3)
	{
		printf("������ �����մϴ�.\n");
		printf("�̸�:");
		scanf("%s", &person[2].name);
		printf("����:");
		scanf("%d", person[2].age);
		printf("����");
		scanf("%s", &person[2].birth);
		printf("�ڵ�����ȣ:");
		scanf("%d", person[2].phone_num);
		printf("\n");
		printf("���� ������ �Ϸ�Ǿ����ϴ�.");
	}

}

void view_list()
{
	printf("�� %s�� ���������Դϴ�.\n", person[0].name);
	printAccount(person[0]);
	printf("�� %s�� ���������Դϴ�.\n", person[1].name);
	printAccount(person[1]);
	printf("�� %s�� ���������Դϴ�.\n", person[2].name);
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
	int i=0;
	int x=0;

	while (1)
	{
		printf("-----������ ������ �����մϴ�.-----\n");
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
		printf("������ ������ȣ�� %d�� �Դϴ�.\n",i);
		printf("������ ���� �Ǿ����ϴ�.\n");
	
		printf("������ ��� ���� �Ͻðڽ��ϱ�(1��:yes ,2��:no)?:");
		scanf("%d", &x);

		if (x == 1)
		{
			continue;
		}
		else if (x == 2)
			break;


				
	}

}



