#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <pwd.h> 

#define MAX_BLOCK_VALUE (512)

//const int MAX_BLOCK_VALUE = 512;

DIR  *dptr; //поток каталога 
struct dirent  *ds; // структура входа в каталог
struct stat     myStat; // структура атрибутов
struct tm lt; //структура времени
struct passwd *pwd; // для UserId

char  buff[MAX_BLOCK_VALUE];





