OBJ = main.o getscore.o classify.o eval.o output.o
APPNAME = score.a

#link rule
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)
#compiling rule
%.o : %.c
	gcc -c -o $@ $<
clean :
	rm $(OBJ) $(APPNAME)
tar :
	tar cf project.tar *


