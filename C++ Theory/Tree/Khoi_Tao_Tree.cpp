#include<iostream>

using namespace std;

struct node {
	int data;
	struct node *leftChild;
	struct node *rightChild;
};
typedef struct node NODE;
typedef NODE* Tree;

void CreateTree(Tree &root){
	root = NULL;
}

void AddNodeToTree(Tree &root, int x){
	// Cay NULL
	if(root == NULL){
		NODE *p = new NODE; // Khoi tao 1 node de them vao cay
		p->data = x; // them du lieu x vao data
		p->leftChild = NULL;
		p->rightChild = NULL;
		root = p; // node p chinh la node goc <=> x chinh la node goc
	}
	// Cay ton tai phan tu khac NULL
	else { 
		// neu phan tu them vao nho hon node goc <=> them no vao ben trai
		if(root->data > x){
			AddNodeToTree(root->leftChild, x);
		}
		// neu phan tu them vao lon hon node goc <=> them no vao ben phai
		else if(root->data < x){
			AddNodeToTree(root->rightChild, x);
		}
	}
}

void Browser_NLR (Tree root){
	// neu cay con phan tu thi tiep tuc duyet
	if(root != NULL){
		cout<<root->data<<" "; // xuat du lieu trong node
		Browser_NLR(root->leftChild); // duyet qua trai
		Browser_NLR(root->rightChild); // duyet qua phai
	}
}

void Menu(Tree &root){
	while(true){
		system("cls");
		cout <<"\n\n\t\t ========== Menu ==========";
		cout <<"\n1. Nhap du lieu";
		cout <<"\n2. Xuat du lieu cay NLR";
		cout <<"\n0. Ket thuc";
		cout <<"\n\n\t\t ==========================";
		
		int select;
		cout <<"\nNhap lua chon: ";
		cin >> select;
		if(select < 0 || select > 2){
			cout << "\nLua chon khong hop le";
			system("pause");
		}
		else if (select == 1){
			int x;
			cout <<"\nNhap so nguyen x: ";
			cin >> x;
			AddNodeToTree(root, x);
		}
		else if (select == 2){
			cout <<"\n\t\t DUYET CAY THEO NLR\n";
			Browser_NLR(root);
			system("pause");
		}
		else {
			break;
		}
	}
}

int main(){
	Tree root;
	CreateTree(root);
	Menu(root);
	system("pause");
	return 0;
}
