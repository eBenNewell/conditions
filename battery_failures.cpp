#include <iostream>
int main() {
    int cmd = system("/usr/sbin/ioreg -r -c 'AppleSmartBattery' | /usr/bin/grep 'PermanentFailureStatus' | /usr/bin/awk '{print $3}'");
    std::cout << cmd << std::endl;
    return 0; }
