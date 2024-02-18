#ft_printf

#💡 About the project

The ft_printf project entails recreating the functionality of the printf() function in C, offering a valuable opportunity to explore fundamental concepts and the internal structure of programming language libraries, and to gain practical experience with variable arguments and string formatting.

#🛠️ Usage

make

```C
#include <stdio.h>
#include "ft_printf.h" // Assuming ft_printf.h is the header file for your custom printf function

int main() {
    int num = 42;
    char *str = "Hello, world!";
    
    // Using ft_printf to print an integer and a string
    ft_printf("This is a number: %d\n", num);
    ft_printf("This is a string: %s\n", str);
    
    return 0;
}
```
