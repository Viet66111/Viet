#include <iostream>
using namespace std;

int main()
{
    // char : kiểu dữ liệu ký tự, có kích thước 1 byte
    char t = 205;
    char b = 186;
    char c = 201;
    char d = 200;
    char e = 187;
    char r = 188;
    cout << c << t << t << t << t << t << e << endl;
    // sizeof : size of
    cout << "kich thuoc cua kieu du lieu char =" << sizeof(char) << "bytes" << endl;
    // string: kiểu dữ liệu chuỗi ký tự
    string name = "Phan Quoc Viet";
    // cout: console output
    //endl : end line
    cout << name << endl;

    // Số nguyên
   // int : integer, có kích thước 4 byte
    int number = 100;
    // long: có kích thước 8 byte
    long largeNumber = 100000000;
    // float 
    // double
    int x = 4.5 / 2.1;
    // Phép toán: Cộng (+); Trừ (-); Nhân (*); Chia (/); Lấy phần dư (%)


    // kiểu dữ liệu logic (bool = boolean) : True(Đúng) & False(Sai)
    // kiểu dữ liệu logic :Phép toán AND (và) (&&)
    // kiểu dữ liệu logic :Phép toán OR ( hoặc) (||)