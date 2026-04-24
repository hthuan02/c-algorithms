/* X-OR (Bit Manipulation)
 *  - Chuỗi t = chuỗi s + 1 kí tự
 *  - Kí tự còn lại bị xáo trộn
 *  --> Kí tự giống nhau bị triệt tiêu, còn lại 1 kí tự
 *
 *  a ^ 0 = a
 *  a ^ a = 0
 */

char findTheDifference(char* s, char* t) {
    char result = 0;

    // Duyệt chuỗi s, XOR
    // 0 ^ s[i] = result[i]
    for(int i = 0; s[i] != '\0'; i++)
        result ^= s[i];

    // Duyệt chuỗi t, XOR
    // result[i] ^ t[i] = 0, đã triệt tiêu các kí tự giống nhau
    for(int i = 0; t[i] != '\0'; i++)
        result ^= t[i];

    return result;
}