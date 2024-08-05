files = main.o SoldierFactory.o Soldiers.o InfantryFactory.o ShieldBearerFactory.o BoatmanFactory.o Infantry.o ShieldBearer.o Boatman.o
gpp = g++ -c

main: $(files)
	g++ $(files) -o main

main.o: main.cpp InfantryFactory.h ShieldBearerFactory.h BoatmanFactory.h
	$(gpp) main.cpp

Soldiers.o: Soldiers.cpp Soldiers.h
	$(gpp) Soldiers.cpp

SoldierFactory.o: SoldierFactory.cpp SoldierFactory.h Soldiers.h
	$(gpp) SoldierFactory.cpp

InfantryFactory.o: InfantryFactory.cpp InfantryFactory.h Infantry.h
	$(gpp) InfantryFactory.cpp

ShieldBearerFactory.o: ShieldBearerFactory.cpp ShieldBearerFactory.h ShieldBearer.h
	$(gpp) ShieldBearerFactory.cpp

BoatmanFactory.o: BoatmanFactory.cpp BoatmanFactory.h Boatman.h
	$(gpp) BoatmanFactory.cpp

Infantry.o: Infantry.cpp Infantry.h Soldiers.h
	$(gpp) Infantry.cpp

ShieldBearer.o: ShieldBearer.cpp ShieldBearer.h Soldiers.h
	$(gpp) ShieldBearer.cpp

Boatman.o: Boatman.cpp Boatman.h Soldiers.h
	$(gpp) Boatman.cpp
	
run:
	./main

clean:
	rm -f *.o main

valgrind:
	valgrind --leak-check=full ./main