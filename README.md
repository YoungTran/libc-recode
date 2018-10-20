# libft-library-of-functions
An implementation of several Standard C Library functions, plus some extras.

## TOC
- [What is libft?](#what-is-libft)
- [What's in it?](#whats-in-it)
- [How does it work?](#how-does-it-work)
- [How do I use the library?](#how-do-i-use-the-library)
- [Example usage](#example-usage)


### What is libft?
[Libft][1] is an individual project at [42][2] that requires us to 
re-create some standard C library functions including some additional
ones that can be used later to build a library of useful functions for
the rest of the projects at 42.

We re-create these functions in order to deepen our understanding of C.
The general philosophy of 42 is that it's best to fully understand that
machine that you're using and how it all works together. As a result,
we avoid treating even these basic functions as black-boxes.

### What's it do?

As you can see from the [Project instructions][1], there are 4 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked lists
4.  **Personal Functions:** Functions I find useful.

Notes:

- All the files and functions are namespaced with an **ft_** in front. It stands for Fourty Two
- The project instructions require that we put all the source files in the root directory.

### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project and call make:

	git clone https://github.com/YoungTran/libft-library-of-functions
	cd libft-library-of-functions
	make

You should see a *libft.a* file and some object files (.o).


Now to clean up (removing the .o files), call `make clean`
