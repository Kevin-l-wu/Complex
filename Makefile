Test : Main.o Complex.o
	g++ Main.o Complex.o -o Test
	
.PHONY:clean
clean:
	rm -rf Test
	rm -rf *.o
