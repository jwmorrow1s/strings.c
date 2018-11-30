#include"strings.h"
#include<stdlib.h>

int string_length(char *str){
  int length = 0;
  for(int i = 0; str[i] != '\0'; i++){
    ++length;
  }
  return length;
}

char *string_reverse_fr(char * str){
  int length = string_length(str);
  char *ret = malloc(length * sizeof(char));
  for(int forward = 0, reverse = length - 1; forward < length; forward++, reverse--){
    ret[forward] = str[reverse];
  }
  return ret;
}
