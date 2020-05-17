#include <stdio.h>
#include <stdlib.h>
#define max 40
typedef struct
{
	int list[max];
	int last;
}sqllist;
void clear(sqllist *list);
void insert(sqllist *list, int  n, int x);
void out(sqllist *list);
int main (int argc, char *argv[]) {
	sqllist l1, *l;
	int i,x,n,s,value;
	l = &l1;
	clear(l);	
	scanf("%d",&s);
	for(i=0; i<s; i++){
		scanf("%d",&value);
		l->last = l->last+1;
		l->list[l->last] = value;
	}
	insert(l, 2, 3);
	out(l);
}

void clear(sqllist *list) {
	list->last = -1;
}
void out(sqllist *list){
	if(list->last>-1){
		int i;
		for(i=0; i<=list->last; i++) {
			printf("%d__",list->list[i]);
		}	
	}	
}
void insert(sqllist *list, int  n, int x){
	if(list->last>-1){
		int i;
		for(i=list->last+1; i>=n; i--) {
			if(i==n){
				list->list[i] = x;
			}else {
				list->list[i] = list->list[i-1];
			}
		}	
		list->last = list->last+1;
	}
}
