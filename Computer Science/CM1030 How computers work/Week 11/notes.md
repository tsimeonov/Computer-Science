### Lesson 11.1 History of operating systems

<details>
  <summary>History of operating systems</summary>

</br>

The history of computing is relatively recent.
The `first fully operational computer`, EDSAC was built by Maurice Wilkes at Cambridge.

Other pioneers include Alan Turing (who buily ACE and contributed to AI and cryptography) and John von Neumannm Eckers and Mauchhly in the US who laid tehnical foundtaions for modern computing.

Early computers had no operating systems - users scheduled time and programmed via `punch cards`. Later terminals allowed multiple users to share a mainframe in a system called `timesharing`. Today, we still use timesharing for web servers and manage multiple apps on personal devices.

Modern computers often have `multi-core processors`, allowing `load balancing` - efficiently assigning tasks to different CPU's. The evolution of `operating systems` has largely focused on managing programs and CPU usage efficiently.

</details>

</br>

### Lesson 11.2 Precesses

<details>
  <summary>Processes</summary>

</br>

The activity of executing a program under the control of the operating system is knowns as a `process`. Associated with a process is the current status of the activity, called the `process state`.

A single core CPU cna only run `one instruction at a time`. but it uses `time slicing` to switch rapidly between `processes` , giving the illusion of multitasking. Each process runs briefly before being interrupted and replaced by another.
The `CPU scheduler` may prioritize certain processes or switch if one is waiting. This fast switching creates the impression that multiple programs run simultaneously.

</details>

</br>
