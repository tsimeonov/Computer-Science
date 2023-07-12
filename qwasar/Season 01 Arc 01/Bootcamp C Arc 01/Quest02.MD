## ex00 - my_initializer.c

```c
// Pointer is a variable which contains the adress of another variable

void my_initializer (int * param_1) {
    // assigning the value 0 to the memory location pointed to by the pointer 'param_1'
    *param_1 = 0;
}
```
## ex01 - my_swap.c

```c
// Swap the value of two integers whose addresses are entered as parameters

void my_swap(int* param_1, int* param_2) {
    int temp = *param_1;  // Store the value of param_1 in a temporary variable
    *param_1 = *param_2;  // Assign the value of param_2 to param_1
    *param_2 = temp;      // Assign the stored value of param_1 to param_2
}
```
## ex02 - my_strlen.c

```c
// Breakdown of `%d`
// . `%` - The precent sign indicates that a format specidier is being used
// . `d` - The `d` character specifies hat the corresponding argument should be treated as a signed decimal integer.
// Reproduce the behavior of the function strlen
// The strlen() function returns the number of characters
int my_strlen(char* param_1) {
    int length = 0;
    // Checks if the value pointed to by the param_1 is not the null character
    while (*param_1 != '\0') {
        length++;
        param_1++;
    }
    return length;
}

int main() {
    char str[] = "Hello, World!";
    int length = my_strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}

```

## ex03 - my_putstr.c

```c
#include <stdio.h>

void my_putstr(char* param_1) {
    if (param_1 == NULL) {
        return;  // Return early if the pointer is NULL
    }

    int i = 0;
    while (param_1[i] != '\0') {
        putchar(param_1[i]);  // Print each character
        i++;
    }
}

int main() {
    char* str = "Hello, world!";
    my_putstr(str);

    return 0;
}
```
## ex04 - my_add.c
```c
int my_add(int param_1, int param_2) {
    return param_1 + param_2;
}
```
## ex05 - my_sub.c
```c
int my_sub(int param_1, int param_2){
    return param_1 - param_2;
}
```
## ex06 - my_muly.c
```c
int my_mult(int param_1, int param_2) {
    return param_1 * param_2;
}
```
## ex07 - my_string_formatting.c
```c
#include <stdio.h>
#include <string.h>

 void my_string_formatting(char* param_1, char* param_2, int param_3) {
  printf("Hello, my name is %s %s, I'm %d.", param_1, param_2, param_3);
  printf("\n");
}
```
