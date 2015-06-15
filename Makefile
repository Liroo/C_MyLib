##
## Makefile for makefile in /home/monge_p/personnel/C_MyLib
## 
## Made by Pierre Monge
## Login   <monge_p@epitech.net>
## 
## Started on  Sat May 30 16:02:36 2015 Pierre Monge
## Last update Tue Jun 16 00:50:39 2015 Pierre Monge
##

SRC_GEN	=  my_putstr.c		\
	   my_strdup.c		\
	   my_strlen.c		\
	   my_strcpy.c		\
	   my_strcat.c		\
	   my_strcmp.c		\
	   my_atoi.c		\
	   my_putnbr.c		\
	   my_revstr.c

SRC_ERR	=  my_error_func.c

SRC_MER	=  my_set_error.c	\
	   my_error.c

SRC_GL	=  my_getline.c		\
	   my_getline_reset.c	\
	   my_check_file.c

SRC_PRT	=  my_printf.c		\
	   my_printf_func.c	\
	   my_printf_vfunc.c	\
	   my_printf_exec.c	\
	   my_printf_flags.c	\
	   my_printf_flags1.c	\
	   my_printf_put.c

OBJ	=  $(addprefix src/, $(SRC_GEN:.c=.o))			\
	   $(addprefix src/error_func/, $(SRC_ERR:.c=.o))	\
	   $(addprefix src/my_printf/, $(SRC_PRT:.c=.o))	\
	   $(addprefix src/my_getline/, $(SRC_GL:.c=.o))	\
	   $(addprefix src/my_error/, $(SRC_MER:.c=.o))

OBJ_GEN	=  $(addprefix src/, $(SRC_GEN:.c=.o))

OBJ_ERR =  $(addprefix src/error_func/, $(SRC_ERR:.c=.o))

OBJ_GL	=  $(addprefix src/my_getline/, $(SRC_GL:.c=.o))

OBJ_PRT	=  $(addprefix src/my_printf/, $(SRC_PRT:.c=.o))

OBJ_MER	=  $(addprefix src/my_error/, $(SRC_MER:.c=.o))

LIB	=  C_MyLib

LIBNAME =  libmy

INCLUDE	=  -I./include/

FLAGS	=  -W -Wall -Wextra -pedantic

CFLAGS	=  $(INCLUDE) $(CLAGS)

RAN	=  ranlib

RM	=  rm -f

$(LIB):			all

$(LIBNAME).a:		$(OBJ)
	ar rc $(LIBNAME).a $(OBJ)
	$(RAN) $(LIBNAME).a

$(LIBNAME)_GEN.a:	$(OBJ_GEN)
	ar rc $(LIBNAME)_GEN.a $(OBJ_GEN)
	$(RAN) $(LIBNAME)_GEN.a

gen:			$(LIBNAME)_GEN.a

clean_gen:
	$(RM) $(OBJ_GEN)

fclean_gen:		clean_gen
	$(RM) $(LIBNAME)_GEN.a

re_gen:			fclean_gen gen

$(LIBNAME)_GL.a:	$(OBJ_GL)
	ar rc $(LIBNAME)_GL.a $(OBJ_GL)
	$(RAN) $(LIBNAME)_GL.a

getline:		$(LIBNAME)_GL.a

clean_getline:
	$(RM) $(OBJ_GL)

fclean_getline:		clean_getline
	$(RM) $(LIBNAME)_GL.a

re_getline:		fclean_getline getline

$(LIBNAME)_PRT.a:	$(OBJ_MER) $(OBJ_GEN) $(OBJ_PRT)
	ar rc $(LIBNAME)_PRT.a $(OBJ_GEN) $(OBJ_PRT) $(OBJ_MER)
	$(RAN) $(LIBNAME)_PRT.a

my_printf:		$(LIBNAME)_PRT.a

clean_my_printf:
	$(RM) $(OBJ_GEN) $(OBJ_PRT) $(OBJ_MER)

fclean_my_printf:	clean_my_printf
	$(RM) $(LIBNAME)_PRT.a

re_my_printf:		fclean_my_printf my_printf

$(LIBNAME)_MER.a:	$(OBJ_MER)
	ar rc $(LIBNAME)_MER.a $(OBJ_MER)
	$(RAN) $(LIBNAME)_MER.a

my_error:		$(LIBNAME)_MER.a

clean_my_error:
	$(RM) $(OBJ_MER)

fclean_my_error:	clean_my_error
	$(RM) $(LIBNAME)_MER.a

re_my_error:		fclean_my_error my_error

$(LIBNAME)_ERR.a:	$(OBJ_ERR) $(OBJ_GEN)
	ar rc $(LIBNAME)_ERR.a $(OBJ_ERR) $(OBJ_GEN)
	$(RAN) $(LIBNAME)_ERR.a

error:		$(LIBNAME)_ERR.a

clean_error:
	$(RM) $(OBJ_ERR) $(OBJ_GEN)

fclean_error:	clean_error
	$(RM) $(LIBNAME)_ERR.a

re_error:		fclean_error my_error

all:			$(LIBNAME).a

clean:
		$(RM) $(OBJ)

fclean:			clean
	$(RM) $(LIBNAME).a

re:			fclean all

.PHONY: all clean fclean re
