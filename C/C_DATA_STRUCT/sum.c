#include <stdio.h>
#include <stdlib.h>
#define maxvalue 40
typedef struct
{
	int list[maxvalue];
	int last;
}seqlist;
void clear(seqlist *l);
void out(seqlist *l);
void add(seqlist *l,int x);
int sum(seqlist *l);
int main(int argc, char *argv[]) {
	seqlist l1,*l;
	int i,n,x;
	l=&l1;
	clear(l);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		add(l,x);
	}
    printf("sum=%d",sum(l)); 
	return 0;
}
void clear(seqlist *l)
{
	l->last=-1;
	return;
}
void add(seqlist *l,int x)
{
	if(l->last<maxvalue-1)
	{
		l->last=l->last+1;
		l->list[l->last]=x;
	}
}
void out(seqlist *l)
{
	int i;
	for(i=0;i<=l->last;i++ )
	{
		printf("%d ",l->list[i]);
	}
	printf("\n");
}
/* 请在这里填写答案 */
int sum(seqlist *q){
	int result = 0;
	int i = 0;
	for(i=0; i<=q->last; i++){
		result = result + q->list[i];
	}
	return result;
}
