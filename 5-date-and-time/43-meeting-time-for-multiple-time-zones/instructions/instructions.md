# Objective

Write a function that, given a list of meeting participants and their time zones, displays the local meeting time for each participant.

# Implementation

To work with time zones, you must use the `tz.h` header of the `date` library. However, this needs the **IANA Time Zone Database** to be downloaded and uncompressed on your machine.

This is how to prepare the time zone database for the date library:

Download the latest version of the database from https://www.iana.org/time-zones. Currently, the latest version is called `tzdata2017c.tar.gz.`
Uncompress this to any location on your machine, in a subdirectory called `tzdata`. Let's suppose the parent directory is `c:\work\challenges\libs\date` (on a Windows machine); this will have a sub directory called `tzdata`.
For Windows, you need to download a file called `windowsZones.xml`, containing mappings of Windows time zones to IANA time zones. This is available at https://unicode.org/repos/cldr/trunk/common/supplemental/windowsZones.xml. The file must be stored in the same `tzdata` sub directory created earlier.
In your project settings, define a preprocessor macro called `INSTALL` that indicates the parent directory for the `tzdata` sub directory. For the example given here, you should have `INSTALL=c:\\work\\challenges\\libs\\date`. (Note that the double backslash is necessary because the macro is used to create a file path using stringification and concatenation, and would otherwise result in an incorrect path.)