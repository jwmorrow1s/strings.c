#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include"strings.h"

bool strings_test();

int main(int argc, char** argv){
	if(!strings_test()){
		return 1;
	}

	return 0;
}

bool strings_test(){
	char *test_string = "This is a test";
	int test_string_length = 14;
	char *string_reversed = "tset a si sihT";
	bool test_string_length_pass = false;
	bool test_string_reverse_pass = false;
	int string_length_res = string_length(test_string);
	char* string_reversed_res = string_reverse_fr(test_string);

	if(string_length_res == test_string_length){
		printf("string_length(%s):\nExpected: %d\nActual: %d \n\nPASS\n\n", test_string, 14, string_length(test_string));
		test_string_length_pass = true;
	}
	else{
		printf("string_length(%s):\nExpected: %d\nActual: %d \n\nFAIL\n\n", test_string, 14, string_length(test_string));
		test_string_length_pass = false;
	}

	if(strncmp(string_reversed_res, string_reversed, test_string_length) == 0){
		printf("string_reversed_fr(%s):\nExpected: %s\nActual: %s\n\nPASS\n\n", test_string, string_reversed, string_reversed_res);
		test_string_reverse_pass = true;
	}
	else{
		printf("string_reversed_fr(%s):\nExpected: %s\nActual: %s\n\nFAIL\n\n", test_string, string_reversed, string_reversed_res);
		test_string_reverse_pass = false;
	}

	free(string_reversed_res);
	if(test_string_length_pass && test_string_reverse_pass){
		return true;
	}
	return false;
}
