### Lesson 12.1 Inter-process Communication

<details>
  <summary>Semaphores</summary>

</br>

An `operating system (OS)` allocates system resources like memmory, files and devicees to `processes`. This must be done carefully to prevent errors, such as `two processes using the printer simultaneously`. To avoid this, the OS uses a `flag (or semaphone)` to control access. However, if a process is interrupted while checking and setting the flag, it can lead to incorrect access.

To solve this, critical operations (like checking and setting flags) must be `uninterruptible` using methods like:

- Disabling interrupts
- Atomic instructions like `teast-and-set`

This ensures `mutual exclusion` where only one process can enter a `critical region` (code needing exclusive access) at a time.

`Deadlock` accurs when processes wait indefinitely for resources held by each other.

</details>

</br>
