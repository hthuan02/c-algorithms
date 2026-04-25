// subString - no duplicate
// --> Sliding window
//  [left.......right] 
//  length = right - left + 1
//  
//  Duyệt cả chuỗi 
//      - `count` là biến đếm, mỗi khi kí tự xuất hiện = 1, count > 1 --> kí tự đó xuất hiện trùng lặp
//      - Duyệt kí tự trùng lặp nếu count[rightư > 1 (BỊ TRÙNG LẶP)
//          - Bỏ 1 kí tự left: count[left] --
//          - Thu hẹp window left++
//      - tìm kích thước:
// 

int lengthOfLongestSubstring(char* s) {
    int left = 0;
    int maxLen = 0;
    int count[200] = {0}; // biến `count` đếm số lần xuất hiện của 1 kí tự

    // Duyệt cả mảng
    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i]]++; 

        // B1: duyệt để kí tự k trùng lặp
        while(count[s[i]] > 1)
        {
            count[s[left]]--;
            left++;
        }

        // B2: Tính kích thước
        int length = i - left + 1;
        if(length > maxLen)
        {
            maxLen = length;
        }
    }
    return maxLen;
}