#!/bin/bash
g++ problem.cpp

./a.out < inputs/a_example.txt > outputs/a_example.txt
echo "a"
./a.out < inputs/b_read_on.txt > outputs/b_read_on.txt
echo "b"
./a.out < inputs/c_incunabula.txt > outputs/c_incunabula.txt
echo "c"
./a.out < inputs/d_tough_choices.txt > outputs/d_tough_choices.txt
echo "d"
./a.out < inputs/e_so_many_books.txt > outputs/e_so_many_books.txt
echo "e"
./a.out < inputs/f_libraries_of_the_world.txt > outputs/f_libraries_of_the_world.txt
echo "f"
