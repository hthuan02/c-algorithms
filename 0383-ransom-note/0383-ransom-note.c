/* magazine > ransomNote 
 * - Chuỗi magazine chứa hết các kí tự của ransomNote --> True
 *                                 không chứa hết     --> False
 */

// Giả sử
// magazine: kho hàng   -> đếm có bao nhiêu hàng count++
// ransomNote: đơn hàng -> lấy hàng ra count--
//                      -> Nếu hàng lấy ra nhiều hơn kho có (âm) 
//             count(hàng trong kho - hàng hiện có < 0) --> false
//  --> true 

bool canConstruct(char* ransomNote, char* magazine) {
    int count[26] = {0};

    for(int i = 0; magazine[i] != '\0'; i++)
    {
        count[magazine[i] - 'a']++; 
        // 'a': theo ASCII = 97
        // đếm số kí tự xuất hiện
    }

    for(int i = 0; ransomNote[i] != '\0';i++)
    {
        count[ransomNote[i] - 'a']--;
        // Lấy kí tự ra
        if(count[ransomNote[i] - 'a'] < 0)  return false;
    }

    return true;
}