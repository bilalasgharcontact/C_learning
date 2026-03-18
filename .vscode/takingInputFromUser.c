#include <stdio.h>

int main() {
    // 1. 'char' ke saath [] lagayein taake ye ek naam (string) ban jaye
    char name[20]; 

    printf("Enter your name: ");

    // 2. Scanf mein '&' hatayein (Strings ke liye zaroori nahi hota)
    scanf("%s", name); 

    // 3. Print karein
    printf("Hello %s\n", name);

    return 0;
}