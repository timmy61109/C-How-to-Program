filename='test'
chapter='05' && section='03' && filename=fig${chapter}_${section}
chapter='11' && section='0' && filename=ch${chapter}_self${section}
filename=fig${chapter}_${section}
g++ $filename.c -o $filename.o && ./$filename.o
g++ $filename.c -o $filename.o && ./$filename.o < $filename.txt
