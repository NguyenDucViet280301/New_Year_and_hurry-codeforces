/*
Limak có 4 giờ (tức là 240 phút) từ 20:00 đến nửa đêm để giải các bài toán và đến dự tiệc. Trong thời gian này, anh ấy cần k phút để đến bữa tiệc, nên số phút còn lại dành cho việc giải bài toán là 
    240 − 𝑘.
Limak mất 5.i phút để giải bài toán thứ i . Vậy tổng thời gian để giải i bài toán đầu tiên là:
    5.(1 + 2 + 3 + ... + i) = 5. i.(i + 1)/2
*/
#include <stdio.h>

int main() {
    int n, k;
    
    // Đọc vào số lượng bài toán và số phút Limak cần để đến bữa tiệc
    scanf("%d %d", &n, &k);
    
    // Tổng số phút mà Limak có thể dùng để giải bài toán
    int total_time = 240 - k;
    int time_spent = 0;
    int problems_solved = 0;
    
    // Thử giải từng bài toán một, từ bài 1 đến bài n
    for (int i = 1; i <= n; i++) {
        // Thời gian giải bài toán thứ i là 5 * i phút
        time_spent += 5 * i;
        
        // Nếu thời gian đã dùng vượt quá thời gian có thể dùng thì dừng lại
        if (time_spent > total_time) {
            break;
        }
        
        // Nếu không vượt quá, tăng số bài toán đã giải được
        problems_solved++;
    }
    
    // In ra số lượng bài toán tối đa mà Limak có thể giải được
    printf("%d\n", problems_solved);
    
    return 0;
}
