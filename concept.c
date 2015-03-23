#include <stdio.h>
#include <malloc.h>

#define LEX_DELIM 1
#define LEX_WORD 2

struct lexem{
  char type;
};

char *delims = ",./~'\"&*+-";
int isdelim(char simbol){
}

struct lexem* get_lexem(){
}

int main(int argc, char** argv){
  char *filename = argv[1];
  char *source = malloc(2000), *sptr = source;
  printf("file name is: %s\n", argv[1]);
  FILE *fsource = fopen(filename, "r");
  char simbol;
  while((simbol = fgetc(fsource)) != EOF){
    *sptr = simbol;
    sptr++;
  }

  while(){
  }
  printf("file content is: %s\n", source);
  fclose(fsource);
}
