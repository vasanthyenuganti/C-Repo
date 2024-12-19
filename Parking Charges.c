#include <stdio.h>

int main() {
    int X, Y, H;
        scanf("%d %d %d", &X, &Y, &H); // Input X (first hour charge), Y (extra hour charge), and H (hours parked)

            int total_charges;

                if (H == 1) {
                        // If Priya parks for 1 hour
                                total_charges = X;
                                    } else {
                                            // For more than 1 hour
                                                    total_charges = X + (H - 1) * Y;
                                                        }

                                                            printf("%d\n", total_charges); // Output the total charges
                                                                return 0;
                                                                }
                                                                