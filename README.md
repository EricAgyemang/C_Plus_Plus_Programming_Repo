# C_Plus_Plus_Programming_Repo(.cpp).

# Programming in C++; ISU-IT180.

# Course Description
  * This course offers a complete introduction to the C++ programming language with hands-on experience
    through assignments on Linux. 
  
  * The course starts with fundamental C++ topics such as loops, conditions, arrays, and ends with advanced concepts
    such as templates. The course emphasizes on OOPS concepts and dynamic memory management in C++. 
    
  *  The outcome is to understand the fundamentals, and write complex programs in C++.
    
  * The course also introduce the students to the Linux environment and its basic commands.

# Course Goals
  * The goals of this course are to:
    • Understand and implement project/programs in C++ language.
    • Introduce students to the Linux environment; compiling and debugging of C++ in Linux.


# Platform

C++ programming is taught and done without using an IDE such as Eclipse or NetBeans. All the code
are executed using the command line in the Linux environment. 

Students are strongly encouraged to spend time getting comfortable with Linux, a valuable job skill.
You are expected to have more than minimal prior exposure to UNIX.

# Linux Information 

* All work for this course is expected to be completed in Linux machines in
  C++ using the GNU C++ compiler. This handout is for your reference in learning to
  work in this environment. Once you are familiar with the Linux commands and operating system, work through the
  demo exercise under the “Running and Testing Your C++ programs” header.

* You may also get a full VS Code window running locally that hosts an SSH connection to the IT Linux Terminals
  through the Remote-SSH extension. Instructions are in a separate document. Note that this will also require an 
  active VPN connection.
  
# Command line vs. GUI
  Except when you choose the ssh option you will have access to a full GUI environment. You should feel free to explore
  this environment and use it. However, this handout focuses on how to do things in the command line environment, which is how you do
  things with ssh, and which is necessary for some purposes (such as compiling and running your programs). As you use unfamiliar commands, it   is often helpful to type the command followed by –help to learn more.
  
# Getting a command line window in the GUI
  If there is a terminal or console window on your screen, you can activate it by simply clicking in it. You can start a new terminal window   by selecting Terminal Emulator from the Applications menu at the top left of your screen or by clicking on the Terminal
  Emulator icon, which will be the second from the left in the bar in the middle of the bottom of the screen.
 
# Leaving
  When leaving, you may simply disconnect, which will leave your session in place for a
  limited period of time. If you do not plan to reconnect soon, it is probably better to log
  out. Please do not try to shut down. These are shared machines.
  
 # Directory Structure
  Linux maintains a hierarchical file structure consisting of a root directory and several layers of subdirectories. These are much like 
  the folders in the Windows and Macintosh operating systems. Each directory contains zero or more files and subdirectories. The
  root directory is always named / and referred to by this character. At any point in time, each user is associated with a single directory called the working (or
  current) directory. You should think of this as the folder you are currently “in”: the place where any commands are run. Immediately after logging in to a Linux system, a   user is associated with a home directory. A possible home directory would be named /home/id/name, where "tpaine" is the person's login name. Linux uses the tilde (~) as a   shortcut for your home directory. Note that Linux uses a forward slash to separate directory names, unlike Windows, which uses a backslash. Note that home
  directories on our system are typically /home/ad.ilstu.edu/ulid. This naming scheme is a result of the mechanism that allows us to use our standard ISU accounts to
  log in to these systems.
 
 # Naming Files and Directories
    Almost any character can be used in the name of a file or directory, but try to use only the following characters: letters (upper or lower case), digits, underscore,       hyphen, and period. Please do not use spaces in file and directory names, because they do cause some annoyance when working from the command line (as you should and I  
    always will). Either an absolute or a relative pathname may be used whenever it is necessary to specify
    the name of a file or a directory. To write an absolute pathname, start with the root directory and list, in order, all of the
    directories that contain the desired object. Place the name of the desired object at the end of the list and separate all names from one another with the / character.   
    For example, suppose that a file named liberty is in the home directory of user tpaine. The absolute pathname of this file would be /home/id/name/liberty.
    Remember never to use / to begin a relative pathname; you only use / to begin an absolute pathname
    
    
  A relative pathname can be used to specify where a file is in relation to the working directory.
  # Example 1
  Suppose that a file named barney is in the working directory. The relative name for this file would be barney.

  # Example 2
  Suppose that a file named dino is in a directory named pets which is contained in the working directory. The relative name for this file would be pets/dino
  The period and the double period are important symbols in dealing with directories. The single period refers to the working directory. This means that ./pets/dino is
  equivalent to pets/dino. The double period refers to the parent of the working directory.

  # Editing files
  I highly recommend that you edit files using Visual Studio Code, which can be accessed from the command line by typing code. To edit a specific file, you can type code
  filename. You can open a whole folder with the same format (e.g. open your current directory with code .). This will be your primary approach. You can also access VS
  Code from the Applications menu under Development. 

  # Note that you may add extensions to VSCode. 
  Make sure to add the Live Share extension right away, since that will be very helpful for completing group homework and getting
  program help from me. Link: Live Share - Visual Studio Marketplace. Note that VSCode also has a built-in terminal that can be used just like the terminal
  windows you create in the GUI environment. Commands for getting around pwd
  Stands for print working directory. Displays the absolute pathname for the current directory. If I were in my home directory, the result of pwd would be
  /home/id/name  
    
  # cd
  Stands for change directory. Use this command to switch directories. It typically takes one argument (the directory to move to). With no argument,
  it makes the user’s home directory the working directory.
  
  # Examples:
  Note: On our system, the prompt at which you type will consist of systemName:workingDirectory$  With the directory path using the tilde shortcut. 
  So if you are in your home directory on bur, your prompt would be bur:~$
  
  If you switched to your Documents directory, your prompt would change to bur:~/Documents$
  
  If you were in my public directory on ash, your prompt would be ash:/home/ulid/name/public$
  Because these prompts can get quite long, some of my examples will use just $ for the
  prompt the system displays. The command to type is what is in bold after the $. $ cd pets
  
  Will change the working directory to pets, a subdirectory of the current working directory $ cd ../program2
  
  Will change the working directory to program2, which must be a “sister” directory of the current working directory (i.e. the two directories have the same parent   
  directory).
 
  $ cd
  Will change the working directory to the user’s home directory—on our system typically /home/name/ulid.
  
  ls
  Use this command to list the files in the working directory. You can give it a directory
  name to see the contents of a particular directory. The ls command has several useful options. The most used of these is -l, which gives a “long” file listing with more   
  detailed information about each file.
  
  Commands for dealing with directories : mkdir Stands for make directory. Use to create a new directory within the working directory.
  Takes one argument: the name of the new directory.
  
  # Example:
  
  1. ash:~$ mkdir IT279
  2. ash:~$ cd IT279

# Required textbooks:
  1. Absolute C++, 4th edition by Walter Savitch (Addison-Wesley)

