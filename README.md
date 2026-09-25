# 🐚 Mini Shell Using C

![Language](https://img.shields.io/badge/LANGUAGE-C-blue)
![Platform](https://img.shields.io/badge/PLATFORM-LINUX-green)
![Status](https://img.shields.io/badge/STATUS-COMPLETED-brightgreen)

---

## 📖 Overview

MINISHELL is a Linux-based command-line shell implemented in C. The project provides a basic shell environment capable of accepting user commands, identifying command types, executing built-in and external commands, handling processes, managing signals, and supporting pipelines.

The project demonstrates practical Linux system programming concepts including process creation, process execution, inter-process communication, signal handling, file descriptors, dynamic memory allocation, and job control.

---

## ✨ Features

- 🖥️ Interactive command-line shell
- ⚙️ Built-in command execution
- 🚀 External command execution using `fork()` and `execvp()`
- 🔄 Pipeline support using `pipe()` and `dup2()`
- ⏳ Foreground process management using `waitpid()`
- 🛑 Signal handling
- 📋 Job management using `jobs`
- ▶️ Background process support using `bg`
- ⏩ Foreground process support using `fg`
- 🔧 Custom shell prompt using `PS1`
- 📊 Exit status using `$?`
- 🆔 Shell process ID using `$$`
- 🌐 Environment variable support using `$SHELL`
- 🔗 Linked-list based job management
- ❌ Unknown command detection

---

## 🛠️ Technologies Used

- C Programming
- Linux
- POSIX System Calls
- Process Management
- Signal Handling
- Inter-Process Communication
- File Descriptors
- Linked Lists
- Dynamic Memory Allocation

---

## 📁 Project Structure

```text
MINISHELL/
│
├── main.c
├── main.h
├── scan.c
├── check_cmd_type.c
├── ext_cmds.txt
└── README.md
```

### `main.c`

Initializes the shell, loads the external command list, allocates required memory, and starts the main shell loop.

### `main.h`

Contains header files, macros, structures, global declarations, and function prototypes.

### `scan.c`

Handles command input, command execution, built-in commands, pipelines, signal handling, and job control.

### `check_cmd_type.c`

Identifies whether a command is a built-in or external command and handles the external command list.

### `ext_cmds.txt`

Contains the list of external commands recognized by the shell.

---

## 🚀 Compilation

Compile the project using:

```bash
gcc main.c scan.c check_cmd_type.c -o minishell
```

---

## ▶️ Run the Program

```bash
./minishell
```

Example:

```text
minishell$ pwd
/home/user/MINISHELL

minishell$ echo Hello
Hello

minishell$ exit
```

---

## ⚙️ Built-in Commands

The shell supports built-in commands such as:

```text
cd
pwd
echo
exit
jobs
bg
fg
```

---

## 🔗 Pipeline Support

MINISHELL supports command pipelines.

Example:

```bash
ls | grep .c
```

Multiple commands can also be connected:

```bash
ls | grep .c | wc
```

Pipelines are implemented using:

```c
pipe()
dup2()
```

---

## 🛑 Signal Handling

The shell handles important signals including:

| Signal | Purpose |
|--------|---------|
| `SIGINT` | Handles `Ctrl+C` |
| `SIGTSTP` | Handles `Ctrl+Z` |
| `SIGCHLD` | Handles child-process termination |

---

## 📋 Job Control

MINISHELL provides basic job-control functionality.

### `jobs`

Displays the jobs maintained by the shell.

### `bg`

Continues a stopped process in the background.

### `fg`

Brings a background or stopped process to the foreground.

Jobs are maintained using a linked-list data structure.

---

## 💡 Special Shell Variables

### `$?`

Displays the exit status of the previously executed command.

```bash
echo $?
```

### `$$`

Displays the process ID of the shell.

```bash
echo $$
```

### `$SHELL`

Displays the `SHELL` environment variable.

```bash
echo $SHELL
```

---

## 🧠 Concepts Used

- Process Creation
- Process Execution
- `fork()` and `execvp()`
- Process Synchronization
- `wait()` and `waitpid()`
- Pipes
- File Descriptors
- `dup2()`
- Signal Handling
- Background and Foreground Processes
- Job Control
- Linked Lists
- Dynamic Memory Allocation
- Command Parsing
- Environment Variables
- Linux System Calls

---

## 🎯 Learning Outcomes

This project helped me understand:

- Linux process management
- Creation and execution of child processes
- Parent-child process synchronization
- Inter-process communication using pipes
- File descriptor manipulation
- Signal handling in Linux
- Foreground and background process management
- Job control mechanisms
- Dynamic memory allocation
- Linked-list based process management
- Command-line shell implementation

---

## 🚀 Future Improvements

- Add support for input/output redirection
- Improve command parsing
- Add support for more shell features
- Improve error handling
- Extend job-control functionality
- Add command history
- Add support for more advanced shell syntax

---

## 👨‍💻 Author

**Rajath H M**

📧 Email: `rajatharya02@gmail.com`

🔗 GitHub: [Rajath-Arya](https://github.com/Rajath-Arya)

---

⭐ If you found this project useful, consider giving it a star on GitHub!
