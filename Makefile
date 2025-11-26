BOFNAME := ts-tasklist
CC_x64 := x86_64-w64-mingw32-gcc
CC_x86 := i686-w64-mingw32-gcc
STRIP_x64 := x86_64-w64-mingw32-strip
STRIP_x86 := i686-w64-mingw32-strip
CFLAGS := -masm=intel
LIBS := -l rpcrt4 -l advapi32

all: bof_64 bof_86
bof: bof_64 bof_86
exe: exe_64 exe_86

bof_64:
	$(CC_x64) $(CFLAGS) -o dist/$(BOFNAME).x64.o -c src/$(BOFNAME).c -DBOF
	$(STRIP_x64) --strip-unneeded dist/$(BOFNAME).x64.o

bof_86:
	$(CC_x86) -o dist/$(BOFNAME).x86.o -c src/$(BOFNAME).c -DWOW64 -DBOF
	$(STRIP_x86) --strip-unneeded dist/$(BOFNAME).x86.o

exe_64: 
	$(CC_x64) $(CFLAGS) src/$(BOFNAME).c -o dist/$(BOFNAME).x64.exe $(LIBS)
	$(STRIP_x64) --strip-all dist/$(BOFNAME).x64.exe

exe_86: 
	$(CC_x86) $(CFLAGS) src/$(BOFNAME).c -o dist/$(BOFNAME).x86.exe $(LIBS) -DWOW64
	$(STRIP_x86) --strip-all dist/$(BOFNAME).x86.exe

clean:
	rm dist/*.o dist/*.exe
