#include<stdio.h>
int main(){
	char name[40];
	char address[40];
	int age;
	long long int phone;
	int day, month, year;
	char email[50];

	printf("Enter Your name please:\n");
	scanf("%[^\n]s", &name);
	printf("Enter Your birthdate:[dd/mm/yyyy]\n");
	scanf("%d/%d/%d", &day, &month, &year);
	printf("Enter Your address please:\n");
	scanf("%s", &address);
	printf("Enter Your age please:\n");
	scanf("%d", &age);
	printf("Enter Your phone please:\n");
	scanf("%lld", &phone);
	printf("Enter Your email please:\n");
	scanf("%s", &email);
	printf("\n\nYour Id Here:\n");
	printf("================================================\n");
	printf("=\tName:\t\t%s\n",name);
	printf("=\tDOB:\t\t%d/%d/%d\n",day, month, year);
	printf("=\tAddress:\t%s\n",address);
	printf("=\tAge:\t\t%d\n",age);
	printf("=\tPhone:\t\t%lld\n",phone);
	printf("=\tEmail:\t\t%s\n",email);
	printf("================================================\n");
	
	return 0;
}
