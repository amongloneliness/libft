#include "libft.h"
#include "libtest.h"
#include <ctype.h>
#include <string.h>

int main(void)
{
    int passed, failed;

    printf("\n         Тестирование    \n");

    /* ====== ft_atoi ======*/
    {
        passed = 0;
        failed = 0;
    
        ft_print_testname("ft_atoi()");
        ft_teststart();
        ft_atoi("0");
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        int count_tests = 5;

        passed += ft_assert_int_eq(ft_atoi("-1"), atoi("-1"));
        passed += ft_assert_int_eq(ft_atoi("0"), atoi("0"));
        passed += ft_assert_int_eq(ft_atoi("-0"), atoi("-0"));
        passed += ft_assert_int_eq(ft_atoi("123"), atoi("123"));
        passed += ft_assert_int_eq(ft_atoi("01000"), atoi("01000"));

        failed = count_tests - passed;

        ft_print_test_result(passed, failed);
    }

    /* ====== ft_bzero ====== */
    {
        passed = 0;
        failed = 0;

        size_t size = 100;
        int *arr_1 = malloc(sizeof(int) * 100);
        int *arr_2 = malloc(sizeof(int) * 100);
        bzero((void *) arr_2, size);
        
        ft_print_testname("ft_bzero()");
        ft_teststart();
        ft_bzero((void *) arr_1, size);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        for (size_t i = 0; i < size; i++) {
            passed += ft_assert_int_eq(arr_1[i], arr_2[i]);
        }

        failed = (int) size - passed;

        ft_print_test_result(passed, failed);

        /* === отчистка памяти === */
        free(arr_1);
        free(arr_2);       
    }
    
    /* ====== ft_calloc() ====== */
    {
        passed = 0;
        failed = 0;

        size_t size = 400;
        size_t elem_size = sizeof(int);

        int *arr_1 = (int *) (void *) 0;
        int *arr_2 = (int *) calloc(size, elem_size);

        for (size_t i = 0; i < size; i++) {
            arr_2[i] = (int) i;
        }

        ft_print_testname("ft_calloc()");
        ft_teststart();
        arr_1 = ft_calloc(size, elem_size);
        ft_testend();
        ft_printtime();

        for (size_t i = 0; i < size; i++) {
            arr_1[i] = (int) i;
        }

        /* === тестирование === */
        for (size_t i = 0; i < size; i++) {
            passed += ft_assert_int_eq(arr_1[i], arr_2[i]);
        }

        failed = (int) size - passed;

        ft_print_test_result(passed, failed);

        /* === отчистка памяти === */
        free(arr_1);
        free(arr_2);
    }
    
    /* ====== ft_isalnum() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_isalnum()");
        ft_teststart();
        ft_isalnum(12);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        int count_tests = 356;
        
        for (int i = -100; i < count_tests - 100; i++) {
            passed += ft_assert_int_eq(ft_isalnum(i), isalnum(i));
        }

        failed = count_tests - passed;

        ft_print_test_result(passed, failed);
    }

    /* ====== ft_isalpha() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_isalpha()");
        ft_teststart();
        ft_isalpha(3);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        int count_tests = 356;

        for (int i = -100; i < count_tests - 100; i++) {
            passed += ft_assert_int_eq(ft_isalpha(i), isalpha(i));
        }

        failed = count_tests - passed;

        ft_print_test_result(passed, failed);
    }
    
    /* ====== ft_isascii() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_isascii()");
        ft_teststart();
        ft_isascii(42);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        int count_tests = 356;

        for (int i = -100; i < count_tests - 100; i++) {
            passed += ft_assert_int_eq(ft_isascii(i), isascii(i));
        }

        failed = count_tests - passed;

        ft_print_test_result(passed, failed);
    }

    /* ====== ft_isdigit() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_isdigit()");
        ft_teststart();
        ft_isdigit(47);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        int count_tests = 356;

        for (int i = -100; i < count_tests - 100; i++) {
            passed += ft_assert_int_eq(ft_isdigit(i), isdigit(i));
        }

        failed = count_tests - passed;

        ft_print_test_result(passed, failed);
    }

    /* ====== ft_isprint() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_isprint()");
        ft_teststart();
        ft_isprint(50);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        int count_tests = 356;

        for (int i = -100; i < count_tests - 100; i++) {
            passed += ft_assert_int_eq(ft_isprint(i), isprint(i));
        }

        failed = count_tests - passed;

        ft_print_test_result(passed, failed);
    }
    
    /* ====== ft_len_nbr() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_len_nbr()");
        ft_teststart();
        ft_len_nbr(123);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        int count_tests = 10;

        passed += ft_assert_int_eq(ft_len_nbr(0), 1);
        passed += ft_assert_int_eq(ft_len_nbr(-1), 1);
        passed += ft_assert_int_eq(ft_len_nbr(-100), 3);
        passed += ft_assert_int_eq(ft_len_nbr(012), 2);
        passed += ft_assert_int_eq(ft_len_nbr(12), 2);
        passed += ft_assert_int_eq(ft_len_nbr(12345), 5);
        passed += ft_assert_int_eq(ft_len_nbr(12345678), 8);
        passed += ft_assert_int_eq(ft_len_nbr(-1212211), 7);
        passed += ft_assert_int_eq(ft_len_nbr(-0), 1);
        passed += ft_assert_int_eq(ft_len_nbr(1234567899), 10);

        failed = count_tests - passed;

        ft_print_test_result(passed, failed);
    }
    
    /* ====== ft_memccpy() ====== */
    {
        passed = 0;
        failed = 0;

        int size = 500;
        int *arr_src = malloc(sizeof(int) * size);
        int *arr_1 = malloc(sizeof(int) * size);
        int *arr_2 = malloc(sizeof(int) * size);

        for (int i = 0; i < size; i++) {
            arr_1[i] = i;
            arr_2[i] = i;
            arr_src[i] = size - 1 - i;
        }

        ft_print_testname("ft_memccpy()");
        ft_teststart();
        ft_memccpy(arr_1, arr_src, 1000, 100);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        for (int i = 0; i < size; i++) {
            arr_1[i] = i;
            arr_2[i] = i;
            arr_src[i] = size - 1 - i;
        }

        int count_tests = 5;

        /* === тест 1 === */
        ft_memccpy(arr_1, arr_src, 1000, 2);
        memccpy(arr_2, arr_src, 1000, 2);
        passed += ft_assert_int_arr_eq(arr_1, arr_2, size, size);

        /* === тест 2 === */
        ft_memccpy(arr_1, arr_src, 1000, 25);
        memccpy(arr_2, arr_src, 1000, 25);
        passed += ft_assert_int_arr_eq(arr_1, arr_2, size, size);

        /* === тест 3 === */
        ft_memccpy(arr_1, arr_src, 50, 100);
        memccpy(arr_2, arr_src, 50, 100);
        passed += ft_assert_int_arr_eq(arr_1, arr_2, size, size);


        /* === тест 4 === */
        ft_memccpy(arr_1, arr_src, 1, 300);
        memccpy(arr_2, arr_src, 1, 300);
        passed += ft_assert_int_arr_eq(arr_1, arr_2, size, size);

        /* === тест 5 ==== */
        ft_memccpy(arr_1, arr_src, 1000, 500);
        memccpy(arr_2, arr_src, 1000, 500);
        passed += ft_assert_int_arr_eq(arr_1, arr_2, size, size);

        failed = count_tests - passed;

        ft_print_test_result(passed, failed);

        /* === отчистка памяти === */
        free(arr_1);
        free(arr_2);
        free(arr_src);
    }
    
    /* ====== ft_memchr() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_memchr()");

        size_t len = 500;
        char *str = malloc(sizeof(char) * len);
        char *find_s_1 = (char *) (void *) 0;
        char *find_s_2 = (char *) (void *) 0;

        for (size_t i = 0; i < len; i++) {
            str[i] = i;
        }
        str[len - 1] = '\0';
        
        ft_teststart();
        find_s_1 = ft_memchr(str, 20, len);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        for (size_t i = 0; i < len - 1; i++) {
            find_s_1 = ft_memchr(str, (int) i, len);
            find_s_2 = memchr(str, (int) i, len);
            passed += ft_assert_str_eq(find_s_1, find_s_2);
        }

        failed = (int) len - 1 - passed;

        ft_print_test_result(passed, failed);

        /* === отчистка памяти === */
        free(str);
    }

    /* ====== ft_memcmp() ====== */
    {
        passed = 0;
        failed = 0;

        int size = 500;
        int *arr_1 = malloc(sizeof(int) * size);
        int *arr_2 = malloc(sizeof(int) * size);
        
        for (int i = 0; i < size; i++) {
            arr_1[i] = (i == 493) ? 5 : i;
            arr_2[i] = (i == 450) ? -2 : i;
        }

        ft_print_testname("ft_memcmp()");
        ft_teststart();
        ft_memcmp(arr_1, arr_2, (size_t) size);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        for (int i = 0; i < size; i++) {
            passed += ft_assert_int_eq(ft_memcmp(arr_1, arr_2, (size_t) size), 
                memcmp(arr_1, arr_2, (size_t) size));
        }

        failed = size - passed;

        ft_print_test_result(passed, failed);

        /* === отчистка памяти === */
        free(arr_1);
        free(arr_2);
    }
    
    /* ====== ft_memcpy() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_memcpy()");

        int size = 500;
        int *arr_src = malloc(sizeof(int) * size);
        int *arr_1 = malloc(sizeof(int) * size);
        int *arr_2 = malloc(sizeof(int) * size);

        for (int i = 0; i < size; i++) {
            arr_src[i] = size - 1 - i;
            arr_1[i] = i;
            arr_2[i] = i;
        }

        ft_teststart();
        ft_memcpy(arr_1, arr_src, 3);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        for (int i = 0; i < size; i++) {
            arr_src[i] = size - 1 - i;
            arr_1[i] = i;
            arr_2[i] = i;
        }

        for (int i = 0; i < size; i++) {
            ft_memcpy(arr_1, arr_src, (size_t) i);
            memcpy(arr_2, arr_src, (size_t) i);
            passed += ft_assert_int_arr_eq(arr_1, arr_2, size, size);
        }

        failed = size - passed;

        ft_print_test_result(passed, failed);

        /* === отчистка памяти === */
        free(arr_src);
        free(arr_1);
        free(arr_2);
    }
    
    /* ====== ft_memmove() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_memmove()");
        
        int size = 500;
        int *arr_src = malloc(sizeof(int) * size);
        int *arr_1 = malloc(sizeof(int) * size);
        int *arr_2 = malloc(sizeof(int) * size);

        for (int i = 0; i < size; i++) {
            arr_src[i] = size - 1 - i;
            arr_1[i] = i;
            arr_2[i] = i;
        }

        ft_teststart();
        ft_memmove(arr_1, arr_src, (size_t) size);
        ft_testend();
        ft_printtime();

        /* === отчистка памяти === */
        free(arr_src);
        free(arr_1);

        /* === повторная инициализация массивов === */
        arr_src = malloc(sizeof(int) * size);
        arr_1 = malloc(sizeof(int) * size);

        for (int i = 0; i < size; i++) {
            arr_src[i] = size - 1 - i;
            arr_1[i] = i;
        }

        /* === тестирование ===*/
        for (int i = 0; i < size; i++) {
            ft_memmove(arr_1, arr_src, (size_t) size);
            memmove(arr_2, arr_src, (size_t) size);
            passed += ft_assert_int_arr_eq(arr_1, arr_2, size, size);
        }

        failed = size - passed;

        ft_print_test_result(passed, failed);

        /* === отчистка памяти === */
        free(arr_src);
        free(arr_1);
        free(arr_2);
    }
    
    /* ====== ft_memset() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_memset()");

        size_t size = 128;
        char *str_1 = malloc(sizeof(char) * size);
        char *str_2 = malloc(sizeof(char) * size);
        str_1[size] = '\0';
        str_2[size] = '\0';

        ft_teststart();
        ft_memset(str_1, 48, 4);
        ft_testend();
        ft_printtime();
        
        /* === отчистка памяти и повторная инициализация === */
        free(str_1);
        str_1 = malloc(sizeof(char) * size);
        str_1[size] = '\0';

        /* === тестирование === */
        for (size_t i = 0; i < size; i++) {
            ft_memset(str_1, (int) i, size);
            memset(str_2, (int) i, size);
            passed += ft_assert_str_eq(str_1, str_2);
        }

        failed = size - passed;

        ft_print_test_result(passed, failed);

        /* === отчистка памяти === */
        free(str_1);
        free(str_2);
    }
    
    /* ====== ft_strchr() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_strchr()");
        
        size_t len = 120;
        char *str_1 = (char *) malloc(sizeof(char) * (int) len);
        char *str_2 = (char *) malloc(sizeof(char) * (int) len);

        for (size_t i = 1; i < len; i++) {
            str_1[i - 1] = (char) i;
            str_2[i - 1] = (char) i;
        }

        ft_teststart();
        ft_strchr(str_1, 20);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        for (size_t i = 1; i < len; i++) {
            passed += ft_assert_str_eq(strchr(str_1, (int) i), ft_strchr(str_1, (int) i));
        }

        failed = (int) len - passed - 1;

        ft_print_test_result(passed, failed);

        /* === отчистка памяти === */
        free(str_1);
        free(str_2);
    }

    /* ====== ft_strlcpy() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_strlcpy()");
    
        size_t len = 120;
        char *str_src = (char *) malloc(sizeof(char) * len);
        char *str_1 = (char *) malloc(sizeof(char) * len);

        for (size_t i = 1; i <= len; i++) {
            str_src[i - 1] = (char) i;
            str_1[i - 1] = (char) i + 20;
        }

        ft_teststart();
        ft_strlcpy(str_1, str_src, 100);
        ft_testend();
        ft_printtime();

        for (size_t i = 1; i <= len; i++) {
            str_src[i - 1] = (char) i;
            str_1[i - 1] = (char) i + 20;
        }

        /* === тестирование === */
        for (size_t i = 0; i < len; i++) {
            passed += ft_assert_int_eq((int) ft_strlcpy(str_1, str_src, len), (int) strlen(str_src));
        } 

        failed = (int) len - passed;

        ft_print_test_result(passed, failed);

        /* === отчистка памяти ===*/
        free(str_1);
        free(str_src);
    }

    /* ====== ft_strdup() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_strdup()");
        size_t len = 100;
        char *str = (char *) malloc(sizeof(char) * len);

        for (size_t i = 0; i < len; i++) {
            str[i] = (char) i + 1;
        }

        ft_teststart();
        ft_strdup(str);
        ft_testend();
        ft_printtime();

        /* === тестирование === */
        passed += ft_assert_str_eq(ft_strdup(str), strdup(str));
        failed = 1 - passed;

        ft_print_test_result(passed, failed);

        /* === отчистка памяти === */
        free(str);
    }

    /* ====== ft_strlcat() ====== */
    {
        passed = 0;
        failed = 0;

        ft_print_testname("ft_strlcat()");
    }

    return 0;
}
