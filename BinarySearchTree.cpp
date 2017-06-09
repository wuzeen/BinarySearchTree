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
	int K[N];       //建一棵二叉树
	genSeq(K);
	BinarySearchTree<int> aBST;
	BinaryTreeNode<int > *newpointer, *node1, *node2;     // 循环插入结点

	for (int i = 0; i < N; i++) {
		newpointer = new BinaryTreeNode<int>();
		newpointer->setValue(K[i]);
		aBST.InsertNode(aBST.Root(), newpointer);      //依次插入结点
	}
	for (int i = 0;i < N;i++)
		cout << K[i] << "  ";
	cout << endl;
	// 遍历结点
	cout << "前序遍历二叉搜索树：" << endl;
	aBST.PreOrder(aBST.Root());
	cout << endl;
	cout << "中序遍历二叉搜索树：" << endl;
	aBST.InOrder(aBST.Root());
	cout << endl;
	cout << "后序遍历二叉搜索树：" << endl;
	aBST.PostOrder(aBST.Root());
	cout << endl;
	system("pause");
}