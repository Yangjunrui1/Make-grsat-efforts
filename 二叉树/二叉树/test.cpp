#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
using namespace std;
struct Node
{
	int element;
	List left;//左右指针
	List right;
};
void ptintNode(List t)
{
	if (t == NULL)
	{
		cout << "Empty Node" << endl;
		return;
	}
	if (t->left != NULL)
	{
		ptintNode(t->left);
	}
	cout << "element is:" << t->element<<endl;
	if (t->right != NULL)
	{
		ptintNode(t->right);
	}
}
int main()
{
	List min;
	List max;
	List node;
	List root;//创建根节点
	root = insert(6, NULL);
	insert(4, root);
	insert(3, root);
	makeEmpty(root);
	insert(1, root);
	insert(9, root);
	insert(4, root);
	insert(3, root);
	/*delet(4, root);*/
	ptintNode(root);
	node = find(4, root);
	cout << "find node is:" << node->element << '\n';
	min = findMin(root);
	max = findMax(root);
	cout << "min is:" << min->element << endl;
	cout << "max is;" << max->element << endl;

	return 0;
}
List makeEmpty(List t)
{
	if (t != NULL)
	{
		makeEmpty(t->left);
		makeEmpty(t->right);
		free(t);
	}
	return NULL;
}
Position findMin(List t)
{
	if (t == NULL)
	{
		return NULL;
	}
	else if (t->left == NULL)
	{
		return t;
	}
	else
	{
		return findMin(t->left);
	}
}
Position findMax(List t)
{
	if (t != NULL)
	{
		while (t->right != NULL)
		{
			t = t->right;
		}
	}
	return t;
}
List insert(int x, List t)
{
	if (t == NULL)
	{
		t = new Node;
		if (t == NULL)
		{
			cout << "out of space"<<"\n";
			return NULL;
		}
		else
		{
			t->element = x;
			t->left = NULL;
			t->right = NULL;
		}
	}
	else if(x < t->element)
	{
		t->left = insert(x, t->left);
	}
	else if (x > t->element)
	{
		t->right = insert(x,t->right);
	}
	return t;
}
Position find(int x, List t)
{
	if (t == NULL)
	{
		return NULL;
	}
	if (x < t->element)
	{
		return find(x, t->left);
	}
	else if (x > t->element)
	{
		return find(x, t->right);
	}
	else
		return t;
}
//Position delet(int x, List t)
//{
//	Position Tmpcell;
//	if (t == NULL)
//	{
//		cout << "Error" << endl;
//	
//	}
//	else if (x < t->element)
//	{
//		t->left = delet(x,t->left);
//	}
//	else if (x > t->element)
//	{
//		t->right = delet(x,t->right);
//	}
//	else if (t->left && t->right)
//	{
//		Tmpcell = findMin(t->right);
//		t->element = Tmpcell->element;
//		t->right = delet(t->element, t->right);
//	}
//	else
//	{
//		Tmpcell = t;
//		if (t->left == NULL)
//		{
//			t = t->right;
//		}
//		else if (t->right == NULL)
//		{
//			t = t->left;
//		}
//		free(Tmpcell);
//	}
//	return t;
//}