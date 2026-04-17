
int isMatch(char open, char close)
{
    return (open == '(' && close == ')' ||
            open == '[' && close == ']' ||
            open == '{' && close == '}');
}

bool isValid(char* s) {
    int n = strlen(s);
    char items[n];
    int size;
    int top = -1;

    // int n = sizeof(s)/sizeof(s[0]); // Chỉ dùng khi duyệt mảng, này s là con trỏ

    for (int i = 0; s[i] != '\0'; i++)
    {
        char data = s[i];
        if (data == '(' || data == '[' || data == '{')
        {
            // push vào stack, tăng kích thước trước - đọc/ghi sau
            items[++top] = data;
        }

        else if (data == ')' || data == ']' || data == '}')
        {
            // Kiểm tra stack rỗng trước
            // Trường hợp ')(', ngoặc đóng trước thì không lưu vào stack -> stack rỗng
            if(top == -1)   return false;

            // pop(lấy) stack, đọc/ghi trước - giảm sau
            // Lúc này, phần tử pop là ngoặc mở - còn s[i] còn lại là ngoặc đóng
            int open = items[top--];
            if (!isMatch(open, data))   return false;   
        }
    }

    // Kiểm tra stack lần cuối
    return top == -1;
}