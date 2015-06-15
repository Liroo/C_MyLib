# C_MyLib

### Use
C_MyLib is a C library which contain utils function for C development.
You can run it by using Makefile (already in the repository).
To run a Makefile, you can use the command :
```sh
$ make
```

With this Lib, you could compile just a part of the library, there is the sub_lib you could compile :

   - make gen
   - make my_printf
   - make my_error
   - make error
   - make getline

To run your proper program you have to include the header files of this lib.

###### Respectivly :

- Ø : every header files except bool
- gen : GEN, error
- my_printf : GEN, error, printf
- my_error : error
- error : GEN, error
- getline : getline

> A header file bool is added to add the new type boolean (t_bool), t_bool can be TRUE or FALSE.

### Version

1.0.0

### Tech

> - C

### Installation and run Lib

```sh
$ git clone https://github.com/Liroo/C_MyLib.git
$ cd C_MyLib
$ make
$ mv libmy.a /path_of_your_repo/
```

### How to Clean, Fclean the lib

There is some command to clean the multiple library.
First you can use the argument **clean** to remove the **.o** of the repository.
Then you can use **fclean** to remove the **.a** of the repository.
I added a option **re** to clean and recompile the lib.

##### Respectivly :

```sh
$ make gen
$ make clean_gen
$ make fclean_gen
$ make re_gen
```

Then you can replace gen by :

* my_printf
* my_error
* error
* getline

### Contact

If you want more info about me or if there is a bug with this lib, you can contact me with :

> My public GitHub : [GitHub] [1]

> My mail : [Hotmail] : pierre-monge@hotmail.fr

[1]:https://github.com/Liroo

###### GNU General Public License

**Free C Lib**
