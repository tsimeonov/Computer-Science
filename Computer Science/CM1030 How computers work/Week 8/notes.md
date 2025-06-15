### Computer architecure (continued)

---

### Lesson 8.1 Communicating with devices

#### `Peripherals`

A computer includes more than just a CPU and memory - it also has `peripheral devices` like keyboards, screens and hard disks. These devices connect to the `CPU and memeory via the bus`, using `controllers` to manage communication.
Some controllers are simple (like USB), while others (like GPUs) are powerful and specialized.

`Peripheral communication` often uses `memory-mapped I/O`. where devices appear as memeory addresses. Some devices, like hard disks, use `Direct memory access (DMA)` to transfer data directly to memory without burdening the CPU.

Acccess speed varies: `registers are fastest`, following by `memeory`, and then `peripherals` - which are slowest. This difference in speed affects overall computer performance.
