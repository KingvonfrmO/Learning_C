cmake_minimum_required(VERSION 3.30)
project(Learning_C C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(0x01-variables_if_else_while)
include_directories(0x02-functions_nested_loops)
include_directories(0x03-more_functions_nested_loops)
include_directories(0x04-pointers_arrays_strings)
include_directories(0x05-pointers_arrays_strings)
include_directories(0x06-pointers_arrays_strings)

add_executable(Learning_C
    0x01-variables_if_else_while/0-positive_or_negative.c
    0x01-variables_if_else_while/1-last_digit.c
    0x01-variables_if_else_while/100-print_comb3.c
    0x01-variables_if_else_while/101-print_comb4.c
    0x01-variables_if_else_while/102-print_comb5.c
    0x01-variables_if_else_while/2-print_alphabet.c
    0x01-variables_if_else_while/3-print_alphabets.c
    0x01-variables_if_else_while/4-print_alphabt.c
    0x01-variables_if_else_while/5-print_numbers.c
    0x01-variables_if_else_while/6-print_numberz.c
    0x01-variables_if_else_while/7-print_tebahpla.c
    0x01-variables_if_else_while/8-print_base16.c
    0x01-variables_if_else_while/9-print_comb.c
    0x02-functions_nested_loops/0-putchar.c
    0x02-functions_nested_loops/1-alphabet.c
    0x02-functions_nested_loops/1-main.c
    0x02-functions_nested_loops/10-add.c
    0x02-functions_nested_loops/10-main.c
    0x02-functions_nested_loops/100-main.c
    0x02-functions_nested_loops/100-times_table.c
    0x02-functions_nested_loops/101-natural.c
    0x02-functions_nested_loops/102-fibonacci.c
    0x02-functions_nested_loops/103-fibonacci.c
    0x02-functions_nested_loops/104-fibonacci.c
    0x02-functions_nested_loops/11-main.c
    0x02-functions_nested_loops/11-print_to_98.c
    0x02-functions_nested_loops/2-main.c
    0x02-functions_nested_loops/2-print_alphabet_x10.c
    0x02-functions_nested_loops/3-islower.c
    0x02-functions_nested_loops/3-main.c
    0x02-functions_nested_loops/4-isalpha.c
    0x02-functions_nested_loops/4-main.c
    0x02-functions_nested_loops/5-main.c
    0x02-functions_nested_loops/5-sign.c
    0x02-functions_nested_loops/6-abs.c
    0x02-functions_nested_loops/6-main.c
    0x02-functions_nested_loops/7-main.c
    0x02-functions_nested_loops/7-print_last_digit.c
    0x02-functions_nested_loops/8-24_hours.c
    0x02-functions_nested_loops/8-main.c
    0x02-functions_nested_loops/9-main.c
    0x02-functions_nested_loops/9-times_table.c
    0x02-functions_nested_loops/_putchar.c
    0x02-functions_nested_loops/main.h
    0x03-more_functions_nested_loops/0-isupper.c
    0x03-more_functions_nested_loops/0-main.c
    0x03-more_functions_nested_loops/1-isdigit.c
    0x03-more_functions_nested_loops/1-main.c
    0x03-more_functions_nested_loops/10-main.c
    0x03-more_functions_nested_loops/10-print_triangle.c
    0x03-more_functions_nested_loops/100-prime_factor.c
    0x03-more_functions_nested_loops/101-main.c
    0x03-more_functions_nested_loops/101-print_number.c
    0x03-more_functions_nested_loops/2-main.c
    0x03-more_functions_nested_loops/2-mul.c
    0x03-more_functions_nested_loops/3-main.c
    0x03-more_functions_nested_loops/3-print_numbers.c
    0x03-more_functions_nested_loops/4-main.c
    0x03-more_functions_nested_loops/4-print_most_numbers.c
    0x03-more_functions_nested_loops/5-main.c
    0x03-more_functions_nested_loops/5-more_numbers.c
    0x03-more_functions_nested_loops/6-main.c
    0x03-more_functions_nested_loops/6-print_line.c
    0x03-more_functions_nested_loops/7-main.c
    0x03-more_functions_nested_loops/7-print_diagonal.c
    0x03-more_functions_nested_loops/8-main.c
    0x03-more_functions_nested_loops/8-print_square.c
    0x03-more_functions_nested_loops/9-fizz_buzz.c
    0x03-more_functions_nested_loops/_putchar.c
    0x03-more_functions_nested_loops/main.h
    0x04-pointers_arrays_strings/0-main.c
    0x04-pointers_arrays_strings/0-reset_to_98.c
    0x04-pointers_arrays_strings/1-main.c
    0x04-pointers_arrays_strings/1-swap.c
    0x04-pointers_arrays_strings/100-atoi.c
    0x04-pointers_arrays_strings/100-main.c
    0x04-pointers_arrays_strings/101-keygen.c
    0x04-pointers_arrays_strings/2-main.c
    0x04-pointers_arrays_strings/2-strlen.c
    0x04-pointers_arrays_strings/3-main.c
    0x04-pointers_arrays_strings/3-puts.c
    0x04-pointers_arrays_strings/5-main.c
    0x04-pointers_arrays_strings/5-rev_string.c
    0x04-pointers_arrays_strings/6-main.c
    0x04-pointers_arrays_strings/6-puts2.c
    0x04-pointers_arrays_strings/7-main.c
    0x04-pointers_arrays_strings/7-puts_half.c
    0x04-pointers_arrays_strings/8-main.c
    0x04-pointers_arrays_strings/8-print_array.c
    0x04-pointers_arrays_strings/9-main.c
    0x04-pointers_arrays_strings/9-strcpy.c
    0x04-pointers_arrays_strings/_putchar.c
    0x04-pointers_arrays_strings/main.h
    0x04-pointers_arrays_strings/tempCodeRunnerFile.c
    0x05-pointers_arrays_strings/0-main.c
    0x05-pointers_arrays_strings/0-strcat.c
    0x05-pointers_arrays_strings/1-main.c
    0x05-pointers_arrays_strings/1-strncat.c
    0x05-pointers_arrays_strings/100-main.c
    0x05-pointers_arrays_strings/100-rot13.c
    0x05-pointers_arrays_strings/101-main.c
    0x05-pointers_arrays_strings/101-print_number.c
    0x05-pointers_arrays_strings/102-magic.c
    0x05-pointers_arrays_strings/103-infinite_add.c
    0x05-pointers_arrays_strings/103-main.c
    0x05-pointers_arrays_strings/104-main.c
    0x05-pointers_arrays_strings/104-print_buffer.c
    0x05-pointers_arrays_strings/2-main.c
    0x05-pointers_arrays_strings/2-strncpy.c
    0x05-pointers_arrays_strings/3-main.c
    0x05-pointers_arrays_strings/3-strcmp.c
    0x05-pointers_arrays_strings/4-main.c
    0x05-pointers_arrays_strings/4-rev_array.c
    0x05-pointers_arrays_strings/5-main.c
    0x05-pointers_arrays_strings/5-string_toupper.c
    0x05-pointers_arrays_strings/6-cap_string.c
    0x05-pointers_arrays_strings/6-main.c
    0x05-pointers_arrays_strings/7-leet.c
    0x05-pointers_arrays_strings/7-main.c
    0x05-pointers_arrays_strings/_putchar.c
    0x05-pointers_arrays_strings/main.h
    0x06-pointers_arrays_strings/0-main.c
    0x06-pointers_arrays_strings/0-memset.c
    0x06-pointers_arrays_strings/1-main.c
    0x06-pointers_arrays_strings/1-memcpy.c
    0x06-pointers_arrays_strings/100-main.c
    0x06-pointers_arrays_strings/100-set_string.c
    0x06-pointers_arrays_strings/2-main.c
    0x06-pointers_arrays_strings/2-strchr.c
    0x06-pointers_arrays_strings/3-main.c
    0x06-pointers_arrays_strings/3-strspn.c
    0x06-pointers_arrays_strings/4-main.c
    0x06-pointers_arrays_strings/4-strpbrk.c
    0x06-pointers_arrays_strings/5-main.c
    0x06-pointers_arrays_strings/5-strstr.c
    0x06-pointers_arrays_strings/7-main.c
    0x06-pointers_arrays_strings/7-print_chessboard.c
    0x06-pointers_arrays_strings/8-main.c
    0x06-pointers_arrays_strings/8-print_diagsums.c
    0x06-pointers_arrays_strings/_putchar.c
    0x06-pointers_arrays_strings/main.h
        0x0E-function_pointers/3-op_functions.c
        0x0E-function_pointers/0-main.c
        0x0E-function_pointers/0-print_name.c
        0x0E-function_pointers/1-array_iterator.c
        0x0E-function_pointers/1-main.c
        0x0E-function_pointers/2-main.c
        0x0E-function_pointers/3-calc.h
        0x0E-function_pointers/3-get_op_func.c
        0x0E-function_pointers/3-main.c
        0x0E-function_pointers/100-main_opcodes.c
        0x10-variadic_functions/0-sum_them_all.c
        0x10-variadic_functions/0-main.c
        0x10-variadic_functions/1-print_numbers.c
        0x10-variadic_functions/2-print_strings.c
        0x10-variadic_functions/2-main.c
        0x10-variadic_functions/3-print_all.c
        0x10-variadic_functions/3-main.c
        0x11-singly_linked_lists/lists.h
        0x11-singly_linked_lists/0-main.c
        0x11-singly_linked_lists/1-main.c
        0x11-singly_linked_lists/2-main.c
        0x11-singly_linked_lists/3-main.c
        0x11-singly_linked_lists/4-main.c
        0x11-singly_linked_lists/100-first.c
        0x11-singly_linked_lists/0-print_list.c
        0x11-singly_linked_lists/1-list_len.c
        0x11-singly_linked_lists/2-add_node.c
        0x11-singly_linked_lists/3-add_node_end.c
        0x11-singly_linked_lists/4-free_list.c
        0x11-singly_linked_lists/100-main.c
        0x11-singly_linked_lists/101-hello_alx.asm)
