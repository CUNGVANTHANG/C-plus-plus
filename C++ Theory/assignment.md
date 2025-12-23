# Ô vuông lớn nhất — Lời giải

## 1) Tóm tắt đề bài
Cho bảng số nguyên kích thước `n × m` và số `k` (1 ≤ k ≤ n, m ≤ 100).

Xét mọi **ô vuông con** kích thước `k × k` trong bảng.

- Lấy `k*k` phần tử trong ô vuông đó
- **Sắp xếp tăng dần**
- **Giá trị của ô vuông** = **phần tử thứ k** (đếm từ 1)

Yêu cầu: tìm **giá trị lớn nhất** trong tất cả các ô vuông `k × k`.

---

## 2) Ví dụ
Input:
```
3 2 2
1 2
3 4
5 6
```
Các ô vuông 2×2:
- {1,2,3,4} → sắp xếp: 1 2 3 4 → phần tử thứ 2 = 2
- {3,4,5,6} → sắp xếp: 3 4 5 6 → phần tử thứ 2 = 4

Kết quả: `max(2,4) = 4`

---

## 3) Ý tưởng (brute force, đủ nhanh với n,m ≤ 100)
Vì `n,m ≤ 100` nên ta có thể làm **truyền thống**:

1. Duyệt mọi vị trí `(i, j)` làm góc trên-trái của ô vuông `k×k`
2. Gom `k*k` phần tử vào mảng 1 chiều `b[]`
3. Sắp xếp `b[]` bằng **Bubble Sort** / **Selection Sort** (cách sinh viên hay viết)
4. Lấy `b[k-1]` (vì `b[0]` là phần tử nhỏ nhất, phần tử thứ k là `b[k-1]`)
5. Cập nhật đáp án lớn nhất

Số ô vuông tối đa: `(n-k+1)(m-k+1) ≤ 100*100 = 10^4`  
Mỗi ô vuông sắp xếp tối đa `k*k ≤ 10^4` phần tử → vẫn chạy ổn trong giới hạn.

---

## 4) Độ phức tạp
- Duyệt ô vuông: `O((n-k+1)(m-k+1))`
- Mỗi ô vuông: gom `k^2` phần tử + sort `k^2` (bubble sort: `O(k^4)`)
- Với ràng buộc nhỏ (`≤ 100`) → **đủ dùng cho bài cơ bản**.

---

## 5) Code C++

> Dùng mảng tĩnh + Bubble Sort/Selection Sort, dễ hiểu, dễ viết.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    // a[i][j] với n,m <= 100
    static int a[105][105];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;

    // Duyệt mọi ô vuông k x k
    for (int i = 0; i + k <= n; i++) {
        for (int j = 0; j + k <= m; j++) {

            // Gom k*k phần tử vào mảng b
            int sz = k * k;
            int *b = new int[sz];
            int idx = 0;

            for (int x = i; x < i + k; x++) {
                for (int y = j; y < j + k; y++) {
                    b[idx++] = a[x][y];
                }
            }

            // Sắp xếp b tăng dần (Selection Sort)
            for (int p = 0; p < sz - 1; p++) {
                int minPos = p;
                for (int q = p + 1; q < sz; q++) {
                    if (b[q] < b[minPos]) minPos = q;
                }
                // đổi chỗ
                int tmp = b[p];
                b[p] = b[minPos];
                b[minPos] = tmp;
            }

            // Phần tử thứ k (đếm từ 1) => b[k-1]
            int value = b[k - 1];
            if (value > ans) ans = value;

            delete[] b;
        }
    }

    cout << ans;
    return 0;
}
```

---

## 6) Ghi chú quan trọng
- **“phần tử thứ k”** là **k theo thứ tự tăng dần**, không phải max/min của ô vuông.
- Nếu bạn dùng Bubble Sort cũng được, chỉ thay đoạn sort.

---

## 7) Bài tập thêm (tự luyện)
1) Thay Selection Sort bằng Bubble Sort.  
2) Tính thêm: giá trị nhỏ nhất của phần tử thứ k trong các ô vuông.  
3) Nếu đổi định nghĩa thành “phần tử thứ t” bất kỳ, code thay đổi thế nào?

---

# KHOẢNG CÁCH NHỎ NHẤT (MINDIS.CPP) — Lời giải (cách cơ bản, dễ viết)

## 1) Tóm tắt đề bài
Cho `n` điểm trên trục Ox có tọa độ `a0, a1, ..., a(n-1)` (có thể âm, |ai| ≤ 10^9, n ≤ 10^5).

Chọn **một điểm x trên trục Ox** sao cho **tổng khoảng cách** đến `n` điểm là nhỏ nhất:

\[ S(x) = |a_0 - x| + |a_1 - x| + \cdots + |a_{n-1} - x| \]

Yêu cầu: In ra **giá trị nhỏ nhất có thể** của tổng khoảng cách.

---

## 2) Nhận xét quan trọng (KẾT LUẬN CHÍNH)
Trong 1 chiều (trục số), **tổng khoảng cách tuyệt đối** nhỏ nhất khi chọn `x` là **trung vị (median)** của dãy.

- Nếu `n` lẻ: median là phần tử ở vị trí `n/2` sau khi sắp xếp tăng dần.
- Nếu `n` chẵn: mọi `x` nằm giữa 2 phần tử giữa đều cho tổng nhỏ nhất. Nếu `x` phải là số nguyên thì chọn **một trong hai** phần tử giữa (ví dụ `a[n/2]`) đều đúng.

➡️ Vì vậy: **chỉ cần sắp xếp, lấy median rồi tính tổng |ai - median|**.

---

## 3) Vì sao median là đúng? (giải thích kiểu sinh viên)
Hãy tưởng tượng ta đứng tại điểm `x` trên trục số:

- Nếu ta dịch `x` sang phải một chút:
  - Các điểm ở bên trái `x` sẽ xa thêm (tăng tổng)
  - Các điểm ở bên phải `x` sẽ gần lại (giảm tổng)

Tổng thay đổi phụ thuộc vào:
- Bao nhiêu điểm ở **trái** và **phải** của `x`

Khi `x` là median, số điểm bên trái và bên phải **cân bằng**, nên dịch đi đâu cũng không làm tổng giảm nữa → đạt nhỏ nhất.

---

## 4) Thuật toán
1. Nhập `n` và mảng `a`
2. Sắp xếp `a` tăng dần
3. Chọn `x = a[n/2]` (median)
4. Tính `ans = Σ |a[i] - x|`
5. In `ans`

---

## 5) Độ phức tạp
- Sắp xếp: `O(n log n)`
- Tính tổng: `O(n)`
- Bộ nhớ: `O(n)`

Phù hợp với `n ≤ 10^5`.

---

## 6) Code C++ (không dùng `vector`, dùng mảng động `new[]`)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long *a = new long long[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);                // sắp xếp tăng dần

    long long x = a[n / 2];        // chọn median
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += llabs(a[i] - x);    // tổng |ai - x|
    }

    cout << ans;

    delete[] a;
    return 0;
}
```

---

## 7) Ví dụ
Input:
```
5
1 8 5 6 3
```
Sắp xếp: `1 3 5 6 8`  
Median = `5`  
Tổng: `|1-5|+|3-5|+|5-5|+|6-5|+|8-5| = 4+2+0+1+3 = 10`

Output:
```
10
```

---

✅ Kết luận: **Median là điểm tối ưu**, chỉ cần sắp xếp và tính tổng khoảng cách.

# XÓA DÃY (DELARR) — Lời giải (cơ bản, dễ viết; không dùng `vector`)

## 1) Tóm tắt đề bài
Cho dãy số nguyên `A = (a0, a1, ..., a(n-1))`, `n ≤ 10^5`, `|ai| ≤ 10^9`.

Mỗi phép xóa, bạn chỉ được:
- Xóa **một phần tử nhỏ nhất** hiện có trong dãy **hoặc**
- Xóa **một phần tử lớn nhất** hiện có trong dãy

Yêu cầu: tìm **số phép xóa ít nhất** để dãy còn lại có **tổng bằng 0**.  
(Ghi chú: dãy rỗng có tổng bằng 0, nên luôn có đáp án ≤ n)

---

## 2) Nhận xét quan trọng
Nếu ta **sắp xếp dãy tăng dần**, thì:
- “Xóa phần tử nhỏ nhất” = bỏ phần tử ở **đầu** dãy đã sắp xếp
- “Xóa phần tử lớn nhất” = bỏ phần tử ở **cuối** dãy đã sắp xếp

Sau một số lần xóa, phần còn lại sẽ luôn là **một đoạn liên tiếp** trong mảng đã sắp xếp:
\[ a[l] + a[l+1] + ... + a[r] \]

Vì ta chỉ có thể xóa ở 2 đầu, nên **không thể tạo ra tập phần tử bất kỳ**, mà chỉ giữ lại một đoạn `[l..r]`.

➡️ Do đó bài toán trở thành:

> Sau khi sắp xếp, hãy tìm **đoạn liên tiếp dài nhất** có **tổng bằng 0**.  
> Nếu đoạn dài nhất có độ dài `maxLen`, thì số xóa ít nhất là:
\[ \text{ans} = n - maxLen \]

---

## 3) Bài toán con: Đoạn con có tổng bằng 0 dài nhất
Dùng **prefix sum**:

- Gọi `pref[i]` là tổng của `a[0]..a[i-1]` (tức là `pref[0] = 0`)
- Tổng đoạn `[l..r]` bằng 0 khi và chỉ khi:
\[ pref[r+1] = pref[l] \]

Vì vậy, nếu một giá trị prefix sum xuất hiện lại, đoạn giữa hai vị trí đó có tổng 0.

Cách làm:
- Duyệt i từ 0..n
- Lưu vị trí xuất hiện **đầu tiên** của mỗi `pref`
- Khi gặp lại `pref` cũ, cập nhật độ dài đoạn 0-sum: `i - firstPos[pref]`

---

## 4) Độ phức tạp
- Sắp xếp: `O(n log n)`
- Tìm đoạn 0-sum dài nhất: `O(n)` (dùng `unordered_map`)
- Tổng: `O(n log n)` phù hợp `n ≤ 10^5`

Dùng `long long` để tránh tràn số vì tổng có thể lớn.

---

## 5) Code C++ (mảng động `new[]`, không dùng `vector`)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long *a = new long long[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    // 1) Sắp xếp để "xóa min/max" tương đương xóa 2 đầu
    sort(a, a + n);

    // 2) Prefix sum và tìm đoạn có tổng 0 dài nhất
    unordered_map<long long, int> firstPos;
    firstPos.reserve(n * 2);
    firstPos.max_load_factor(0.7f);

    long long pref = 0;
    firstPos[pref] = 0; // pref[0] = 0 xuất hiện ở vị trí 0

    int maxLen = 0;

    for (int i = 1; i <= n; i++) {
        pref += a[i - 1];  // pref[i]

        auto it = firstPos.find(pref);
        if (it != firstPos.end()) {
            // Đoạn có tổng 0 từ it->second đến i-1
            int len = i - it->second;
            if (len > maxLen) maxLen = len;
        } else {
            // Lưu vị trí đầu tiên xuất hiện của pref
            firstPos[pref] = i;
        }
    }

    // 3) Số phép xóa ít nhất
    cout << (n - maxLen);

    delete[] a;
    return 0;
}
```

---

## 6) Ví dụ minh họa (giống đề)
Giả sử:
```
n = 6
-4 -5 1 2 -3 10
```
Sắp xếp:
```
-5 -4 -3 1 2 10
```
Đoạn tổng 0 dài nhất là:
```
-3 1 2  (tổng = 0, dài = 3)
```
Vậy xóa ít nhất:
```
n - 3 = 3
```
(đúng như ví dụ: xóa -5, 10, -4)

---

✅ Kết luận: **Sắp xếp + tìm đoạn con tổng 0 dài nhất**, đáp án = `n - maxLen`.

# CHUYẾN ĐI (TRIP.CPP) — Lời giải (cơ bản, dễ viết; không dùng `vector`)

## 1) Tóm tắt đề bài
Có `n` học sinh đến trường tại các thời điểm `a1, a2, ..., an` (nguyên không âm).  
Giáo sư chọn thời điểm phóng **con tàu đầu tiên** là `t0`. Các lần phóng sau cách nhau đúng `Δ` giây:

\[ t0,\ t0+Δ,\ t0+2Δ,\ ... \]

- Nếu học sinh đến **trước hoặc đúng** thời điểm phóng, bạn ấy lên tàu chuyến đó.
- Nếu đến **sau** thời điểm phóng, phải đợi chuyến kế tiếp.

**Thời gian chờ** của học sinh i = (thời điểm tàu mà i lên) − (thời điểm i đến).

Yêu cầu: chọn `t0` sao cho **tổng thời gian chờ** là nhỏ nhất, và in ra tổng nhỏ nhất đó.

Ràng buộc: `n ≤ 10^5`, `Δ ≤ 10^9`, `ai ≤ 10^9`.

---

## 2) Nhận xét quan trọng (mấu chốt)
Một học sinh đến lúc `ai` sẽ lên chuyến tàu đầu tiên **không sớm hơn ai** trong dãy:
\[ t0 + kΔ \]

Thời gian chờ chính là “khoảng cách đi tới phía trước” trên trục số theo bước `Δ`.

### Đưa về dạng “theo dư modulo Δ”
Xét **phần dư**:
\[ r_i = a_i \bmod Δ \]
với `0 ≤ r_i < Δ`.

Nếu ta chọn `t0` trong khoảng `0..Δ-1`, thì thời gian chờ của học sinh i là:
\[ w_i(t0) = (t0 - r_i + Δ) \bmod Δ \]

✅ Công thức này đúng cho cả trường hợp `ai ≤ t0` (khi đó chờ = `t0 - ai`, vì `r_i = ai` nếu `ai < Δ`, và modulo ra đúng).

> Quan trọng: Ta luôn có thể “kéo” `t0` về `0..Δ-1` (trừ đi bội của Δ) mà không làm tổng chờ tăng.  
Vì các chuyến tàu lặp lại mỗi `Δ`, nên chỉ cần xét `t0` theo **dư modulo Δ**.

➡️ Bài toán trở thành:

> Chọn `t0` trong `[0, Δ-1]` để tối thiểu hóa:
\[ S(t0) = \sum_{i=1}^{n} (t0 - r_i + Δ) \bmod Δ \]

---

## 3) Biến đổi công thức để tính nhanh
Với một `t0` cố định:
- Nếu `r_i ≤ t0` thì `(t0 - r_i + Δ) mod Δ = t0 - r_i`
- Nếu `r_i > t0` thì `(t0 - r_i + Δ) mod Δ = t0 - r_i + Δ`

Gọi:
- `c =` số lượng `r_i ≤ t0`
- `sumR = Σ r_i`

Khi đó:
\[
S(t0) = \sum(t0 - r_i) + Δ \cdot (n - c)
= t0\cdot n - \sumR + Δ\cdot(n - c)
\]

Vậy nếu biết `c` (đếm bao nhiêu dư ≤ t0) thì tính được `S(t0)` rất nhanh.

---

## 4) Chỉ cần thử t0 ở đâu?
Nếu ta tăng `t0` trong khoảng giữa hai giá trị dư liên tiếp, `c` không đổi, và `S(t0)` tăng tuyến tính theo `t0`.  
Vì vậy **điểm nhỏ nhất** sẽ rơi vào **một giá trị dư r_i** (hoặc 0).

➡️ Cách làm:
1. Tính mảng dư `r[i] = a[i] % Δ`
2. Sắp xếp `r[]` tăng dần
3. Duyệt các giá trị `t0 = r[i]` (theo từng nhóm trùng nhau) và tính `S(t0)` bằng công thức ở trên
4. Lấy min

---

## 5) Độ phức tạp
- Tính dư + sắp xếp: `O(n log n)`
- Duyệt: `O(n)`

Phù hợp với `n ≤ 10^5`.

---

## 6) Code C++ (truyền thống, không dùng `vector`)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long D;
    cin >> n >> D;

    long long *r = new long long[n];
    long long sumR = 0;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        r[i] = a % D;
        sumR += r[i];
    }

    sort(r, r + n);

    long long best = (long long)4e18;

    // Duyệt theo từng giá trị dư (gộp các phần tử trùng nhau)
    int i = 0;
    while (i < n) {
        long long t0 = r[i];

        // c = số lượng r <= t0  (tức là vị trí sau nhóm trùng nhau)
        int j = i;
        while (j < n && r[j] == t0) j++;
        int c = j; // vì r đã sort, các phần tử [0..j-1] <= t0

        // S(t0) = t0*n - sumR + D*(n - c)
        long long S = t0 * (long long)n - sumR + D * (long long)(n - c);

        if (S < best) best = S;
        i = j;
    }

    // Cũng có thể xét t0 = 0 (trường hợp dư nhỏ nhất không phải 0)
    // Với t0 = 0 => c = số r == 0 (vì chỉ r <= 0)
    int c0 = 0;
    while (c0 < n && r[c0] == 0) c0++;
    long long S0 = 0LL * (long long)n - sumR + D * (long long)(n - c0);
    if (S0 < best) best = S0;

    cout << best;

    delete[] r;
    return 0;
}
```

---

## 7) Ví dụ trong đề
Input:
```
5 4
9 3 7 6 11
```
Tính dư mod 4:
- 9 → 1
- 3 → 3
- 7 → 3
- 6 → 2
- 11 → 3
Dư: `1,2,3,3,3`

Thử `t0 = 3`:
- (3-1)=2
- (3-2)=1
- (3-3)=0
- (3-3)=0
- (3-3)=0
Tổng = 3 ✅

Output:
```
3
```

---

✅ Kết luận: Chỉ cần lấy dư `ai % Δ`, sắp xếp, thử `t0` tại các giá trị dư để tìm tổng chờ nhỏ nhất.

