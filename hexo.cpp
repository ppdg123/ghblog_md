#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	time_t timep;
	struct tm *p;
	time(&timep);
	p = localtime(&timep);
	char cmd[200];
	char fn[200];
	sprintf(fn,"%d-%d-%d-%d-%d-%d.md",1900+p->tm_year,1+p->tm_mon,p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
	FILE * fp;
	fp = fopen(fn,"w");
	fprintf(fp,"title: []\ndate: %d-%d-%d %d:%d:%d\ntags: \n---\n",1900+p->tm_year,1+p->tm_mon,p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
	fclose(fp);
	sprintf(cmd,"haroopad %s",fn);
	system(cmd);
return 0;
}
