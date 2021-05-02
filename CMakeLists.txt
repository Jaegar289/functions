cmake_minimum_required(VERSION 2.8)	 # Проверка версии CMake.
										# Если версия установленой программы
										# старее указаной, произайдёт аварийный выход.

project(test_functions)			# Название проекта

#set(SOURCE_EXE source.cpp)		# Установка переменной со списком исходников для исполняемого файла

set(SOURCE_LIB1 randomize.cpp)			# Тоже самое, но для библиотеки
set(SOURCE_LIB2 cin_validate.cpp)			# Тоже самое, но для библиотеки

add_library(lib1 STATIC ${SOURCE_LIB1})	# Создание статической библиотеки с именем foo
add_library(lib2 STATIC ${SOURCE_LIB2})	# Создание статической библиотеки с именем foo
add_library(flib STATIC functions.h)	# Создание статической библиотеки с именем foo

#add_executable(main ${SOURCE_EXE})	# Создает исполняемый файл с именем main

target_link_libraries(flib lib1)		# Линковка программы с библиотекой
target_link_libraries(flib lib2)		# Линковка программы с библиотекой