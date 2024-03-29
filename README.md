# Info
Package is provided by Loupe  
https://loupe.team  
info@loupe.team  
1-800-240-7042  

# Description
This repo provides a package that implements the FirstInitProg program.

### Program Package
This program package contains the first task to be run by the PLC, which carries out many required initializations that other tasks depend upon such as but not limited to:
Initializing User Loggers,
Initializing Error Collector,
Linking File Devices for simulation or runtime,
Initializing persist memory,
and Restoring memory from CSV Backups

The included `FirstInitProg` task only contains init code, and should be deployed as the first task in TC1. 

# Installation
To install using the Loupe Package Manager (LPM), in an initialized Automation Studio project directory run `lpm install firstinitprog`. For more information about LPM, see https://loupeteam.github.io/LoupeDocs/tools/lpm.html.

# Licensing

This project is licensed under the [MIT License](LICENSE).