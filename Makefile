target:=main
all:
	g++ -o $(target) -Wall -Werror $(target).cpp
test:
	./$(target) User
	./$(target)
clean:
	rm $(target).exe $(target)