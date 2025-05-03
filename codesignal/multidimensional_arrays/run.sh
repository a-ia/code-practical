#!/bin/bash

function compile_and_run {
    g++ -o "${1%.cpp}" "$1" && ./"${1%.cpp}"
    rm -f "${1%.cpp}"
}

while true; do
    clear
    echo "====== C++ MULTIDIMENSIONAL ARRAY EXAMPLES ======"
    echo "1) Basic Operations:"
    echo "   1.1) Create Multidimensional Arrays"
    echo "   1.2) Indexing Multidimensional Arrays"
    echo "   1.3) Updating Multidimensional Arrays"
    echo "2) Array Operations:"
    echo "   2.1) Find Rows and Columns"
    echo "   2.2) Push Back Operation"
    echo "   2.3) Erase Operation"
    echo "3) Control Flow:"
    echo "   3.1) Traversal Techniques"
    echo "   3.2) Break and Continue"
    echo "4) Exercises:"
    echo "   4.1) Exercise 1"
    echo "   4.2) Exercise 2"
    echo "   4.3) Exercise 3"
    echo "   4.4) Exercise 4"
    echo "0) Exit"
    echo "==================================================="
    
    read -p "Enter your choice: " choice
    
    case $choice in
        "1.1") compile_and_run "1_createMultiDimensionsionalArrays.cpp" ;;
        "1.2") compile_and_run "2_indexingMultiDimensionalArrays.cpp" ;;
        "1.3") compile_and_run "3_updatingMultidimensionalArrays.cpp" ;;
        "2.1") compile_and_run "4_findRowsAndCol.cpp" ;;
        "2.2") compile_and_run "5_push_back.cpp" ;;
        "2.3") compile_and_run "6_erase.cpp" ;;
        "3.1") compile_and_run "7_traverse.cpp" ;;
        "3.2") compile_and_run "8_break_continue.cpp" ;;
        "4.1") compile_and_run "exercise1.cpp" ;;
        "4.2") compile_and_run "exercise2.cpp" ;;
        "4.3") compile_and_run "exercise3.cpp" ;;
        "4.4") compile_and_run "exercise4.cpp" ;;
        "0") exit 0 ;;
        *) echo "Invalid option"; sleep 1 ;;
    esac
    
    echo -e "\nPress Enter to return to menu..."
    read
done
