#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define UPERCASE_index 65
#define LOWERCASE_index 97
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("batman won. Yazan, Sadra and Wael beat your ass ");
        return 1;
    }
    string key = argv[1];
    string decrypted_text = "HFNLP";
    key = "ABC";
    int keyplace = 0;
    int current_key;

    for (int i = 0; i < strlen(decrypted_text) ; i++)
    {


        if (keyplace >= strlen(key))
        {
            keyplace = 0;
        }
        if (isupper(key[keyplace]))
        {
            current_key = key[keyplace] - UPERCASE_index;
        }
        else
        {
            current_key = key[keyplace] - LOWERCASE_index;
        }

        char current_letter = decrypted_text[i];
        char shifted_letter;
        if (!isalpha(current_letter))
        {
            shifted_letter = current_letter;
        }
        else
        {
            if (isupper(current_letter))
            {
                shifted_letter = ((current_letter -  UPERCASE_index - current_key) % 26) + UPERCASE_index;
                keyplace++;
            }
            else
            {
                shifted_letter = ((current_letter - LOWERCASE_index - current_key) % 26) + LOWERCASE_index;
                keyplace++;
            }
        }
    printf("%c", shifted_letter);
    }
    printf("\n");
}