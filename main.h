#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int getprintfun(va_list args, const char *cursor);
int writestr(char *str, int len);
int writechar(char c);
int _printf(const char *format, ...);
int _printchar(va_list args);
int _printstr(va_list args);
int _printperc(void);
int _printint(va_list args);
int intToStr(signed int x);


#endif
