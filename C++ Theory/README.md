# C++
# Mục lục
- [Bài 01: Giới thiệu C++](#bài-01-giới-thiệu-c)
- [Bài 02: Biến và Kiểu dữ liệu trong C++](#bài-02-biến-và-kiểu-dữ-liệu-trong-c)
- [Bài 03: Toán tử trong C++](#bài-03-toán-tử-trong-c)
- [Bài 04: Nhập và Xuất dữ liệu trong C++](#bài-04-nhập-và-xuất-dữ-liệu-trong-c)
- [Bài 05: Câu điều kiện trong C++ (if / else / switch)](#bài-05-câu-điều-kiện-trong-c-if--else--switch)
- [Bài 06: Vòng lặp trong C++ (for / while / do-while)](#bài-06-vòng-lặp-trong-c-for--while--do-while)
- [Bài 07: Mảng trong C++ (Mảng 1 chiều & Mảng 2 chiều)](#bài-07-mảng-trong-c-mảng-1-chiều--mảng-2-chiều)
- [Bài 08: Chuỗi trong C++ (String)](#bài-08-chuỗi-trong-c-string)
- [Bài 09: Hàm trong C++ (Function)](#bài-09-hàm-trong-c-function)
- [Bài 10: Con trỏ trong C++ (Pointer)](#bài-10-con-trỏ-trong-c-pointer)
- [Bài 11: Cấp phát động trong C++ (new / delete)](#bài-11-cấp-phát-động-trong-c-new--delete)
- [Bài 12: Lập trình hướng đối tượng trong C++ (Class & Object)](#bài-12-lập-trình-hướng-đối-tượng-trong-c-class--object)
- [Bài 13: Kế thừa trong C++ (Inheritance)](#bài-13-kế-thừa-trong-c-inheritance)
- [Bài 14: Đa hình trong C++ (Polymorphism & Virtual Function)](#bài-14-đa-hình-trong-c-polymorphism--virtual-function)
- [Bài 15: STL trong C++ (Standard Template Library)](#bài-15-stl-trong-c-standard-template-library)
- [Bài 16: Đệ quy trong C++ (Recursion)](#bài-16-đệ-quy-trong-c-recursion)
- [Bài 17: File I/O trong C++ (Đọc / Ghi File)](#bài-17-file-io-trong-c-đọc--ghi-file)
- [Bài 18: Cấu trúc dữ liệu & Thuật toán trong C++ (DSA)](#bài-18-cấu-trúc-dữ-liệu--thuật-toán-trong-c-dsa)
- [Bài 19: Quy hoạch động trong C++ (Dynamic Programming)](#bài-19-quy-hoạch-động-trong-c-dynamic-programming)


# Bài 01: Giới thiệu C++
[:arrow_up: Mục lục](#mục-lục)

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
[:arrow_up: Mục lục](#mục-lục)

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
[:arrow_up: Mục lục](#mục-lục)

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
[:arrow_up: Mục lục](#mục-lục)

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

# Bài 05: Câu điều kiện trong C++ (if / else / switch)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **câu điều kiện là gì**
- Sử dụng thành thạo `if`, `if-else`, `else if`
- Biết dùng `switch-case`
- Áp dụng điều kiện vào bài toán thực tế

---

## 1️⃣ Câu điều kiện là gì?

👉 **Câu điều kiện** cho phép chương trình:
- **Ra quyết định**
- Thực hiện **nhánh lệnh khác nhau** tùy theo điều kiện đúng hay sai

Ví dụ:
```cpp
if (diem >= 5) {
    cout << "Dau";
}
```

---

## 2️⃣ Câu lệnh `if`

### Cú pháp
```cpp
if (dieu_kien) {
    // code khi điều kiện đúng
}
```

### 📌 Ví dụ
```cpp
int a = 10;

if (a > 0) {
    cout << "a la so duong";
}
```

📌 Điều kiện trong `if` phải cho kết quả:
- `true` (1)
- hoặc `false` (0)

---

## 3️⃣ Câu lệnh `if - else`

### Cú pháp
```cpp
if (dieu_kien) {
    // đúng
} else {
    // sai
}
```

### 📌 Ví dụ
```cpp
int a;
cin >> a;

if (a % 2 == 0) {
    cout << "So chan";
} else {
    cout << "So le";
}
```

---

## 4️⃣ Câu lệnh `else if`

👉 Dùng khi có **nhiều điều kiện**.

### Cú pháp
```cpp
if (dk1) {
    ...
} else if (dk2) {
    ...
} else {
    ...
}
```

### 📌 Ví dụ xếp loại điểm
```cpp
float diem;
cin >> diem;

if (diem >= 8) {
    cout << "Gioi";
} else if (diem >= 6.5) {
    cout << "Kha";
} else if (diem >= 5) {
    cout << "Trung binh";
} else {
    cout << "Yeu";
}
```

---

## 5️⃣ Câu điều kiện lồng nhau

```cpp
int a, b;
cin >> a >> b;

if (a != 0) {
    if (b != 0) {
        cout << "Ca a va b deu khac 0";
    }
}
```

📌 Không nên lồng quá sâu → code khó đọc.

---

## 6️⃣ Câu lệnh `switch - case`

👉 Dùng khi:
- So sánh **1 biến**
- Với **nhiều giá trị cụ thể**

### Cú pháp
```cpp
switch (bieu_thuc) {
    case gia_tri_1:
        ...
        break;
    case gia_tri_2:
        ...
        break;
    default:
        ...
}
```

---

## 7️⃣ Ví dụ `switch-case`

```cpp
int choice;
cout << "1. Them\n2. Xoa\n3. Thoat\n";
cin >> choice;

switch (choice) {
    case 1:
        cout << "Ban chon Them";
        break;
    case 2:
        cout << "Ban chon Xoa";
        break;
    case 3:
        cout << "Thoat chuong trinh";
        break;
    default:
        cout << "Lua chon khong hop le";
}
```

📌 **Quên `break` → chạy xuyên case**.

---

## 8️⃣ So sánh `if-else` và `switch`

| Tiêu chí | if-else | switch |
|--------|--------|--------|
| Điều kiện | Linh hoạt | Giá trị cụ thể |
| Khoảng | Có | Không |
| Dùng cho | Logic phức tạp | Menu, lựa chọn |

---

## 9️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Nhập số nguyên `n`, kiểm tra:
- Dương
- Âm
- Hay bằng 0

---

### 📝 Bài 2
Nhập tháng (1–12), in số ngày của tháng đó.

---

### 📝 Bài 3
Viết menu bằng `switch`:
- 1. Cộng
- 2. Trừ
- 3. Nhân
- 4. Chia

---

## 🔟 Lỗi thường gặp ❌
- Dùng `=` thay vì `==`
- Quên `break` trong `switch`
- Điều kiện chồng chéo sai logic

---

## 🧠 Ghi nhớ nhanh
- `if` dùng cho điều kiện linh hoạt
- `switch` dùng cho menu
- Điều kiện trả về `true / false`

---

## ✅ Tổng kết
✔️ Bạn đã:
- Sử dụng được `if / else`
- Biết `switch-case`
- Áp dụng điều kiện vào bài toán

# Bài 06: Vòng lặp trong C++ (for / while / do-while)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **vòng lặp là gì** và khi nào cần dùng
- Sử dụng thành thạo `for`, `while`, `do-while`
- Biết dùng `break`, `continue`
- Áp dụng vòng lặp vào các bài toán thực tế

---

## 1️⃣ Vòng lặp là gì?

👉 **Vòng lặp** cho phép chương trình **lặp lại một khối lệnh nhiều lần** khi điều kiện còn đúng.

Ví dụ:
- In các số từ 1 đến 10
- Tính tổng từ 1 đến n
- Duyệt mảng

---

## 2️⃣ Vòng lặp `for`

### Cú pháp
```cpp
for (khoi_tao; dieu_kien; cap_nhat) {
    // code lặp
}
```

### 📌 Ví dụ 1: In từ 1 đến 5
```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
```

### 📌 Ví dụ 2: Tính tổng 1 → n
```cpp
int n, sum = 0;
cin >> n;

for (int i = 1; i <= n; i++) {
    sum += i;
}

cout << "Tong = " << sum;
```

📌 Dùng `for` khi **biết trước số lần lặp**.

---

## 3️⃣ Vòng lặp `while`

### Cú pháp
```cpp
while (dieu_kien) {
    // code lặp
}
```

### 📌 Ví dụ: Đếm chữ số của số nguyên
```cpp
int n, count = 0;
cin >> n;

while (n != 0) {
    count++;
    n /= 10;
}

cout << "So chu so = " << count;
```

📌 Dùng `while` khi **chưa biết trước số lần lặp**.

---

## 4️⃣ Vòng lặp `do-while`

### Cú pháp
```cpp
do {
    // code lặp
} while (dieu_kien);
```

📌 Luôn chạy **ít nhất 1 lần**.

### 📌 Ví dụ: Nhập số dương
```cpp
int n;
do {
    cout << "Nhap so duong: ";
    cin >> n;
} while (n <= 0);
```

---

## 5️⃣ So sánh nhanh các vòng lặp

| Vòng lặp | Kiểm tra điều kiện | Dùng khi |
|--------|-------------------|---------|
| for | Trước | Biết số lần lặp |
| while | Trước | Chưa biết |
| do-while | Sau | Ít nhất 1 lần |

---

## 6️⃣ Vòng lặp lồng nhau

👉 Vòng lặp bên trong vòng lặp khác.

### 📌 Ví dụ: In bảng cửu chương
```cpp
for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
        cout << i << " x " << j << " = " << i * j << endl;
    }
    cout << endl;
}
```

---

## 7️⃣ Lệnh `break`

👉 **Thoát khỏi vòng lặp ngay lập tức**.

```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) break;
    cout << i << " ";
}
```
📌 In: `1 2 3 4`

---

## 8️⃣ Lệnh `continue`

👉 **Bỏ qua vòng lặp hiện tại**, chạy vòng tiếp theo.

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;
    cout << i << " ";
}
```
📌 In: `1 2 4 5`

---

## 9️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Nhập số `n`, in:
- Các số chẵn từ 1 → n

---

### 📝 Bài 2
Nhập số `n`, tính:
- Giai thừa `n!`

---

### 📝 Bài 3
Nhập số nguyên `n`, kiểm tra:
- Có phải số nguyên tố không

---

### 📝 Bài 4 (tư duy)
So sánh `for` và `while`, khi nào nên dùng mỗi loại?

---

## 🔟 Lỗi thường gặp ❌
- Vòng lặp vô hạn (quên cập nhật biến)
- Điều kiện sai (`<=` thay vì `<`)
- Dùng `break` sai vị trí

---

## 🧠 Ghi nhớ nhanh
- `for` → biết trước số lần
- `while` → lặp theo điều kiện
- `do-while` → chạy ít nhất 1 lần
- Cẩn thận vòng lặp vô hạn

---

## ✅ Tổng kết
✔️ Bạn đã:
- Thành thạo 3 loại vòng lặp
- Biết dùng `break`, `continue`
- Áp dụng vào bài toán thực tế

# Bài 07: Mảng trong C++ (Mảng 1 chiều & Mảng 2 chiều)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **mảng là gì** và cách lưu trữ trong bộ nhớ
- Thành thạo **mảng 1 chiều**
- Thành thạo **mảng 2 chiều**
- Duyệt mảng bằng vòng lặp
- Áp dụng mảng vào các bài toán thực tế

---

## 1️⃣ Mảng là gì?

👉 **Mảng (Array)** là tập hợp **nhiều phần tử cùng kiểu dữ liệu**, được lưu **liên tiếp trong bộ nhớ**.

Ví dụ:
```cpp
int a[5];
```
👉 Mảng `a` có 5 phần tử kiểu `int`.

📌 **Chỉ số mảng (index) bắt đầu từ 0**.

---

## 2️⃣ Mảng 1 chiều

### 2.1 Khai báo mảng 1 chiều

```cpp
kieu_du_lieu ten_mang[so_phan_tu];
```

📌 Ví dụ:
```cpp
int a[10];
float diem[5];
```

---

### 2.2 Khởi tạo mảng 1 chiều

```cpp
int a[5] = {1, 2, 3, 4, 5};
```
Hoặc:
```cpp
int a[] = {10, 20, 30};
```

---

### 2.3 Truy cập phần tử mảng 1 chiều

```cpp
int a[3] = {5, 10, 15};
cout << a[0]; // 5
cout << a[1]; // 10
cout << a[2]; // 15
```

❌ Truy cập vượt phạm vi:
```cpp
cout << a[3]; // lỗi logic nghiêm trọng
```

---

### 2.4 Nhập / xuất mảng 1 chiều

```cpp
int n;
cin >> n;
int a[n];

for (int i = 0; i < n; i++) {
    cin >> a[i];
}

for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
}
```

---

### 2.5 Các bài toán thường gặp với mảng 1 chiều

#### ✔️ Tìm phần tử lớn nhất
```cpp
int maxVal = a[0];
for (int i = 1; i < n; i++) {
    if (a[i] > maxVal) maxVal = a[i];
}
```

#### ✔️ Tính tổng
```cpp
int sum = 0;
for (int i = 0; i < n; i++) sum += a[i];
```

#### ✔️ Đếm số chẵn
```cpp
int count = 0;
for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) count++;
}
```

---

## 3️⃣ Mảng 2 chiều

👉 **Mảng 2 chiều** là mảng của mảng – thường dùng để biểu diễn:
- Bảng
- Ma trận
- Lưới (grid)

---

### 3.1 Khai báo mảng 2 chiều

```cpp
kieu_du_lieu ten_mang[so_dong][so_cot];
```

📌 Ví dụ:
```cpp
int a[3][4]; // 3 dòng, 4 cột
```

---

### 3.2 Khởi tạo mảng 2 chiều

```cpp
int a[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

---

### 3.3 Truy cập phần tử mảng 2 chiều

```cpp
cout << a[0][1]; // 2
cout << a[1][2]; // 6
```

📌 Chỉ số:
- Dòng: `a[i]`
- Cột: `a[i][j]`

---

### 3.4 Nhập / xuất mảng 2 chiều

```cpp
int m, n;
cin >> m >> n;
int a[m][n];

for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cin >> a[i][j];
    }
}
```

Xuất:
```cpp
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cout << a[i][j] << " ";
    }
    cout << endl;
}
```

---

### 3.5 Các bài toán thường gặp với mảng 2 chiều

#### ✔️ Tính tổng các phần tử
```cpp
int sum = 0;
for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
        sum += a[i][j];
```

#### ✔️ Tìm max trong ma trận
```cpp
int maxVal = a[0][0];
for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
        if (a[i][j] > maxVal) maxVal = a[i][j];
```

#### ✔️ Tổng từng dòng
```cpp
for (int i = 0; i < m; i++) {
    int rowSum = 0;
    for (int j = 0; j < n; j++)
        rowSum += a[i][j];
    cout << "Tong dong " << i << " = " << rowSum << endl;
}
```

---

## 4️⃣ Mảng và bộ nhớ

- Các phần tử lưu **liên tiếp**
- Truy cập nhanh O(1)
- **Không thay đổi kích thước**
- Dễ lỗi nếu truy cập sai chỉ số

📌 Muốn linh hoạt hơn → dùng `vector` (sẽ học sau).

---

## 5️⃣ Bài tập thực hành ✍️

### 📝 Bài 1 (1 chiều)
Nhập mảng n số nguyên, tìm:
- Max
- Min

---

### 📝 Bài 2 (1 chiều)
Đếm số:
- Chẵn
- Lẻ
- Số nguyên tố

---

### 📝 Bài 3 (2 chiều)
Nhập ma trận m×n, tính:
- Tổng các phần tử
- Phần tử lớn nhất

---

### 📝 Bài 4 (2 chiều – tư duy)
Tính tổng đường chéo chính (ma trận vuông).

---

## ❌ Lỗi thường gặp
- Truy cập vượt chỉ số
- Nhầm dòng / cột
- Quên vòng lặp lồng nhau

---

## 🧠 Ghi nhớ nhanh
- Mảng bắt đầu từ chỉ số 0
- Mảng 2 chiều = dòng × cột
- Phải dùng vòng lặp lồng nhau
- Không thay đổi được kích thước

---

## ✅ Tổng kết
✔️ Bạn đã:
- Thành thạo mảng 1 chiều
- Thành thạo mảng 2 chiều
- Áp dụng mảng vào bài toán thực tế

# Bài 08: Chuỗi trong C++ (String)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **chuỗi là gì**
- Phân biệt **chuỗi kiểu C (`char[]`) và chuỗi C++ (`string`)**
- Sử dụng thành thạo các **hàm xử lý chuỗi**
- Áp dụng chuỗi vào bài toán thực tế

---

## 1️⃣ Chuỗi là gì?

👉 **Chuỗi (String)** là dãy các ký tự liên tiếp, kết thúc bằng ký tự đặc biệt `\0` (null character).

Ví dụ:
```
"Hoc C++"
```

📌 Chuỗi thường dùng để:
- Lưu họ tên
- Văn bản
- Dữ liệu nhập từ người dùng

---

## 2️⃣ Chuỗi kiểu C – `char[]`

### 2.1 Khai báo chuỗi `char[]`

```cpp
char name[20];
```

📌 Chuỗi `char` **phải có ký tự kết thúc `\0`**.

---

### 2.2 Khởi tạo chuỗi `char[]`

```cpp
char name[] = "Nguyen Van A";
```

Hoặc:
```cpp
char name[20] = {'N','g','u','y','e','n','\0'};
```

---

### 2.3 Nhập chuỗi `char[]`

```cpp
char name[20];
cin >> name;      // chỉ nhập đến khoảng trắng
```

📌 Muốn nhập cả dòng:
```cpp
cin.getline(name, 20);
```

---

### 2.4 Xuất chuỗi `char[]`

```cpp
cout << name;
```

---

### 2.5 Một số hàm xử lý chuỗi `char[]`

Cần thư viện:
```cpp
#include <cstring>
```

| Hàm | Ý nghĩa |
|----|--------|
| strlen(s) | Độ dài chuỗi |
| strcpy(a,b) | Sao chép |
| strcat(a,b) | Nối chuỗi |
| strcmp(a,b) | So sánh |

---

## 3️⃣ Chuỗi kiểu C++ – `string` (Khuyên dùng)

📌 C++ cung cấp kiểu `string` **dễ dùng và an toàn hơn**.

### 3.1 Khai báo chuỗi `string`

```cpp
#include <string>

string name;
```

---

### 3.2 Nhập / xuất chuỗi `string`

```cpp
string name;
getline(cin, name);
cout << name;
```

---

### 3.3 Các thao tác cơ bản với `string`

```cpp
string s = "Hello";
```

| Thao tác | Ví dụ |
|-------|------|
| Độ dài | s.length() |
| Nối | s1 + s2 |
| Truy cập | s[0] |
| So sánh | s1 == s2 |

---

### 3.4 Ví dụ tổng hợp

```cpp
string s1 = "Hello";
string s2 = " C++";

string s3 = s1 + s2;
cout << s3 << endl;        // Hello C++
cout << s3.length();       // độ dài
```

---

## 4️⃣ Duyệt chuỗi

```cpp
for (int i = 0; i < s.length(); i++) {
    cout << s[i] << " ";
}
```

---

## 5️⃣ Một số hàm xử lý chuỗi `string` thường dùng

| Hàm | Ý nghĩa |
|----|--------|
| s.length() | Độ dài |
| s.empty() | Rỗng |
| s.substr(pos,len) | Cắt chuỗi |
| s.find(x) | Tìm |
| s.erase(pos,len) | Xóa |
| s.insert(pos,x) | Chèn |

---

## 6️⃣ Ví dụ xử lý chuỗi thực tế

### ✔️ Đếm số ký tự
```cpp
cout << s.length();
```

---

### ✔️ Đếm số chữ cái
```cpp
int count = 0;
for (char c : s) {
    if (isalpha(c)) count++;
}
```

---

### ✔️ Kiểm tra Palindrome

```cpp
bool isPalindrome = true;
int l = 0, r = s.length() - 1;

while (l < r) {
    if (s[l] != s[r]) {
        isPalindrome = false;
        break;
    }
    l++;
    r--;
}
```

---

## 7️⃣ So sánh `char[]` và `string`

| Tiêu chí | char[] | string |
|-------|--------|--------|
| Dễ dùng | ❌ | ✅ |
| An toàn | ❌ | ✅ |
| Kích thước | Cố định | Linh hoạt |
| Khuyên dùng | Không | Có |

---

## 8️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Nhập chuỗi, in:
- Độ dài
- Số ký tự chữ cái

---

### 📝 Bài 2
Chuẩn hóa chuỗi:
- Xóa khoảng trắng dư
- Viết hoa chữ cái đầu

---

### 📝 Bài 3
Kiểm tra chuỗi đối xứng (Palindrome).

---

## ❌ Lỗi thường gặp
- Quên `getline`
- Nhầm `cin` và `getline`
- Dùng `char[]` nhưng thiếu `\0`

---

## 🧠 Ghi nhớ nhanh
- Ưu tiên dùng `string`
- `char[]` cần cẩn thận bộ nhớ
- Chuỗi rất hay gặp trong bài thi

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu chuỗi trong C++
- Biết dùng `char[]` và `string`
- Xử lý chuỗi cơ bản

# Bài 09: Hàm trong C++ (Function)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **hàm là gì** và vì sao cần dùng hàm
- Biết **khai báo, định nghĩa và gọi hàm**
- Phân biệt **tham trị và tham chiếu**
- Viết được chương trình có cấu trúc rõ ràng

---

## 1️⃣ Hàm là gì?

👉 **Hàm (Function)** là một khối lệnh thực hiện **một công việc cụ thể**, có thể:
- Nhận dữ liệu đầu vào (tham số)
- Trả về kết quả

📌 Dùng hàm để:
- Tránh lặp code
- Chia nhỏ chương trình
- Dễ bảo trì, dễ mở rộng

---

## 2️⃣ Cấu trúc một hàm trong C++

### Cú pháp tổng quát
```cpp
kieu_tra_ve ten_ham(danh_sach_tham_so) {
    // thân hàm
    return gia_tri;
}
```

---

## 3️⃣ Ví dụ hàm đơn giản

```cpp
int tong(int a, int b) {
    return a + b;
}

int main() {
    cout << tong(3, 5);
    return 0;
}
```

📌 Hàm `tong`:
- Nhận 2 tham số `a`, `b`
- Trả về tổng

---

## 4️⃣ Hàm không có giá trị trả về (`void`)

```cpp
void xinChao() {
    cout << "Xin chao C++";
}

int main() {
    xinChao();
    return 0;
}
```

📌 `void` → không trả về gì.

---

## 5️⃣ Tham số và đối số

```cpp
int tong(int a, int b) // a, b: tham số
```

```cpp
tong(3, 5); // 3, 5: đối số
```

---

## 6️⃣ Tham trị (Pass by Value)

👉 Hàm **nhận bản sao** của biến.

```cpp
void tang(int x) {
    x++;
}

int main() {
    int a = 5;
    tang(a);
    cout << a; // vẫn là 5
}
```

📌 Giá trị gốc **không đổi**.

---

## 7️⃣ Tham chiếu (Pass by Reference)

👉 Hàm nhận **địa chỉ của biến**.

```cpp
void tang(int &x) {
    x++;
}

int main() {
    int a = 5;
    tang(a);
    cout << a; // 6
}
```

📌 Giá trị gốc **bị thay đổi**.

---

## 8️⃣ So sánh tham trị và tham chiếu

| Tiêu chí | Tham trị | Tham chiếu |
|-------|--------|-----------|
| Thay đổi biến gốc | ❌ | ✅ |
| An toàn | Cao | Thấp hơn |
| Hiệu năng | Thấp hơn | Cao hơn |

---

## 9️⃣ Hàm có nhiều tham số

```cpp
float diemTrungBinh(float a, float b, float c) {
    return (a + b + c) / 3;
}
```

---

## 🔟 Hàm với mảng

```cpp
void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
```

📌 Khi truyền mảng → thực chất là **truyền địa chỉ**.

---

## 1️⃣1️⃣ Khai báo hàm trước `main`

```cpp
int tong(int a, int b);

int main() {
    cout << tong(2, 3);
}

int tong(int a, int b) {
    return a + b;
}
```

---

## 1️⃣2️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Viết hàm:
- Tính tổng 2 số
- Tính hiệu 2 số

---

### 📝 Bài 2
Viết hàm kiểm tra:
- Số nguyên tố

---

### 📝 Bài 3
Viết hàm:
- Nhập mảng
- Xuất mảng
- Tính tổng mảng

---

## ❌ Lỗi thường gặp
- Quên `return`
- Nhầm tham trị và tham chiếu
- Khai báo hàm sau `main` mà không prototype

---

## 🧠 Ghi nhớ nhanh
- Hàm giúp code gọn & rõ ràng
- Tham trị không đổi biến gốc
- Tham chiếu làm thay đổi biến gốc
- Luôn chia nhỏ chương trình bằng hàm

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu rõ hàm trong C++
- Biết truyền tham số
- Viết chương trình có cấu trúc

# Bài 10: Con trỏ trong C++ (Pointer)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **con trỏ là gì**
- Biết cách **khai báo và sử dụng con trỏ**
- Hiểu mối quan hệ giữa **con trỏ – biến – bộ nhớ**
- Ứng dụng con trỏ với **hàm và mảng**

---

## 1️⃣ Con trỏ là gì?

👉 **Con trỏ (Pointer)** là biến dùng để **lưu địa chỉ của biến khác** trong bộ nhớ.

Ví dụ:
```cpp
int a = 10;
int *p = &a;
```

- `a` : biến bình thường
- `&a` : địa chỉ của biến `a`
- `p` : con trỏ trỏ tới `a`

---

## 2️⃣ Khai báo con trỏ

### Cú pháp
```cpp
kieu_du_lieu *ten_con_tro;
```

### 📌 Ví dụ
```cpp
int *p;
float *q;
char *c;
```

---

## 3️⃣ Toán tử `&` và `*`

| Toán tử | Ý nghĩa |
|-------|--------|
| & | Lấy địa chỉ |
| * | Truy cập giá trị tại địa chỉ |

### 📌 Ví dụ
```cpp
int a = 5;
int *p = &a;

cout << p;   // địa chỉ của a
cout << *p;  // giá trị của a (5)
```

---

## 4️⃣ Thay đổi giá trị thông qua con trỏ

```cpp
int a = 10;
int *p = &a;

*p = 20;
cout << a; // 20
```

📌 Thay đổi qua con trỏ → biến gốc đổi theo.

---

## 5️⃣ Con trỏ và hàm

### 📌 Ví dụ hoán đổi 2 số (pointer)

```cpp
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    cout << x << " " << y;
}
```

📌 So sánh với **tham chiếu**:
- Pointer → truyền địa chỉ
- Reference → cú pháp gọn hơn

---

## 6️⃣ Con trỏ và mảng

👉 Tên mảng chính là **địa chỉ phần tử đầu tiên**.

```cpp
int a[3] = {10, 20, 30};
int *p = a;

cout << *p;      // 10
cout << *(p+1);  // 20
cout << *(p+2);  // 30
```

---

## 7️⃣ Duyệt mảng bằng con trỏ

```cpp
for (int i = 0; i < 3; i++) {
    cout << *(p + i) << " ";
}
```

---

## 8️⃣ Con trỏ NULL

```cpp
int *p = NULL;
```

📌 Tránh trỏ vào vùng nhớ rác.

(C++ hiện đại dùng `nullptr`)

```cpp
int *p = nullptr;
```

---

## 9️⃣ Con trỏ cấp hai (Pointer to Pointer)

```cpp
int a = 5;
int *p = &a;
int **pp = &p;

cout << **pp; // 5
```

---

## 🔟 Lỗi thường gặp ❌
- Dùng con trỏ chưa khởi tạo
- Truy cập vùng nhớ không hợp lệ
- Nhầm `*p` và `p`

---

## 🧠 Ghi nhớ nhanh
- Con trỏ lưu **địa chỉ**
- `*p` truy cập giá trị
- Cẩn thận lỗi bộ nhớ
- Nền tảng cho cấp phát động

---

## 1️⃣1️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Viết chương trình:
- Nhập 2 số
- Hoán đổi bằng con trỏ

---

### 📝 Bài 2
Dùng con trỏ để:
- Nhập mảng
- Xuất mảng

---

### 📝 Bài 3 (tư duy)
So sánh **con trỏ** và **tham chiếu**.

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu rõ con trỏ
- Biết thao tác bộ nhớ
- Sẵn sàng học cấp phát động

# Bài 11: Cấp phát động trong C++ (new / delete)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **cấp phát động là gì** và vì sao cần dùng
- Biết sử dụng **new / delete**
- Hiểu sự khác nhau giữa **cấp phát tĩnh và cấp phát động**
- Ứng dụng cấp phát động với **mảng và con trỏ**

---

## 1️⃣ Cấp phát bộ nhớ là gì?

👉 **Cấp phát bộ nhớ** là việc **xin vùng nhớ trong RAM** để lưu trữ dữ liệu.

Trong C++ có 2 loại:
- **Cấp phát tĩnh** (stack)
- **Cấp phát động** (heap)

---

## 2️⃣ Cấp phát tĩnh (Stack)

```cpp
int a = 10;
int b[5];
```

📌 Đặc điểm:
- Kích thước **cố định**
- Tự động giải phóng khi ra khỏi scope
- Nhanh nhưng **kém linh hoạt**

---

## 3️⃣ Cấp phát động (Heap)

👉 Dùng khi:
- Chưa biết trước kích thước
- Dữ liệu lớn
- Cần tồn tại lâu

Cấp phát động dùng:
- `new`
- `delete`

---

## 4️⃣ Cấp phát động cho biến đơn

### 📌 Cú pháp
```cpp
int *p = new int;
```

### 📌 Ví dụ
```cpp
int *p = new int;
*p = 100;

cout << *p;
```

---

## 5️⃣ Giải phóng bộ nhớ – `delete`

```cpp
delete p;
p = nullptr;
```

📌 **Luôn giải phóng bộ nhớ** sau khi dùng để tránh rò rỉ bộ nhớ.

---

## 6️⃣ Cấp phát động cho mảng

### 📌 Cú pháp
```cpp
int *a = new int[n];
```

### 📌 Ví dụ
```cpp
int n;
cin >> n;

int *a = new int[n];

for (int i = 0; i < n; i++) {
    cin >> a[i];
}

for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
}

delete[] a;
a = nullptr;
```

---

## 7️⃣ So sánh cấp phát tĩnh và động

| Tiêu chí | Tĩnh | Động |
|-------|------|------|
| Bộ nhớ | Stack | Heap |
| Kích thước | Cố định | Linh hoạt |
| Giải phóng | Tự động | Thủ công |
| Độ an toàn | Cao | Thấp hơn |

---

## 8️⃣ Lỗi thường gặp ❌

### ❌ Quên delete
```cpp
int *p = new int;
// quên delete
```

### ❌ Delete sai cách
```cpp
delete a; // sai, phải dùng delete[]
```

---

## 9️⃣ Ví dụ thực tế: Nhập mảng động

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int *a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Mang: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    delete[] a;
    a = nullptr;

    return 0;
}
```

---

## 🔟 Khi nào nên dùng cấp phát động?

✔️ Khi:
- Kích thước nhập từ người dùng
- Dữ liệu lớn
- Làm cấu trúc dữ liệu (Linked List, Tree)

❌ Không nên dùng khi:
- Dữ liệu nhỏ
- Dùng tạm thời

---

## 1️⃣1️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Nhập `n`, cấp phát mảng động, tìm:
- Max
- Min

---

### 📝 Bài 2
Viết chương trình:
- Nhập danh sách sinh viên (tên, điểm) bằng cấp phát động

---

### 📝 Bài 3 (tư duy)
Vì sao quên `delete` gây rò rỉ bộ nhớ?

---

## 🧠 Ghi nhớ nhanh
- `new` → cấp phát
- `delete` → giải phóng
- Mảng → `delete[]`
- Luôn gán `nullptr` sau delete

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu cấp phát động
- Biết dùng new / delete
- Sẵn sàng học OOP & DSA

# Bài 12: Lập trình hướng đối tượng trong C++ (Class & Object)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **lập trình hướng đối tượng (OOP)** là gì
- Biết **class** và **object** trong C++
- Sử dụng **thuộc tính (attribute)** và **phương thức (method)**
- Hiểu **constructor** và **destructor**
- Viết được chương trình OOP đơn giản

---

## 1️⃣ Lập trình hướng đối tượng (OOP) là gì?

👉 **OOP (Object-Oriented Programming)** là phương pháp lập trình dựa trên:
- **Đối tượng (Object)**
- **Lớp (Class)**

📌 OOP giúp:
- Code dễ hiểu
- Dễ mở rộng
- Dễ bảo trì
- Gần với tư duy thực tế

---

## 2️⃣ Class là gì?

👉 **Class** là bản thiết kế (khuôn mẫu) để tạo ra các đối tượng.

Ví dụ:
- Class: `SinhVien`
- Object: `sv1`, `sv2`

---

## 3️⃣ Object là gì?

👉 **Object** là một thể hiện (instance) của class.

```cpp
SinhVien sv1;
```

---

## 4️⃣ Cấu trúc một class trong C++

```cpp
class TenClass {
private:
    // thuộc tính riêng
public:
    // phương thức công khai
};
```

---

## 5️⃣ Ví dụ class đơn giản

```cpp
#include <iostream>
#include <string>
using namespace std;

class SinhVien {
public:
    string ten;
    int tuoi;

    void nhap() {
        getline(cin, ten);
        cin >> tuoi;
    }

    void xuat() {
        cout << "Ten: " << ten << endl;
        cout << "Tuoi: " << tuoi << endl;
    }
};

int main() {
    SinhVien sv;
    sv.nhap();
    sv.xuat();
    return 0;
}
```

---

## 6️⃣ Thuộc tính và phương thức

- **Thuộc tính (attribute)**: dữ liệu
- **Phương thức (method)**: hành vi

📌 Gọi bằng dấu chấm `.`
```cpp
sv.ten = "An";
sv.xuat();
```

---

## 7️⃣ Phạm vi truy cập (Access Modifier)

| Từ khóa | Ý nghĩa |
|-------|--------|
| public | Truy cập mọi nơi |
| private | Chỉ trong class |
| protected | Dùng cho kế thừa |

📌 Thực tế: **thuộc tính nên để private**.

---

## 8️⃣ Constructor (Hàm khởi tạo)

👉 **Constructor** là hàm:
- Tự động chạy khi object được tạo
- Tên trùng tên class
- Không có kiểu trả về

### 📌 Ví dụ
```cpp
class SinhVien {
public:
    string ten;
    int tuoi;

    SinhVien() {
        ten = "";
        tuoi = 0;
    }
};
```

---

### Constructor có tham số

```cpp
SinhVien(string t, int age) {
    ten = t;
    tuoi = age;
}
```

Sử dụng:
```cpp
SinhVien sv("Nam", 20);
```

---

## 9️⃣ Destructor (Hàm hủy)

👉 **Destructor**:
- Tự động gọi khi object bị hủy
- Dùng để giải phóng tài nguyên

```cpp
~SinhVien() {
    cout << "Huy doi tuong";
}
```

---

## 🔟 Class và con trỏ

```cpp
SinhVien *sv = new SinhVien("Lan", 21);
sv->xuat();
delete sv;
```

📌 `->` dùng khi truy cập qua con trỏ.

---

## 1️⃣1️⃣ Ví dụ hoàn chỉnh

```cpp
#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
    string ten;
    int tuoi;
public:
    SinhVien(string t, int age) {
        ten = t;
        tuoi = age;
    }

    void xuat() {
        cout << "Ten: " << ten << endl;
        cout << "Tuoi: " << tuoi << endl;
    }
};

int main() {
    SinhVien sv("Minh", 22);
    sv.xuat();
    return 0;
}
```

---

## 1️⃣2️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Tạo class `HinhChuNhat`:
- Thuộc tính: dài, rộng
- Phương thức: tính diện tích, chu vi

---

### 📝 Bài 2
Tạo class `SinhVien`:
- Tên, điểm
- Hàm xếp loại

---

### 📝 Bài 3 (tư duy)
Vì sao nên để thuộc tính là `private`?

---

## ❌ Lỗi thường gặp
- Quên dấu `;` sau class
- Nhầm constructor là hàm thường
- Truy cập trực tiếp thuộc tính private

---

## 🧠 Ghi nhớ nhanh
- Class = khuôn mẫu
- Object = đối tượng
- Constructor tự chạy
- Dùng `.` hoặc `->`

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu OOP
- Dùng class & object
- Sử dụng constructor, destructor

# Bài 13: Kế thừa trong C++ (Inheritance)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **kế thừa (Inheritance)** là gì
- Biết cách **tạo class con kế thừa class cha**
- Sử dụng được **protected**
- Hiểu **ghi đè phương thức (override)**
- Áp dụng kế thừa vào bài toán thực tế

---

## 1️⃣ Kế thừa là gì?

👉 **Kế thừa (Inheritance)** cho phép:
- Class con **kế thừa thuộc tính và phương thức** của class cha
- Tái sử dụng code
- Mở rộng chức năng

📌 Ví dụ thực tế:
- Class cha: `Nguoi`
- Class con: `SinhVien`, `GiangVien`

---

## 2️⃣ Cú pháp kế thừa trong C++

```cpp
class Con : public Cha {
    // nội dung class con
};
```

📌 Từ khóa:
- `public` → kiểu kế thừa (hay dùng nhất)

---

## 3️⃣ Ví dụ cơ bản về kế thừa

```cpp
#include <iostream>
using namespace std;

class Nguoi {
public:
    string ten;
    int tuoi;

    void nhap() {
        getline(cin, ten);
        cin >> tuoi;
    }

    void xuat() {
        cout << "Ten: " << ten << endl;
        cout << "Tuoi: " << tuoi << endl;
    }
};

class SinhVien : public Nguoi {
public:
    float diem;

    void nhap() {
        Nguoi::nhap();
        cin >> diem;
    }

    void xuat() {
        Nguoi::xuat();
        cout << "Diem: " << diem << endl;
    }
};

int main() {
    SinhVien sv;
    sv.nhap();
    sv.xuat();
    return 0;
}
```

---

## 4️⃣ Phạm vi truy cập và kế thừa

| Từ khóa | Ý nghĩa |
|--------|--------|
| public | Truy cập mọi nơi |
| protected | Chỉ class cha & con |
| private | Chỉ class cha |

📌 Lưu ý:
- **Thuộc tính nên để protected** nếu muốn class con dùng
- `private` không truy cập được từ class con

---

## 5️⃣ Kế thừa public / protected / private

```cpp
class Con : public Cha
class Con : protected Cha
class Con : private Cha
```

📌 Thực tế:
- **90% dùng `public`**

---

## 6️⃣ Ghi đè phương thức (Override)

👉 Class con có thể **viết lại phương thức** của class cha.

```cpp
class Cha {
public:
    void hello() {
        cout << "Hello Cha";
    }
};

class Con : public Cha {
public:
    void hello() {
        cout << "Hello Con";
    }
};
```

📌 Gọi:
```cpp
Con c;
c.hello(); // Hello Con
```

---

## 7️⃣ Gọi phương thức class cha

```cpp
Cha::hello();
```

📌 Dùng khi:
- Muốn dùng lại logic của cha

---

## 8️⃣ Constructor trong kế thừa

```cpp
class Cha {
public:
    Cha(int x) {
        cout << "Cha";
    }
};

class Con : public Cha {
public:
    Con() : Cha(10) {
        cout << "Con";
    }
};
```

📌 Constructor cha chạy **trước** con.

---

## 9️⃣ Ví dụ thực tế: Quản lý nhân viên

```cpp
class NhanVien {
protected:
    string ten;
public:
    NhanVien(string t) {
        ten = t;
    }
};

class NhanVienFullTime : public NhanVien {
private:
    int luong;
public:
    NhanVienFullTime(string t, int l) : NhanVien(t) {
        luong = l;
    }

    void xuat() {
        cout << ten << " - " << luong;
    }
};
```

---

## 🔟 Kế thừa nhiều cấp

```cpp
class A {};
class B : public A {};
class C : public B {};
```

📌 C++ **không hỗ trợ đa kế thừa phức tạp trong thực tế** (tránh dùng).

---

## 1️⃣1️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Tạo class:
- `DongVat`
- `Cho` kế thừa `DongVat`

---

### 📝 Bài 2
Tạo class:
- `NhanVien`
- `NhanVienPartTime`
- `NhanVienFullTime`

---

### 📝 Bài 3 (tư duy)
So sánh `private` và `protected` trong kế thừa.

---

## ❌ Lỗi thường gặp
- Quên `public` khi kế thừa
- Truy cập `private` từ class con
- Không gọi constructor cha

---

## 🧠 Ghi nhớ nhanh
- Kế thừa giúp tái sử dụng code
- Dùng `protected` cho class cha
- Constructor cha chạy trước

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu kế thừa
- Tạo class con
- Override phương thức
- Áp dụng kế thừa thực tế

# Bài 14: Đa hình trong C++ (Polymorphism & Virtual Function)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **đa hình (Polymorphism)** là gì
- Biết vì sao cần **virtual function**
- Phân biệt **compile-time polymorphism** và **runtime polymorphism**
- Sử dụng **override**, **base pointer → derived object**
- Tránh các lỗi thường gặp khi dùng đa hình

---

## 1️⃣ Đa hình là gì?

👉 **Đa hình (Polymorphism)** nghĩa là:
> *Cùng một tên hàm, nhưng hành vi khác nhau tùy đối tượng*

📌 Ví dụ thực tế:
- `NhanVien` → `tinhLuong()`
- `NhanVienFullTime` → tính theo lương tháng
- `NhanVienPartTime` → tính theo giờ

---

## 2️⃣ Các loại đa hình trong C++

### 🔹 2.1 Đa hình tại thời điểm biên dịch (Compile-time)
- Nạp chồng hàm (Function Overloading)
- Nạp chồng toán tử (Operator Overloading)

### 🔹 2.2 Đa hình tại thời điểm chạy (Runtime)
- Kế thừa + **virtual function**
- Gọi hàm thông qua **con trỏ class cha**

📌 Chương này tập trung vào **runtime polymorphism**.

---

## 3️⃣ Vấn đề khi KHÔNG dùng virtual ❌

```cpp
#include <iostream>
using namespace std;

class Cha {
public:
    void hello() {
        cout << "Hello Cha";
    }
};

class Con : public Cha {
public:
    void hello() {
        cout << "Hello Con";
    }
};

int main() {
    Cha *p;
    Con c;
    p = &c;
    p->hello(); // Hello Cha ❌
}
```

👉 Dù `p` trỏ tới `Con`, nhưng vẫn gọi hàm của `Cha`.

---

## 4️⃣ Giải pháp: Virtual Function ✅

```cpp
class Cha {
public:
    virtual void hello() {
        cout << "Hello Cha";
    }
};
```

📌 Thêm từ khóa `virtual` → bật **đa hình động**.

---

## 5️⃣ Ví dụ đa hình hoàn chỉnh

```cpp
#include <iostream>
using namespace std;

class Cha {
public:
    virtual void hello() {
        cout << "Hello Cha";
    }
};

class Con : public Cha {
public:
    void hello() {
        cout << "Hello Con";
    }
};

int main() {
    Cha *p;
    Con c;
    p = &c;
    p->hello(); // Hello Con ✅
}
```

📌 Hàm được quyết định **tại thời điểm chạy**.

---

## 6️⃣ Từ khóa `override` (khuyến nghị dùng)

```cpp
class Con : public Cha {
public:
    void hello() override {
        cout << "Hello Con";
    }
};
```

📌 `override` giúp:
- Tránh lỗi ghi đè sai hàm
- Code rõ ràng hơn

---

## 7️⃣ Virtual Destructor (RẤT QUAN TRỌNG)

👉 Khi dùng đa hình + cấp phát động, **destructor phải là virtual**.

```cpp
class Cha {
public:
    virtual ~Cha() {
        cout << "Huy Cha";
    }
};
```

📌 Nếu không:
- Destructor class con có thể **không được gọi**
- Dễ gây **rò rỉ bộ nhớ**

---

## 8️⃣ Ví dụ thực tế: Tính lương nhân viên

```cpp
class NhanVien {
public:
    virtual int tinhLuong() {
        return 0;
    }
};

class FullTime : public NhanVien {
public:
    int tinhLuong() override {
        return 1000;
    }
};

class PartTime : public NhanVien {
public:
    int tinhLuong() override {
        return 500;
    }
};

int main() {
    NhanVien *nv1 = new FullTime();
    NhanVien *nv2 = new PartTime();

    cout << nv1->tinhLuong() << endl;
    cout << nv2->tinhLuong() << endl;

    delete nv1;
    delete nv2;
}
```

---

## 9️⃣ Con trỏ class cha & object class con

📌 Đây là **trái tim của đa hình**:

```cpp
Cha *p = new Con();
p->hello();
```

---

## 🔟 Bảng so sánh

| Tiêu chí | Không virtual | Virtual |
|--------|---------------|---------|
| Thời điểm gọi | Biên dịch | Chạy |
| Đa hình | ❌ | ✅ |
| Linh hoạt | Thấp | Cao |
| OOP chuẩn | ❌ | ✅ |

---

## 1️⃣1️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Tạo class:
- `Shape`
- `Rectangle`, `Circle`
Dùng `virtual area()`

---

### 📝 Bài 2
Viết chương trình quản lý:
- Nhân viên FullTime / PartTime
- Tính tổng lương bằng đa hình

---

### 📝 Bài 3 (tư duy)
Vì sao destructor cần `virtual`?

---

## ❌ Lỗi thường gặp
- Quên `virtual`
- Gọi hàm bằng object thay vì pointer
- Không dùng `override`
- Quên virtual destructor

---

## 🧠 Ghi nhớ nhanh
- Đa hình = kế thừa + virtual
- Base pointer → derived object
- Destructor nên là virtual
- Luôn dùng `override`

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu rõ đa hình
- Biết dùng virtual function
- Viết OOP đúng chuẩn

# Bài 15: STL trong C++ (Standard Template Library)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **STL là gì** và vì sao nên dùng
- Nắm được các **container phổ biến**
- Biết dùng **iterator** và **algorithm**
- Áp dụng STL để viết code **ngắn – nhanh – an toàn**

---

## 1️⃣ STL là gì?

👉 **STL (Standard Template Library)** là thư viện chuẩn của C++, cung cấp:
- **Container**: nơi lưu trữ dữ liệu
- **Iterator**: duyệt dữ liệu
- **Algorithm**: thuật toán có sẵn

📌 STL giúp:
- Giảm code thủ công
- Tránh lỗi bộ nhớ
- Code gọn, hiệu năng cao

---

## 2️⃣ Các thành phần chính của STL

| Thành phần | Vai trò |
|---------|--------|
| Container | Lưu trữ dữ liệu |
| Iterator | Duyệt container |
| Algorithm | Xử lý dữ liệu |
| Function Object | Hàm đặc biệt |
| Allocator | Quản lý bộ nhớ |

---

## 3️⃣ Container – `vector` (quan trọng nhất)

👉 `vector` là **mảng động** trong STL.

### 3.1 Khai báo `vector`
```cpp
#include <vector>
vector<int> v;
```

---

### 3.2 Thêm phần tử
```cpp
v.push_back(10);
v.push_back(20);
```

---

### 3.3 Truy cập phần tử
```cpp
cout << v[0];
cout << v.at(1);
```

---

### 3.4 Duyệt `vector`
```cpp
for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
```

Hoặc:
```cpp
for (int x : v)
    cout << x << " ";
```

---

## 4️⃣ Một số hàm `vector` thường dùng

| Hàm | Ý nghĩa |
|----|--------|
| push_back | Thêm |
| pop_back | Xóa cuối |
| size | Số phần tử |
| empty | Kiểm tra rỗng |
| clear | Xóa hết |

---

## 5️⃣ Container – `map`

👉 `map` lưu **key – value**, key **không trùng**.

### 📌 Ví dụ
```cpp
#include <map>
map<string, int> m;

m["An"] = 20;
m["Binh"] = 22;
```

Duyệt:
```cpp
for (auto x : m) {
    cout << x.first << " " << x.second << endl;
}
```

---

## 6️⃣ Container – `set`

👉 `set`:
- Không trùng phần tử
- Tự động sắp xếp

```cpp
#include <set>
set<int> s;

s.insert(5);
s.insert(3);
s.insert(5); // không thêm
```

---

## 7️⃣ Stack & Queue

### Stack (LIFO)
```cpp
#include <stack>
stack<int> st;
st.push(1);
st.pop();
```

### Queue (FIFO)
```cpp
#include <queue>
queue<int> q;
q.push(1);
q.pop();
```

---

## 8️⃣ Iterator

👉 Iterator giống như **con trỏ** để duyệt STL.

```cpp
vector<int>::iterator it;
for (it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
}
```

📌 Hiện đại hơn:
```cpp
for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";
```

---

## 9️⃣ Algorithm – `sort`, `find`, `count`

```cpp
#include <algorithm>
sort(v.begin(), v.end());
```

Tìm:
```cpp
auto it = find(v.begin(), v.end(), 10);
```

Đếm:
```cpp
count(v.begin(), v.end(), 10);
```

---

## 🔟 Ví dụ tổng hợp STL

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 1, 3, 2};

    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";

    return 0;
}
```

---

## 1️⃣1️⃣ Khi nào nên dùng STL?

✔️ Nên dùng:
- Xử lý mảng, danh sách
- Đếm tần suất
- Sắp xếp, tìm kiếm

❌ Không dùng khi:
- Cần kiểm soát bộ nhớ tuyệt đối
- Lập trình nhúng mức thấp

---

## 1️⃣2️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Dùng `vector`:
- Nhập n số
- Sắp xếp tăng dần

---

### 📝 Bài 2
Dùng `map`:
- Đếm tần suất xuất hiện ký tự

---

### 📝 Bài 3
Dùng `set`:
- Loại bỏ phần tử trùng

---

## ❌ Lỗi thường gặp
- Quên include thư viện
- Truy cập iterator sai
- Nhầm `map` và `unordered_map`

---

## 🧠 Ghi nhớ nhanh
- `vector` ≈ mảng động
- `map` = key – value
- `set` = không trùng
- STL giúp code ngắn hơn

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu STL
- Dùng container phổ biến
- Kết hợp algorithm hiệu quả

# Bài 16: Đệ quy trong C++ (Recursion)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **đệ quy là gì**
- Biết cấu trúc **hàm đệ quy**
- Phân biệt **điều kiện dừng** và **bước đệ quy**
- Áp dụng đệ quy vào các bài toán kinh điển
- Tránh các lỗi thường gặp khi dùng đệ quy

---

## 1️⃣ Đệ quy là gì?

👉 **Đệ quy (Recursion)** là kỹ thuật mà **một hàm tự gọi lại chính nó** để giải quyết bài toán.

📌 Ý tưởng:
> Bài toán lớn → chia thành các bài toán nhỏ giống nhau

---

## 2️⃣ Cấu trúc của một hàm đệ quy

Một hàm đệ quy **bắt buộc phải có**:

1. **Điều kiện dừng (Base Case)** – nếu không có → vòng lặp vô hạn
2. **Bước đệ quy (Recursive Case)** – gọi lại chính hàm

### 📌 Cấu trúc chuẩn
```cpp
void func(int n) {
    if (n == 0) return;   // điều kiện dừng
    func(n - 1);          // bước đệ quy
}
```

---

## 3️⃣ Ví dụ đơn giản

### 📌 In số từ 1 đến n

```cpp
void print(int n) {
    if (n == 0) return;
    print(n - 1);
    cout << n << " ";
}
```

📌 Trình tự chạy:
```
print(3)
 → print(2)
   → print(1)
     → print(0) (dừng)
     ← in 1
   ← in 2
 ← in 3
```

---

## 4️⃣ Ví dụ: Tính giai thừa

### Công thức
```
n! = n * (n - 1)!
0! = 1
```

### Code
```cpp
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

---

## 5️⃣ Ví dụ: Dãy Fibonacci

### Công thức
```
F(n) = F(n-1) + F(n-2)
F(0) = 0, F(1) = 1
```

### Code đệ quy (chậm ❌)
```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
```

📌 Lưu ý:
- Đệ quy Fibonacci **rất chậm**
- Sẽ học tối ưu ở **Quy hoạch động**

---

## 6️⃣ Đệ quy và Stack

👉 Mỗi lần gọi hàm:
- Được lưu vào **Call Stack**
- Lưu biến cục bộ & địa chỉ quay lại

📌 Quá nhiều lần gọi → **Stack Overflow**.

---

## 7️⃣ So sánh đệ quy và vòng lặp

| Tiêu chí | Đệ quy | Vòng lặp |
|--------|--------|----------|
| Dễ hiểu | Với bài toán chia nhỏ | Với bài đơn giản |
| Bộ nhớ | Tốn stack | Ít hơn |
| Hiệu năng | Thường chậm | Nhanh hơn |

📌 Không phải bài nào cũng nên dùng đệ quy.

---

## 8️⃣ Bài toán kinh điển dùng đệ quy

### ✔️ Tính tổng 1 → n
```cpp
int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}
```

---

### ✔️ Đếm số chữ số
```cpp
int countDigit(int n) {
    if (n < 10) return 1;
    return 1 + countDigit(n / 10);
}
```

---

### ✔️ Tháp Hà Nội (ý tưởng)
- Di chuyển n-1 đĩa
- Di chuyển đĩa lớn nhất
- Di chuyển n-1 đĩa còn lại

---

## 9️⃣ Khi nào nên dùng đệ quy?

✔️ Nên dùng khi:
- Cấu trúc cây
- Chia để trị
- DFS, Backtracking

❌ Không nên dùng khi:
- Bài toán lặp đơn giản
- Dữ liệu lớn (dễ stack overflow)

---

## 🔟 Lỗi thường gặp ❌
- Quên điều kiện dừng
- Điều kiện dừng sai
- Gọi đệ quy vô hạn
- Stack overflow

---

## 1️⃣1️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Viết hàm đệ quy:
- Tính tổng chữ số của số nguyên

---

### 📝 Bài 2
Viết hàm:
- Đảo ngược số nguyên bằng đệ quy

---

### 📝 Bài 3
Viết chương trình:
- Tính Fibonacci
- So sánh đệ quy và vòng lặp

---

## 🧠 Ghi nhớ nhanh
- Đệ quy phải có **điều kiện dừng**
- Hiểu rõ luồng chạy
- Không lạm dụng đệ quy

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu đệ quy
- Viết hàm đệ quy
- Áp dụng cho bài toán kinh điển

# Bài 17: File I/O trong C++ (Đọc / Ghi File)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **File I/O là gì**
- Biết đọc / ghi file văn bản trong C++
- Sử dụng các lớp **ifstream, ofstream, fstream**
- Xử lý lỗi khi làm việc với file
- Áp dụng file vào bài toán thực tế

---

## 1️⃣ File I/O là gì?

👉 **File I/O (Input / Output)** là thao tác:
- **Đọc dữ liệu từ file**
- **Ghi dữ liệu ra file**

📌 Dùng khi:
- Lưu dữ liệu lâu dài
- Đọc dữ liệu lớn
- Lưu log, báo cáo

---

## 2️⃣ Thư viện cần dùng

```cpp
#include <fstream>
```

C++ cung cấp 3 lớp chính:
- `ifstream` – đọc file
- `ofstream` – ghi file
- `fstream` – đọc & ghi

---

## 3️⃣ Ghi file với `ofstream`

### 📌 Cú pháp
```cpp
ofstream file;
file.open("data.txt");
file << "Hello File";
file.close();
```

### 📌 Ví dụ đầy đủ
```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt");
    file << "Hoc C++ File IO";
    file.close();
    return 0;
}
```

📌 Nếu file chưa tồn tại → **tự tạo mới**.

---

## 4️⃣ Đọc file với `ifstream`

### 📌 Ví dụ
```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("output.txt");
    string line;

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
```

---

## 5️⃣ Kiểm tra file mở thành công hay không

```cpp
ifstream file("data.txt");

if (!file.is_open()) {
    cout << "Khong mo duoc file";
    return 0;
}
```

📌 Luôn kiểm tra để tránh lỗi.

---

## 6️⃣ Ghi nhiều dòng vào file

```cpp
ofstream file("numbers.txt");

for (int i = 1; i <= 5; i++) {
    file << i << endl;
}

file.close();
```

---

## 7️⃣ Đọc dữ liệu dạng số

```cpp
ifstream file("numbers.txt");
int x;

while (file >> x) {
    cout << x << " ";
}
```

---

## 8️⃣ Sử dụng `fstream` (đọc & ghi)

```cpp
#include <fstream>
using namespace std;

int main() {
    fstream file;
    file.open("test.txt", ios::out);
    file << "Hello";
    file.close();

    file.open("test.txt", ios::in);
    string s;
    getline(file, s);
    cout << s;

    file.close();
    return 0;
}
```

---

## 9️⃣ Các chế độ mở file

| Mode | Ý nghĩa |
|-----|--------|
| ios::in | Đọc |
| ios::out | Ghi |
| ios::app | Ghi nối |
| ios::trunc | Xóa nội dung cũ |
| ios::binary | File nhị phân |

---

## 🔟 Ví dụ thực tế: Lưu danh sách sinh viên

```cpp
ofstream file("sv.txt", ios::app);
file << "Nguyen Van A 8.5" << endl;
file.close();
```

Đọc lại:
```cpp
ifstream file("sv.txt");
string name;
float diem;

while (file >> name >> diem) {
    cout << name << " " << diem << endl;
}
```

---

## 1️⃣1️⃣ Lỗi thường gặp ❌
- Quên `close()`
- Đường dẫn file sai
- Đọc file chưa mở

---

## 1️⃣2️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Ghi vào file:
- Các số từ 1 → n

---

### 📝 Bài 2
Đọc file:
- Tính tổng các số trong file

---

### 📝 Bài 3
Lưu và đọc:
- Danh sách sinh viên

---

## 🧠 Ghi nhớ nhanh
- `ofstream` → ghi
- `ifstream` → đọc
- Luôn kiểm tra mở file
- Nhớ `close()`

---

## ✅ Tổng kết
✔️ Bạn đã:
- Biết đọc / ghi file
- Sử dụng ifstream / ofstream
- Áp dụng file vào bài toán thực tế

# Bài 18: Cấu trúc dữ liệu & Thuật toán trong C++ (DSA)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **DSA là gì** và vì sao cực kỳ quan trọng
- Nắm các **cấu trúc dữ liệu cơ bản**
- Biết các **thuật toán phổ biến**
- Có nền tảng để học **DSA nâng cao, LeetCode, Codeforces**

---

## 1️⃣ DSA là gì?

👉 **DSA (Data Structures & Algorithms)** là:
- **Cấu trúc dữ liệu**: Cách tổ chức, lưu trữ dữ liệu
- **Thuật toán**: Cách xử lý dữ liệu hiệu quả

📌 Một chương trình tốt cần:
> Dữ liệu đúng + Thuật toán tối ưu

---

## 2️⃣ Tại sao phải học DSA?

✔️ Giải bài toán nhanh hơn  
✔️ Tối ưu bộ nhớ & thời gian  
✔️ Thi học kỳ / phỏng vấn  
✔️ Nền tảng cho AI, hệ thống, backend

---

## 3️⃣ Độ phức tạp thuật toán (Big-O)

👉 **Big-O** đo:
- Thời gian chạy
- Bộ nhớ sử dụng

### 📌 Một số Big-O phổ biến

| Big-O | Ý nghĩa |
|-----|--------|
| O(1) | Hằng số |
| O(n) | Tuyến tính |
| O(log n) | Log |
| O(n²) | Bậc hai |
| O(2ⁿ) | Rất chậm |

📌 Ví dụ:
```cpp
for (int i = 0; i < n; i++) {} // O(n)
```

---

## 4️⃣ Cấu trúc dữ liệu tuyến tính

### 🔹 4.1 Array
- Truy cập nhanh
- Kích thước cố định

### 🔹 4.2 Vector (STL)
- Mảng động
- Linh hoạt

### 🔹 4.3 Linked List

👉 Danh sách liên kết:
- Node = data + pointer

```cpp
struct Node {
    int data;
    Node* next;
};
```

📌 Truy cập chậm hơn mảng nhưng **thêm/xóa linh hoạt**.

---

### 🔹 4.4 Stack (LIFO)

```cpp
#include <stack>
stack<int> st;
st.push(10);
st.pop();
```

📌 Dùng trong:
- Undo / Redo
- Đệ quy

---

### 🔹 4.5 Queue (FIFO)

```cpp
#include <queue>
queue<int> q;
q.push(10);
q.pop();
```

📌 Dùng trong:
- BFS
- Hệ thống hàng đợi

---

## 5️⃣ Thuật toán sắp xếp (Sorting)

### ✔️ Bubble Sort
```cpp
for (int i = 0; i < n-1; i++)
    for (int j = 0; j < n-i-1; j++)
        if (a[j] > a[j+1])
            swap(a[j], a[j+1]);
```

- Đơn giản
- Chậm O(n²)

---

### ✔️ Selection Sort
- Mỗi lần chọn min

---

### ✔️ Insertion Sort
- Chèn đúng vị trí

---

### ✔️ Quick Sort (quan trọng)

```cpp
sort(a, a+n); // STL dùng Quick/Intro sort
```

📌 Trung bình: O(n log n)

---

## 6️⃣ Thuật toán tìm kiếm

### 🔹 Linear Search – O(n)
```cpp
for (int i = 0; i < n; i++)
    if (a[i] == x) return i;
```

---

### 🔹 Binary Search – O(log n)
```cpp
binary_search(a, a+n, x);
```

📌 Mảng phải **đã sắp xếp**.

---

## 7️⃣ Cây (Tree) – Binary Search Tree

```cpp
struct Node {
    int data;
    Node *left, *right;
};
```

📌 Dùng trong:
- Tìm kiếm
- Phân cấp dữ liệu

---

## 8️⃣ Đồ thị (Graph) – Giới thiệu

- Đỉnh (Vertex)
- Cạnh (Edge)

### ✔️ DFS – BFS
```cpp
// DFS: dùng stack / đệ quy
// BFS: dùng queue
```

📌 Dùng nhiều trong:
- AI
- Mạng
- Game

---

## 9️⃣ Khi nào dùng cấu trúc nào?

| Bài toán | Gợi ý |
|--------|-------|
| Truy cập nhanh | Array / Vector |
| Thêm xóa nhiều | Linked List |
| LIFO | Stack |
| FIFO | Queue |
| Tìm kiếm nhanh | Tree |
| Quan hệ phức tạp | Graph |

---

## 🔟 Bài tập thực hành ✍️

### 📝 Bài 1
Viết chương trình:
- Sắp xếp mảng bằng Bubble Sort

---

### 📝 Bài 2
Cài đặt:
- Linked List cơ bản (thêm, xóa)

---

### 📝 Bài 3
Viết:
- Binary Search

---

## 🧠 Ghi nhớ nhanh
- DSA = nền tảng lập trình
- Hiểu Big-O trước khi code
- Ưu tiên STL khi có thể

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu tổng quan DSA
- Biết các cấu trúc dữ liệu chính
- Sẵn sàng học DSA nâng cao

# Bài 19: Quy hoạch động trong C++ (Dynamic Programming)
[:arrow_up: Mục lục](#mục-lục)

---

## 🎯 Mục tiêu bài học
Sau khi học xong bài này, bạn sẽ:
- Hiểu **quy hoạch động (Dynamic Programming – DP)** là gì
- Biết khi nào nên dùng DP
- Phân biệt **Memoization** và **Tabulation**
- Giải được các bài toán DP kinh điển
- Có nền tảng để làm bài **DSA nâng cao / thi thuật toán**

---

## 1️⃣ Quy hoạch động là gì?

👉 **Quy hoạch động (DP)** là kỹ thuật:
- Chia bài toán lớn thành **các bài toán con**
- **Lưu lại kết quả** bài toán con để không tính lại

📌 DP giúp:
- Giảm độ phức tạp từ **O(2ⁿ)** → **O(n)** hoặc **O(n·m)**

---

## 2️⃣ Khi nào dùng Quy hoạch động?

Một bài toán dùng DP khi có **2 tính chất**:

### ✔️ Bài toán con chồng chéo
- Nhiều bài toán con bị lặp lại

### ✔️ Cấu trúc con tối ưu
- Nghiệm tối ưu của bài toán lớn được tạo từ nghiệm tối ưu của bài toán con

📌 Ví dụ:
- Fibonacci
- Balo (Knapsack)
- Chuỗi con chung dài nhất (LCS)

---

## 3️⃣ Các cách cài đặt DP

### 🔹 3.1 Memoization (Top-down)
- Đệ quy + mảng nhớ
- Dễ viết, dễ hiểu

### 🔹 3.2 Tabulation (Bottom-up)
- Dùng vòng lặp
- Nhanh hơn, ít tốn stack

---

## 4️⃣ Ví dụ 1: Fibonacci với DP

### ❌ Không dùng DP (chậm)
```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```

---

### ✅ Memoization
```cpp
int dp[1000];

int fib(int n) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}
```

---

### ✅ Tabulation
```cpp
int fib(int n) {
    int dp[1000];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
```

---

## 5️⃣ Ví dụ 2: Bài toán Balo 0/1 (Knapsack)

### Bài toán
- n vật
- Mỗi vật có trọng lượng `w[i]` và giá trị `v[i]`
- Balo có sức chứa `W`
- Tối đa hóa tổng giá trị

---

### Công thức DP
```
dp[i][j] = giá trị lớn nhất
khi xét i vật, balo có sức chứa j
```

---

### Code
```cpp
int knapsack(int W, int w[], int v[], int n) {
    int dp[n+1][W+1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (w[i-1] <= j)
                dp[i][j] = max(v[i-1] + dp[i-1][j - w[i-1]],
                               dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][W];
}
```

---

## 6️⃣ Ví dụ 3: Dãy con chung dài nhất (LCS)

### Công thức
```
dp[i][j] = LCS của s1[0..i-1] và s2[0..j-1]
```

---

### Code rút gọn
```cpp
int lcs(string a, string b) {
    int n = a.size(), m = b.size();
    int dp[n+1][m+1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][m];
}
```

---

## 7️⃣ So sánh DP và đệ quy thường

| Tiêu chí | Đệ quy | Quy hoạch động |
|--------|--------|----------------|
| Tốc độ | Chậm | Nhanh |
| Trùng lặp | Có | Không |
| Bộ nhớ | Ít | Nhiều hơn |
| Ứng dụng | Nhỏ | Bài toán lớn |

---

## 8️⃣ Kỹ năng giải bài DP (RẤT QUAN TRỌNG)

📌 Các bước chuẩn:
1. Xác định **trạng thái dp**
2. Xác định **công thức chuyển**
3. Xác định **điều kiện khởi tạo**
4. Xác định **thứ tự tính**

---

## 9️⃣ Bài tập thực hành ✍️

### 📝 Bài 1
Giải bài:
- Fibonacci
- Có DP và không DP
- So sánh thời gian

---

### 📝 Bài 2
Giải:
- Balo 0/1

---

### 📝 Bài 3
Giải:
- LCS (chuỗi con chung dài nhất)

---

## 🧠 Ghi nhớ nhanh
- DP = lưu kết quả bài toán con
- Luôn xác định trạng thái dp
- Ưu tiên Tabulation khi có thể

---

## ✅ Tổng kết
✔️ Bạn đã:
- Hiểu rõ Quy hoạch động
- Biết cách cài đặt DP
- Sẵn sàng làm bài thuật toán nâng cao


