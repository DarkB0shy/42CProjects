<h1 align="center">42 C Projects</h1>

<p align="center">My 42 Common Core C projects. Every folder holds the source code and the subject.</p>

<h3 align="center">Libft</h3>

<p align="right">Final score: 125</p>

A library is a set of functions that can be used many times across multiple programs.
A static library is a set of object files linked into the program during compilation,
a dynamic library is loaded at runtime instead.
Libft is a static library that contains a recoding of some of the libc functions
according to their man page and other functions that were not originally included in
the C standard library. Some of these functions are also part of the "42 C Piscine".
A collection of Bash and C scripts that will test every function of Libft can be
found at: https://github.com/FranFrau/Supreme-Tester-Libft

<h3 align="center">get_next_line</h3>

<p align="right">Final score: 125</p>

A simplified version of get_next_line has been one of the two possible exams at rank03
of 42 common core. This is a C function that compiles with any positive value defined
as BUFFER_SIZE at compilation time with:

$cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files.c>

This program reads characters from a file descriptor and whenever a newline
delimiter {'\n'} or null terminator {'\0'} is encountered the characters are saved into
a static variable. This ensures "persistent" memory, meaning calling this function will
not cause it to read and save the same line over and over again.
A main.c and some files.txt are provided to test the functions.
Here is a repository that contains a get_next_line tester:
https://github.com/Tripouille/gnlTester

<h3 align="center">ft_printf</h3>

<p align="right">Final score: 100</p>

A simplified version of ft_printf has been one of the two possible exams at rank03
of 42 common core. This program aims to recode printf() from the stdio C library
as a static library. The external functions va_start, va_arg, va_copy and va_end
allow to interact with the builtin type va_list that can handle a variable
number of arguments.
Here is a repository that contains a ft_printf tester:
https://github.com/Tripouille/printfTester

<h3 align="center">minitalk</h3>

<p align="right">Final score: 125</p>

This project is about communication with UNIX signals in C, mostly through the
functions kill(), signal() and sigaction (both the structure and the function).
The client is able to send a text message to the server by making use of its
pid; both the message and the server's Process ID are passed to the client
during execution.
A good explanation on how to run this project and more can be found at:
https://github.com/Kuninoto/42_minitalk

<h3 align="center">so_long</h3>

<p align="right">Final score: 110</p>

so_long is a "small" 2d videogame written in C with the 42 graphic library "MiniLibX".
The program needs a .ber map in order to run.
The player has to collect a bunch of collectibles, avoid spikes that will kill him and
reach the exit while enjoying a thrilling event driven gameplay inside a window
blended with high resolution, animated, XPM sprites (only one sprite is animated).
Animation is achieved by rapidly iterating through an array of slightly modified
sprites and by printing the current instance on the location of Boshy.
Right now this only runs on MacOS.
Here are a bunch of very well made so_long projects: https://github.com/trimia/so_long and https://github.com/startaglia/so_long (MAC only).

<h3 align="center">push_swap</h3>

<p align="right">Final score: 125</p>

push_swap is a C sorting algorithm project with its main focus being optimization.
A stack of numbers must be sorted using the smallest combination of 11 subject-defined
moves and only one "support" stack can be used to achieve this result.
Every move and the total number of moves is displayed in the stdout.
The bonus part is a "checker" that lets the user manually sort the stack of
numbers passed as an argument. Or, one can comment the print() of the total number
of moves and redirect push_swap output to the checker program. Like so:

$export ARG="4 6 1 15 23"; ./push_swap $ARG | ./checker $ARG; unset ARG

I did this project with [robegarc](https://github.com/dieremy). At first we came up with a very
unefficient program in terms of moves made (I left it inside the folder bad_push_swap) that
would have passed the evaluation, but he eventually decided to implement a variant
of the quick sort algorithm that got us the best score.

Every move is described in the subject.

Here are some very well made guides on this project, involving different algorithms:
https://github.com/sisittu99/push_swap		  	"Longest Increasing Sequence"
https://medium.com/@ayogun/push-swap-c1f5d2d41e97 	"Mechanical Turk Algorithm"

<h3 align="center">Philosophers</h3>

<p align="right">Final score: 100</p>

This C project is about creating a multi-thread application that takes advantage
of mutexes to avoid race conditions. Every thread is a dining philosopher and all
they do is eat, sleep, think and of course die, and every action followed by the
ID is printed on the standard output. These parameters are passed to the program
at runtime.

When dealing with multi-threading, several threads may try to access or modify
a variable value at the same time resulting in undefined behaviour (that variable
might be used in different parts of the program with different values). This is
when mutexes come in handy for they "lock" a function or a portion of the program 
to other threads.
There are as many forks as philosophers and each one of them must be "protected"
by a mutex. If pthread_mutex_lock(&pthread_mutex_t) returns a non-zero value,
that mutex will be "locked" or non accessible to other threads until a call to
pthread_mutex_unlock(&pthread_mutex_t) will be made by the thread that first
locked the mutex.
An extremely detailed guide can be found at:
https://github.com/TommyJD93/Philosophers

<h3 align="center">minishell</h3>

<p align="right">Final score: 100</p>

minishell is a C recoding of a simpler version of Bash and it focuses mostly on
file descriptors and processes. Every functionality is described in the subject,
generally speaking it is divided into a parser, an expander and an executor.
[scastagn](https://github.com/IamG-Root) implemented most of our final executor, [startagl](https://github.com/startaglia) handled the parser,
I handled our prompt with history (readline has leaks) and the expander, whereas
[alpelliz](https://github.com/Beta-J23) did most of the builtins.
Additionally, our minishell compiles with the flag -fsanitize=address. This
checks for leaks, heap buffer overflows and other errors related to memory.
To run this project you first need to install readline. For Ubuntu Linux:

$sudo apt-get install libreadline-dev

Well made guide at: https://github.com/startaglia/minishell?tab=readme-ov-file

<h3 align="center">cub3d</h3>

<p align="right">Final score: 105</p>

cub3d is the last C program of the common core. It is a graphic project made
with MiniLibX: a recoding of Wolfenstein 3D (the first FPS ever).
A ray-casting algorithm is implemented meaning a 2d map is rendered into a
3d-like environment. This is mostly achieved by calculating the distance
between player and walls and by drawing them line by line also according to
player orientation. This program needs a .cub map in order to run; every map
must follow very specific constraints defined in the subject.
This project also compiles with -fsanitize=address.
I mostly focused on error handling during the .cub file map parsing, also on
fixing a "bug" inside the ray-casting algorithm:

./cub3d/srcs/casting_ray.c

game->ray.side_dist.x = (game->player.pos.x - game->ray.map_x + 0.00001) // line 38

game->ray.side_dist.y = (game->player.pos.y - game->ray.map_y + 0.00001) // line 50


I added +0.00001 to both of these instructions because I noticed the whole
algorithm wasn't working whenever a player spawned at the corner of map:

				1111111111
				1W00000001
				1001010001
				1001001001
				1111111111

In order to run a MiniLibX program on Ubuntu you need to download these packages:

$sudo apt install -y zlib1g-dev libxext-dev libx11-dev libbsd-dev libxrandr-dev libxinerama-dev libxcursor-dev

Very good guides can be found at: https://github.com/mlongo03/Cube3D
and https://lodev.org/cgtutor/raycasting.html
