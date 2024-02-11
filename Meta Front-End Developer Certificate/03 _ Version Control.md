# Week 1

## 1. Course Introduction

## 2. Introduction to Version Control

### 2.1 What is version control
Version control is a system that records all changes and modifications to files for tracking purposes.

### 2.2 Systems of version control and tools

Version control systems:
- Subversion
- Perforce
- AWS Code Commit
- Mercurial
- Git

Types of Version contol systems:
- Centralized
- Distributed

# Week 2

## 1. Unix Commands

### 1.1 The command line

### 1.2 What are the Unix commands?

- man (manual)
- cd (change directory)
- ls (show content)
- pwd (print working directory)
- cp (copy)
- mv (move)

### 1.3 Pipes 
A coding tool that allows the output of one command to be used as the input for a different command

### 1.4 Redirection
- Standard output
- Standard error
- Standard input

### 1.4 Grep
GREP - global regular expression print. And it's used for searching across files and folders as well as the contens of files.

# Week 3

## 1. Git and Github

### 1.2 What is Git and Github?
Git - version control system for tracking changes to projects.
GitHub is a cloud -bassed hosting service that lets you manage Git repositories from a user interface.

### 1.2 Branches
Git branches exists in isolation
Changes need to be merged back to the main branch

### 1.3 Push and Pull

### 1.4 HEAD 
The term `head` refers to the latest commit in a branch or a specific reference. It represents the most recent state of a branch or a particular commit that is being referenced.

```
cd .git
cat HEAD
ref: refs/heads/main
HEAD (END)
```
### 1.5 Diff commands
In Git, the 'dif' command is used to show the differences between various entities in the repository, such as files, branches or even different verisons of the same file.
Git status ----------> Which files were changed
Git diff -----------> What changes were made

### 1.6 Blame
The `git blame` command is used in Git todisplay information about whos last modified each line of a file and when the modification occured.
