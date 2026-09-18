PA1: Resource.o Book.o Laptop.o StudyRoom.o main.o 
	g++ Resource.o main.o Book.o Laptop.o StudyRoom.o -o PA1

main.o: main.cpp Resource.h Inventory.h
	g++ -c main.cpp

Resource.o: Resource.cpp Resource.h Book.o Laptop.o StudyRoom.o
	g++ -c Resource.cpp

Book.o: Book.h Book.cpp
	g++ -c Book.cpp

Laptop.o: Laptop.h Laptop.cpp
	g++ -c Laptop.cpp

StudyRoom.o: StudyRoom.h StudyRoom.cpp
	g++ -c StudyRoom.cpp

clean:
	rm -f *.o PA1
