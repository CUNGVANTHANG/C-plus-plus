# C++
# Mục lục
- [Bài 01: Giới thiệu C++](#bài-01-giới-thiệu-c)
- [Bài 02: Biến và Kiểu dữ liệu trong C++](#bài-02-biến-và-kiểu-dữ-liệu-trong-c)
- [Bài 03: Toán tử trong C++](#bài-03-toán-tử-trong-c)
- [Bài 04: Nhập và Xuất dữ liệu trong C++](#bài-04-nhập-và-xuất-dữ-liệu-trong-c)
- [Bài 05: Câu điều kiện trong C++ (if / else / switch)]()
- 

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



