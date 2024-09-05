files = TestingMain.o FertilizerTruck.o FertilizerLogistics.o FarmUnit.o FarmUnitComposite.o FarmUnitDecorator.o FarmTraversal.o Barn.o bfTravel.o CropField.o dfTravel.o DrySoil.o FertilizeLogistics.o FertilizerDecorator.o FloodedSoil.o FruitfulSoil.o HarvestLogistics.o Logistics.o MainManager.o DeliveryTruck.o DeliveryTruck.o SoilState.o StorageDecorator.o TruckObserver.o

TestingMain: $(files)
	g++ $(files) -o TestingMain

TestingMain.o: TestingMain.cpp MainManager.o
	$(gpp) TestingMain.cpp

FertilizerLogistics.o: FertilizerLogistics.cpp FertilizerLogistics.h Logistics.h
	$(gpp) FertilizerLogistics.cpp

FarmUnit.o: FarmUnit.cpp FarmUnit.h
	$(gpp) FarmUnit.cpp

FarmUnitComposite.o: FarmUnitComposite.cpp FarmUnitComposite.h FarmUnit.h
	$(gpp) FarmUnitComposition.cpp

FarmUnitDecorator.o: FarmUnitDecorator.cpp FarmUnitDecorator.h FarmUnit.h
	$(gpp) FarmUnitDecorator.cpp

FarmTraversal.o: FarmTraversal.cpp FarmTraversal.h FarmUnit.h
	$(gpp) FarmTraversal.cpp

Barn.o: Barn.cpp Barn.h FarmUnit.h
	$(gpp) Barn.cpp

bfTravel.o: bfTravel.cpp bfTravel.h FarmTraversal.h FarmUnitComposite.h
	$(gpp) bfTravel.cpp

CropField.o: CropField.cpp CropField.h FarmUnit.h	
	$(gpp) CropField.cpp

dfTravel.o: dfTravel.cpp dfTravel.h FarmTraversal.h FarmUnitComposite.h
	$(gpp) dfTravel.cpp

DrySoil.o: DrySoil.cpp DrySoil.h SoilState.h
	$(gpp) DrySoil.cpp

FertilizeLogistics.o: FertilizeLogistics.cpp FertilizeLogistics.h Logistics.h
	$(gpp) FertilizeLogistics.cpp

FertilizerDecorator.o: FertilizerDecorator.cpp FertilizerDecorator.h FertilizerLogistics.h
	$(gpp) FertilizerDecorator.cpp

FloodedSoil.o: FloodedSoil.cpp FloodedSoil.h SoilState.h
	$(gpp) FloodedSoil.cpp

FruitfulSoil.o: FruitfulSoil.cpp FruitfulSoil.h SoilState.h
	$(gpp) FruitfulSoil.cpp

HarvestLogistics.o: HarvestLogistics.cpp HarvestLogistics.h Logistics.h TruckObserver.h
	$(gpp) HarvestLogistics.cpp

Logistics.o: Logistics.cpp Logistics.h
	$(gpp) Logistics.cpp

DeliveryTruck.o: DeliveryTruck.cpp DeliveryTruck.h HarvestLogistics.h TruckObserver.h
	$(gpp) DeliveryTruck.cpp

MainManager.o: MainManager.cpp MainManager.h FarmUnit.h FarmUnitComposite.h FarmUnitDecorator.h FarmTraversal.h Barn.h bfTravel.h CropField.h dfTravel.h DrySoil.h FertilizeLogistics.h FertilizerDecorator.h FloodedSoil.h FruitfulSoil.h HarvestLogistics.h Logistics.h DeliveryTruck.h SoilState.h StorageDecorator.h TruckObserver.h
	$(gpp) MainManager.cpp

SoilState.o: SoilState.cpp SoilState.h CropField.h
	$(gpp) SoilState.cpp

StorageDecorator.o: StorageDecorator.cpp StorageDecorator.h FarmUnit.h
	$(gpp) StorageDecorator.cpp

TruckObserver.o: TruckObserver.cpp TruckObserver.h DeliveryTruck.h Logistics.h
	$(gpp) TruckObserver.cpp

FertilizerTruck.o: FertilizerTruck.cpp FertilizerTruck.h FertilizerLogistics.h TruckObserver.h
	$(gpp) FertilizerTruck.cpp
	
run: TestingMain
	./TestingMain

clean:
	rm -f *.o TestingMain

valgrind: TestingMain
	valgrind --leak-check=full ./TestingMain

suppressed: TestingMain
	valgrind -s --leak-check=full ./TestingMain