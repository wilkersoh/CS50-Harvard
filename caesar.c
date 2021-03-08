#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int check_key(int argc, string argument);
string plain_cipher(string plaintext, int key);
int main(int argc, string argv[])
{

    // checks if there are only 2 cl-arguments + if there are any alpha characters (uses function: check_key)
    if (argc != 2 || argc == 1)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        string input = argv[1];
        int key = check_key(argc, input);
        if (key == 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            string plaintext = get_string("plaintext: ");
            string ciphertext = plain_cipher(plaintext, key);
        }
    }
}

int check_key(int argc, string argument)
{
    int i;
    int j = 0;
    char letter = argument[0];

    for (i = 0; i < strlen(argument); i++)
    {
        letter = argument[i];
        if isalpha(letter)
        {
            j++;
        }
    }
    if (j >= 1)
    {
        return 0;
    }
    else
    {
        int key = atoi(argument);
        return key;
    }
}

string plain_cipher(string plaintext, int key)
{
    string ciphertext = "ciphertext: ";
    printf("%s", ciphertext);
    int i = 0;
    for (i = 0; i < strlen(plaintext); i++)
    {
        char letter = plaintext[i];
        if isalpha(letter)
        {
            if isupper(letter)
            {
                char enc_letter_upper = (letter - 65 + key) % 26;
                enc_letter_upper += 65;
                printf("%c", enc_letter_upper);
            }
            else
            {
                char enc_letter_lower = (letter - 97 + key) % 26;
                enc_letter_lower += 97;
                printf("%c", enc_letter_lower);
            }
        }
        else
        {
            printf("%c", letter);
        }
    }
    printf("\n");
    return ciphertext;
}
