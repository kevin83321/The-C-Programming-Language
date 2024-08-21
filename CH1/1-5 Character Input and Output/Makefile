OutFolder=bin

All: check-outFolder
	mkdir ./bin
	cc CharacterCounting.c -o bin/CharacterCounting
	cc CharacterCounting_v2.c -o bin/CharacterCounting_v2
	cc FileCopying_v1.c -o bin/FileCopying_v1
	cc FileCopying_v2.c -o bin/FileCopying_v2
	cc LineCounting.c -o bin/LineCounting
	cc WordCounting.c -o bin/WordCounting

check-outFolder:
	if [ ! -d $(OutFolder) ]; then \
		mkdir $(OutFolder); \
	fi;

clean:
	rm -f $(OutFolder)/*