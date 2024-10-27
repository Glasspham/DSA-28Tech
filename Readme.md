# Data Structure & Algorithms

## Giới thiệu Repository

Cấu trúc dữ liệu & giải thuật (Data Structure & Algorithms) còn viết tắt là DSA. Đây là khóa DSA của 28Tech (27/03/2023-19/04/2023).

## Nói về Repository

Các bài tập chủ yếu nằm trong những video sửa bài tập.

## Chia sẻ link video khóa

-   [Nội dung buổi chính thức](https://docs.google.com/spreadsheets/d/1xVp746RJKLZRBQ-tv7u85HsCk-XzXcnG/edit?rtpof=true)
-   [Link video buổi chính thức](https://drive.google.com/drive/folders/14U4Yy9tU8CFFMdlsee5fXsahWfSxOAnt?usp=drive_link)
-   [Nội dung buổi trợ giảng](https://docs.google.com/spreadsheets/d/1Pu1g3r66xsHbUzaMXQdUi-sbpeu2YLBu/edit?gid=1744817544#gid=1744817544)
-   [Link video buổi trợ giảng](https://drive.google.com/drive/folders/16am4E6lkk1ZZrSkhlfp0Re9SvojpaqbJ?usp=drive_link)
-   [Slide bài giảng]()

**Lưu ý:** Ở buổi chính 2 video 15 và 16 giống nhau!

## Chia sẻ link file bài tập

### Nội dung chính của khóa DSA

1. [vector & pair](./Vector-Pair/Vector%20and%20Pair.pdf)
2. [set & map](./Set-Map/Set%20and%20Map.pdf)
3. [1D array](./1D_Array/1D%20array.pdf)
4. [2D array](./2D%20array/2D%20array.pdf)
5. [prefix sum & 2 Pointer & sliding window.pdf](./PS-DA-SW-TP/Prefix%20sum%20-%202%20Pointer%20-%20Sliding%20Window.pdf)
6. [string](https://github.com/Glasspham/DSA-28Tech/blob/main/String/String.pdf)
7. [sort & search](./Sort-Search/Sort%20and%20Search.pdf)
8. [generation](./Generation-Backtracking/Generation/Generation.pdf)
9. [backtracking - branch bound](./Generation-Backtracking/Backtracking%20-%20Branch%20bound/Backtracking%20-%20Branch%20bound.pdf)
10. [greedy](./Greedy/Greedy.pdf)
11. [divide and conquer](./Divide_and_Conquer/Divide%20and%20Conquer.pdf)
12. [dynamic programming basic](./Dynamic_Programming/Basic/Basic.pdf)
13. [dynamic programming advance](./Dynamic_Programming/Advance/Advance.pdf)
14. [graph](./Graph/Graph.pdf)
15. [stack & queue](./Stack-Queue/Stack%20and%20Queue.pdf)
16. [tree binary]()

### Nội dung ôn lại của lập trình C++

1. [function]()
2. [recursion]()

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