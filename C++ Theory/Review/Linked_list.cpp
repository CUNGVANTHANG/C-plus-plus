#include <iostream>
#include <fstream>
#include <assert.h>

using namespace std;

struct Node {
    int data;
    Node *next;
};

typedef struct Node* node;

// Cấp phát động một node mới
node makeNode(int x) {|
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

// Kiểm tra rỗng
bool empty(node a) {
    return a == NULL;
}

// Độ dài danh sách
int size(node a) {
    int cout = 0;
    while(a != NULL) {
        ++cout;
        a = a->next;
    }
    return cout;
}

// Thêm 1 phần tử vào đầu danh sách
void insertFirst(node &a, int x) {
    node tmp = makeNode(x);
    if(a == NULL) {
        a = tmp;
    }
    else {
        tmp->next = a;
        a = tmp;
    }
}

// Thêm 1 phần tử vào cuối danh sách
void insertLast(node &a, int x) {
    node tmp = makeNode(x);
    if(a == NULL){
        a = tmp;
    }
    else {
        node p = a;
        while(p->next != NULL) {
            p = p->next;
        }
        p->next = tmp;
    }
}

// Thêm 1 phần tử vào giữa
void insertMiddle(node &a, int x, int pos) {
    int n = size(a);
    if(pos <= 0 || pos > n + 1){
        return;
    }
    if(n == 1){
        insertFirst(a, x); return;
    }
    else if(n == pos + 1){
        insertLast(a, x); return;
    }
    node p = a;
    for(int i = 1; i < pos - 1; i++){
        p = p->next;
    }
    node tmp = makeNode(x);
    tmp->next = p->next;
    p->next = tmp;
}

// Xóa phần tử ở đầu
void removeFirst(node &a) {
    if(a == NULL) return;
	a = a->next;
}

// Xóa phần tử ở cuối
void removeLast(node &a) {
    if(a == NULL) return;
	node truoc = NULL, sau = a;
	while(sau->next != NULL){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL){
		a = NULL;
	}
	else{
		truoc->next = NULL;
	}
}

// Xóa ở giữa
void removeMiddle(node &a, int pos){
    if(pos <=0 || pos > size(a)) return;
	node truoc = NULL, sau = a;
	for(int i = 1; i < pos; i++){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL){
		a = a->next;
	}
	else{
		truoc->next = sau->next;
	}
}

int main(){
    node head = NULL:
    return 0;
}