#ifndef SRC_LIB_S21_SMART_CALC_
#define SRC_LIB_S21_SMART_CALC_

#include <cairo.h>
#include <gtk/gtk.h>
#include <math.h>
#include <regex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1024
#define MAX_USER_LEN 255

int notation_convert(char *src, char *dst);
int calculation(char *src, double *result);

#endif  //  SRC_LIB_S21_SMART_CALC_
