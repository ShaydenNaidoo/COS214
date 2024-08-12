files = TestingMain.o SoldierFactory.o Soldiers.o InfantryFactory.o ShieldBearerFactory.o BoatmanFactory.o Infantry.o ShieldBearer.o Boatman.o MainManager.o PrototypeRegistry.o Memento.o BattleManager.o
gpp = g++ -c

TestingMain: $(files)
	g++ $(files) -o TestingMain

TestingMain.o: TestingMain.cpp SoldierFactory.o InfantryFactory.h ShieldBearerFactory.h BoatmanFactory.h Infantry.h ShieldBearer.h Boatman.h BattleManager.o
	$(gpp) TestingMain.cpp

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

MainManager.o: MainManager.cpp MainManager.h SoldierFactory.h Soldiers.h Memento.h
	$(gpp) MainManager.cpp

PrototypeRegistry.o: PrototypeRegistry.cpp PrototypeRegistry.h Soldiers.h Infantry.h ShieldBearer.h Boatman.h
	$(gpp) PrototypeRegistry.cpp

Memento.o: Memento.cpp Memento.h
	$(gpp) Memento.cpp

BattleManager.o: BattleManager.cpp BattleManager.h MainManager.h
	$(gpp) BattleManager.cpp

run: TestingMain
	./TestingMain

clean:
	rm -f *.o TestingMain

valgrind:
	valgrind --leak-check=full ./TestingMain