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
