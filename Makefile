main6: a.o bmi_calculator.o
	g++ -o  a.o bmi_calculator.o

timer6.o: a.cpp a.h
	g++ -c a.cpp

main6.o: bmi_calculator.cpp a.h
	g++ -c bmi_calculator.cpp

clean:
	rm timer6 *.o
