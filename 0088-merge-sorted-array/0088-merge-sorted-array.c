void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
    /* Merge Step*/

    // Ghi lại giá trị vào nums1
    // Đọc từ sau - trước
    // B1: Khai báo biến, phần tử cuối
    int i = m -1;
    int j = n -1;
    int k = m+n -1;

    // B2: Duyệt mảng, từ sau - trước. Lấy số lớn nhất
    while(i >= 0 && j >= 0)
    {
        if(nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // B3: Duyệt lần nữa, xử lý lại các số còn dư ra
    while(j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }


}