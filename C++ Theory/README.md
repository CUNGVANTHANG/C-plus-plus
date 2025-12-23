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

# Bài 02: Biến và Kiểu dữ liệu trong C++

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **biến là gì**, dùng để làm gì
- Biết cách **khai báo biến trong C++**
- Nắm được các **kiểu dữ liệu cơ bản**
- Biết sử dụng **hằng số (const)** và **ép kiểu**

---

## 1️⃣ Biến là gì?

👉 **Biến** là một vùng nhớ trong RAM, dùng để **lưu trữ dữ liệu** trong quá trình chương trình chạy.

Ví dụ:
```cpp
int age = 20;
```

Giải thích:
- `int` : kiểu dữ liệu (số nguyên)
- `age` : tên biến
- `20` : giá trị ban đầu

📌 Giá trị của biến **có thể thay đổi** trong khi chạy chương trình.

---

## 2️⃣ Quy tắc đặt tên biến

✔️ Hợp lệ:
```cpp
int age;
int studentCount;
float diem_trung_binh;
```

❌ Không hợp lệ:
```cpp
int 1age;     // không bắt đầu bằng số
int float;    // trùng từ khóa
int diem tb;  // có khoảng trắng
```

📌 Quy tắc:
- Bắt đầu bằng chữ hoặc `_`
- Không có khoảng trắng
- Không trùng từ khóa C++

---

## 3️⃣ Các kiểu dữ liệu cơ bản trong C++

| Kiểu dữ liệu | Ý nghĩa | Ví dụ |
|-------------|--------|-------|
| int | Số nguyên | 10, -5 |
| float | Số thực | 3.14 |
| double | Số thực chính xác cao | 3.14159 |
| char | Ký tự | 'A' |
| bool | Đúng / Sai | true, false |
| string | Chuỗi ký tự | "Hello" |

📌 Muốn dùng `string` cần thư viện:
```cpp
#include <string>
```

---

## 4️⃣ Ví dụ tổng hợp

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 20;
    float height = 1.7;
    double gpa = 3.25;
    char grade = 'A';
    bool isPass = true;
    string name = "Nguyen Van A";

    cout << "Ten: " << name << endl;
    cout << "Tuoi: " << age << endl;
    cout << "Chieu cao: " << height << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Xep loai: " << grade << endl;
    cout << "Qua mon: " << isPass << endl;

    return 0;
}
```

---

## 5️⃣ Hằng số (const)

👉 **Hằng số** là biến **không được phép thay đổi giá trị** sau khi khai báo.

```cpp
const float PI = 3.14;
```

❌ Sai:
```cpp
PI = 5; // lỗi
```

📌 Dùng `const` cho:
- Số PI
- Số ngày trong tuần
- Giá trị cố định

---

## 6️⃣ Ép kiểu dữ liệu (Type Casting)

### ❗ Vấn đề thường gặp
```cpp
int a = 5;
int b = 2;

cout << a / b; // Kết quả = 2 (SAI mong đợi)
```

👉 Do chia số nguyên.

### ✔️ Cách sửa – ép kiểu
```cpp
float result = (float)a / b;
cout << result; // 2.5
```

📌 Cách khác:
```cpp
float result = a * 1.0 / b;
```

---

## 7️⃣ Kích thước kiểu dữ liệu (tham khảo)

```cpp
cout << sizeof(int) << endl;
cout << sizeof(double) << endl;
cout << sizeof(char) << endl;
```

📌 Kết quả phụ thuộc hệ thống.

---

## 8️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Khai báo các biến:
- Tên sinh viên
- Tuổi
- Điểm trung bình

In ra màn hình.

---

### 📝 Bài 2
Nhập bán kính hình tròn, tính:
```
S = π * r * r
```

---

### 📝 Bài 3 (tư duy)
Tại sao cần ép kiểu khi chia 2 số nguyên?

---

## 9️⃣ Ghi nhớ nhanh 🧠
- Biến phải khai báo trước khi dùng
- Chọn đúng kiểu dữ liệu
- Dùng `const` cho giá trị không đổi
- Cẩn thận khi chia số nguyên

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu biến và kiểu dữ liệu
- Biết khai báo & sử dụng biến
- Biết ép kiểu trong C++

# Bài 03: Toán tử trong C++

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **toán tử là gì**
- Biết các **nhóm toán tử quan trọng trong C++**
- Sử dụng đúng toán tử trong biểu thức
- Tránh được các lỗi logic thường gặp

---

## 1️⃣ Toán tử là gì?

👉 **Toán tử (Operator)** là ký hiệu dùng để **thực hiện phép toán** trên các toán hạng (operand).

Ví dụ:
```cpp
int a = 5 + 3;
```
- `+` là toán tử
- `5`, `3` là toán hạng

---

## 2️⃣ Toán tử số học

| Toán tử | Ý nghĩa | Ví dụ |
|-------|--------|-------|
| + | Cộng | a + b |
| - | Trừ | a - b |
| * | Nhân | a * b |
| / | Chia | a / b |
| % | Chia lấy dư | a % b |

### 📌 Ví dụ
```cpp
int a = 10;
int b = 3;

cout << a + b << endl; // 13
cout << a - b << endl; // 7
cout << a * b << endl; // 30
cout << a / b << endl; // 3
cout << a % b << endl; // 1
```

⚠️ Lưu ý:
- `%` chỉ dùng cho **số nguyên**
- `a / b` với `int` → chia nguyên

---

## 3️⃣ Toán tử gán

| Toán tử | Ý nghĩa |
|-------|--------|
| = | Gán |
| += | a += b ⇔ a = a + b |
| -= | a -= b |
| *= | a *= b |
| /= | a /= b |

### 📌 Ví dụ
```cpp
int x = 10;
x += 5; // x = 15
x *= 2; // x = 30
```

---

## 4️⃣ Toán tử so sánh

| Toán tử | Ý nghĩa |
|-------|--------|
| == | Bằng |
| != | Khác |
| > | Lớn hơn |
| < | Nhỏ hơn |
| >= | Lớn hơn hoặc bằng |
| <= | Nhỏ hơn hoặc bằng |

### 📌 Ví dụ
```cpp
int a = 5, b = 10;

cout << (a == b) << endl; // 0 (false)
cout << (a < b) << endl;  // 1 (true)
```

📌 Trong C++:
- `true` → 1
- `false` → 0

---

## 5️⃣ Toán tử logic

| Toán tử | Ý nghĩa |
|-------|--------|
| && | AND |
| || | OR |
| ! | NOT |

### 📌 Ví dụ
```cpp
int age = 20;
bool hasID = true;

if (age >= 18 && hasID) {
    cout << "Du dieu kien";
}
```

---

## 6️⃣ Toán tử tăng / giảm

| Toán tử | Ý nghĩa |
|-------|--------|
| ++ | Tăng 1 |
| -- | Giảm 1 |

### 📌 Ví dụ
```cpp
int a = 5;

a++; // a = 6
++a; // a = 7
```

### ⚠️ Phân biệt
```cpp
int x = 5;
cout << x++ << endl; // in 5, x = 6
cout << ++x << endl; // x = 7, in 7
```

---

## 7️⃣ Toán tử điều kiện (toán tử ba ngôi)

Cú pháp:
```cpp
condition ? value_if_true : value_if_false;
```

### 📌 Ví dụ
```cpp
int a = 10, b = 20;
int max = (a > b) ? a : b;
```

---

## 8️⃣ Độ ưu tiên toán tử (quan trọng)

Ví dụ:
```cpp
int x = 5 + 3 * 2; // x = 11
```

📌 Nhân chia ưu tiên hơn cộng trừ.

👉 Nên dùng ngoặc:
```cpp
int x = (5 + 3) * 2; // 16
```

---

## 9️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Nhập 2 số nguyên, in:
- Tổng
- Hiệu
- Tích
- Thương

---

### 📝 Bài 2
Nhập 1 số nguyên, kiểm tra:
- Chẵn hay lẻ

---

### 📝 Bài 3
Nhập điểm trung bình, dùng toán tử ba ngôi để:
- In "Đậu" hoặc "Rớt"

---

## 🔟 Lỗi thường gặp ❌
- Quên phân biệt `=` và `==`
- Chia số nguyên nhưng mong kết quả số thực
- Quên ngoặc làm sai logic

---

## 🧠 Ghi nhớ nhanh
- `%` chỉ dùng cho số nguyên
- Cẩn thận thứ tự ưu tiên
- `&&` và `||` rất hay dùng trong điều kiện

---

## ✅ Tổng kết
✔️ Bạn đã:
- Biết các toán tử trong C++
- Dùng đúng toán tử
- Tránh lỗi logic cơ bản

# Bài 04: Nhập và Xuất dữ liệu trong C++

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **nhập / xuất dữ liệu là gì**
- Biết sử dụng `cin`, `cout`
- Phân biệt `cin` và `getline`
- Tránh các lỗi nhập dữ liệu thường gặp

---

## 1️⃣ Xuất dữ liệu trong C++ – `cout`

👉 `cout` dùng để **in dữ liệu ra màn hình**.

### Cú pháp cơ bản
```cpp
cout << gia_tri;
```

### 📌 Ví dụ
```cpp
cout << "Hello C++";
cout << 10;
```

---

## 2️⃣ Xuất nhiều dữ liệu

```cpp
int age = 20;
cout << "Tuoi: " << age;
```

### Xuống dòng
```cpp
cout << "Hello" << endl;
cout << "C++";
```

📌 `endl` = xuống dòng + flush buffer

---

## 3️⃣ Nhập dữ liệu – `cin`

👉 `cin` dùng để **nhập dữ liệu từ bàn phím**.

### Cú pháp
```cpp
cin >> bien;
```

### 📌 Ví dụ
```cpp
int age;
cout << "Nhap tuoi: ";
cin >> age;
```

---

## 4️⃣ Nhập nhiều biến

```cpp
int a, b;
cin >> a >> b;
```

📌 Nhập cách nhau bằng **khoảng trắng**.

---

## 5️⃣ Ví dụ tổng hợp cin / cout

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    cout << "Tong = " << a + b;
    return 0;
}
```

---

## 6️⃣ Nhập chuỗi – vấn đề thường gặp

### ❌ Sai lầm phổ biến
```cpp
string name;
cin >> name;
```
👉 Chỉ nhập **tới khoảng trắng**.

---

## 7️⃣ Nhập chuỗi đầy đủ – `getline()`

### ✔️ Cách đúng
```cpp
#include <string>

string name;
getline(cin, name);
```

### 📌 Ví dụ đầy đủ
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Nhap ho ten: ";
    getline(cin, name);

    cout << "Ten cua ban: " << name;
    return 0;
}
```

---

## 8️⃣ Lỗi `getline` sau `cin` ❌ (RẤT HAY GẶP)

### ❌ Code lỗi
```cpp
int age;
string name;

cin >> age;
getline(cin, name); // bị bỏ qua
```

### ✔️ Cách sửa
```cpp
cin >> age;
cin.ignore();
getline(cin, name);
```

📌 `cin.ignore()` bỏ ký tự '\n' còn sót.

---

## 9️⃣ Định dạng xuất dữ liệu

### In đẹp hơn
```cpp
cout << "Ten: " << name << endl;
cout << "Tuoi: " << age << endl;
```

---

## 🔟 Bài tập thực hành ✍️

### 📝 Bài 1
Nhập:
- Tên
- Tuổi
- Điểm trung bình  
In ra thông tin.

---

### 📝 Bài 2
Nhập 2 số nguyên, in:
- Tổng
- Hiệu
- Tích
- Thương

---

### 📝 Bài 3
Nhập họ tên (có dấu cách), năm sinh → tính tuổi.

---

## ⚠️ Lỗi thường gặp
- Dùng `cin` để nhập chuỗi có khoảng trắng
- Quên `cin.ignore()`
- Không kiểm tra dữ liệu nhập

---

## 🧠 Ghi nhớ nhanh
- `cout` → xuất dữ liệu
- `cin` → nhập dữ liệu
- `getline` → nhập chuỗi đầy đủ
- `cin.ignore()` rất quan trọng

---

## ✅ Tổng kết
✔️ Bạn đã:
- Biết nhập / xuất dữ liệu
- Phân biệt `cin` và `getline`
- Tránh lỗi phổ biến khi nhập chuỗi


