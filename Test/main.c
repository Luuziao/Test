#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int main(int argc,char* argv[]){
    for(int i = 0;i<argc;i++){
        printf("[%d]%s",i,argv[i]);
    }
    printf("\n");
    int opt = 0;

    
    char *optstr = "a::b:c:di:e";
    while((opt = getopt(argc,argv,optstr))!=-1){
        printf("opt = %c\t\t",opt);
        printf("optarg = %s\t\t",optarg);
        printf("optind = %d\t\t",optind);
        printf("argv[optind] = %s\n",argv[optind]);
    }
    #if 0
    int option_index = 0;
    char *string ="a::b:c:di:p:";
    static struct option long_options[] = {
        {"ip",required_argument,NULL,140},
        {"port",required_argument,NULL,141},
        {NULL,0,NULL,0}
    };
    while((opt = getopt_long(argc,argv,string,long_options,&option_index))!=-1){
        printf("opt =%d,%c\t\t",opt,opt);
        printf("optarg = %s\t\t",optarg);
        printf("\n");
    }
    #endif
}