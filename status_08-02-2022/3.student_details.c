#include<stdio.h>
typedef struct student
{
	char name[15],branch[10];
	float cgpa;
}stu;
int stud_count(int n)
{
	printf("Enter required number of student details\n");
	scanf("%d",&n);
	return n;
}
void stud_details(stu data[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter Student name\n");
		scanf("%s",data[i].name);
		printf("Enter branch \n");
		scanf("%s",data[i].branch);
		printf("Enter Cgpa\n");
		scanf("%f",&data[i].cgpa);
	}	
	return ;
}
void display(stu data[],int n)
{
	int i;
	for(int i=0;i<n;i++)
	{
		printf("Student Details\n");
		printf("Name : %s\n",data[i].name);
		printf("Branch :%s\n",data[i].branch);
		printf("cgpa :%f\n",data[i].cgpa);
	}
	return ;
}
int main()
{
	int n;
	n=stud_count(n);
	stu data[n];
	stud_details(data,n);
	display(data,n);
	return 0;
}
