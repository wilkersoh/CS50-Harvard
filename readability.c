#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");

    float l = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i] >= 97 && text[i] <= 122) ||
            (text[i] >= 65 && text[i] <= 90))
        {
            l++;
        }
    }

    // Count number of words
    float w = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == 32)
        {
            w++;
        }
    }

    // Count number of sentences
    float s = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == 46 || text[i] == 33 || text[i] == 63)
        {
            s++;
        }
    }
    // L is the average number of letters per 100 words in the text
    // S is the average number of sentences per 100 words in the text.
    // Calculate average number of letters & sentences per 100 words
    float L = 100 * (l / w);
    float S = 100 * (s / w);
    // Calculate Coleman-Liau index
    int index = round(0.0588 * L - 0.296 * S - 15.8);


    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
