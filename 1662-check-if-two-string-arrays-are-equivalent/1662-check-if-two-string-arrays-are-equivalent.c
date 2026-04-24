/** Xử lý chuỗi
 *  - Nếu ghép lại chuỗi lại, mảng chuỗi word1 = word --> True
 *  - Không bằng --> False
 *
 *  Dùng strcmp(s1,s2) để so sánh, nếu 2 chuỗi 
 *   == 0  (s1 = s2)
 *   < 0   (s1 < s2)
 *   > 0   (s1 > s2)
 */

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    // B1: Tạo 2 chuỗi rỗng, bằng mảng hoặc con trỏ -> nếu con trỏ, cấp phát bộ nhớ động
    // B2: Duyệt cả 2 chuỗi đó
    //    thực hiện: strcat -> Nối chuỗi word1, word2 vào 2 chuỗi rỗng
    // B3: strcmp so sánh 2 chuỗi đã khai báo lúc đầu

    char s1[10000] = {0};
    char s2[10000] = {0};

    // Cấp phát động malloc
    // char *s1 = (char *)malloc(100); // sizeof(char) = 1
    // char *s2 = (char *)malloc(100);
    // s1[0] = '\0';
    // s2[0] = '\0';

    for(int i = 0; i < word1Size; i++)
        strcat(s1, word1[i]);

    for(int i = 0; i < word2Size; i++)
        strcat(s2, word2[i]);

    return strcmp(s1,s2) == 0;
}