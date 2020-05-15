#include <stdio.h>
#define  MAXSIZE  20  
struct seqlist
{
	int	elem[MAXSIZE];  //存放元素的数组
	int last;      //最后一个元素的下标 
};  
typedef  struct seqlist  seqLIST;  //类型定义 

void initLIST(seqLIST *L);
void inputList(seqLIST *L,int n);
int getData(seqLIST *L,int i);

int main()
{
	seqLIST  list;  
	int n,k,pos;
	
	initLIST(&list);  //置空 	
	scanf("%d",&n);
	inputList(&list,n);  //输入 	
	scanf("%d",&pos);
	k=getData(&list,pos);
	if(k>=0)
	{
		printf("element=%d",k);//输出
	}
	else
	{
		printf("Erro of i.",k);
	}
	return 0;
}
void initLIST(seqLIST *L)//置空表 
{
	L->last=-1;
}

void inputList(seqLIST *L,int n)//表中元素的输入
{
	int i,x;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);       //输入 
		if(L->last <  MAXSIZE-1)   
		{
			L->elem[i]=x;   //把 x存入到数组中 
			L->last++;      //表的长度加1 
		} 
	}
}
/* 请在这里填写答案 */
int  getData(seqLIST *L, int n){
	return L->elem[n-1];	
}
