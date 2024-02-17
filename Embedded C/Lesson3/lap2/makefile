#@ copyright : Mohamed Gad
CC=arm-none-eabi-
CFLAGS=-g -mcpu=arm926ej-s -gdwarf-2
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
Project_name=App

all: $(Project_name).bin
	@echo "============Build is done==============="

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

startup.o: startup.s
	$(CC)as.exe  $(CFLAGS) $<  -o  $@

$(Project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -Map=App.map  -o $@

$(Project_name).bin: App.elf
	$(CC)objcopy.exe -O binary $< $@
clean_all:
	rm *.o *.bin *.elf
clean:
	rm *.bin *.elf