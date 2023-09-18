#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function to generate a random uppercase letter */
char randomUpperCaseLetter() {
    return 'A' + (rand() % 26);
}

/* Function to generate a random lowercase letter */
char randomLowerCaseLetter() {
    return 'a' + (rand() % 26);
}

/* Function to generate a random digit */
char randomDigit() {
    return '0' + (rand() % 10);
}

/* Function to generate a random special character (e.g., !, @, #, etc.) */
char randomSpecialCharacter() {
    char specialCharacters[] = "!@#$%^&*()-_=+[]{}|;:,.<>?";
    return specialCharacters[rand() % (sizeof(specialCharacters) - 1)];
}

/* Function to generate a random password based on given criteria */
void generateRandomPassword(char *password, int length) {
    int i;
    for (i = 0; i < length; i++) {
        int choice = rand() % 4;
        switch (choice) {
            case 0:
                password[i] = randomUpperCaseLetter();
                break;
            case 1:
                password[i] = randomLowerCaseLetter();
                break;
            case 2:
                password[i] = randomDigit();
                break;
            case 3:
                password[i] = randomSpecialCharacter();
                break;
        }
    }
    password[length] = '\0'; /* Null-terminate the password */
}

int main() {
    int passwordLength = 12; /* Change this to the desired password length */
    char password[passwordLength + 1]; /* +1 for the null terminator */
    
    srand(time(NULL)); /* Seed the random number generator with current time */

    generateRandomPassword(password, passwordLength);

    printf("Generated Password: %s\n", password);

    return 0;
}
