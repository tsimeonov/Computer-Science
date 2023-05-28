# 3.1 The History of Operating Systems
# 3.2 Operating System Arhitecture
## 3.2.1 A Software survey
Two broad software categories:
- Application software
- System software
## 3.2.2 Components of an Operaing System
## 3.2.3 Getting it Started 
This is accomplished through a procedure known as `boot strapping` (often shortened to booting) that is performed by a computer each time it is turned on.
# 3.3 Coordinating the Machine's Activities
## 3.3.1 The concept of a process
The activity of executing a program under the control of the operating system is known as a `process`. Associated with a process is the current status of the activity, called the `process state`.
## 3.3.2 Process Administration 
To keep track of all processes, the scheduler maintains a block of information in main memory called the `process table`.
# 3.4 Handling competition among processes
## 3.4.1 Semaphores
In CS, a semaphore is a variable or abstract data type used to control access to a common resource by multiple threads and avoid critical section problems in a concurent system such as a multitasking operating system.
## 3.4.2 Deadlock
Another problem that can arise during the resource allocation is `deadlock`, the conditionin which two or more processes are blocked from progresssing because eacht is waiting for a resource that is allocated to another.
# 3.5 Security 
## 3.5.1 Attacks from the Outside
## Attacks from Within
