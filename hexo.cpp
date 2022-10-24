#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	char cmd[200];
	char fn[200];
	if(argc == 2)
	{
	    sprintf(cmd,"c9 open %s",argv[1]);
	    //system(cmd);
	    return 0;
	}
	time_t timep;
	struct tm *p;
	time(&timep);
	p = localtime(&timep);
	sprintf(fn,"%d-%d-%d-%d-%d-%d.md",1900+p->tm_year,1+p->tm_mon,p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
	FILE * fp;
	fp = fopen(fn,"w");
	fprintf(fp,"title: []\ndate: %d-%d-%d %d:%d:%d\ntags: \n---\n<!--more-->\n",1900+p->tm_year,1+p->tm_mon,p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
	fclose(fp);
	//sprintf(cmd,"c9 open %s",fn);
	//system(cmd);
return 0;
}
