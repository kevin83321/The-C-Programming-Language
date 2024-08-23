OutFolder=bin

All: check-outFolder
	cc main.c -o $(OutFolder)/hello

check-outFolder:
	if [ ! -d $(OutFolder) ]; then \
		mkdir $(OutFolder); \
	fi;

clean:
	rm -f $(OutFolder)/*