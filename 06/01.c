#include <stdio.h>


// fuer teil (a):
// dort steht hinterher als Output:
//  (11 7 3)
//  (14 5 11 7 3)


typedef struct DoubleNode DoubleNode;

DoubleNode *insertFirst(DoubleNode *head, double d);
void printList(DoubleNode *head);
DoubleNode *insertLast(DoubleNode *head, double d);
DoubleNode *reverseDoubleListCon(DoubleNode *head);
DoubleNode *reverseDoubleList(DoubleNode *head);

// 1b)a)
DoubleNode{
	DoubleNode *next;
	double value;
};

// 1b)b)
DoubleNode *insertFirst(DoubleNode *head, double d){
	struct DoubleNode *tmp;
	tmp	= malloc(sizeof(DoubleNode));
	if (tmp == NULL) {
		//ERROR
	}
	tmp->value = d;
	tmp->next = head;
	return tmp;
}

// 1b)c)
void printList(DoubleNode *head){
	DoubleNode *cursor;
	cursor = head;
	printf("(");
	while(cursor != NULL){
		printf("%d ",cursor->value);
		cursor = cursor->next;
	}
	printf(")");
}

// 1b)d)
DoubleNode *insertLast(DoubleNode *head, double d){
	DoubleNode *cursor, *tmp;
	cursor = head;
	if(cursor == NULL)
		return insertFirst(head, d);
	else{
		while(cursor->next != NULL)
			cursor = cursor->next;
		tmp = malloc(sizeof(DoubleNode));
		tmp->value = d;
		tmp->next = NULL;
		cursor->next = tmp;
		return head;
	}
}

// 1b)e)
DoubleNode *reverseDoubleListCon(DoubleNode *head){
	DoubleNode *cursor, *tmpnew, *headnew;
	cursor = head;
	headnew = NULL;
	while(cursor != NULL){
		headnew = insertFirst(headnew, cursor->value)
		cursor = cursor->next;
	}
	return headnew;
}

// 1b)f)
DoubleNode *reverseDoubleList(DoubleNode *head){
	DoubleNode *cursor, *tmpnext, *tmpprev = NULL;
	cursor = head;
	while(cursor != NULL){
		tmpnext = cursor->next;
		cursor->next = tmpprev;
		tmpprev = cursor;
		cursor = tmpnext;
	}
	return tmpprev;
}

int main(){
	return 0;
}
