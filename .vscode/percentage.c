#include <stdio.h> // stdio.h hona chahiye printf ke liye

int main() {
    float phy = 49;
    float math = 50;
    float eng = 37;
    float bio = 47;
    float chem = 35;

    // Sabko pehle brackets mein plus karein, phir divide karein
    float total = phy + math + eng + bio + chem;
    float percentage = (total / 250) * 100;

    printf("Total Marks: %.0f\n", total);
    printf("Percentage: %.2f%%", percentage); // %% se % ka sign print hota hai

    return 0;
}