#include<stdio.h>
#include<string.h>

char encrypt(char text[], int shift) {
    char result[100]; // Mảng để lưu trữ kết quả mã hóa
    int i;

    for (i = 0; text[i] != '\0'; ++i) {
        char ch = text[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char offset = (ch >= 'a' && ch <= 'z') ? 'a' : 'A'; // Xác định vị trí bắt đầu của bảng chữ cái
            result[i] = (char)(((ch - offset + shift) % 26) + offset);
        } else {
            result[i] = ch; // Giữ nguyên ký tự nếu không phải là chữ cái
        }
    }

    result[i] = '\0'; // Thêm ký tự kết thúc chuỗi

    return result;
}

int isAlphabet(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        return 1; // Trả về 1 nếu là chữ cái
    } else {
        return 0; // Trả về 0 nếu không phải chữ cái
    }
}

void main()
{
    char chuoi[100]; // Khai báo mảng để lưu trữ chuỗi

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin); // Sử dụng fgets để nhập chuỗi từ bàn phím

    // Loại bỏ ký tự '\n' cuối cùng nếu có
    chuoi[strcspn(chuoi, "\n")] = '\0';

    for (int i = 1; i < 26; i++)
    {
        
    }
    

}

