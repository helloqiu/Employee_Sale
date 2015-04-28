build : main.cpp Sales.cpp Sales.h Employee.cpp Employee.h
	g++ -o main main.cpp Sales.cpp Employee.cpp
clean : main
	rm main
