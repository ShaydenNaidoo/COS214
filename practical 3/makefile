files = TestingMain.o SoldierFactory.o Soldiers.o InfantryFactory.o ShieldBearerFactory.o BoatmanFactory.o Infantry.o ShieldBearer.o Boatman.o MainManager.o  Memento.o BattleManager.o
gpp = g++ -c

TestingMain: $(files)
	g++ $(files) -o TestingMain

TestingMain.o: TestingMain.cpp SoldierFactory.o InfantryFactory.h ShieldBearerFactory.h BoatmanFactory.h Infantry.h ShieldBearer.h Boatman.h BattleManager.o
	$(gpp) TestingMain.cpp
	
MainManager.o: MainManager.cpp MainManager.h SoldierFactory.h Soldiers.h Memento.h
	$(gpp) MainManager.cpp


run: TestingMain
	./TestingMain

clean:
	rm -f *.o TestingMain

valgrind:
	valgrind --leak-check=full ./TestingMain