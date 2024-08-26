files = TestingMain.o Legion.o LegionUnit.o Cavalry.o Infantry.o Artillery.o RiverbankInfantry.o RiverbankCavalry.o RiverbankArtillery.o WoodlandInfantry.o WoodlandCavalry.o WoodlandArtillery.o OpenFieldInfantry.o OpenFieldCavalry.o OpenFieldArtillery.o LegionFactory.o RiverbankFactory.o WoodlandFactory.o OpenFieldFactory.o MainManager.o
gpp = g++ -c

TestingMain: $(files)
	g++ $(files) -o TestingMain

TestingMain.o: TestingMain.cpp MainManager.o
	$(gpp) TestingMain.cpp

LegionUnit.o: LegionUnit.cpp LegionUnit.h
	$(gpp) LegionUnit.cpp

Legion.o : Legion.cpp Legion.h LegionUnit.h
	$(gpp) Legion.cpp

Infantry.o: Infantry.cpp Infantry.h LegionUnit.h
	$(gpp) Infantry.cpp

Cavalry.o: Cavalry.cpp Cavalry.h LegionUnit.h
	$(gpp) Cavalry.cpp

Artillery.o: Artillery.cpp Artillery.h LegionUnit.h
	$(gpp) Artillery.cpp

RiverbankInfantry.o: RiverbankInfantry.cpp RiverbankInfantry.h Infantry.h
	$(gpp) RiverbankInfantry.cpp

RiverbankCavalry.o: RiverbankCavalry.cpp RiverbankCavalry.h Cavalry.h
	$(gpp) RiverbankCavalry.cpp

RiverbankArtillery.o: RiverbankArtillery.cpp RiverbankArtillery.h Artillery.h
	$(gpp) RiverbankArtillery.cpp

WoodlandInfantry.o: WoodlandInfantry.cpp WoodlandInfantry.h Infantry.h
	$(gpp) WoodlandInfantry.cpp

WoodlandCavalry.o: WoodlandCavalry.cpp WoodlandCavalry.h Cavalry.h
	$(gpp) WoodlandCavalry.cpp

WoodlandArtillery.o: WoodlandArtillery.cpp WoodlandArtillery.h Artillery.h
	$(gpp) WoodlandArtillery.cpp

OpenFieldInfantry.o: OpenFieldInfantry.cpp OpenFieldInfantry.h Infantry.h
	$(gpp) OpenFieldInfantry.cpp

OpenFieldCavalry.o: OpenFieldCavalry.cpp OpenFieldCavalry.h Cavalry.h
	$(gpp) OpenFieldCavalry.cpp

OpenFieldArtillery.o: OpenFieldArtillery.cpp OpenFieldArtillery.h Artillery.h
	$(gpp) OpenFieldArtillery.cpp

LegionFactory.o: LegionFactory.cpp LegionFactory.h Infantry.h Cavalry.h Artillery.h
	$(gpp) LegionFactory.cpp

RiverbankFactory.o: RiverbankFactory.cpp RiverbankFactory.h RiverbankInfantry.h RiverbankCavalry.h RiverbankArtillery.h
	$(gpp) RiverbankFactory.cpp

WoodlandFactory.o: WoodlandFactory.cpp WoodlandFactory.h WoodlandInfantry.h WoodlandCavalry.h WoodlandArtillery.h
	$(gpp) WoodlandFactory.cpp

OpenFieldFactory.o: OpenFieldFactory.cpp OpenFieldFactory.h OpenFieldInfantry.h OpenFieldCavalry.h OpenFieldArtillery.h
	$(gpp) OpenFieldFactory.cpp

TacticalCommand.o: TacticalCommand.cpp TacticalCommand.h BattleStrategy.h
	$(gpp) TacticalCommand.cpp

BattleStrategy.o: BattleStrategy.cpp BattleStrategy.h
	$(gpp) BattleStrategy.cpp

Ambush.o: Ambush.cpp Ambush.h BattleStrategy.h
	$(gpp) Ambush.cpp

Fortification.o: Fortification.cpp Fortification.h BattleStrategy.h
	$(gpp) Fortification.cpp

Flanking.o: Flanking.cpp Flanking.h BattleStrategy.h
	$(gpp) Flanking.cpp

MainManager.o: MainManager.cpp MainManager.h LegionFactory.h RiverbankFactory.h WoodlandFactory.h OpenFieldFactory.h LegionUnit.h Infantry.h Cavalry.h Artillery.h TacticalCommand.h
	$(gpp) MainManager.cpp

run: TestingMain
	./TestingMain

clean:
	rm -f *.o TestingMain

valgrind: TestingMain
	valgrind --leak-check=full ./TestingMain

suppressed: TestingMain
	valgrind -s --leak-check=full ./TestingMain