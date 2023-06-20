# Network Fundamentals

> Before getting started with Google Cloud Platform, it is important to know about some networking fundamentals in order to proceed with the subsequent chapters
> Even though cloud computing is an evolution of the on-premise computing infrastructure, some basic concepts are also applicable here.

## Terminologies used

1: **IP Address** (Internet Protocol Address) : Like postal addresses, servers also need an identity on the Internet. An IP address is a combination of unique numbers assigned to the server. For example, 8.8.8.8 is the public address of <https://dns.google>. Open the website and try finding the IPs of different websites.

---

2: **Ports** : Ports are like the entry gates to the machine or server. Imagine a building where different entrances are created and dedicated to other people. Servers allow Internet or browser traffic using default ports 80 and 443. IP addresses and ports combined constitute the full location of the server. For example, 8.8.8.8:443 is the same as <https://dns.google>

---

3: **DNS** (Domain Name System) : “google.com” is a domain name, and 172.217.166.174 is the IP address of this domain. DNS is a database where all the mapping of IPs and domain names are maintained.

---

4: **Firewall** : The Firewall is a system through which we allow or deny entry and exit to and from our servers. We can use IPs, Ports, or a group of IPs to allow or deny traffic.

---

5: **VPC** (Virtual Private Cloud) : A VPC is a virtual network/space created using logical boundaries on top of the existing hardware. All the resources created using cloud computing are always in one VPC.

---
6: **Subnet** : Subnet is short for “Sub Network.” A VPC is divided into small organizable units or sub-networks. There should be at least one subnetwork to create any resource in VPC. Sometimes, subnetworks are designed to represent a physical region or area logically.

---

7: **VM** (Virtual Machine) : This is the building block of any network infrastructure. A VM is a virtual computer connected to the VPC.

---

8: **Layers** : A network consists of so many layers. The standard OSI model divides the network into seven layers. However, cloud computing abstracts the first three layers, and the rest of the layers are managed by us. In GCP, we mainly deal with Layer 4 and Layer 7

---
