TARGET=Main
OBJECT=Main.o Tank.o
$(TARGET):$(OBJECT)
	g++ -o $(TARGET) $(OBJECT) -lpthread
%*.o:%*.cpp
	g++ -o $@ -c $<
.PHONY:clean
clean:
	rm -f $(TARGET) $(OBJECT)
