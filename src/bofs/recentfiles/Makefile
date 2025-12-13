BOFNAME := recentfiles
COMINCLUDE := -I ../../common
LIBS := -l shell32 -l ole32 -l uuid
CC_x64 := x86_64-w64-mingw32-gcc
CC_x86 := i686-w64-mingw32-gcc
STRIP_x64 := x86_64-w64-mingw32-strip
STRIP_x86 := i686-w64-mingw32-strip

all: bof_64 bof_86
test: exe_64 exe_86

bof_64:
	$(CC_x64) -o $(BOFNAME).x64.o $(COMINCLUDE) -Os -c entry.c -DBOF
	$(STRIP_x64) --strip-unneeded $(BOFNAME).x64.o
	mkdir -p ../../../bofs/$(BOFNAME) 
	mv $(BOFNAME).x64.o ../../../bofs/$(BOFNAME)

bof_86:
	$(CC_x86) -o $(BOFNAME).x86.o $(COMINCLUDE) -Os -c entry.c -DWOW64 -DBOF
	$(STRIP_x86) --strip-unneeded $(BOFNAME).x86.o
	mkdir -p ../../../bofs/$(BOFNAME) 
	mv $(BOFNAME).x86.o ../../../bofs/$(BOFNAME)

exe_64: 
	$(CC_x64) $(COMINCLUDE) entry.c -o $(BOFNAME).x64.exe $(LIBS)
	$(STRIP_x64) --strip-all $(BOFNAME).x64.exe

exe_86: 
	$(CC_x86) $(COMINCLUDE) entry.c -o $(BOFNAME).x86.exe $(LIBS) -DWOW64
	$(STRIP_x86) --strip-all $(BOFNAME).x86.exe

scp:
	scp ../../../bofs/$(BOFNAME)* jaime.lannister@10.5.10.31:Desktop/

clean:
	rm $(BOFNAME)*.exe 