/* Xử lý chuỗi U D L R, để robot di chuyển thế nào cũng về tọa độ gốc ban đầu 
 * - Về (0,0) -> true
 * - Về vị trí khác (0,0) -> false
 * --> (UP - DOWN), (LEFT - RIGHT), nếu không kẹp điều kiện AND sẽ bị thiếu.
 */

bool judgeCircle(char* moves) {
    int up = 0;
    int down = 0;
    int left = 0;
    int right = 0;

    for(int i = 0; moves[i] != '\0';i++)
    {
        if (moves[i] == 'U')     up++;
        else if(moves[i] == 'D') down++;
        else if(moves[i] == 'R') right++;
        else if(moves[i] == 'L') left++;
    }
    // Xét đồng thời cả 2 điều kiện U-D vs L-R bình thường
    // Ban đầu 4 biến cho = 0 hết rồi
    return (up == down && left == right);
}