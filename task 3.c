#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// List of C keywords
char keywords[32][10] = {
    "int", "float", "if", "else", "return", "char", "for", "while",
    "do", "break", "continue", "switch", "case", "long", "double",
    "short", "void", "static", "struct", "sizeof", "typedef", "union",
    "unsigned", "signed", "const", "enum", "extern", "goto", "auto",
    "volatile", "register", "default"
};

// Function to check if a word is a keyword
int isKeyword(char *word) {
    for (int i = 0; i < 32; i++) {
        if (strcmp(keywords[i], word) == 0)
            return 1;
    }
    return 0;
}

// Function to check if a character is an operator
int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' ||
           ch == '=' || ch == '<' || ch == '>' || ch == '!';
}

int main() {
    FILE *fp;
    char ch, buffer[100];
    int i = 0;

    // Open the input file
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open input file.\n");
        return 1;
    }

    printf("Lexical Analysis Output:\n");

    while ((ch = fgetc(fp)) != EOF) {
        // Build words: keywords or identifiers
        if (isalnum(ch)) {
            buffer[i++] = ch;
        } else {
            buffer[i] = '\0';
            if (i > 0) {
                if (isKeyword(buffer))
                    printf("[Keyword]    : %s\n", buffer);
                else
                    printf("[Identifier] : %s\n", buffer);
                i = 0;
            }

            // Print operator if found
            if (isOperator(ch)) {
                printf("[Operator]   : %c\n", ch);
            }
        }
    }

    fclose(fp);
    return 0;
}
