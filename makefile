strings = impls/strings.c
main = src/main.c
test = tests/main.c
app: ${strings}
	gcc -o app ${main} ${strings} -I modules 
clean:
	if [ -e app ]; then rm app; fi
	if [ -e test1 ]; then rm test1; fi
tests: ${test}
	gcc -o test1 ${test} ${strings} -I modules
run:
	@bash scripts/run.sh
