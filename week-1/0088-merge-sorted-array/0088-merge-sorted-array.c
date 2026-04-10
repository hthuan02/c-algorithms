/* Merge step*/
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    // B1: Khởi tạo vị trí cho từng mảng
    // Do ghi vào mảng gốc nums1, nên xét từ trước - sau sẽ bị ghi đè dữ liệu
    // So sánh ngược lại từ sau - trước, tìm vị trí cuối từng mảng
    int i = m - 1;     // nums1
    int j = n - 1;     // nums2
    int k = m + n - 1; // result = nums1

    // B2: Duyệt lần 1: So sánh lần lượt từ sau - trước
    // Lấy phần tử lớn nhất -> ghi vào result = nums1 gốc
    while (i >= 0 && j >= 0) {
        if (nums2[j] > nums1[i]) {
            nums1[k] = nums2[j];
            j--;
        }

        else {
            nums1[k] = nums1[i];
            i--;
        }

        k--; // Sau mỗi lần lặp, giảm 1 vị trí
    }

    // B3: Duyệt lần 2: Xét duyệt lại mảng 1 hoặc mảng 2 lần nữa
    // Xử lý nốt các phần tử còn dư ra
    // Do nums1[1,2,...] có 1 2 đi đúng trình tự rồi nên không cần duyệt nums1
    // Chỉ duyệt nums2
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}