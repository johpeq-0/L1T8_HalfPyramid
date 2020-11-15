#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void welcome_message()
{
    printf("This program prints a half pyramid using numbers and");
    printf(" alphabets (uppercase).\n");
}

char get_number_from_user()
{
    char number;
    printf("Enter number (1-9): ");
    (void)scanf("%c%*c", &number);
    return number;
}

char check_if_number_is_1_to_9(char number)
{
    if (("%d", number) < 49 || ("%d", number) > 57)
    {
        printf("Only numbers (1-9) allowed.\n");
        char num = get_number_from_user();
        char n = check_if_number_is_1_to_9(num);
        return n;
    }
    return number;
}

char get_letter_from_user()
{
    char alphabet;
    printf("Enter uppercase letter (A-Z): ");
    (void)scanf("%c%*c", &alphabet);
    printf("\n");
    return alphabet;
}

char check_if_letter_is_A_to_Z(char alphabet)
{
    if (("%d", alphabet) < 65 || ("%d", alphabet) > 90)
    {
        printf("Only uppercase letter (A-Z) allowed.\n");
        char letter = get_letter_from_user();
        char A_Z = check_if_letter_is_A_to_Z(letter);
        return A_Z;
    }
    return alphabet;
}

void print_pyramid_using_numbers(char num)
{
    printf("Half pyramid using numbers: \n");
    for (char i = '1'; i <= num; i++)
    {
        for (char j = '1'; j <= i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    printf("\n");
}

void print_pyramid_using_letters(char letter)
{
    printf("Half pyramid using letters: \n");
    for (char i = 'A'; i <= letter; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}

int main()
{
    welcome_message();
    char number = get_number_from_user();
    char num = check_if_number_is_1_to_9(number);
    char alphabet = get_letter_from_user();
    char letter = check_if_letter_is_A_to_Z(alphabet);
    print_pyramid_using_numbers(num);
    print_pyramid_using_letters(letter);    
    return 0;
}