#include <stdio.h>

int main() {
    char text[200];
    int word_counter = 0;
    int is_space = 1;

    printf("Please enter a sentence (max 200 chars) >> ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && text[i] != '\t') {
            if (is_space == 1) {
                word_counter++;
                is_space = 0;
            }
        }
        else {
            is_space = 1;
        }
    }

    printf("Number of words in the sentence: %d\n", word_counter);
    return 0;
}