#include <iostream>
#include <vector>

using namespace std;

// Hàm để tạo max heap
void heapify(vector<int> &vt, int n, int i){
    int largest = i; // Khởi tạo gốc
    int left = 2*i + 1; // Vị trí con trái
    int right = 2*i + 2; // Vị trí con phải

    // Kiểm tra nếu nút con trái lớn hơn gốc
    if (left < n && vt[left] > vt[largest]) {
        largest = left;
    }

    // Kiểm tra nếu núi con phải lớn hơn gốc
    if (right < n && vt[right] > vt[largest]) {
        largest = right;
    }

    // Nếu largest không phải là gốc
    if (largest != i) {
        swap(vt[i], vt[largest]);

        // Gọi đệ quy heapify trên cấu trúc cây con bị ảnh hưởng
        heapify(vt, n, largest);
    }
}

void Heap_Sort(vector<int> &vt) {
    int n = vt.size();

    // Xây dựng heap (sắp xếp lại mảng)
    for (int i = n/2 - 1; i >= 0; i--){
        heapify(vt, n, i);
    }

    // Trích xuất các phần tử từ heap một cách lần lượt
    for (int i = n - 1; i >= 0; i--){
        swap(vt[0], vt[i]); // Di chuyển phần từ gốc (lớn nhất) vào cuối mảng
        heapify(vt, i, 0); // Gọi heapify trên heap đã giảm kích thước
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> vt(n);
    for(int i = 0; i < n; i++){
        cin >> vt[i];
    }
    Heap_Sort(vt);
    for(int i = 0; i < n; i++){
        cout << vt[i] << " ";
    }
    return 0;
}