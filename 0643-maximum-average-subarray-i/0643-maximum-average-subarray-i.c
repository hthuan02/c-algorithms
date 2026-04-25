// Sliding window
// keywords: subArray, Maximum
/**
 * - Duyệt lần 1, tính sum window1[4], k = 4
 * - Duyệt lần 2, trượt window (right++: tăng lên 1 phần tử)
 *                             (left++: loại bở 1 phần tử)
 * CT: sum = sum - arr[i - k] + arr[i]
 *          --> KẸP ĐIỀU KIỆN, TÌM KÍCH THƯỚC: sumMax(cả mảng) > sum (đang xét) 
 *                                           ==> sum = sumMax
 */

double findMaxAverage(int* nums, int numsSize, int k) {
    int sum = 0;

    // Duyệt mảng lần 1, tính window1
    for(int i = 0; i < k; i ++)
    {
        sum += nums[i];
    }
    // Có được sum 
    int maxSum = sum; // sum của window1 ban đầu
    
    // Duyệt lần 2, trượt window
    // Kiểm tra, tìm sumMax
    for (int i = k; i < numsSize; i++)
    {
        sum = sum - nums[i -k] + nums[i]; // sum đang xử lý

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    return (double)maxSum / k;
}