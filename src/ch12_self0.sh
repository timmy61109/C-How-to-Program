chapter='12' && section='0' && filename=ch${chapter}_self${section}
g++ $filename.c -o $filename.o && ./$filename.o < $filename.txt
