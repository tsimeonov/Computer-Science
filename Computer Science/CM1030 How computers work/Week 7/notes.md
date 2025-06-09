### Lesson 7.0 Introduction

---

### Lesson 7.1 Computer architecture

#### CPU and memory

The `CPU` (central processing unit) is the brain of the computer that performs calculations and controls program execution.
It interacts with `main memory` via a `bus` and processes data store in fast, small `registers`. Larger, but still fast `cache memory` helps speed up access to frequently used data.

The CPU uses a `fetch-execute cycle`, reading instructions from memory using the `program counter` and `instruction register`.
These instructions act on data in registers using the `arithmetic logic unit (ALU)` and are guided by the control unit.
While CPU speed (in GHz) is important, `memeory speed`, `bus speed` and especially `cache size` often have a greater impact on overall performance.

Key concepts and examples:

- `CPU and memory interaction`

Description: Data is moved between memory and the CPU via the bus, a set of wires that allows fast data interchange.

Example: The bus connects the CPU and memory, enabling the CPU to access and process data quickly.

- `Arithmetic logical unit (ALU)`

Description: The ALU performs numerical and logical calculations, forming the core of the CPU's computational abilities.

Example: Adding values to variables or performing mathematical operations are tasks handled by the ALU.

- `Control unit`

  - Description: The control unit manages the execution of instructions within a program, including conditional operations like 'if' statements.

  - Example: Deciding which bit of code to execute based on a condition is controlled by the control unit.

- `Registers`

  - Description: Registers are small, fast memory locations within the CPU used to store data temporarily during calculations.

  - Example: Data is loaded from main memory into registers for quick access during arithmetic operations.

- `Cache memory`

  - Description: The cache is a smaller, faster type of memory located close to the CPU, used to store frequently accessed data to speed up processing.

  - Example: A large and fast cache can significantly enhance computer performance by reducing the need to access slower main memory.

- `Stored program concept`

  - Description: Programs and instructions are stored in memory just like data, allowing flexibility in using different software on the same hardware.

  - Example: The CPU fetches and executes instructions from memory, enabling the use of various software applications.

- `Fetch-execute cycle`

  - Description: The CPU operates in a cycle of fetching instructions from memory and executing them, guided by special registers like the program counter and instruction register.

  - Example: The program counter indicates the location of the next instruction, which is then loaded into the instruction register for execution.

- `Factors influencing computer performance`

  - Description: While CPU speed (measured in gigahertz) is important, other factors like bus speed, memory speed, and cache size also significantly impact performance.

  - Example: A fast CPU with a slow bus or small cache may not perform as well as a balanced system with optimised components.

---

### Lesson 7.2 Machine language and execution
