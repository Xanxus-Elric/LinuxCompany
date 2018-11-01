TARGET=Main
OBJECT=Main.o Class.o
$(TARGET):$(OBJECT)
	g++ -o $(TARGET) $(OBJECT)
%*.o:%*.cpp
	g++ -o $@ -c $<
.PHONY:clean
clean:
	rm -f $(TARGET) $(OBJECT)
