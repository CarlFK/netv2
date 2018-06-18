#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H

/* ddrphy */
#define CSR_DDRPHY_BASE 0x5000
#define CSR_DDRPHY_DLY_SEL_ADDR 0x5000
#define CSR_DDRPHY_DLY_SEL_SIZE 1
#define CSR_DDRPHY_RDLY_DQ_RST_ADDR 0x5004
#define CSR_DDRPHY_RDLY_DQ_RST_SIZE 1
#define CSR_DDRPHY_RDLY_DQ_INC_ADDR 0x5008
#define CSR_DDRPHY_RDLY_DQ_INC_SIZE 1
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_ADDR 0x500c
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_SIZE 1

/* dna */
#define CSR_DNA_BASE 0x5800
#define CSR_DNA_ID_ADDR 0x5800
#define CSR_DNA_ID_SIZE 2

/* flash */
#define CSR_FLASH_BASE 0x6800
#define CSR_FLASH_SPI_CTRL_ADDR 0x6800
#define CSR_FLASH_SPI_CTRL_SIZE 1
#define CSR_FLASH_SPI_STATUS_ADDR 0x6804
#define CSR_FLASH_SPI_STATUS_SIZE 1
#define CSR_FLASH_SPI_MOSI_ADDR 0x6808
#define CSR_FLASH_SPI_MOSI_SIZE 2
#define CSR_FLASH_SPI_MISO_ADDR 0x6810
#define CSR_FLASH_SPI_MISO_SIZE 2

/* icap */
#define CSR_ICAP_BASE 0x7000
#define CSR_ICAP_ADDR_ADDR 0x7000
#define CSR_ICAP_ADDR_SIZE 1
#define CSR_ICAP_DATA_ADDR 0x7004
#define CSR_ICAP_DATA_SIZE 1
#define CSR_ICAP_SEND_ADDR 0x7008
#define CSR_ICAP_SEND_SIZE 1
#define CSR_ICAP_DONE_ADDR 0x700c
#define CSR_ICAP_DONE_SIZE 1

/* pcie_dma0 */
#define CSR_PCIE_DMA0_BASE 0xa000
#define CSR_PCIE_DMA0_WRITER_ENABLE_ADDR 0xa000
#define CSR_PCIE_DMA0_WRITER_ENABLE_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_ADDR 0xa004
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_SIZE 2
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_ADDR 0xa00c
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_PROG_N_ADDR 0xa010
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_PROG_N_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_ADDR 0xa014
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_LEVEL_ADDR 0xa018
#define CSR_PCIE_DMA0_WRITER_TABLE_LEVEL_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_FLUSH_ADDR 0xa01c
#define CSR_PCIE_DMA0_WRITER_TABLE_FLUSH_SIZE 1
#define CSR_PCIE_DMA0_READER_ENABLE_ADDR 0xa020
#define CSR_PCIE_DMA0_READER_ENABLE_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_ADDR 0xa024
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_SIZE 2
#define CSR_PCIE_DMA0_READER_TABLE_WE_ADDR 0xa02c
#define CSR_PCIE_DMA0_READER_TABLE_WE_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_PROG_N_ADDR 0xa030
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_PROG_N_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_ADDR 0xa034
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_LEVEL_ADDR 0xa038
#define CSR_PCIE_DMA0_READER_TABLE_LEVEL_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_FLUSH_ADDR 0xa03c
#define CSR_PCIE_DMA0_READER_TABLE_FLUSH_SIZE 1
#define CSR_PCIE_DMA0_LOOPBACK_ENABLE_ADDR 0xa040
#define CSR_PCIE_DMA0_LOOPBACK_ENABLE_SIZE 1

/* pcie_msi */
#define CSR_PCIE_MSI_BASE 0xb000
#define CSR_PCIE_MSI_ENABLE_ADDR 0xb000
#define CSR_PCIE_MSI_ENABLE_SIZE 1
#define CSR_PCIE_MSI_CLEAR_ADDR 0xb004
#define CSR_PCIE_MSI_CLEAR_SIZE 1
#define CSR_PCIE_MSI_VECTOR_ADDR 0xb008
#define CSR_PCIE_MSI_VECTOR_SIZE 1

/* pcie_phy */
#define CSR_PCIE_PHY_BASE 0x9800
#define CSR_PCIE_PHY_LNK_UP_ADDR 0x9800
#define CSR_PCIE_PHY_LNK_UP_SIZE 1
#define CSR_PCIE_PHY_MSI_ENABLE_ADDR 0x9804
#define CSR_PCIE_PHY_MSI_ENABLE_SIZE 1
#define CSR_PCIE_PHY_BUS_MASTER_ENABLE_ADDR 0x9808
#define CSR_PCIE_PHY_BUS_MASTER_ENABLE_SIZE 1
#define CSR_PCIE_PHY_MAX_REQUEST_SIZE_ADDR 0x980c
#define CSR_PCIE_PHY_MAX_REQUEST_SIZE_SIZE 1
#define CSR_PCIE_PHY_MAX_PAYLOAD_SIZE_ADDR 0x9810
#define CSR_PCIE_PHY_MAX_PAYLOAD_SIZE_SIZE 1

/* sdram */
#define CSR_SDRAM_BASE 0x4000
#define CSR_SDRAM_DFII_CONTROL_ADDR 0x4000
#define CSR_SDRAM_DFII_CONTROL_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_ADDR 0x4004
#define CSR_SDRAM_DFII_PI0_COMMAND_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_ADDR 0x4008
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_SIZE 1
#define CSR_SDRAM_DFII_PI0_ADDRESS_ADDR 0x400c
#define CSR_SDRAM_DFII_PI0_ADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI0_BADDRESS_ADDR 0x4010
#define CSR_SDRAM_DFII_PI0_BADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI0_WRDATA_ADDR 0x4014
#define CSR_SDRAM_DFII_PI0_WRDATA_SIZE 1
#define CSR_SDRAM_DFII_PI0_RDDATA_ADDR 0x4018
#define CSR_SDRAM_DFII_PI0_RDDATA_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_ADDR 0x401c
#define CSR_SDRAM_DFII_PI1_COMMAND_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_ADDR 0x4020
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_SIZE 1
#define CSR_SDRAM_DFII_PI1_ADDRESS_ADDR 0x4024
#define CSR_SDRAM_DFII_PI1_ADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI1_BADDRESS_ADDR 0x4028
#define CSR_SDRAM_DFII_PI1_BADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI1_WRDATA_ADDR 0x402c
#define CSR_SDRAM_DFII_PI1_WRDATA_SIZE 1
#define CSR_SDRAM_DFII_PI1_RDDATA_ADDR 0x4030
#define CSR_SDRAM_DFII_PI1_RDDATA_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_ADDR 0x4034
#define CSR_SDRAM_DFII_PI2_COMMAND_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_ISSUE_ADDR 0x4038
#define CSR_SDRAM_DFII_PI2_COMMAND_ISSUE_SIZE 1
#define CSR_SDRAM_DFII_PI2_ADDRESS_ADDR 0x403c
#define CSR_SDRAM_DFII_PI2_ADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI2_BADDRESS_ADDR 0x4040
#define CSR_SDRAM_DFII_PI2_BADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI2_WRDATA_ADDR 0x4044
#define CSR_SDRAM_DFII_PI2_WRDATA_SIZE 1
#define CSR_SDRAM_DFII_PI2_RDDATA_ADDR 0x4048
#define CSR_SDRAM_DFII_PI2_RDDATA_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_ADDR 0x404c
#define CSR_SDRAM_DFII_PI3_COMMAND_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_ISSUE_ADDR 0x4050
#define CSR_SDRAM_DFII_PI3_COMMAND_ISSUE_SIZE 1
#define CSR_SDRAM_DFII_PI3_ADDRESS_ADDR 0x4054
#define CSR_SDRAM_DFII_PI3_ADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI3_BADDRESS_ADDR 0x4058
#define CSR_SDRAM_DFII_PI3_BADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI3_WRDATA_ADDR 0x405c
#define CSR_SDRAM_DFII_PI3_WRDATA_SIZE 1
#define CSR_SDRAM_DFII_PI3_RDDATA_ADDR 0x4060
#define CSR_SDRAM_DFII_PI3_RDDATA_SIZE 1
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_UPDATE_ADDR 0x4064
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_UPDATE_SIZE 1
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_NREADS_ADDR 0x4068
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_NREADS_SIZE 1
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_NWRITES_ADDR 0x406c
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_NWRITES_SIZE 1
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_DATA_WIDTH_ADDR 0x4070
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_DATA_WIDTH_SIZE 1

/* timer0 */
#define CSR_TIMER0_BASE 0x2000
#define CSR_TIMER0_LOAD_ADDR 0x2000
#define CSR_TIMER0_LOAD_SIZE 1
#define CSR_TIMER0_RELOAD_ADDR 0x2004
#define CSR_TIMER0_RELOAD_SIZE 1
#define CSR_TIMER0_EN_ADDR 0x2008
#define CSR_TIMER0_EN_SIZE 1
#define CSR_TIMER0_UPDATE_VALUE_ADDR 0x200c
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
#define CSR_TIMER0_VALUE_ADDR 0x2010
#define CSR_TIMER0_VALUE_SIZE 1
#define CSR_TIMER0_EV_STATUS_ADDR 0x2014
#define CSR_TIMER0_EV_STATUS_SIZE 1
#define CSR_TIMER0_EV_PENDING_ADDR 0x2018
#define CSR_TIMER0_EV_PENDING_SIZE 1
#define CSR_TIMER0_EV_ENABLE_ADDR 0x201c
#define CSR_TIMER0_EV_ENABLE_SIZE 1

/* uart */
#define CSR_UART_BASE 0x1000
#define CSR_UART_RXTX_ADDR 0x1000
#define CSR_UART_RXTX_SIZE 1
#define CSR_UART_TXFULL_ADDR 0x1004
#define CSR_UART_TXFULL_SIZE 1
#define CSR_UART_RXEMPTY_ADDR 0x1008
#define CSR_UART_RXEMPTY_SIZE 1
#define CSR_UART_EV_STATUS_ADDR 0x100c
#define CSR_UART_EV_STATUS_SIZE 1
#define CSR_UART_EV_PENDING_ADDR 0x1010
#define CSR_UART_EV_PENDING_SIZE 1
#define CSR_UART_EV_ENABLE_ADDR 0x1014
#define CSR_UART_EV_ENABLE_SIZE 1

/* uart_phy */
#define CSR_UART_PHY_BASE 0x800
#define CSR_UART_PHY_TUNING_WORD_ADDR 0x800
#define CSR_UART_PHY_TUNING_WORD_SIZE 1

/* xadc */
#define CSR_XADC_BASE 0x6000
#define CSR_XADC_TEMPERATURE_ADDR 0x6000
#define CSR_XADC_TEMPERATURE_SIZE 1
#define CSR_XADC_VCCINT_ADDR 0x6004
#define CSR_XADC_VCCINT_SIZE 1
#define CSR_XADC_VCCAUX_ADDR 0x6008
#define CSR_XADC_VCCAUX_SIZE 1
#define CSR_XADC_VCCBRAM_ADDR 0x600c
#define CSR_XADC_VCCBRAM_SIZE 1
#define CSR_IDENTIFIER_MEM_BASE 0x1800

/* constants */
#define TIMER0_INTERRUPT 1
#define UART_INTERRUPT 2
#define CSR_DATA_WIDTH 32
#define SYSTEM_CLOCK_FREQUENCY 100000000
#define READ_LEVELING_BITSLIP 3
#define READ_LEVELING_DELAY 14
#define L2_SIZE 8192
#define PCIE_DMA0_READER_INTERRUPT 0
#define PCIE_DMA0_WRITER_INTERRUPT 1
#define CONFIG_CLOCK_FREQUENCY 100000000
#define CONFIG_CPU_RESET_ADDR 536870912
#define CONFIG_CPU_TYPE "LM32"
#define CONFIG_CSR_DATA_WIDTH 32

#endif
