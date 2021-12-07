# README #

This is LAB 03 StarterKit. This project defines an Player Finite State Manhine


### What is this repository for? ###

* Lab 03 Experiment with FSM to enable specific player state transitions

### How do I get set up? ###

* Clone repository
* Ensure `SFML_SDK` environment variable exits
* Select a project default target `x64` when running executable
* If the project builds but does not `xcopy` the required dll's try moving your project to a directory you have full access to, see http://tinyurl.com/SFMLStarter for a guide on post build events.
* Alternatively set the Environment Variable in Configuration Properties | Debugging | Environment to `PATH=%PATH%;%SFML_SDK%\bin` this will ensure DLL's are discoverable when running in debug mode with copying the DLL's to the executable directory

### Cloning Repository ###
* Run GitBash and type the Follow commands into GitBash

* Check Present Working Directory `pwd`

* Change to the C drive or other drive `cd c:`

* Make a projects Directory `mkdir projects`

* Change to the projects directory by `cd projects`

* Clone the project `git clone https://MuddyGames@bitbucket.org/MuddyGames/gameplay-programming-i-lab03-a.git`

* Change to the project directory `cd projects gameplay-programming-i-lab03-a`

* List files that were downloaded `ls`

* Add project folder to include path Project | Properties | Configuration Properties | VC++ Directories | Include Directories  and add `$(ProjectDir);$(SFML_SDK)\include;$(IncludePath)`
 ![Include Directories](/AnimatedFSM/Setup/ProjectDirectoryInclude.PNG)
* Add SFML_SDK dll's to Debugging Environment, go to Project | Properties | Configuration Properties | Debugging | Environment and add `PATH=%PATH%;%SFML_SDK%\bin\`
 ![Environment](/AnimatedFSM/Setup/Environment.PNG)

### Who do I talk to? ###

* philip.bourke@itcarlow.ie
