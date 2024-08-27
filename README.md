Limak sẽ tham gia một cuộc thi vào ngày cuối cùng của năm 2016. Cuộc thi sẽ bắt đầu lúc 20:00 và kéo dài bốn giờ, đúng cho đến nửa đêm. Sẽ có n bài toán, được sắp xếp theo độ khó, tức là bài toán 1 là dễ nhất và bài toán n là khó nhất. Limak biết rằng anh ấy sẽ mất 5, i phút để giải bài toán thứ i .

Bạn bè của Limak tổ chức tiệc đêm giao thừa và Limak muốn đến đó vào lúc nửa đêm hoặc sớm hơn. Anh ấy cần k phút để đến đó từ nhà mình, nơi anh ấy sẽ tham gia cuộc thi đầu tiên.

Limak có thể giải quyết được bao nhiêu vấn đề nếu anh ấy muốn vào đảng?

Đầu vào:

Dòng duy nhất của dữ liệu đầu vào chứa hai số nguyên n và k ( 1 ≤  n  ≤ 10 , 1 ≤  k  ≤ 240 ) — số lượng bài toán trong cuộc thi và số phút Limak cần để đến dự tiệc từ nhà mình.

Đầu ra:

In ra một số nguyên, biểu thị số lượng bài toán tối đa mà Limak có thể giải được để anh ấy có thể đến dự tiệc vào lúc nửa đêm hoặc sớm hơn.

Giải quyết:

Limak có 4 giờ (tức là 240 phút) từ 20:00 đến nửa đêm để giải các bài toán và đến dự tiệc. Trong thời gian này, anh ấy cần k phút để đến bữa tiệc, nên số phút còn lại dành cho việc giải bài toán là:
    
    240 − 𝑘.
    
Limak mất 5.i phút để giải bài toán thứ i . Vậy tổng thời gian để giải i bài toán đầu tiên là:

    5.(1 + 2 + 3 + ... + i) = 5. i.(i + 1)/2
