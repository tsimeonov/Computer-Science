### ex00 my_first_compilation
```c
// What is compilation
// Transforms a text file (code) into binary file.

#include <stdio.h>

int main(int ac, char **av) {
    // Print message to the console
    printf("my_first_compilation.\n");
    return 0;
}
```
### ex01 my_first_variable_integer
```c
#include <stdio.h>

int main() {
  int person_age = 34;

  printf("%d\n", person_age);
  return 0;
}
```
### ex02 my_first_variable_char
```c
#include <stdio.h>

int main() {
  char my_letter = 'c';

  printf("%c\n", my_letter);
  return 0;
}
```
### ex03 my-first_variable_string
```c
#include <stdio.h>

int main() {
  char my_string[] = "Learning is growing";

  printf("%s\n", my_string);
  return 0;
}
```
### ex04 my_multiple_varialbes_multiple_type
```c
#include <stdio.h>

int main() {
  int my_age = 34;
  char my_name[] = "Luke";
  char my_comma = ',';

  printf("Hello %s%c I'm %d years old.\n", my_name, my_comma, my_age);
  return 0;
}
```
### ex05 my_first_incrementation
```c
#include <stdio.h>

int main() {
  int my_index = 0;

  // replace this comment with an increment
  my_index++;
  printf("%d\n", my_index);
  // replace this comment with an decrement
  my_index--;
  // replace this comment with an decrement
  my_index--;
  printf("%d\n", my_index);
  // replace this comment with an increment
  my_index++;
  // replace this comment with an increment
  my_index++;
  // replace this comment with an increment
  my_index++;
  printf("%d\n", my_index);
  return 0;
}
```
### ex06 my_first_if_else
```c
#include <stdio.h>

int main() {
  int nbr = 10;

  if (nbr > 20) {
    printf("nbr is greater than 20\n");
  }
  else {
    printf("nbr is less than 20\n");
  }
  return 0;
}
```
### ex07 my_first_if_multiple_condition
```c
#include <stdio.h>

int main() {
  int a = 10;
  int b = 9;
  int c = 11;
  int d = 10;
  int y = 9;
  int z = 11;

  if ((a > b && a < c) && a == d) {
    printf("a is bigger than b AND smaller than c AND equal to d\n");
  }
  if ((z > a) || (y > a)) {
    printf("z OR y are bigger than a\n");
  }
  return 0;
}

```
### ex08 my_first_function
```c
#include <stdio.h>
// Following XXXXXX will be a function that will print using printf("my_first_function\n");
void my_first_function() {
    printf("my_first_function\n");
}

int main() {
  my_first_function();

  return 0;
}
```
### ex09 my_first_while
```c
#include <stdio.h>

int main() {
  int index = 0;

  while (index < 100) {
    printf("I want to code\n");
    index++;
  }
  return 0;
}
```
### ex10 my_first_param_function
```c
#include <stdio.h>
// function will printf("detonation in... %d secondes.\n", seconds_left);
void  detonation_in (int seconds_left) {
    printf("detonation in... %d seconds.\n", seconds_left);
}

int main() {
  int timer = 10;

  while (timer > 0) {
    detonation_in(timer);
    timer--;
  }
  return 0;
}
```
### ex11 my_first_return_function
```c
#include <stdio.h>
// function my_get_seven() will return 7
int my_get_seven() {
    
    return 7;
}

int main() {
  printf("%d\n", my_get_seven());
  return 0;
}
```
### ex12 my_is_negative
```c
int my_is_negative(int nbr) {
  if (nbr < 0) {
    return 0;
  }
  else {
    return 1;
  }
}
```
### ex13 my_abs
```c
int my_abs(int param_1) {
if (param_1 < 0) {
    return -param_1;
} else {
    return param_1;
}
}
```
### ex14 my_isalpha
```c
int my_isalpha(char param_1) {
    if ((param_1 >= 'a' && param_1 <= 'z') || (param_1 >= 'A' && param_1 <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
}
```
### ex15 my_isdigit
```c
int my_isdigit(char param_1) {
    if (param_1 >= '0' && param_1 <= '9') {
        return 1;
    } else {
        return 0;
    }
}
```
### ex16 my_islower
```c
int my_islower(char param_1) {
    if (param_1 >= 'a' && param_1 <= 'z') {
        return 1;
    } else {
        return 0;
    }
}
```
### ex17 my_isupper
```c
int my_isupper(char param_1) {
    if (param_1 >= 'A' && param_1 <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}
```
### ex18 my_isspace
```c
int my_isspace(char param_1) {
    if (param_1 == ' ') {
        return 1;
    } else {
        return 0;
    }
}
```
### ex19 my_print_alphabet
```c
#include <stdio.h>

void my_print_alphabet() {
    char letter = 'a';

    while (letter <= 'z') {
        printf("%c", letter);
        letter++;
        printf("\n");
    }
}
```
### ex20 my_print_reverse_alphabet
```c
#include <stdio.h>

void my_print_reverse_alphabet() {
    char letter = 'z';

    while (letter >= 'a') {
        putchar(letter);
        letter--;
    }
    putchar('\n');
}
```
