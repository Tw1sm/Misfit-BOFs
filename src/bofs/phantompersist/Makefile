BOFNAME := phantompersist
COMINCLUDE := -I ../../common
CC_x64 := x86_64-w64-mingw32-gcc
CC_x86 := i686-w64-mingw32-gcc
STRIP_x64 := x86_64-w64-mingw32-strip
STRIP_x86 := i686-w64-mingw32-strip
CFLAGS := $(COMINCLUDE) -Os -fno-stack-protector -fno-asynchronous-unwind-tables
LIBS := -luser32 -ladvapi32

all: bof_64 bof_86
test: exe_64 exe_86

bof_64:
	$(CC_x64) $(CFLAGS) -DBOF -c runtime-start.S -o runtime-start.x64.o
	$(CC_x64) $(CFLAGS) -DBOF -c entry.c -o entry.x64.o
	$(CC_x64) $(CFLAGS) -DBOF -c runtime-end.S -o runtime-end.x64.o
	$(CC_x64) -r runtime-start.x64.o entry.x64.o runtime-end.x64.o -o $(BOFNAME).x64.o
	$(STRIP_x64) --strip-unneeded $(BOFNAME).x64.o
	mkdir -p ../../../bofs/$(BOFNAME)
	mv $(BOFNAME).x64.o ../../../bofs/$(BOFNAME)

bof_86:
	$(CC_x86) $(CFLAGS) -DBOF -c runtime-start.S -o runtime-start.x86.o
	$(CC_x86) $(CFLAGS) -DBOF -DWOW64 -c entry.c -o entry.x86.o
	$(CC_x86) $(CFLAGS) -DBOF -DWOW64 -c runtime-end.S -o runtime-end.x86.o
	$(CC_x86) -r runtime-start.x86.o entry.x86.o runtime-end.x86.o -o $(BOFNAME).x86.o
	$(STRIP_x86) --strip-unneeded $(BOFNAME).x86.o
	mkdir -p ../../../bofs/$(BOFNAME)
	mv $(BOFNAME).x86.o ../../../bofs/$(BOFNAME)

exe_64:
	$(CC_x64) $(CFLAGS) -municode runtime-start.S entry.c runtime-end.S -o $(BOFNAME).x64.exe $(LIBS)

exe_86:
	$(CC_x86) $(CFLAGS) -DWOW64 -municode runtime-start.S entry.c runtime-end.S -o $(BOFNAME).x86.exe $(LIBS)

clean:
	rm -f *.o $(BOFNAME)*.exe
