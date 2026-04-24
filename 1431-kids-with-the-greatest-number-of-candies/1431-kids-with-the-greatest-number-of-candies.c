/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// Nếu được cho thêm kẹo `extraCandies` thì có phải là nhiều nhất trong mảng `candies[i]` không
// Nhiều nhất -> true
// Không nhiều nhất -> false
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    // B1: Tìm max của mảng candies
    int max = candies[0];
    for(int i = 0; i < candiesSize; i++)
    { 
        if(candies[i] > max)    max = candies[i];
    }

    // B2: Tạo mảng lưu số phần kết quả trả về 
    // VD: [true, true, false, true, true]
    // Kích thước mảng kết quả = kích thước candiesSize
    bool *arr_result = (bool *)malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;

    // B3: Duyệt lại từng phần tử của mảng kq (mới)
    for(int i = 0; i < candiesSize; i++)
    {
        int total = candies[i] + extraCandies;
        arr_result[i] = total >= max;
    }

    return arr_result;
}