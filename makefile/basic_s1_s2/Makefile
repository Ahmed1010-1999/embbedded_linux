file=test.c
#.RECIPEPREFIX=>
display:
#if we wanna to print hello0000 w000orld directly we use @ before command 
	@echo $(PATH)
all:display
	gcc $(file) -o cpprogram 
test:
	python analysis.py
build:
	gcc $(file) -o test.o
clean:
	@rm *.o
	@echo "`date` done" > log.txt
