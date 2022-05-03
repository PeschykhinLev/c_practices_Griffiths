encrypt.o: encrypt.h encrypt.c
	gcc -c encrypt.c

message_hider.o: message_hider.c encrypt.h
	gcc -c message_hider.c

launch: encrypt.o message_hider.o
	gcc encrypt.o message_hider.o -o launch