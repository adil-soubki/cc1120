#pragma once

enum Register {
    IOCFG3 = 0x00,
    IOCFG2 = 0x01,
    IOCFG1 = 0x02,
    IOCFG0 = 0x03,
    SYNC3 = 0x04,
    SYNC2 = 0x05,
    SYNC1 = 0x06,
    SYNC0 = 0x07,
    SYNC_CFG1 = 0x08,
    SYNC_CFG0 = 0x09,
    DEVIATION_M = 0x0A,
    MODCFG_DEV_E = 0x0B,
    DCFILT_CFG = 0x0C,
    PREAMBLE_CFG1 = 0x0D,
    PREAMBLE_CFG0 = 0x0E,
    FREQ_IF_CFG = 0x0F,
    IQIC = 0x10,
    CHAN_BW = 0x11,
    MDMCFG1 = 0x12,
    MDMCFG0 = 0x13,
    SYMBOL_RATE2 = 0x14,
    SYMBOL_RATE1 = 0x15,
    SYMBOL_RATE0 = 0x16,
    AGC_REF = 0x17,
    AGC_CS_THR = 0x18,
    AGC_GAIN_ADJUST = 0x19,
    AGC_CFG3 = 0x1A,
    AGC_CFG2 = 0x1B,
    AGC_CFG1 = 0x1C,
    AGC_CFG0 = 0x1D,
    FIFO_CFG = 0x1E,
    DEV_ADDR = 0x1F,
    SETTLING_CFG = 0x20,
    FS_CFG = 0x21,
    WOR_CFG1 = 0x22,
    WOR_CFG0 = 0x23,
    WOR_EVENT0_MSB = 0x24,
    WOR_EVENT0_LSB = 0x25,
    PKT_CFG2 = 0x26,
    PKT_CFG1 = 0x27,
    PKT_CFG0 = 0x28,
    RFEND_CFG1 = 0x29,
    RFEND_CFG0 = 0x2A,
    PA_CFG2 = 0x2B,
    PA_CFG1 = 0x2C,
    PA_CFG0 = 0x2D,
    PKT_LEN = 0x2E,
    EXTENDED_ADDRESS = 0x2F
};