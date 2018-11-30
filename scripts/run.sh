#!/bin/bash
MAIN='src/main.c'
TEST='tests/main.c'
STRINGS='impls/strings.c' 

gcc -o test1 $TEST $STRINGS -I modules 
./test1

if [ $? -lt 1 ]
then
	gcc -o app $MAIN $STRINGS -I modules 
	./app
	rm app && rm test1
	echo "Completed Successfully"
else
	rm test1
	echo "Run Failure"
fi
