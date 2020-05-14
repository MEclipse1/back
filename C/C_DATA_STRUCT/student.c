#include<stdio.h>
#include<sys/malloc.h>
// #include<malloc.h #在linux windows 调用此链接库
#define null 0

int main(void){
    struct student{ //定义数据结构
		char number[20];
		char name[4];
		char gender;
		struct student *student_next;
    } *q,*head;
	
	q = (struct student*)malloc(sizeof(struct student*)); //申请地址
	head = q;

	q = (struct student*)malloc(sizeof(struct student*));
	printf("请输入学号"); //标准输入 输出
	scanf("%s",q->number);	

	printf("请输入姓名");
	scanf("%s",q->name);	

	q->student_next = null;
	head->student_next = q;

	printf("%s\n",head->student_next->number);
	return 0;
}
