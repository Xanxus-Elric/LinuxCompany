TARGET=Main
OBJECT=DateClass.o OverloadOperator.o
$(TARGET):$(OBJECT)
	g++ -o $(TARGET) $(OBJECT)
%*.o:%*.c
	g++ -c $< -o $@
.PHONY:clean
clean:
	rm -f $(TARGET) $(OBJECT)
