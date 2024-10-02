#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int str_len(char const *s1) {
    int i;
    
    i = 0;
    while(s1[i] != '\0')
        i++;
    return i;
}

void copy_string(char *str, char const *s1, char const *s2, int size) {
    int i;
    int j;

    i = 0;
    j = 0;
    while(i <= size) {
        if (i < str_len(s1)){
            str[i] = s1[i];
        }
        else {
            str[i] = s2[j];
            j++;
        }
        i++;
    }
}

char *ft_strjoin(char const *s1, char const *s2) {
    int result_size;
    char *result;

    result_size = str_len(s1) + str_len(s2);
    result = malloc(sizeof(result_size + 1));
    if (!result)
        return NULL;

    copy_string(result, s1, s2, result_size);
    return result;
};

int main() {
    char *s1 = "bonjour";
    char *s2 = "bonsoir";
    char *result;

    result = ft_strjoin(s1, s2);
    printf("%s\n", result);

    return 0;
}	
