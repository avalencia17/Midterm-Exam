all: mid19 utest

mid19: mid19.cpp
	g++ mid19.cpp -Wall -omid19 -lssl -lcrypto

utest: mid19.cpp
	g++ mid19.cpp -Wall -outest -lssl -lcrypto -DPROFILE

clean:
	rm -f mid19
	rm -f utest
