#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <pwd.h> 
#include <grp.h>

#define MAX_BLOCK_VALUE (512)

DIR  *dptr; //поток каталога 
struct dirent  *ds; // структура входа в каталог
struct stat     myStat; // структура атрибутов
struct tm lt; //структура времени
struct passwd *pwd; // для UserId
struct group *myGroup; // группа пользователей

char  buff[MAX_BLOCK_VALUE];





