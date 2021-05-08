filename='test'
chapter='05' && section='03' && filename=fig${chapter}_${section}
filename=fig${chapter}_${section}
g++ $filename.c -o $filename.o && ./$filename.o
