# Data Structure & Algorithms

## Giới thiệu Repository

Cấu trúc dữ liệu & giải thuật (Data Structure & Algorithms) còn viết tắt là DSA. Đây là khóa DSA của 28Tech (27/03/2023-19/04/2023).

## Nói về Repository

Các bài tập chủ yếu nằm trong những video sửa bài tập.

## Chia sẻ link video khóa

-   [Nội dung buổi chính thức](https://pd.heracle.net/drive/s/twoiTsPwgyh9V864E83vDWxaWO8y53)
-   [Link video buổi chính thức](https://terabox.com/s/1GRHPmsKUvcTbq8h9xS2SZA)
-   [Nội dung buổi trợ giảng](https://pd.heracle.net/drive/s/vapV2of7FO5SGuYsZ5fFfz0xEMfgBi)
-   [Link video buổi trợ giảng](https://terabox.com/s/1Fg2CATlzHBM8-mwwcDrn1Q)
-   [Slide bài giảng](./Lecture_slides/)

**Lưu ý:**

-   Ở buổi chính thức có 2 video 15 và 16 giống nhau!
-   Ở buổi trợ giảng có 2 video 21 và 22 giống nhau!

## Chia sẻ link file bài tập

### Nội dung chính của khóa DSA

1. [Vector & pair](./Vector-Pair/Vector%20and%20Pair.pdf)
2. [Set & map](./Set-Map/Set%20and%20Map.pdf)
3. [1D array](./1D_Array/1D%20array.pdf)
4. [2D array](./2D%20array/2D%20array.pdf)
5. [Prefix sum & 2 Pointer & sliding window](./PS-DA-SW-TP/Prefix%20sum%20-%202%20Pointer%20-%20Sliding%20Window.pdf)
6. [String](https://github.com/Glasspham/DSA-28Tech/blob/main/String/String.pdf)
7. [Sort & search](./Sort-Search/Sort%20and%20Search.pdf)
8. [Generation](./Generation-Backtracking/Generation/Generation.pdf)
9. [Backtracking - branch bound](./Generation-Backtracking/Backtracking%20-%20Branch%20bound/Backtracking%20-%20Branch%20bound.pdf)
10. [Greedy](./Greedy/Greedy.pdf)
11. [Divide and conquer](./Divide_and_Conquer/Divide%20and%20Conquer.pdf)
12. [Dynamic programming basic](./Dynamic_Programming/Basic/Basic.pdf)
13. [Dynamic programming advance](./Dynamic_Programming/Advance/Advance.pdf)
14. [Graph](./Graph/Graph.pdf)
15. [Stack & queue](./Stack-Queue/Stack%20and%20Queue.pdf)
16. [Tree binary]()

### Nội dung ôn lại của lập trình C++

1. [Function]()
2. [Recursion]()

## Một số lưu ý khi coi bài

### 1. Thư viện

Vì viết bằng `Text editor: Visual Studio Code` [(vscode)](https://code.visualstudio.com/) + môi trường [MSYS2](https://www.msys2.org/) hoặc [MinGW](https://sourceforge.net/projects/mingw/) cho `C++` nên có thư viện tổng hợp:

```
#include<bits/stdc++.h>
```

thì có nhiều IDE khác không có, nên các bạn tự sửa phần thư viện nha.

### 2. Cấu trúc file code

Trong bài có sử dụng **preprocessor directives** (hướng dẫn trình biên dịch)
Trong bài sài nhiều nhất là `#if` và `#endif` là 2 thứ luôn đi chung với nhau.

```
#if n   Nếu n là 1 thì code chạy
        Nếu n là 0 thì code không thể chạy
```

Và `#endif` có thể đi cùng với nhiều **preprocessor directives** khác nữa
