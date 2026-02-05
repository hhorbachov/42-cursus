*This project has been created as part of the 42 curriculum by hhorbach*

# Description

Born2beRoot is the first system administration project in the 42 Core Curriculum. The goal is to create a secure, virtualized server environment to understand the fundamental operations of an operating system.

This project involves setting up a Virtual Machine (VM) with strict partitioning, password policies, and firewall rules. It serves as an introduction to virtualization, Logical Volume Management (LVM), SSH configuration, and system monitoring via Bash scripting.

Choice of Operating System

Why Debian? Debian was selected for its renowned stability and its massive package repository. It is the upstream for Ubuntu and many other distros, making it an essential environment for students to master.

## Technical Comparisons

As part of the system design, specific tools were selected. Here is how they compare to their alternatives:

### AppArmor vs SELinux

1. AppArmor (Application Armor): Used in Debian. It creates security profiles for specific applications, restricting what files they can read/write/execute. It is path-based and generally considered easier to configure for beginners.

2. SELinux (Security Enhanced Linux): Used in Rocky/RHEL. It uses a labeling system (inodes) for files and processes. It is more granular and powerful but significantly more complex to troubleshoot.

### UFW vs Firewalld

1. UFW (Uncomplicated Firewall): The default firewall tool for Debian/Ubuntu. It is a simplified interface for iptables designed to be easy to use.

2. Firewalld: The default for Red Hat systems. It uses "zones" to define trust levels for network connections and supports dynamic updates without breaking existing connections.

### VirtualBox vs UTM

1. VirtualBox: A Type-2 hypervisor for x86 hardware. It is free, open-source, and widely used on Windows, Linux, and Intel Macs.

2. UTM: A virtualization tool primarily for macOS (especially Apple Silicon M1/M2/M3). It uses QEMU under the hood to emulate x86 architectures on ARM chips, which is necessary for students on newer MacBooks to run x86 ISOs if not using the ARM version of Debian.

Main Design Choices

1. Partitioning: Automated LVM (Logical Volume Manager) was used to allow dynamic resizing of partitions. The structure includes distinct partitions for /home, /var, /srv, /tmp, and /var/log to prevent system logs or user files from filling the root directory.

2. Encryption: The LVM partition is encrypted using LUKS.

3. SSH: Port 22 is disabled; SSH runs on port 4242. Root login is strictly forbidden to prevent brute-force administrative access.

4. Password Policy: Implemented via libpam-pwquality to enforce uppercase, lowercase, numbers, and prevent repeating characters.

# Instructions

## 1. Installation

This project does not require compilation (no Makefile). It is a Virtual Machine image.

1. Ensure VirtualBox is installed on your host machine.

2. Clone this repository or download the .vdi (disk image) / .vbox files provided.

3. Open VirtualBox and verify the VM signature using shasum to ensure it matches the submission.

`shasum "Born2beRoot.vdi"`

## 2. Execution

1. Launch the Virtual Machine in VirtualBox.

2. The machine will boot into the encrypted partition prompt.

3. Unlock the Disk: Enter the encryption password set during installation.

4. Login: Use the user credentials (e.g., hhorbach42) or root (only on the physical TTY, not SSH).

## 3. Connection via SSH

To connect from your host terminal (ensure port forwarding is set to Host: 2222 -> Guest: 4242):

`ssh <username>@localhost -p 2222`

## 4. Monitoring

The monitoring script is located at /usr/local/bin/monitoring.sh. It is executed automatically by cron every 10 minutes. To run it manually:

`sudo /home/hhorbach/monitoring.sh`

# Resources

## References

1. [Debian Administrator's Handbook](https://debian-handbook.info/) - The bible of Debian management.

2. [Sudoers Manual](https://www.google.com/search?q=https://www.sudo.ws/docs/man/1.8.13/sudoers.man.html) - Documentation for configuring sudo policies.

3. [UFW Essentials](https://www.digitalocean.com/community/tutorials/how-to-set-up-a-firewall-with-ufw-on-debian-10) - Guide to setting up the firewall.

4. [Bash Scripting Cheat Sheet](https://devhints.io/bash) - Reference for the monitoring script.

## AI Usage Disclosure

1. Concept Explanation: AI (ChatGPT/Gemini) was used to clarify the differences between SELinux and AppArmor to ensure accurate definitions in the documentation.

2. Script Optimization: AI was prompted to suggest 
efficient awk and grep commands for the 
monitoring.sh script to parse CPU and RAM usage cleanly.

3. Documentation: This README structure was generated with the assistance of AI to ensure all subject requirements were met efficiently.
