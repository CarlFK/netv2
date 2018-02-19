import time
from litex.soc.tools.remote import RemoteClient
from litescope.software.driver.io import LiteScopeIODriver


def led_anim(inout):
    for i in range(10):
        io.write(0xa5)
        time.sleep(0.1)
        io.write(0x5a)
        time.sleep(0.1)


wb = RemoteClient()
wb.open()

# # #

io = LiteScopeIODriver(wb.regs, "io")
led_anim(io)
print("{:04x}".format(io.read()))

# # #

wb.close()
