TARGET=Main
OBJECT=Main.o StaffClass.o
$(TARGET):$(OBJECT)
	g++ -o $(TARGET) $(OBJECT)
%*.o:%*.cpp
	g++ -c $< -o $@
.PHONY:clean
clean:
	rm -f $(TARGET) $(OBJECT)
