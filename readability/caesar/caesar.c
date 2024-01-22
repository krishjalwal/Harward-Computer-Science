#include <ctype.h>
#include <stdio.h>

// Function to perform the Caesar cipher encryption
void caesarCipher(char text[], int shift)
{
    for (int i = 0; text[i] != '\0'; ++i)
    {
        char ch = text[i];

        if (isalpha(ch))
        {
            char base = islower(ch) ? 'a' : 'A';
            text[i] = (ch - base + shift) % 26 + base;
        }
    }
}

int main()
{
    char message[100];
    int shift;

    printf("plaintext: ");
    fgets(message, sizeof(message), stdin);

    printf("shift ? :");
    scanf("%d", &shift);

    // Perform the encryption
    caesarCipher(message, shift);

    printf("ciphertext: %s", message);

    return 0;
}