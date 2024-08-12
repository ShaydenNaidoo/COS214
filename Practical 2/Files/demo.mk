files = DemoMain.o SoldierFactory.o Soldiers.o InfantryFactory.o ShieldBearerFactory.o BoatmanFactory.o Infantry.o ShieldBearer.o Boatman.o MainManager.o Memento.o BattleManager.o
gpp = g++ -c -g

DemoMain: $(files)
	g++ -g $(files) -o DemoMain

DemoMain.o: DemoMain.cpp SoldierFactory.o InfantryFactory.h ShieldBearerFactory.h BoatmanFactory.h Infantry.h ShieldBearer.h Boatman.h Memento.h
	$(gpp) DemoMain.cpp

Soldiers.o: Soldiers.cpp Soldiers.h Memento.h
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



Memento.o: Memento.cpp Memento.h
	$(gpp) Memento.cpp

BattleManager.o: BattleManager.cpp BattleManager.h MainManager.h
	$(gpp) BattleManager.cpp

MainManager.o: MainManager.cpp MainManager.h SoldierFactory.h Soldiers.h Memento.h
	$(gpp) MainManager.cpp

run: DemoMain
	./DemoMain

clean:
	rm -f *.o DemoMain

debug:
	gdb $(files) DemoMain

valgrind:
	valgrind --leak-check=full ./DemoMain