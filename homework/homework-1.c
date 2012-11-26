ERROR 1:
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ gcc lesson-1.1.c 
lesson-1.1.c: In function ‘main’:
lesson-1.1.c:4: error: expected ‘;’ before ‘}’ token
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ cat lesson-1.1.c 
int main(void)
{
	return 0
}
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ 


ERROR 2:
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ gcc lesson-1.1.c  -Wall
lesson-1.1.c: In function ‘main’:
lesson-1.1.c:3: warning: ‘return’ with no value, in function returning non-void
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ cat lesson-1.1.c 
int main(void)
{
	return ;
}
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ 


ERROR 3:
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ gcc lesson-1.1.c  -Wall
lesson-1.1.c:1: warning: return type of ‘main’ is not ‘int’
lesson-1.1.c: In function ‘main’:
lesson-1.1.c:3: warning: ‘return’ with a value, in function returning void
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ cat lesson-1.1.c 
void main(void)
{
	return 0;
}
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ 


ERROR 4:
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ gcc lesson-1.1.c  -Wall
lesson-1.1.c:1: warning: ‘main’ takes only zero or two arguments
lesson-1.1.c: In function ‘main’:
lesson-1.1.c:1: error: parameter name omitted
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ cat lesson-1.1.c 
int main(int a)
{
	return 0;
}
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ 

ERROR 5:
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ gcc lesson-1.1.c  -Wall
lesson-1.1.c:1: warning: ‘main’ takes only zero or two arguments
lesson-1.1.c: In function ‘main’:
lesson-1.1.c:1: error: parameter name omitted
lesson-1.1.c:3: error: ‘retunrn’ undeclared (first use in this function)
lesson-1.1.c:3: error: (Each undeclared identifier is reported only once
lesson-1.1.c:3: error: for each function it appears in.)
lesson-1.1.c:3: error: expected ‘;’ before numeric constant
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ cat lesson-1.1.c 
int main(int)
{
	retunrn 0;
}
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ 


ERROR 6:
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ gcc lesson-1.1.c  -Wall
lesson-1.1.c: In function ‘mian’:
lesson-1.1.c:1: error: parameter name omitted
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ cat lesson-1.1.c 
int mian(int)
{
	return 0;
}
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ 


ERROR 7:
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ gcc lesson-1.1.c  -Wall
lesson-1.1.c:3: error: expected declaration specifiers or ‘...’ before ‘return’
lesson-1.1.c:4: error: expected declaration specifiers or ‘...’ before ‘}’ token
lesson-1.1.c:4: error: expected ‘;’, ‘,’ or ‘)’ before ‘}’ token
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ cat lesson-1.1.c 
int main(void)
(
	return 0;
}
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ 


ERROR 8:
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ gcc lesson-1.1.c  -Wall
lesson-1.1.c: In function ‘main’:
lesson-1.1.c:3: error: expected declaration or statement at end of input
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ cat lesson-1.1.c 
int main(void)
{
	return 0;
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ 


ERROR 9:
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ gcc lesson-1.1.c  -Wall
lesson-1.1.c: In function ‘main’:
lesson-1.1.c:2: error: expected declaration specifiers before ‘return’
lesson-1.1.c:2: error: expected ‘{’ at end of input
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ cat lesson-1.1.c 
int main(void)
	return 0;
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ 


ERROR 10:
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ gcc lesson-1.1.c  -Wall
lesson-1.1.c:2: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘{’ token
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ cat lesson-1.1.c 
int main
{
	return 0;
}
limingth@ubuntu:~/Git-Learning/NCCL.codes/Lesson-1$ 













