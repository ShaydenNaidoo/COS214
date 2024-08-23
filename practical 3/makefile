files = TestingMain.o LegionFactory.o RiverbankFactory.o WoodlandFactory.o OpenFieldFactory.o LegionUnit.o Infantry.o Cavalry.o  Artillery.o RiverbankInfantry.o RiverbankCavalry.o RiverbankArtillery.o WoodlandInfantry.o WoodlandCavalry.o WoodlandArtillery.o OpenFieldInfantry.o OpenFieldCavalry.o OpenFieldArtillery.o TacticalCommand.o BattleStrategy.o Flanking.o Fortification.o Ambush.o TacticalPlanner.o TacticalMemento.o WarArchives.o TacticalCommand.o UnitComponent.o Legion.o 
gpp = g++ -c

TestingMain: $(files)
	g++ $(files) -o TestingMain

TestingMain.o: LegionFactory.h RiverbankFactory.h WoodlandFactory.h OpenFieldFactory.h LegionUnit.h Infantry.h Cavalry.h  Artillery.h RiverbankInfantry.h RiverbankCavalry.h RiverbankArtillery.h WoodlandInfantry.h WoodlandCavalry.h WoodlandArtillery.h OpenFieldInfantry.h OpenFieldCavalry.h OpenFieldArtillery.h TacticalCommand.h BattleStrategy.h Flanking.h Fortification.h Ambush.h TacticalPlanner.h TacticalMemento.h WarArchives.h TacticalCommand.h UnitComponent.h Legion.h 
	$(gpp) TestingMain.cpp

MainManager.o: MainManager.cpp MainManager.h SoldierFactory.h Soldiers.h TacticalMemento.h
	$(gpp) MainManager.cpp

LegionUnit.o: LegionUnit.cpp LegionUnit.h 
	$(gpp) LegionUnit.cpp

LegionFactory.o: LegionFactory.cpp LegionFactory.h LegionUnit.h
	$(gpp) LegionFactory.cpp

RiverbankFactory.o: RiverbankFactory.cpp RiverbankFactory.h RiverbankInfantry.h RiverbankCavalry.h RiverbankArtillery.h
	$(gpp) InfantryFactory.cpp

WoodlandFactory.o: WoodlandFactory.cpp WoodlandFactory.h WoodlandInfantry.h WoodlandCavalry.h WoodlandArtillery.h
	$(gpp) WoodlandFactory.cpp

OpenFieldFactory.o: OpenFieldFactory.cpp OpenFieldFactory.h OpenFieldFactory.h OpenFieldInfantry.h OpenFieldCavalry.h OpenFieldArtillery.h
	$(gpp) OpenFieldFactory.cpp

Infantry.o: Infantry.cpp Infantry.h LegionUnit.h TacticalMemento.h
	$(gpp) Infantry.cpp

Cavalry.o: Cavalry.cpp Cavalry.h LegionUnit.h TacticalMemento.h
	$(gpp) Cavalry.cpp

Artillery.o: Artillery.cpp Artillery.h LegionUnit.h TacticalMemento.h
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

TacticalCommand.o: TacticalCommand.cpp TacticalCommand.h
	$(gpp) TacticalCommand.cpp

BattleStrategy.o: BattleStrategy.cpp BattleStrategy.h
	$(gpp) BattleStrategy.cpp

Flanking.o: Flanking.cpp Flanking.h
	$(gpp) Flanking.cpp

Fortification.o: Fortification.cpp Fortification.h	
	$(gpp) Fortification.cpp

Ambush.o: Ambush.cpp Ambush.h
	$(gpp) Ambush.cpp

TacticalPlanner.o: TacticalPlanner.cpp TacticalPlanner.h
	$(gpp) TacticalPlanner.cpp

TacticalMemento.o: TacticalMemento.cpp TacticalMemento.h
	$(gpp) TacticalMemento.cpp

WarArchives.o: WarArchives.cpp WarArchives.h
	$(gpp) WarArchives.cpp

TacticalCommand.o: TacticalCommand.cpp TacticalCommand.h
	$(gpp) TacticalCommand.cpp

UnitComponent.o: UnitComponent.cpp UnitComponent.h
	$(gpp) UnitComponent.cpp

Legion.o: Legion.cpp Legion.h
	$(gpp) Legion.cpp


Memento.o: Memento.cpp Memento.h
	$(gpp) Memento.cpp

run: TestingMain
	./TestingMain

clean:
	rm -f *.o TestingMain

valgrind:
	valgrind --leak-check=full ./TestingMain