all: main

main: functions.o Player.o Item.o Misc_Item.o Weapons.o Armor.o Fighter.o Wizard.o main.o
	g++ functions.o Player.o Item.o Misc_Item.o Weapons.o Armor.o Fighter.o Wizard.o main.o -o main
	./main

Player.o: Player.cpp
	g++ -c Player.cpp

Item.o: Item.cpp
	g++ -c Item.cpp

Misc_Item.o: Misc_Item.cpp
	g++ -c Misc_Item.cpp

Weapons.o: Weapons.cpp
	g++ -c Weapons.cpp

Armor.o: Armor.cpp
	g++ -c Armor.cpp

Fighter.o: Fighter.cpp
	g++ -c Fighter.cpp

Wizard.o: Wizard.cpp
	g++ -c Wizard.cpp




functions.o: functions.cpp
	g++ -c functions.cpp

main.o: main.cpp
	g++ -c main.cpp


FT: functions.o Player.o Item.o Misc_Item.o Weapons.o Armor.o Fighter.o Wizard.o Fighter_Test.o
	g++ functions.o Player.o Item.o Misc_Item.o Weapons.o Armor.o Fighter.o Wizard.o Fighter_Test.o -o Fighter_Test
	./Fighter_Test

Fighter_Test.o: Fighter_Test.cpp
	g++ -c Fighter_Test.cpp

WT: functions.o Item.o  Weapons.o Weapons_Test.o
	g++ functions.o Item.o  Weapons.o Weapons_Test.o -o Weapons_Test
	./Weapons_Test

Weapons_Test.o: Weapons_Test.cpp
	g++ -c Weapons_Test.cpp

Tests: functions.o Player.o Item.o Misc_Item.o Weapons.o Armor.o Fighter.o Wizard.o functions_tests.o
	g++ functions.o Player.o Item.o Misc_Item.o Weapons.o Armor.o Fighter.o Wizard.o functions_tests.o -o Tests
	./Tests



functions_tests.o: functions_tests.cpp
	g++ -c functions_tests.cpp


clean:
	rm -rf *o main Tests Fighter_Test Weapons_Test