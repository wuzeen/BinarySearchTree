#include <iostream>
#include<ctime>

#include "BinarySearchTree.h"

#define N 10
#define RANGE 100 
void genSeq(int array[])//generate  random Sequence
{
	srand(unsigned(time(0)));
	for (int i = 0; i < N; i++)
	{
		int a = (int)(rand() % RANGE);
		array[i] = a;

	}
}

void main() 
{
	int K[N];       //��һ�ö�����
	genSeq(K);
	BinarySearchTree<int> aBST;
	BinaryTreeNode<int > *newpointer, *node1, *node2;     // ѭ��������

	for (int i = 0; i < N; i++) {
		newpointer = new BinaryTreeNode<int>();
		newpointer->setValue(K[i]);
		aBST.InsertNode(aBST.Root(), newpointer);      //���β�����
	}
	for (int i = 0;i < N;i++)
		cout << K[i] << "  ";
	cout << endl;
	// �������
	cout << "ǰ�����������������" << endl;
	aBST.PreOrder(aBST.Root());
	cout << endl;
	cout << "�������������������" << endl;
	aBST.InOrder(aBST.Root());
	cout << endl;
	cout << "�������������������" << endl;
	aBST.PostOrder(aBST.Root());
	cout << endl;
	system("pause");
}