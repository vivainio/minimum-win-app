import os

os.system("gcc -std=c99 -Wall -Wextra \
    -nostdlib -ffreestanding -mconsole -Os \
    -fno-stack-check -fno-stack-protector -mno-stack-arg-probe \
    -o main.exe main.c \
    -lkernel32")
os.system("main.exe")