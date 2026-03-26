all:
	c++ *.cpp -o abuild/main

run: all
	./abuild/main

clean:
	rm -rf abuild/