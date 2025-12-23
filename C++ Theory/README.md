# C++

# Bài 01: Giới thiệu C++

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **C++ là gì** và dùng để làm gì
- Biết **chương trình C++ hoạt động như thế nào**
- Hiểu **cấu trúc cơ bản của một chương trình C++**
- Viết và chạy được **chương trình C++ đầu tiên**

---

## 1️⃣ C++ là gì?

**C++** là một ngôn ngữ lập trình **biên dịch (compiled language)**, được phát triển từ ngôn ngữ C.

### 🔹 Đặc điểm chính của C++
- Tốc độ thực thi **rất nhanh**
- Kiểm soát bộ nhớ tốt (con trỏ)
- Hỗ trợ **lập trình hướng đối tượng (OOP)**
- Có thư viện chuẩn mạnh mẽ (**STL**)

### 🔹 C++ thường được dùng trong:
- Thuật toán & cấu trúc dữ liệu
- Game (Unreal Engine)
- Hệ điều hành, phần mềm hệ thống
- AI, Computer Vision, Robotics
- Embedded systems

---

## 2️⃣ C++ khác gì so với Python / Java?

| Tiêu chí | C++ | Python | Java |
|--------|----|--------|------|
| Kiểu | Biên dịch | Thông dịch | Biên dịch |
| Tốc độ | Rất nhanh | Chậm hơn | Nhanh |
| Con trỏ | Có | Không | Không |
| Kiểm soát bộ nhớ | Cao | Thấp | Trung bình |
| Độ khó | Cao | Dễ | Trung bình |

📌 **Kết luận**:  
👉 C++ khó hơn nhưng **mạnh và tối ưu hơn**.

---

## 3️⃣ Chương trình C++ chạy như thế nào?

```
Code C++ (.cpp)
      ↓
Compiler (g++)
      ↓
File thực thi (.exe)
      ↓
Chạy chương trình
```

---

## 4️⃣ Chương trình C++ đầu tiên

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello C++";
    return 0;
}
```

---

## 5️⃣ Giải thích chi tiết từng dòng

### `#include <iostream>`
- Thư viện chuẩn cho **nhập / xuất dữ liệu**
- Cho phép dùng `cout`, `cin`

### `using namespace std;`
- Tránh phải viết `std::cout`, `std::cin`
- Giúp code gọn hơn

### `int main() { ... }`
- Hàm **bắt buộc**
- Là điểm bắt đầu của mọi chương trình C++

### `cout << "Hello C++";`
- In nội dung ra màn hình
- `<<` là toán tử xuất dữ liệu

### `return 0;`
- Kết thúc chương trình
- `0` nghĩa là chạy **thành công**

---

## 6️⃣ Một số lỗi người mới thường gặp ❌

### ❌ Quên dấu chấm phẩy `;`
```cpp
cout << "Hello"
```

### ❌ Quên thư viện
```cpp
cout << "Hello"; // lỗi nếu không include iostream
```

### ❌ Sai ngoặc `{ }`
```cpp
int main()
    cout << "Hello";
```

---

## 7️⃣ Chuẩn viết code C++

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello C++" << endl;
    return 0;
}
```

---

## 8️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
In ra:
```
Xin chào, tôi đang học C++
```

### 📝 Bài 2
In ra thông tin cá nhân:
```
Tên: ...
Tuổi: ...
Trường: ...
```

---

## 9️⃣ Ghi nhớ nhanh 🧠
- `main()` là bắt buộc
- C++ phải biên dịch trước khi chạy
- `cout` dùng để in ra màn hình
- Dấu `;` rất quan trọng

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu C++ là gì
- Biết cấu trúc chương trình
- Viết chương trình đầu tiên

