#include<iostream>
#include<vector>
using namespace std;

template<class Type>
class BSTree;

template<class Type>
class BSTNode
{
	friend class BSTree<Type>;
public:
	BSTNode(Type d = Type(), BSTNode<Type>* left = nullptr, BSTNode<Type>* right = nullptr)
		: data(d), leftChild(left), rightChild(right)
	{}
	~BSTNode()
	{}
private:
	Type data;
	BSTNode<Type>* leftChild;
	BSTNode<Type>* rightChild;
};
template<class Type>
class BSTree
{
public:
	BSTree() : root(nullptr)
	{}
public:
	Type& Max()const
	{
		return Max(root);
	}
	Type& Min()const
	{
		return Min(root);
	}
	void InOrder()const
	{
		InOrder(root);
	}
public:
	bool Insert(const Type& x)
	{
		return Insert(root, x);
	}
	bool Remove(const Type& key)
    {
		return Remove(root, key);
	}
	BSTNode<Type>* Search(const Type& key)
	{
		return Search(root, key);
	}
protected:
	BSTNode<Type>* Search(BSTNode<Type>* t, const Type& key)
	{
		if (t == nullptr)
			return nullptr;
		if (key < t->data)
			Search(t->leftChild, key);
		else if (key > t->data)
			Search(t->rightChild, key);
		else
			return t;
	}
    Type& Max(BSTNode<Type>* t)const
	{
		assert(t != nullptr);
		while (t->rightChild != nullptr)
			t = t->rightChild;
		return t->data;
	}
	Type& Min(BSTNode<Type>* t)const
	{
		assert(t != nullptr);
		while (t->leftChild != nullptr)
		t = t->leftChild;
		return t->data;
	}
	void InOrder(BSTNode<Type>* t)const
	{
		if (t != nullptr)
		{
			InOrder(t->leftChild);
			cout << (t->data).first << " : " << (t->data).second << endl;
			InOrder(t->rightChild);
		}
	}
	bool Insert(BSTNode<Type>*& t, const Type& x)
	{
		if (t == nullptr)
		{
			t = new BSTNode<Type>(x);
			return true;
		}
		else if (x < t->data)
			Insert(t->leftChild, x);
		else if (x > t->data)
			Insert(t->rightChild, x);
		else
			return false;
	}
	bool Remove(BSTNode<Type>*& t, const Type& key)
	{
		if (t == nullptr)
			return false;
		if (key < t->data)
			Remove(t->leftChild, key);
		else if (key > t->data)
			Remove(t->rightChild, key);
		else
		{
			if (t->leftChild != nullptr && t->rightChild != nullptr)
			{
				BSTNode<Type>* p = t->leftChild;
				while (p->rightChild != nullptr)
					p = p->rightChild;
				t->data = p->data;
				Remove(t->leftChild, p->data);
			}
			else
			{
				BSTNode<Type>* tmp = t;
				if (t->leftChild != nullptr)
					t = t->leftChild;
				else
					t = t->rightChild;
				delete tmp;
				return true;
			}
		}
	}
private:
	BSTNode<Type>* root;
};
int main()
{
	vector<int> ar = { 30, 20,10,40,35,12,54,43,27,21 };
	BSTree<int> bst;
	for (const auto& e : ar)
	bst.Insert(e);
	//bst.Remove(21);
	//bst.Remove(30);
	BSTNode<int>* p = bst.Search(14);
	bst.InOrder();
	cout << endl;
}