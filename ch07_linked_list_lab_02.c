#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode { 	// ��� Ÿ��
	element				data;
	struct ListNode*	link;
} ListNode;

typedef struct ListNodeHead { 	// ����� Ÿ��
	double				sum;	// �հ�
	double				avg;	// ���
	double				var;	// �л�
	ListNode*			head;
} ListHeadNode;

//
ListNode* insert_first(ListNode* head, element data)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->data = data;
	node->link = NULL;
	if (head == NULL) {
		head = node;
	}
	else {
		node->link	= head;
		head		= node;
	}
	return head;	// ����� ��� �����͸� ��ȯ�Ѵ�. 
}

//
ListNode* insert_last(ListNode* head, element data)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	ListNode* temp = head;
	node->data = data;
	node->link = NULL;
	if (head == NULL) {
		head = node;
	}
	else {
		// ������ ������ traverse...
		while (temp->link != NULL) {
			temp = temp->link;
		}
		// ������ ��� �ڿ� ���� ��� �߰�...
		temp->link = node;
	}
	return head;	// ����� ��� �����͸� ��ȯ�Ѵ�. 
}

//
void InitHeadNode( ListHeadNode* headNode )
{
	headNode->head = NULL;
	headNode->sum = 0.0;
	headNode->avg = 0.0;
	headNode->var = 0.0;
}

// �հ� ���ϱ� �Լ��� �ϼ��Ͻÿ�.
double get_sum_of_linked_list( ListHeadNode* headNode )
{
	//
	return headNode->sum;
}

// ��� ���ϱ� �Լ��� �ϼ��Ͻÿ�.
double get_avg_of_linked_list( ListHeadNode* headNode )
{
	//
	return headNode->avg;
}

// �л� ���ϱ� �Լ��� �ϼ��Ͻÿ�.
double get_var_of_linked_list(ListHeadNode* headNode)
{
	//
	return headNode->var;
}

// ����Ʈ�� �׸� ���
void print_list( ListNode* head )
{
	ListNode* p = head;

	if (head == NULL) return;
	do {
		printf("->%d ", p->data);
		p = p->link;
	} while (p != NULL);
	printf("\n");
}

//
int main(void)
{
	ListHeadNode	HeadNode;
	

	InitHeadNode(&HeadNode);

	// list = 10->20->30->40-> ... ->90->100
	for (int i = 10; i <= 100; i += 10) {
		HeadNode.head = insert_last(HeadNode.head, i);
	}

	//
	print_list( HeadNode.head );

	// 
	printf("- sum : %lf\n", get_sum_of_linked_list( &HeadNode ));
	printf("- avg : %lf\n", get_avg_of_linked_list( &HeadNode ));
	printf("- var : %lf\n", get_var_of_linked_list( &HeadNode ));

	return 0;
}


