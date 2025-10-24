<details>
  <summary>Quick history of the internet: From Arpanet to the 80s</summary>
  
<br>

The history of the Internet began in the 1960s with the `ARPANET`, a US project created by the Advanced Research Project Agency (ARPA) in response to the Cold War arms race.

A key innovation was the shift to `packet switching`, which breaks data into small pieces for more robust and efficient transmissions. The fist ARPANET node was established in 1969.

During the 1970s, the network expanded, `email` was invented, and a public demo in 1972 sparked wilder interest, leadning to a "wild west" period of many incompatible networks.

The turning point came in the early 1980s when ARPANET officially adopted the `RCP/IP` protocol, creating a universal standard for communication. This, combined with the formation of large educational networks, set the stage for the modern Internet.

The era culminated in `1989` with the launch of the first commercial `Internet Service provider (ISP)` in the US, making the network publicly accessible and leadning to its exponential growth.

</details>

---

<details>

  <summary>From Web 1.0 to Society 5.0</summary>

- `Web 1.0 (The Read-only Web)`: Starting aroubd 1990 with Tim Berners-Lee's invention, this era was characterized by static web pages created by a small group of developers. The primary focus was on publishing ang accesiing information, not user interaction.
- `Web 2.0 (The Social Web)`: Beginning in late 1990s and early 2000s, this phase marked the shift to "Read-Write" web. It empowered everyday users to create and share content through blogs (Wordpress), social media (Facebook), and dynamic applications, enabled by technologies like AJAX and JSON.
- `Web 3.0 (The Semantic Web)`: This was a formal push by the W3C to create a more sturctured, machine-readable web using technologies like RDF and OWL. The goal was for software to understand and reason about data, but this vision was largely unrealized due to its complexity. This is distinct from the modern term `Web3`, which is base on blockchain technology.
- `Web 4.0 (The symbiotic Web)`: This describes our current era, where humans and automonous machine agents (AIs, algorithms) interact constantly. The web is a "jungle" of AI-generated content and complex systems operating alongside human users.
- `Web 5.0 (A Human-Centric Vision)`: This is presented as a future goal or philosophy, aiming to create an "internet as if people mattered". It is a response to the current model of data harvesting, seeking to refocus the web on improving social welfare and sustainability.

<br>

</details>

---

The internet today

<details>

  <summary>Internet growth and usage</summary>

Statistics show exponential growth in internet users worldwide since the 1990s, although significant regional differences remain, with some areas still having relatively low penetration even in 2020. Asia has surpassed other regions in the total number of users.

`Usage patterns` have dramatically diversified. Early usage focused on fewer activities, while today (using UK data up to 2020) people use the internet for a wide array of things like social networking, instant messaging, streaming video and so on.

<br>

</details>

<br>

<details>

  <summary>Human Integration and Challenges</summary>

The concept of the evolution if the cyborg is introduced, describing how humans are becoming increasigly integrated with and dependent on the internet, augmenting their lives with technology and blurring the lines between the physical and digital self.

`Cybersecurity` remains a major concern, encompassing cyber attacks, data breaches and ransome, highlighting the need to protect personal information in our increasingly connected lives.

<br>

</details>

<br>

<details>

  <summary>Future Trends</summary>

The video touches on future trends like `5G/6G`, the `internet of everything (IoT)`, the ongoing impach of `AI`, and the potential of the Metaverse, questioning what the internet of tommorw will look like

</details>

---

The client-server concept and the need for protocols

<details>

  <summary>How resources are accessed</summary>

To get a resource (like a file or webpage) from point on the internet to another, we use a client-server architecture:

- `Server`: A computer or software that `holds` the resource or provides a service.
- `Client`: A computer or software (like your browser) that `wants` to access the resource.
- `Interaction`: The client sends a `request` to the server asking for the resource, and the server sends back a `response` containing the resource or an error message.

<br>

</details>

<details>

  <summary>The need for protocols</summary>

Informal requests are ambiguous ("Give me the file"). For computers to communicate reliably they need a formal, structured set of rules - a protocol. Protocols define exactly how request and responses should be formatted so both client and server understand each other.

Key questions a protocol helps answer include:

- Where is the server located?
- Which specific resource on that server in needed?
- Where should the server send the response back to (the clients address)?
- What/ who is the client (for security or compatibility)?

<br>

</details>

--- 

The HTTP Protocol

<details>

  <summary>Core Concepts</summary>

<br>

- `Client-Server Model`: The internet largely operates on this model. A `client` (e.g, your web browser) wants a resource and a `server` (e.g, a websites computer) provides it.
- `Request-Response Cycle` - The client sends a `request` to the server, and the server sends back a response.
- `Need for Protocols`: To avoid ambiguity, structured rules (`protocols`) like HTTP are needed to define how clients ans servers communicate, specifyiong details like server location, resource requested, client address, etc.
  
<br>

</details>

<details>

  <summary>HTTP Message Structure</summary>

  <br>

Both requests and responses consist of:

- `Headers`: Metadata providing contect about the request/response (e.g, client capabilities like `Accept` encodings/languages, server information like `Content-length`, `Data`)
- `Body`: contains the actual data beign transferred (e.g, the HTML of a webpage in a response, or form data in a request)
  
<br>

</details>

<details>

  <summary>HTTP Methods (Verbs)</summary>

  <br>

Different actions are performed using different methods:
- `GET`: Used by the client to `request/pull` data from server (e.g loading a webpage). GET requests typically have an empty body.
- `POST`: Used by the client to `send/push` data to the server (e.g, submitting a login form). POST requests include the data in the `body`.
- `PUT`: Sililat to the POST, but typically uses to `update or replace` and exisitng resource at a specific URL.
- `DELETE`: Used to `remove` a resource from the server. 

</details>
