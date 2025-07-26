### Networks

---

### Lesson 13.0 Introduction

---

### Lesson 13.1 Network Architectures

<details>
  <summary>Network Classifications</summary>

Networks are categorized based on size and scope

- `PAN (Personal Area Network)`: Short-range, e.g, wireless mouse or Bluethooth headset
- `LAN (Local Area Network)`: Covers a building or campus
- `MAN (Metropolitan Area Network)`: Covers a city of loca; community
- `WAN (Wide Area Neteork)`: Spnas large geographical areas, even globally

</br>

</details>

</br>

<details>
  <summary>Open vs Close Networks</summary>

- `Open networks`: Use publicly available protocols (e.g, TCP/IP). The internet is an open network
- `Closed (proprietary) networks`: Use company-owned designs: (e.g Microsoft systems)

</br>

</details>

</br>

<details>
  <summary>Network Topologies</summary>

- `Bus topology`: All dedices share a single communication line
- `Star topology`: Devices connect to a central point (access point in WiFi)

</br>

</details>

</br>

<details>
  <summary>Protocols</summary>

- `Protocols` are rules for communication
- `CSMA/CD` (used in Ethernet): Devices listen to the bus and stop if collisions occur.
- `CSMA/CA` (used in wifi): Devices try to avoid collisions due to hidden termina; problems

</br>

</details>

</details>

</br>

<details>
  <summary>Connecting Networks</summary>

- `Repeaters`: Amplify and forward all signals
- `Bridges`: Forward only necessary messages between two networks
- `Switches`: Like multi-port bridges, only send messages to the relevant segments
- `Routers`: Connect different networks (WiFi and Ethernet), forming internets.
  Each device has both local and internet addresses.
- `Gateways`: Devices that link a network to an internet often combining AP and router (as in home WiFi)

</br>

</details>

</br>

<details>
  <summary>Process Communication</summary>

- `Client/Server model`: One server provides services (e.g. print ot file server) to multiple clients.
- `Peer-to-Peer`: Devices act as both clients and servers (e.g. file sharing, messaging)

</br>

</details>

</br>

<details>
  <summary>Distributed Systems</summary>
  
  - `Cluster computung`: A group of tightly connected computers acting as one (high availability and load balancing)
  - `Grid computing`: Loosely connected computers acroos locations
  - `Cloud computing`: On-demand access to virtual computers and storage over the Internet

</br>

</details>

---

### Lesson 13.2 Network Protocols

</br>

<details>
  <summary>Layered Structure of Internet Communication</summary>

Internet communication is organized into `4 layers` of software:

1. `Application Layer` - Contains client and server software (e.g, web browsers email clients).
   Responsible for preparing and requesting data transmission.
2. `Tranport Layer` - Split messages into packets, adds sequence numbers, ensures proper reassembly and routes data to the correct application using `port tnumbers`
3. `Network Layer` - Determines packet routing across the Internet using `forwarding tables` in routers.
4. `Link Layer` - Handles actual data transmission over local network (via Ethernet or WiFi)

Each layer `passes data down` the stack for transmission, and at the destination, each layer `reserves` the process to reconstruct the original message.

</br>

</details>

---
