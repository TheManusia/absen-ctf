#include <stdio.h>

int main()
{
    int admin = 0;
    char nama[30];

    setbuf(stdout, NULL);
    setbuf(stdin, NULL);
    setbuf(stderr, NULL);

    puts("Masukkan nama anda:");
    gets(nama);

    if (admin != 0)
    {
        system("cat flag.txt");
    }
}