# C Command Line Interface

C language template for entering commands.

Known Issues:
- Tokenize function does not ignore spaces at end of line.

## ChangeLog
v0.0.12
- Added size function to list files.
- Added stringCompare function to command files.

v0.0.11
- Updated getCommands while loop condition.

v0.0.10
- Updated getCommands to add NULL character to final node.

v0.0.9
- Updated exit command with strcmp.

v0.0.8
- Added exit command.

v0.0.7
- Added isEmpty function, list empty check to getCommands.
- Added commands .h/.c files.

v0.0.6
- Updated init, addBack functions with malloc error checks.

v0.0.5
- Testing Git branching: updated print function tab spacing.

v0.0.4
- Added null character to each token, check for new line '\n' first character.

v0.0.3
- Replaced strtok with hand rolled tokenize function.

v0.0.2
- Added getCommands function.

v0.0.1
- Added command line input.
- Updated ssl print, added clear function.

v0.0.0
- Initial commit.