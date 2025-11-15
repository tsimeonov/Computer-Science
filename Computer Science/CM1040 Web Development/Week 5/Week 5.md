## Ecosystem of the internet: clients, servers, humans and machines

<details>
  <summary>🌐 An Ecosystem of Clients and Servers</summary>
  
<br>

The lecure explains that the internet is a complex "ecosystem" of a massive variety of "cliets" (which make requests) and "servers" (which answer them).

1. Clients and the user-agent

A client is any browser that issues a request. This includes:

- Browsers
- Web applications (code running in a browser tht makes background requests)
- Web Spiders / Crawlers (automated bots used by search engines or for training LLMs).

To indentify these different clients, the `User-Agent String` was added to the HTTP protocol in 1993.

- `Historical Purpose`: In the early web, browsers like Netscape and Internet Explorer had different capabilities. The user-agent string allowed a server to identify the client and send compatible HTML.
- `Use Today`: A 2023 study showed that while servers generally no longer send different initial HTML, about `10% of popular websites still use clinet-side JS` to check the User-Agent and change how the page renders.

2. The variety of servers

Like clients, there is a wide variety of server-side software. The video shows data (from 2024) on the most popular web servers:

- Nginx (the most common)
- Apache (formarly the most common)
- Cloudflare
- Micrisift-IIS

3. Security Threats

This complex ecosystem of thousands of different clients and servers creates uniques security vulnerabilities:

- Phishing - Malicious actors create a fake server (E.g a website that looks like your bank) to trick a user into givving up credentials

- DDos (Distributed Deniel of Service): An attacker uses a "botnet" (a huge network of infected clients) to flood a single server with millions of requests, overwhelming it.

- Man-in-the middle: An attacker positions themselves between a client and a server to intercept or alter the data being communicated.
</details>

<br>
