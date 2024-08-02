files = main.o
gpp = g++ -c

main: $(files)
	g++ $(files) -o main

main.o: main.cpp
	$(gpp) main.cpp

run:
	./main

clean:
	rm -f *.o main

valgrind:
	valgrind --leak-check=full ./main