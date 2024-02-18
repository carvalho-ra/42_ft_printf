# ft_printf

# 💡 About the project

The ft_printf project entails recreating the functionality of the printf() function in C, offering a valuable opportunity to explore fundamental concepts and the internal structure of programming language libraries, and to gain practical experience with variable arguments and string formatting.

# 🛠️ Usage

1. compile the project using the provided Makefile: ```make```
    This command will generate the `libftprintf.a` library, which contains the ft_printf function implementation.

2. use the following code in a main file

```C
#include <stdio.h>
#include "ft_printf.h"

int main() {
    int num = 42;
    char *str = "Hello, world!";
    
    // Using ft_printf to print an integer and a string
    ft_printf("ft_printf: %d\n", num);
    printf("printf: %d\n", num);
    ft_printf("ft_printf: %s\n", str);
    printf("printf: %s\n", str);
    
    return 0;
}
```

3. compile main file with `gcc`, linking it with `libftprintf.a`with ```gcc main.c libftprintf.a && ./a.out```

# 📋 Results
![Captura de tela de 2024-02-18 18-41-20](https://github.com/carvalho-ra/ft_printf/assets/66538173/a5dbd222-07a1-486b-a350-90ba439a2c77)
