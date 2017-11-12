/*
Prepare user input (vigenere keyword, origin file, destination file)
Open files
Read one line, decipher the message and write it line by line
Close files
*/

#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

// #include "batman.txt"
FILE *decipher_file(void);
FILE *cipher_file(void);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("batman won. Yazan, Sadra and Wael beat your ass ");
        return 1;
    }
    string key = argv[1];

    // Created it just so i compile, delete it after you use the key in other place
    printf("%s", key);

    // Read the file
    cipher_file();
    // Make sure to read one line, decipher the message and write it line by line
    FILE *readable  = decipher_file();

    // Keep printing every charactor until you reach the end of the file
    while (true)
    {
        // Get the charactor by charactor form the decipher file
        int charactor = fgetc(readable);
        // Stop when reach the end of the file
        if (feof(readable))
        {
            break;
        }
    printf("%c", charactor);
    }
    // Close the file
    fclose(readable);
    return 0;
}

FILE *cipher_file(void)
{
    FILE *cipher_file = fopen("batman.txt", "r");
    if (cipher_file == NULL)
    {
        printf("File does not exist.\n");
        return false;
    }
    fclose(cipher_file);
    return cipher_file;
}

FILE *decipher_file(void)
{
    // Do decipher
    FILE *decipher_file = fopen("decipher_file.txt", "r");
    if (decipher_file == NULL)
    {
        printf("The file didn't open.\n");
        return 0;
    }
    return decipher_file;
}