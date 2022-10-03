#include <stdio.h>

void lower_case(char text[]) {
    int size = 0;
    while (text[size] != '\0') {
        size++;
    }
    
    char lower_case[size + 1];

    for (int i = 0; i < size; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            //in binary, lowercase letters are encoded 32 bits away from uppercase
            lower_case[i] = text[i] + 32;
        } else {
            lower_case[i] = text[i];
        }
    }
    
    lower_case[size] = '\0';
    
    printf("%s", lower_case);
}

int main(void) {
    lower_case("UPPERCASE, lowercase, MiXeD!!!123\n");
    return 0;
}
