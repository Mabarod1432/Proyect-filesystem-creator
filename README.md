# Proyect filestem creator.
When creating art or develpment proyects i usually need to create filesystems for each proyect, the tipical source, private and public on a web project, the assets folder on a pygame one.
Here i made an C script that helps me make a filesystem for a project just in one command.

## Prerequisites

1. A os with a linux or unix style filesystem
2. A x86 architecture processor
3. Gcc compiler (optional)

## Instructions for common use and download
1. Download the binary its named `filesysoperation`
2. Copy the file to `~/usr/local/bin`
3. Then in the ~/usr/local/bin
4. And use the command `chmod +x "Filename"`
5. Now you can use the binary on every part of the command line (even with sudo)
6. The ussage is easy: `filesysoperation type subtype specific-type`

          |-- Art (type)
          |   -- Modeling (subtype)
          |   -- music 
          |      -- pop (specific type)
          |      -- Rock 
          |
          |
          |-- Dev
          | -- node ( the command is node but its for node js projects )
          | -- php
          | -- Pygame
          | -- Pybasic ( the command is Pybasic but its for basic python projects )



In case you want to create custom commands for types or subtypes you can easily do it with some c programming, or you can gimme a Github issue for me see.


  
