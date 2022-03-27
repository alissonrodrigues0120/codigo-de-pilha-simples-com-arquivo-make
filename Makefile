all:	pilhamake

PLUS = g++

pilhamake: main.o pilha.o
	$(PLUS) main.o pilha.o  -o pilhamake

main.o: main.cpp
	$(PLUS) -c main.cpp 

pilha.o: pilha.cpp
	$(PLUS) -c pilha.cpp 

clean:
	rm *.o pilhamake

executar:
	./pilhamake