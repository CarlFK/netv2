#!/usr/bin/env python3

from litescope.software.driver.analyzer import LiteScopeAnalyzerDriver
from litex.soc.tools.remote import RemoteClient

wb = RemoteClient()
wb.open()

# # #

analyzer = LiteScopeAnalyzerDriver(wb.regs, "analyzer", debug=True)
analyzer.configure_trigger(cond={})
analyzer.configure_subsampler(1)
analyzer.run(offset=128, length=256)
analyzer.wait_done()
analyzer.upload()
analyzer.save("dump.vcd")

# # #

wb.close()
