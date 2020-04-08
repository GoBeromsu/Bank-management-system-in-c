#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	view_list();
	
	return 0;
}

struct Account {

	char name[10];
	int age;
	int birth;
	char phone_num[30];
	int deposit_am;
	int deposit_tm;
	int account_num;

};
struct Account custom1, custom2, custom3;

void view_list()
{
	
	printf("고객 %s의 계좌정보입니다.\n", custom1.name);
	printf("이름:%s    나이:%d\n", custom1.name,custom1.age);
	printf("생일:%d   핸드폰번호:%s\n", custom1.birth, custom1.phone_num);
	printf("계좌번호:%d\n", custom1.account_num);

	printf("고객 %s의 계좌정보입니다.\n", custom2.name);
	printf("이름:%s    나이:%d\n", custom2.name, custom2.age);
	printf("생일:%d   핸드폰번호:%s\n", custom2.birth, custom2.phone_num);
	printf("계좌번호:%d\n", custom2.account_num);

	printf("고객 %s의 계좌정보입니다.\n", custom3.name);
	printf("이름:%s    나이:%d\n", custom3.name, custom3.age);
	printf("생일:%d   핸드폰번호:%s\n", custom3.birth, custom3.phone_num);
	printf("계좌번호:%d\n", custom3.account_num);

}
