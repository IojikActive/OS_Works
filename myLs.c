#include "myLs.h"

int main(int argc, char **argv)
{
    if(argv[1] == NULL){
        printf("Wrong argument error e23456283x2331 \n");
    }else{
        dptr = opendir(argv[1]);
        while ((ds = readdir(dptr)) != 0){      
              sprintf(buff, "%s/%s", argv[1], ds->d_name);
              stat(buff,&myStat);
            if((stat(ds->d_name, &myStat) ) ==0 ){ 
                pwd = getpwuid(myStat.st_uid);
				myGroup = getgrgid(myStat.st_gid);
            }

            // last modified
            time_t t = myStat.st_mtime;
            localtime_r(&t,&lt);
            char timebuf[80];
            strftime(timebuf,sizeof(timebuf),"%c",&lt);
                if(pwd != 0){
                    printf("%s \t %s \t %ld \t %s \t %ld \t %s ", pwd->pw_name,myGroup->gr_name,(long)myStat.st_size,timebuf,myStat.st_nlink,ds->d_name);
                    printf("\n");
                }else{
                    printf("%d \t %s \t %ld \t %s \t %ld \t %s", myStat.st_uid,myGroup->gr_name,(long)myStat.st_size,
                                                        timebuf, myStat.st_nlink,ds->d_name);
                    printf("\n");
                }
        }
        closedir(dptr);
    }
}
