#include <iostream>
//#include <conio.h>
#include <assert.h>

using namespace std;

template <class T>
struct NodeBST {
    NodeBST(T k){
        key = k;
        parent = NULL;
        left = NULL;
        right = NULL;
    }
    T key;
    NodeBST<T> * parent;
    NodeBST<T> * left;
    NodeBST<T> * right;
};

template <class T>
NodeBST<T> * find(NodeBST<T> * n, T k);

template <class T>
void insert(NodeBST<T> * & n, T k);

template <class T>
void erase(NodeBST<T> * & n, T k);

template <class T>
T min(NodeBST<T> * n);

template <class T>
T max(NodeBST<T> * n);

template <class T>
T predecessor(NodeBST<T> * n, T k);

template <class T>
T successor(NodeBST<T> * n, T k);

template <class T>
void inOrder(NodeBST<T> * n);

template <class T>
bool isLeave(NodeBST<T> * n);

template <class T>
bool isRoot(NodeBST<T> * n);

template <class T>
bool isLeftChild(NodeBST<T> * n);

template <class T>
bool isRightChild(NodeBST<T> * n);

template <class T>
void createBST(NodeBST<T> * & n) {
    insert(n, 4); cout << "4\n";
    insert(n, 2); cout << "2\n";
    insert(n, 6); cout << "6\n";
    insert(n, 1); cout << "1\n";
    insert(n, 3); cout << "3\n";
    insert(n, 5); cout << "5\n";
    insert(n, 7); cout << "7\n";
}

// Chuong trinh chinh
int main(){
	NodeBST<int> * node = NULL;
	createBST(node);
	cout << "inOrder: "; inOrder(node); cout << "\n";
	cout << "min = " << min(node) << "\n";
	cout << "max = " << max(node) << "\n";
	// cout << "predecessor = " << predecessor(node, 1) << "\n";
	// cout << "successor = " << successor(node, 7) << "\n";
	// cout << "erase "; erase(node, 4);
	// cout << "inOrder: "; inOrder(node); cout << "\n";
	return 0;
}

template <class T>
NodeBST<T> * find(NodeBST<T> * n, T k) {
    NodeBST<T> * tmp = n;
    while (false) {
        /*
            ma cua ban vao day
        */
    }
    return (tmp);
}

template <class T>
void insert(NodeBST<T> * & n, T k) {

// C1: Đệ quy
    // if(n == NULL) {
    //     n = new NodeBST<T>(k);
    // }
    // else {
    //     if(n->key > k){
    //         insert(n->left, k);
    //     }
    //     else if(n->key < k){
    //         insert(n->right, k);
    //     }
    // }

// C2: While
    if(n ==  NULL){
        n = new NodeBST<T>(k);
    }
}

template <class T>
void erase(NodeBST<T> * & n, T k) {
    NodeBST<T> * node = find(n, k);

    // khong tim thay gia tri can xoa
    if (node == NULL) return;

    // nut can xoa (node) la la
    if (isLeave(node)) {
        /*
            ma cua ban vao day
        */
        return;
    }

    // nut can xoa (node) la dinh trong khong co con trai (left = NULL)
    if (node->left == NULL) {
        /*
            ma cua ban vao day
        */
        return;
    }

    // nut can xoa (node) la dinh trong khong co con phai (right = NULL)
    if (node->right == NULL) {
        /*
            ma cua ban vao day
        */
        return;
    }

    // nut can xoa (node) la dinh trong co 2 con
    NodeBST<T> * tmp = node;
    /*
        ma cua ban vao day
    */
}

template <class T>
T min(NodeBST<T> * n) {
    assert(n != NULL);
    NodeBST<T> * tmp = n;
    while (tmp->left != NULL)
    {
        tmp = tmp->left;
    }
    
    return (tmp->key);
}

template <class T>
T max(NodeBST<T> * n) {
    assert(n != NULL);
    NodeBST<T> * tmp = n;
    while (tmp->right != NULL) {
        tmp = tmp -> right;
    }
    return (tmp->key);
}

template <class T>
T predecessor(NodeBST<T> * n, T k) {
    NodeBST<T> * node = find(n, k);
    assert (node != NULL);
    NodeBST<T> * tmp = node;
    /*
        ma cua ban vao day
    */
    return (tmp->key);
}

template <class T>
T successor(NodeBST<T> * n, T k) {
    NodeBST<T> * node = find(n, k);
    assert (node != NULL);
    NodeBST<T> * tmp = node;
    /*
        ma cua ban vao day
    */
    return (tmp->key);
}

template <class T>
bool isLeave(NodeBST<T> * node) {
    return true;
}

template <class T>
bool isRoot(NodeBST<T> * node) {
    return true;
}

template <class T>
bool isLeftChild(NodeBST<T> * node) {
    return true;
}

template <class T>
bool isRightChild(NodeBST<T> * node) {
    return true;
}

template <class T>
void inOrder(NodeBST<T> * node) {
    if (node == NULL) return;
    inOrder(node->left);
    cout << node->key << " ";
    inOrder(node->right);
}