#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret_ft, ret_printf;

    // Test 1: Basic string
    ret_ft = ft_printf("Hello, World!\n");
    ret_printf = printf("Hello, World!\n");
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 2: Character
    ret_ft = ft_printf("Character: %c\n", 'A');
    ret_printf = printf("Character: %c\n", 'A');
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 3: String
    ret_ft = ft_printf("String: %s\n", "42 Network");
    ret_printf = printf("String: %s\n", "42 Network");
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 4: Integer
    ret_ft = ft_printf("Integer: %d\n", 42);
    ret_printf = printf("Integer: %d\n", 42);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 5: Negative integer
    ret_ft = ft_printf("Negative Integer: %d\n", -42);
    ret_printf = printf("Negative Integer: %d\n", -42);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 6: Unsigned integer
    ret_ft = ft_printf("Unsigned: %u\n", 4294967295u);
    ret_printf = printf("Unsigned: %u\n", 4294967295u);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 7: Hexadecimal (lowercase)
    ret_ft = ft_printf("Hexadecimal (lowercase): %x\n", 0x42);
    ret_printf = printf("Hexadecimal (lowercase): %x\n", 0x42);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 8: Hexadecimal (uppercase)
    ret_ft = ft_printf("Hexadecimal (uppercase): %X\n", 0x42);
    ret_printf = printf("Hexadecimal (uppercase): %X\n", 0x42);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 9: Pointer
    int num = 42;
    ret_ft = ft_printf("Pointer: %p\n", &num);
    ret_printf = printf("Pointer: %p\n", &num);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 10: Percent sign
    ret_ft = ft_printf("Percent sign: %%\n");
    ret_printf = printf("Percent sign: %%\n");
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 11: Combination
    ret_ft = ft_printf("Hello %s, your score is %d%%!\n", "Anass", 100);
    ret_printf = printf("Hello %s, your score is %d%%!\n", "Anass", 100);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Edge cases
    // Test 12: NULL string
    ret_ft = ft_printf("NULL string: %s\n", NULL);
    ret_printf = printf("NULL string: %s\n", NULL);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 13: Zero
    ret_ft = ft_printf("Zero: %d\n", 0);
    ret_printf = printf("Zero: %d\n", 0);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 14: Long unsigned value
    ret_ft = ft_printf("Long unsigned: %lu\n", 4294967295ul);
    ret_printf = printf("Long unsigned: %lu\n", 4294967295ul);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 15: Edge case: Max int
    ret_ft = ft_printf("Max int: %d\n", 2147483647);
    ret_printf = printf("Max int: %d\n", 2147483647);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    // Test 16: Edge case: Min int
    ret_ft = ft_printf("Min int: %d\n", -2147483648);
    ret_printf = printf("Min int: %ld\n", -2147483648);
    printf("Return values: ft_printf=%d, printf=%d\n", ret_ft, ret_printf);

    char *str = "anass";
    int  i = 200;
    int *ptr = &i;
}
