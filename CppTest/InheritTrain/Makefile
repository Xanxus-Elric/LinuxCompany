TARGET=Main
OBJECT=BoxClass.o Main.o
$(TARGET):$(OBJECT)
	g++ -o $(TARGET) $(OBJECT)
%*.o:%*.cpp
	g++ -c $< -o $@
.PHONY:clean
clean:
	rm -f $(TARGET) $(OBJECT)

