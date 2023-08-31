# Kommentarer i CMakeLists.txt börjar med brädgård.
# Sätt ett namn på projektet
project(imperativ-programmering-inluppar)# För säkerhets skull, speca vilken version av CMake vi använder
cmake_minimum_required(VERSION 3.5)# Våra flaggor till GCC.
set(CMAKE_C_FLAGS "-std=c99 -Wall -g")# Program nr 1 heter task_1 och behöver bara filen task_1.c
add_executable(task_1 task_1.c)# Motsvarande för program nr 2
add_executable(task_2 task_2.c)# Programmet task_3 behöver bygga ihop både task_3.c och list.c.
add_executable(task_3 task_3.c list.c)# ... o.s.v.
add_executable(task_4 task_4.c double_stack_list.c)
add_executable(task_5 task_4.c double_stack_array.c)
add_executable(task_6 task_6.c double_stack_array.c)