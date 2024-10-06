files = TestingMain.o
gpp = g++ -g -c

Main: $(files)
	g++ -g $(files) -o Main

TestingMain.o: TestingMain.cpp
	$(gpp) TestingMain.cpp

run: Main
	./Main

clean:
	rm -f *.o Main

valgrind: Main
	valgrind --leak-check=full ./Main

debug: Main
	gdb Main