#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct Account{
	
	char name[10]; //�̸� 
	int age; // ���� 
	int birth; // ������� ex.990112 
	char phone_num[30]; // ��ȭ��ȣ ex. 01040121143 
	int deposit_am; //amount, ���� �ݾ� 
	int deposit_tm; // term, ���� �Ⱓ 
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
// ����ü�� �Է��ϸ� ������ ������ִ� �� �� 
void printAccount(struct Account p){
	printf("%s\n",p.name);
	printf("%d\n",p.age);
	printf("%d\n",p.birth);
	printf("%d\n",p.deposit_am);
	printf("%d\n",p.deposit_tm);
	printf("%s\n",p.phone_num);
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
	
	int key=0;
	scanf("%d",&key);
	
	if (key == 1 ){
		printf("1�� �Է�");
	}
	else if (key == 2){
		printf("2�� �Է�"); 
	}
	else if (key == 3){
		printf("3�� �Է�"); 
	}
	else if (key == 4){
		printf("4�� �Է�"); 
	}
	else if (key == 5){
		printf("5�� �Է�");
	}
	else if (key == 6){
		printf("6�� �Է�");
	} 
	else {
		menu();
	} 

}


