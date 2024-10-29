TwoSum: TwoSum.o
	g++ -g -o TwoSum.exe TwoSum.o -pthread    

TwoSum.o: TwoSum/TwoSum.cpp
	g++ -g  -c -pthread TwoSum/TwoSum.cpp
