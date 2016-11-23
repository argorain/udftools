#ifndef __UTILS_H__
#define __UTILS_H__

#include <ecma_167.h>
#include <libudffs.h>

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int64_t udf_lseek64(int fd, int64_t offset, int whence);
int print_disc(struct udf_disc *disc);

#endif //__UTILS_H__
