find -name "*cpp" | while read i;do g++ $i && ./a.out;done
