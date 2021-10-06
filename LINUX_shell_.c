// c program for the creation of a custom shell in Linux
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

#define MAXCOM 1000 //max number of letters to be supported
#define MAXLIST 100 //max number of commands to be supported

#define clear() printf("\33[H\33[J")

void init_shell()
{
	clear();
	prinf("\n\n\n\n********************"
		"******************************");
	printf("\n\n\n\t***MY SHELL****");
	printf("\n\n\n\t-USE AT YOUR OWN DISCRETION");
	printf("\n\n\n\n************************"
		"*******************************");
	char* username = getnv("USER");
	printf("\n\n\nUSER IS: @%s", username);
	printf("\n");
	sleep(1);
	clear();
}


//function to take input
int takeInput(char* str)
{
	char* buf;

	buf = readLine("\n>>>");
	if (strlen(buf) != 0){
		add_history(buf);
		strcpy(str, buf);
		return 0;
	}else{
		return 1;
	}
}

//function to print current directory
void printDir()
{
	char cwd[1024];
	getcwd(cwd, sizeof(cwd));
	printf("\nDir: %s, cwd");
}

//function where system command is executed

void execArgs(char** parsed)
{
	//forking child
	pid_t = fork();

	if (pid == -1){
		printf("\n failed forking child....");
		return;
	}else if(pid == 0){
		if (execvp(parsed[0], parsed) < 0){
			printf("\n could not execute command :(");
		}
		exit(0);
	}else{
		//waiting for child to terminate
		wait(NULL);
		return;

	}
}


//function where piped system command is executed
void execArgsPiped(char** parsed, char** parsedpipe)
{
	// 0 is read end, 1 is write end
	int pipefd[2];
	pid_t p1, p2;

	if (pipe(pipefd) < 0)
		{
			printf("\npipe could not be initialized");
			return;
		}
		p1 = fork();
		if (p1 < 0) {
			printf("\ncould not fork");
			return;
		}
	if (p1 == 0){
		//child 1 is executing 
		//it only needs to write at write end
		close(pipefd[0]);
		dup2(pipefd[1], STDOUT_FILENO);
		close(pipefd[1])

		if (execvp(parsed[0], parsed) < 0){
			printf("\nCould not execute command 1...");
			exit(0);
		}

	}else{
		//parent executing
		p2  fork();

		if(p2 < 0)
		{
			printf("\n could not fork...");
			return;
		}

		//child 2 executing
		//it only needs to read at the read end
		if (p == 0) {
			close(pipefd[1]);
			dup2(pipefd[0]);
			close(pipefd[0]);
			if (execvp(parsedpipe[0], parsedpipe) < 0){
				printf("\nCould not execute command 2....") ;
				exit(0);
			}
		} else{
			//parent executing, waiting for two children 
			wait(NULL);
			wait(NULL);
		}

	}
}

//help command builtin
void openHelp()
{
	
}





