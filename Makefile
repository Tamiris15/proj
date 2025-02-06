# Цель по умолчанию
all: libmatrixOperations.so matrixProgram

# Сборка динамической библиотеки
libmatrixOperations.so: matrixOperations.c
	gcc -shared -o libmatrixOperations.so -fPIC matrixOperations.c

# Сборка программы
matrixProgram: matrixProgram.c libmatrixOperations.so
	gcc -o matrixProgram matrixProgram.c -L. -lmatrixOperations -Wl,-rpath,.

# Очистка проекта
clean:
	rm -f libmatrixOperations.so matrixProgram

# Запуск программы с тестовыми данными
run: matrixProgram
	./matrixProgram < test1.txt
