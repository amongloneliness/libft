#ifndef LIBTEST_H
#define LIBTEST_H

/*                      описание
 *  -------------------------------------------------
 *  Эта библиотека служит вспомогательным инструментом
 *  для тестирования результатов поведения функций: 
 *  скорости выполнения, количества пройденных тестов
 *  и правильных результатов. 
 *  -------------------------------------------------
 *                    
 *   
 *                    использование
 *  -------------------------------------------------
 *    Код программы:
 * 
 *      ft_print_testname( < имя теста > );
 *      ft_teststart();
 *      // код программы и расчет результатов
 *      ft_testend();
 *      ft_printtime();
 *      ft_print_test_result(< кол-во пройденных >, < кол-во проваленных >);
 * 
 *                      директивы      
 *  -------------------------------------------------
 *   <sys/time.h>   -   работа с временем выполнениия
 *   <stdio.h>      -   вывод в консоль
 *   <string.h>     -   использование strlen()
 * 
 * 
 *                      прототипы
 *  -------------------------------------------------
 *  void    ft_setcolor(..);                   изменение цвета консоли
 *  void    ft_teststart(..);                  запись данных времени начала тестирования
 *  void    ft_testend(..);                    запись данных о времени окончания тестирования
 *  void    ft_printtime(..);                  вывод данных о времени работы программы
 *  void    ft_print_testname(..);             вывод названия тестирования
 *  void    ft_print_test_result(..);          вывод информации о пройденных тестах
 *  int     ft_assert_int_eq(..);              проверка на равенство int значений
 *  int     ft_assert_char_eq(..);             проверка на равенство char значений
 *  int     ft_assert_str_eq(..);              проверка двух строк на равенство
 *  int     ft_assert_double_eq(..);           проверка на равенство double значений
 *  int     ft_assert_float_eq(..);            проверка двух float массивов на равенство
 *  int     ft_assert_int_arr(..);             проверка двух int массивов на равенство
 *  int     ft_assert_double_arr_eq(..);       проверка двух double массивов на равенство
 *  int     ft_assert_float_arr_eq(..);        проверка двух float массивов на равенство
 *  -------------------------------------------------
 */

#include "libtextcolor.h"
#include <locale.h>
#include <stdio.h>
#include <sys/time.h>
#include <string.h>

void    ft_setcolor(char *color);
void    ft_teststart();
void    ft_testend();
void    ft_printtime();
void    ft_print_testname(char *testname);
void    ft_print_test_result(int passed, int failed);
int     ft_assert_int_eq(int test_case, int expected);
int     ft_assert_char_eq(char c1, char c2);
int     ft_assert_str_eq(char *test_case, char *expected);
int     ft_assert_double_eq(double test_case, double expected);
int     ft_assert_float_eq(float test_case, float expected);
int     ft_assert_int_arr_eq(int *test_case, int *expected, int size_1, int size_2);
int     ft_assert_double_arr_eq(double *test_case, double *expected, int size_1, int size_2);
int     ft_assert_float_arr_eq(float *test_case, float *expected, int size_1, int size_2);


#endif