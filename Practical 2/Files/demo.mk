files = DemoMain.o SoldierFactory.o Soldiers.o InfantryFactory.o ShieldBearerFactory.o BoatmanFactory.o Infantry.o ShieldBearer.o Boatman.o FactoryManager.o PrototypeRegistry.o Memento.o
gpp = g++ -c

DemoMain: $(files)
	g++ $(files) -o DemoMain

DemoMain.o: DemoMain.cpp SoldierFactory.o InfantryFactory.h ShieldBearerFactory.h BoatmanFactory.h Infantry.h ShieldBearer.h Boatman.h 
	$(gpp) DemoMain.cpp

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

FactoryManager.o: FactoryManager.cpp FactoryManager.h SoldierFactory.h Soldiers.h Memento.h
	$(gpp) FactoryManager.cpp

PrototypeRegistry.o: PrototypeRegistry.cpp PrototypeRegistry.h Soldiers.h Infantry.h ShieldBearer.h Boatman.h
	$(gpp) PrototypeRegistry.cpp

Memento.o: Memento.cpp Memento.h
	$(gpp) Memento.cpp

run: DemoMain
	./DemoMain

clean:
	rm -f *.o DemoMain

valgrind:
	valgrind --leak-check=full ./DemoMain