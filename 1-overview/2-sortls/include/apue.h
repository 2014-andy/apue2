#ifndef APUE_H
#define APUE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE	4096	/* max line length */

void err_quit(const char *fmt, ...);
void err_sys(const char *fmt, ...);

void Qsort(char *v[], int left, int right);

#endif	/* APUE_H */
