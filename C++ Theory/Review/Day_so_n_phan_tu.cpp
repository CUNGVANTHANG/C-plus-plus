// Cho dãy số A gồm n phần tử được đánh số thứ tự từ 1 đến n
// Viết chương trình in ra dãy số S gồm n phần tử, trong đó phần tử thứ i được tính theo công thức sau:
// Si=∑ij=1Ai 

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> calculateSequence(vector<int> &A) {
    int n = A.size();
    vector<int> S(n);
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j <= i; j++){
            sum += A[j];
        }
        S[i] = sum;
    }
    return S;
}

void printSequence(vector<int> &S){
    for(int i = 0; i < S.size(); i++){
        cout << S[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    vector<int> S = calculateSequence(A);
    printSequence(S);
    return 0;
}

