#ifndef ULTASONIC_FLOW_MODEL_ESP32_H
#define ULTASONIC_FLOW_MODEL_ESP32_H

/*
 Author: Smaran Rangarajan Bharadwaj ft. Mouli Sankaran 
 CAUTION: This is an auto generated file.
 DO NOT EDIT OR MAKE ANY CHANGES TO IT.
 This model data was generated on Thu Oct 31 21:12:15 2024

 Tools used:
 Python:3.8.15 | packaged by conda-forge | (default, Nov 22 2022, 08:52:09) 
[Clang 14.0.6 ]
 Numpy:1.19.5
 TensorFlow:3.8.15 | packaged by conda-forge | (default, Nov 22 2022, 08:52:09) 
[Clang 14.0.6 ]
 Keras: 2.6.0

 Model details are:
 NUM_OF_EPOCHS = 300
 BATCH_SIZE    = 2
*/

const int DENSE1_SIZE = 24;
const int DENSE2_SIZE = 18;

const unsigned int ultasonic_flow_model_esp32_len = 4960;
alignas(8) const unsigned char ultasonic_flow_model_esp32[] = {
0x1c,0x00,0x00,0x00,0x54,0x46,0x4c,0x33,0x14,0x00,0x20,0x00,
0x04,0x00,0x08,0x00,0x0c,0x00,0x10,0x00,0x14,0x00,0x00,0x00,
0x18,0x00,0x1c,0x00,0x14,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
0x74,0x00,0x00,0x00,0x68,0x00,0x00,0x00,0x64,0x01,0x00,0x00,
0x0c,0x00,0x00,0x00,0x0c,0x01,0x00,0x00,0x78,0x00,0x00,0x00,
0x14,0x00,0x00,0x00,0x1c,0x13,0x00,0x00,0x18,0x13,0x00,0x00,
0x3c,0x12,0x00,0x00,0x24,0x0f,0x00,0x00,0x60,0x0e,0x00,0x00,
0x38,0x0c,0x00,0x00,0x88,0x0b,0x00,0x00,0x38,0x0a,0x00,0x00,
0xa0,0x09,0x00,0x00,0xf8,0x08,0x00,0x00,0x80,0x08,0x00,0x00,
0xf0,0x12,0x00,0x00,0xec,0x12,0x00,0x00,0xe8,0x12,0x00,0x00,
0xe4,0x12,0x00,0x00,0xe0,0x12,0x00,0x00,0xdc,0x12,0x00,0x00,
0xd8,0x12,0x00,0x00,0xd4,0x12,0x00,0x00,0xe8,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x20,0x01,0x00,0x00,0x05,0x00,0x00,0x00,
0xc0,0x07,0x00,0x00,0xfc,0x06,0x00,0x00,0x00,0x06,0x00,0x00,
0x64,0x02,0x00,0x00,0xcc,0x01,0x00,0x00,0x01,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x0c,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,
0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x14,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x28,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,
0x73,0x65,0x72,0x76,0x69,0x6e,0x67,0x5f,0x64,0x65,0x66,0x61,
0x75,0x6c,0x74,0x00,0x01,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x08,0x00,0x0c,0x00,
0x08,0x00,0x04,0x00,0x08,0x00,0x00,0x00,0x11,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,
0x65,0x5f,0x37,0x30,0x00,0x00,0x00,0x00,0xaa,0xee,0xff,0xff,
0x04,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x69,0x6e,0x70,0x75,
0x74,0x5f,0x31,0x38,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x0c,0x00,0x00,0x00,0x08,0x00,0x0c,0x00,0x04,0x00,0x08,0x00,
0x08,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x13,0x00,0x00,0x00,
0x13,0x00,0x00,0x00,0x6d,0x69,0x6e,0x5f,0x72,0x75,0x6e,0x74,
0x69,0x6d,0x65,0x5f,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x00,
0xf6,0xee,0xff,0xff,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x31,0x2e,0x31,0x34,0x2e,0x30,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,0x4d,0x4c,0x49,0x52,
0x20,0x43,0x6f,0x6e,0x76,0x65,0x72,0x74,0x65,0x64,0x2e,0x00,
0x00,0x00,0x0e,0x00,0x18,0x00,0x04,0x00,0x08,0x00,0x0c,0x00,
0x10,0x00,0x14,0x00,0x0e,0x00,0x00,0x00,0x54,0x00,0x00,0x00,
0x48,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x6d,0x61,0x69,0x6e,
0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x58,0x06,0x00,0x00,
0x98,0x05,0x00,0x00,0x80,0x04,0x00,0x00,0x7c,0x03,0x00,0x00,
0x78,0x02,0x00,0x00,0xa4,0x01,0x00,0x00,0xe8,0x00,0x00,0x00,
0x60,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x11,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x12,0x00,0x00,0x00,
0xf4,0x10,0x00,0x00,0x94,0x10,0x00,0x00,0xec,0x0f,0x00,0x00,
0x00,0x0d,0x00,0x00,0x28,0x0c,0x00,0x00,0x10,0x0a,0x00,0x00,
0x50,0x09,0x00,0x00,0x10,0x08,0x00,0x00,0x68,0x07,0x00,0x00,
0xd0,0x06,0x00,0x00,0x48,0x06,0x00,0x00,0x70,0x05,0x00,0x00,
0x74,0x04,0x00,0x00,0x58,0x03,0x00,0x00,0x54,0x02,0x00,0x00,
0x7c,0x01,0x00,0x00,0xcc,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
0xea,0xfa,0xff,0xff,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x11,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x28,0xfa,0xff,0xff,
0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x02,0x00,0x00,0x00,
0x98,0xef,0xff,0xff,0x40,0x00,0x00,0x00,0x12,0x00,0x00,0x00,
0x18,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x04,0x00,0x00,0x00,
0x19,0x00,0x00,0x00,0x53,0x74,0x61,0x74,0x65,0x66,0x75,0x6c,
0x50,0x61,0x72,0x74,0x69,0x74,0x69,0x6f,0x6e,0x65,0x64,0x43,
0x61,0x6c,0x6c,0x3a,0x30,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x80,0xef,0xff,0xff,
0x86,0xfd,0xff,0xff,0x00,0x00,0x00,0x09,0x03,0x00,0x00,0x00,
0x1c,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x76,0xf0,0xff,0xff,0x00,0x00,0x80,0x3f,0x01,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,
0xbc,0xfa,0xff,0xff,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x19,
0x02,0x00,0x00,0x00,0xb0,0xfa,0xff,0xff,0x00,0x00,0x00,0x09,
0x40,0x00,0x00,0x00,0x11,0x00,0x00,0x00,0x18,0x00,0x00,0x00,
0x40,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0x04,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,
0x53,0x74,0x61,0x74,0x65,0x66,0x75,0x6c,0x50,0x61,0x72,0x74,
0x69,0x74,0x69,0x6f,0x6e,0x65,0x64,0x43,0x61,0x6c,0x6c,0x3a,
0x30,0x31,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x24,0xf1,0xff,0xff,0x18,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x80,0x3b,0x3e,0xfe,0xff,0xff,0x00,0x00,0x00,0x08,
0x02,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x54,0xf0,0xff,0xff,0x01,0x00,0x00,0x00,
0x0f,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,
0x08,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x5c,0xfb,0xff,0xff,
0x00,0x00,0x00,0x09,0x64,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x18,0x00,0x00,0x00,0x64,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x04,0x00,0x00,0x00,
0x3c,0x00,0x00,0x00,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x5f,0x31,0x37,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,
0x37,0x30,0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x3b,0x73,0x65,
0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x5f,0x31,0x37,0x2f,
0x64,0x65,0x6e,0x73,0x65,0x5f,0x37,0x30,0x2f,0x42,0x69,0x61,
0x73,0x41,0x64,0x64,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xf4,0xf1,0xff,0xff,
0x18,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x8b,0x6f,0xa0,0x3f,0x0e,0xff,0xff,0xff,
0x00,0x00,0x00,0x08,0x02,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xfe,0xfd,0xff,0xff,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,
0x03,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x06,0x00,0x00,0x00,
0x07,0x00,0x00,0x00,0x30,0xfc,0xff,0xff,0x00,0x00,0x00,0x09,
0x80,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,0x18,0x00,0x00,0x00,
0x80,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0x0c,0x00,0x00,0x00,0x58,0x00,0x00,0x00,
0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x5f,0x31,
0x37,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x36,0x39,0x2f,0x4d,
0x61,0x74,0x4d,0x75,0x6c,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,
0x74,0x69,0x61,0x6c,0x5f,0x31,0x37,0x2f,0x64,0x65,0x6e,0x73,
0x65,0x5f,0x36,0x39,0x2f,0x52,0x65,0x6c,0x75,0x3b,0x73,0x65,
0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x5f,0x31,0x37,0x2f,
0x64,0x65,0x6e,0x73,0x65,0x5f,0x36,0x39,0x2f,0x42,0x69,0x61,
0x73,0x41,0x64,0x64,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0xe4,0xf2,0xff,0xff,
0x18,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0xc9,0x90,0xaa,0x3e,0x00,0x00,0x0e,0x00,
0x18,0x00,0x08,0x00,0x0c,0x00,0x10,0x00,0x07,0x00,0x14,0x00,
0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x02,0x00,0x00,0x00,
0x1c,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0xfe,0xfe,0xff,0xff,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,
0x0d,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x30,0xfd,0xff,0xff,
0x00,0x00,0x00,0x09,0x80,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,
0x18,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x12,0x00,0x00,0x00,
0x58,0x00,0x00,0x00,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x5f,0x31,0x37,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,
0x36,0x38,0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x3b,0x73,0x65,
0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x5f,0x31,0x37,0x2f,
0x64,0x65,0x6e,0x73,0x65,0x5f,0x36,0x38,0x2f,0x52,0x65,0x6c,
0x75,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,
0x5f,0x31,0x37,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x36,0x38,
0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,0x00,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x12,0x00,0x00,0x00,
0xe4,0xf3,0xff,0xff,0x18,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xa7,0xf8,0xfd,0x3d,
0x00,0x00,0x0e,0x00,0x1a,0x00,0x08,0x00,0x0c,0x00,0x10,0x00,
0x07,0x00,0x14,0x00,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x08,
0x02,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x18,0x00,0x00,0x00,
0x0c,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x08,0x00,0x07,0x00,
0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,
0x0c,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x54,0xfe,0xff,0xff,
0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x04,0x00,0x00,0x00,
0x48,0xfe,0xff,0xff,0x00,0x00,0x00,0x09,0x80,0x00,0x00,0x00,
0x0d,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0x18,0x00,0x00,0x00,0x58,0x00,0x00,0x00,0x73,0x65,0x71,0x75,
0x65,0x6e,0x74,0x69,0x61,0x6c,0x5f,0x31,0x37,0x2f,0x64,0x65,
0x6e,0x73,0x65,0x5f,0x36,0x37,0x2f,0x4d,0x61,0x74,0x4d,0x75,
0x6c,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,
0x5f,0x31,0x37,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x36,0x37,
0x2f,0x52,0x65,0x6c,0x75,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,
0x74,0x69,0x61,0x6c,0x5f,0x31,0x37,0x2f,0x64,0x65,0x6e,0x73,
0x65,0x5f,0x36,0x37,0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,
0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x18,0x00,0x00,0x00,0xfc,0xf4,0xff,0xff,0x18,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0xcd,0xd2,0xfe,0x3c,0x00,0x00,0x0a,0x00,0x10,0x00,0x04,0x00,
0x08,0x00,0x0c,0x00,0x0a,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x0b,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x4c,0xff,0xff,0xff,0x16,0x00,0x00,0x00,
0x00,0x00,0x00,0x16,0x01,0x00,0x00,0x00,0x40,0xff,0xff,0xff,
0x00,0x00,0x00,0x09,0x48,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,
0x18,0x00,0x00,0x00,0x48,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x1b,0x00,0x00,0x00,
0x20,0x00,0x00,0x00,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x5f,0x31,0x37,0x2f,0x66,0x6c,0x61,0x74,0x74,0x65,
0x6e,0x5f,0x31,0x37,0x2f,0x52,0x65,0x73,0x68,0x61,0x70,0x65,
0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x1b,0x00,0x00,0x00,0xbc,0xf5,0xff,0xff,0x14,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0x81,0x80,0x80,0x3b,
0x00,0x00,0x0a,0x00,0x0c,0x00,0x00,0x00,0x04,0x00,0x08,0x00,
0x0a,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0c,0x00,0x10,0x00,0x0b,0x00,0x00,0x00,
0x0c,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x72,0x00,0x00,0x00,
0x00,0x00,0x00,0x72,0x01,0x00,0x00,0x00,0x14,0x00,0x1c,0x00,
0x08,0x00,0x07,0x00,0x0c,0x00,0x10,0x00,0x14,0x00,0x00,0x00,
0x00,0x00,0x18,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x09,
0x34,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,0x18,0x00,0x00,0x00,
0x34,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0x1b,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,
0x74,0x66,0x6c,0x2e,0x71,0x75,0x61,0x6e,0x74,0x69,0x7a,0x65,
0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x1b,0x00,0x00,0x00,0x7c,0xf6,0xff,0xff,0x14,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0x81,0x80,0x80,0x3b,
0x6a,0xf6,0xff,0xff,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x08,0x00,0x00,0x00,0xce,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0x4e,0xff,0xff,0xff,0x6a,0xf6,0xff,0xff,0x00,0x00,0x00,0x02,
0x24,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x20,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,
0x65,0x5f,0x37,0x30,0x2f,0x62,0x69,0x61,0x73,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xec,0xf6,0xff,0xff,
0x18,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0xae,0x4f,0x81,0x3c,0xde,0xf6,0xff,0xff,
0x04,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x01,0xfd,0xe7,0xf3,
0xf9,0xfa,0x0b,0xe6,0xf3,0xea,0x0e,0x0d,0x01,0xfb,0x12,0xc5,
0xaf,0x0b,0xf5,0x17,0x81,0xc5,0xfb,0xe1,0xfd,0xfa,0xdd,0x11,
0x0b,0xe0,0x0c,0xdd,0x0d,0x1a,0xfc,0xf5,0xff,0xf4,0x05,0x1a,
0xaf,0xfa,0xad,0x0d,0xd1,0xf7,0xa5,0xc7,0xfe,0xf6,0xff,0xff,
0x00,0x00,0x00,0x09,0x34,0x00,0x00,0x00,0x09,0x00,0x00,0x00,
0x08,0x00,0x00,0x00,0x34,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,
0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x5f,0x31,
0x37,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x37,0x30,0x2f,0x4d,
0x61,0x74,0x4d,0x75,0x6c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x94,0xf7,0xff,0xff,
0x14,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0xf4,0x14,0x42,0x3d,0x82,0xf7,0xff,0xff,0x04,0x00,0x00,0x00,
0x30,0x00,0x00,0x00,0x92,0xff,0xff,0xff,0xf9,0xff,0xff,0xff,
0xd7,0xff,0xff,0xff,0x18,0x00,0x00,0x00,0x50,0x00,0x00,0x00,
0x5f,0x00,0x00,0x00,0x95,0x00,0x00,0x00,0x97,0xff,0xff,0xff,
0x75,0x00,0x00,0x00,0x6c,0x00,0x00,0x00,0x2b,0x00,0x00,0x00,
0x43,0x00,0x00,0x00,0xa2,0xf7,0xff,0xff,0x00,0x00,0x00,0x02,
0x24,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x20,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,
0x65,0x5f,0x36,0x39,0x2f,0x62,0x69,0x61,0x73,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x24,0xf8,0xff,0xff,
0x18,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0xfc,0x21,0xdb,0x3a,0x16,0xf8,0xff,0xff,
0x04,0x00,0x00,0x00,0xd8,0x00,0x00,0x00,0x12,0xf6,0xf8,0xeb,
0xee,0x01,0x19,0x08,0x19,0x1a,0xf3,0xff,0x0a,0xe6,0xf1,0xff,
0xdb,0xe1,0xfb,0xf4,0xdf,0xf4,0x0e,0xe1,0xf0,0xfd,0x20,0xf3,
0xfd,0xef,0x15,0xf5,0x11,0x18,0xe2,0x1d,0xf8,0x9c,0x43,0x1b,
0x58,0xd9,0x03,0x07,0xe5,0xf6,0x06,0xda,0x14,0x1a,0xd6,0xec,
0x14,0xb1,0xd5,0x17,0xfd,0xe1,0x0d,0x11,0x00,0x1b,0xeb,0xf3,
0xd4,0xbd,0x34,0xf9,0x7f,0x53,0x06,0x1e,0x1f,0x1f,0xdb,0xaa,
0xdc,0x1c,0xef,0x15,0xf1,0xea,0x5d,0xf2,0xd5,0xf4,0xeb,0xf4,
0x01,0xfb,0x1d,0xd0,0x30,0x5e,0x43,0xfe,0xfd,0xe8,0xfc,0x00,
0xb9,0xe1,0x49,0x16,0xa9,0xbc,0x33,0xe5,0x21,0xfb,0x0c,0xe3,
0xd2,0x14,0x0f,0xe7,0xfd,0xe4,0x3f,0x32,0xcd,0x0d,0x0e,0xee,
0x0e,0x00,0x06,0x8b,0x27,0x2f,0x69,0xcc,0xfc,0x09,0xf4,0xe4,
0x25,0xe5,0x34,0x21,0xf7,0xff,0x11,0xa3,0x09,0xfa,0xd3,0x9c,
0x0d,0x2f,0xf3,0x05,0x1a,0x15,0x36,0x1b,0x97,0xfb,0x1e,0x0b,
0x19,0xde,0x20,0x06,0xf2,0xba,0xda,0x0e,0xe7,0x0b,0xee,0x17,
0x44,0x11,0xe4,0xf1,0x01,0xfc,0xec,0xe0,0x02,0x0b,0x2d,0x39,
0xda,0x08,0xe7,0x0f,0xe6,0xf8,0xc5,0x30,0x34,0x18,0x87,0xc0,
0x25,0x24,0x20,0x1d,0x0b,0x23,0xd7,0x1d,0xf4,0x02,0xfb,0xf9,
0xcf,0xf1,0x24,0xf3,0x41,0x04,0x2d,0x45,0xde,0xf8,0xff,0xff,
0x00,0x00,0x00,0x09,0x34,0x00,0x00,0x00,0x07,0x00,0x00,0x00,
0x08,0x00,0x00,0x00,0x34,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,
0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x5f,0x31,
0x37,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x36,0x39,0x2f,0x4d,
0x61,0x74,0x4d,0x75,0x6c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x0c,0x00,0x00,0x00,0x12,0x00,0x00,0x00,0x74,0xf9,0xff,0xff,
0x14,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x17,0xe2,0x5c,0x3c,0x62,0xf9,0xff,0xff,0x04,0x00,0x00,0x00,
0x48,0x00,0x00,0x00,0x9a,0x02,0x00,0x00,0x96,0x02,0x00,0x00,
0x7c,0xff,0xff,0xff,0xa7,0xff,0xff,0xff,0x33,0xff,0xff,0xff,
0x5e,0x02,0x00,0x00,0x04,0xff,0xff,0xff,0xea,0xff,0xff,0xff,
0x71,0xff,0xff,0xff,0x15,0xff,0xff,0xff,0xf3,0x00,0x00,0x00,
0xdc,0x01,0x00,0x00,0x8e,0xff,0xff,0xff,0xaa,0xff,0xff,0xff,
0x55,0xf8,0xff,0xff,0x3c,0xfb,0xff,0xff,0x03,0x00,0x00,0x00,
0x33,0x00,0x00,0x00,0x9a,0xf9,0xff,0xff,0x00,0x00,0x00,0x02,
0x24,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x20,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,
0x65,0x5f,0x36,0x38,0x2f,0x62,0x69,0x61,0x73,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x12,0x00,0x00,0x00,0x1c,0xfa,0xff,0xff,
0x18,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x5d,0xf3,0xe8,0x39,0x0e,0xfa,0xff,0xff,
0x04,0x00,0x00,0x00,0xb0,0x01,0x00,0x00,0x13,0xff,0xff,0x10,
0xe1,0x61,0xb0,0x1a,0x4c,0x0a,0x0b,0x0b,0x0b,0x07,0x13,0x2d,
0xff,0x0c,0x13,0xee,0xf9,0x22,0x1a,0x26,0xf4,0xda,0xee,0x17,
0xdb,0x09,0x3d,0x1a,0xe5,0x01,0xea,0x1f,0x18,0xf2,0xe5,0x18,
0x09,0x25,0x2a,0xc7,0x19,0xdd,0x00,0x0c,0x2c,0x1e,0x04,0x18,
0x11,0xd7,0x2f,0xe6,0x2c,0x01,0x1a,0x07,0xee,0x05,0x13,0x21,
0xeb,0xd9,0xfb,0x38,0xea,0x49,0xeb,0x16,0x00,0x04,0xec,0x12,
0x25,0xb5,0x2b,0xf1,0x31,0xf6,0x18,0x04,0xf8,0x26,0x07,0x2f,
0xfe,0xc8,0xfc,0x58,0xfc,0x2e,0x0b,0x10,0x31,0xd1,0x12,0x12,
0x17,0x1a,0xb0,0xfb,0x09,0xf0,0xed,0xe9,0xf5,0x35,0x3f,0x1c,
0xe5,0xf3,0xf1,0x55,0xdf,0x04,0x0d,0xfc,0xe0,0xf8,0x10,0xf9,
0xf7,0x39,0xbe,0x26,0xec,0xe8,0x11,0x21,0xf9,0xef,0xeb,0xe4,
0xfe,0x2e,0x18,0xac,0x0f,0xdd,0xfd,0x20,0x0e,0x00,0xf6,0xfb,
0xfe,0x0c,0x02,0x02,0xf5,0x09,0xe9,0xe8,0x13,0xeb,0xe2,0xf1,
0x0c,0xeb,0x0e,0xfb,0x0e,0xe2,0xf7,0xea,0xfa,0x02,0xf3,0xfa,
0xed,0xeb,0xf5,0xf2,0xf4,0xeb,0xe8,0xf2,0xf7,0xfb,0xf6,0x13,
0x02,0x01,0x05,0xfb,0xe9,0x0a,0xec,0xe7,0x03,0x12,0xf7,0x11,
0xfe,0xf3,0xed,0xff,0xea,0x04,0xff,0xfa,0xf1,0x00,0xf3,0xea,
0x0a,0x04,0xe7,0x13,0x06,0xec,0x12,0xee,0x13,0xeb,0x03,0xf1,
0xf5,0xe8,0xf4,0xf8,0xfa,0xff,0x0c,0x11,0xe8,0xf3,0x0f,0xf9,
0xf2,0xfb,0xf7,0x14,0x09,0xee,0x1a,0xf2,0x1a,0xf6,0xe9,0x02,
0x06,0x5a,0xaa,0xf2,0x1c,0x00,0xf5,0xf9,0x06,0x0b,0x08,0xd6,
0x14,0x43,0xf8,0xb5,0x19,0xef,0x0a,0x04,0x11,0xdb,0x0f,0x0b,
0xdd,0x37,0xa7,0xfc,0x27,0x1a,0xfa,0xf8,0x14,0xee,0xf6,0xe3,
0x18,0x17,0x02,0xa9,0x27,0x0c,0x01,0x30,0x18,0x19,0xfa,0xeb,
0x24,0xc6,0x39,0x0e,0x2a,0x15,0xef,0xf8,0x0b,0x32,0x1c,0x20,
0x0f,0xb7,0x18,0x69,0xf5,0x2e,0x0a,0xfb,0xea,0xf2,0xf9,0x0d,
0xfb,0xea,0xfa,0xf8,0xf3,0x1a,0x08,0xef,0xed,0x10,0x0c,0xef,
0xf2,0xfb,0x0a,0x14,0x05,0xf6,0xfd,0x02,0x29,0x0f,0x10,0xf4,
0x60,0xe2,0x23,0xdd,0x03,0x03,0x0f,0xfd,0xf4,0x6e,0x00,0x07,
0xd6,0xc1,0xfd,0x7f,0xce,0xed,0xf1,0xb2,0x10,0x09,0x15,0xf4,
0x49,0xe7,0xe4,0xed,0x0a,0xf8,0x03,0xf2,0xeb,0x3c,0xf6,0xfc,
0x05,0xd8,0xdf,0x5d,0xf7,0xfa,0x05,0xee,0x0e,0xfb,0x07,0xfb,
0xfb,0xc3,0x2e,0x1c,0x2c,0x0b,0xea,0xef,0x01,0xfa,0x12,0x2d,
0x00,0xe0,0x0d,0x67,0x07,0x48,0xee,0x1a,0xd5,0xdc,0x13,0xfc,
0xd6,0xbd,0x40,0xf0,0xf8,0x0c,0x11,0x1b,0x05,0xca,0xec,0xfa,
0x11,0xc1,0x03,0xfb,0x1e,0x10,0xf4,0x1c,0xae,0xfb,0xff,0xff,
0x00,0x00,0x00,0x09,0x34,0x00,0x00,0x00,0x05,0x00,0x00,0x00,
0x08,0x00,0x00,0x00,0x34,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,
0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x5f,0x31,
0x37,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x36,0x38,0x2f,0x4d,
0x61,0x74,0x4d,0x75,0x6c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x12,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x44,0xfc,0xff,0xff,
0x14,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0xb6,0x06,0x6a,0x3c,0x32,0xfc,0xff,0xff,0x04,0x00,0x00,0x00,
0x60,0x00,0x00,0x00,0x0f,0x01,0x00,0x00,0x1c,0xfd,0xff,0xff,
0xc6,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0xb1,0xfe,0xff,0xff,
0x74,0x01,0x00,0x00,0xd7,0xfc,0xff,0xff,0x03,0xfe,0xff,0xff,
0xcc,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x5b,0xfd,0xff,0xff,
0x08,0xfb,0xff,0xff,0xe7,0xfe,0xff,0xff,0xf8,0x04,0x00,0x00,
0x7c,0xfd,0xff,0xff,0x5f,0xff,0xff,0xff,0xc0,0xfb,0xff,0xff,
0x3a,0x03,0x00,0x00,0x6e,0xfe,0xff,0xff,0x92,0x03,0x00,0x00,
0x81,0x01,0x00,0x00,0xa5,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x6e,0xfb,0xff,0xff,0x82,0xfc,0xff,0xff,0x00,0x00,0x00,0x02,
0x24,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x20,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,
0x65,0x5f,0x36,0x37,0x2f,0x62,0x69,0x61,0x73,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x04,0xfd,0xff,0xff,
0x14,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x07,0x5a,0xb8,0x38,0xf2,0xfc,0xff,0xff,0x04,0x00,0x00,0x00,
0x88,0x02,0x00,0x00,0x0f,0x07,0x01,0xfc,0xef,0xfb,0xef,0x08,
0xf7,0x0d,0x05,0xf5,0x02,0x03,0x04,0x06,0xff,0xf1,0xf9,0x28,
0x2e,0x3c,0x31,0x1b,0x2e,0x21,0x37,0xfa,0xf9,0xf9,0x09,0x0c,
0x07,0x00,0xfc,0xfe,0x14,0x40,0x10,0xfe,0x03,0xf2,0xfa,0xf6,
0x07,0xfa,0x5f,0x5d,0x11,0x10,0xe2,0xcc,0x03,0x17,0xf9,0x05,
0xf5,0xf2,0x04,0x0d,0x0c,0x0d,0xfa,0x07,0xfb,0xf8,0x06,0x0c,
0xf1,0x02,0xf1,0xfe,0x00,0xf5,0xfb,0xf9,0x0b,0x05,0xf4,0xf2,
0x0b,0x05,0xfe,0xf4,0xf5,0xfa,0xf5,0x06,0xf4,0xfe,0xf4,0x0c,
0xfc,0xf7,0xfc,0xfd,0xf6,0x00,0xfb,0x08,0xf6,0xf6,0xfc,0xf7,
0xfd,0xf7,0x0b,0xf3,0x02,0x00,0x0a,0x02,0x08,0x06,0xfa,0x01,
0xf4,0xf8,0x20,0x02,0xf2,0x0b,0x03,0xff,0xf8,0xfe,0xfb,0x11,
0x28,0x1f,0x12,0x27,0x13,0x3f,0x3f,0x04,0x0f,0x00,0x02,0xef,
0xf7,0xf1,0xfb,0x02,0xe3,0x87,0xe7,0xf8,0x0c,0x12,0x10,0x00,
0x0c,0x10,0xbc,0xa4,0x32,0x29,0x3a,0x42,0xf2,0x01,0x00,0xee,
0x09,0xfd,0xf9,0x11,0x11,0x00,0xfc,0x08,0x4b,0x16,0x18,0xfa,
0x00,0xf0,0xf0,0xfe,0xfc,0x64,0x5f,0xc8,0xda,0xa8,0x9f,0x05,
0x17,0x07,0xfc,0x0d,0xf9,0xfb,0x14,0x04,0x00,0xff,0xea,0xce,
0xfe,0xfd,0xfb,0xf9,0x09,0x0e,0xff,0xf5,0xa9,0xad,0xee,0xf5,
0x1a,0x31,0xff,0xf6,0xfd,0x01,0x0a,0xf1,0xf5,0xf7,0xee,0x03,
0x14,0x03,0x41,0x11,0x02,0x04,0x08,0xf2,0xff,0x0b,0xff,0x5c,
0x56,0x15,0x10,0xd5,0xd6,0x18,0x0e,0xf9,0xf2,0x05,0x08,0xfb,
0xf4,0xfb,0xf7,0x01,0xff,0x03,0xf8,0x08,0xff,0xf1,0xf6,0xf4,
0x05,0xf4,0x0c,0xf3,0xf4,0xfb,0x06,0xfc,0xfc,0x07,0x09,0xf6,
0xfd,0x07,0xf6,0xfa,0x05,0x02,0xff,0xf0,0xfa,0xf4,0xf2,0x01,
0xff,0xfe,0x06,0x0c,0xff,0xfd,0x08,0xfa,0xf6,0xff,0x08,0x03,
0x0a,0x04,0xfd,0xfc,0x03,0x0c,0xfa,0x0c,0x08,0x07,0x01,0x07,
0x05,0x15,0x01,0x06,0xeb,0x01,0xf4,0xf1,0xfd,0x10,0xb8,0xb4,
0xc9,0xbb,0xe4,0xdc,0xf9,0xf5,0xf2,0xfb,0xff,0xf0,0xf8,0xfb,
0xf1,0x08,0xf3,0xff,0xf3,0x01,0x03,0xf9,0xf0,0x09,0x02,0x0e,
0xf8,0x0c,0xfd,0x01,0x06,0x0e,0xf1,0x03,0x10,0x0b,0xef,0xed,
0xf2,0xee,0x04,0x13,0xfd,0x22,0x03,0xf9,0x08,0x01,0x08,0xfe,
0xfd,0xf3,0x08,0x09,0x03,0x1a,0x1b,0x17,0x17,0x2e,0x0b,0x03,
0x01,0x03,0x01,0xfb,0x08,0xfd,0xfd,0xfe,0x0f,0x0c,0xf1,0xf6,
0xf0,0xfa,0x0b,0x07,0xf3,0x39,0x25,0x25,0x30,0x16,0x12,0x31,
0x32,0x07,0x0b,0xfd,0xfe,0x02,0xed,0xfc,0x17,0x00,0x0d,0x65,
0x09,0x0b,0xf6,0x04,0xed,0xff,0xf6,0x08,0x5c,0x5f,0x03,0x02,
0xd7,0xe2,0x0b,0x10,0xfa,0x03,0xf5,0x01,0x0c,0x04,0x08,0x02,
0x02,0xfe,0xcc,0xfa,0xef,0xf8,0x06,0xf0,0x04,0x07,0x07,0xca,
0xcb,0xeb,0x02,0xfb,0xfa,0xe0,0xed,0xf8,0xff,0xf4,0x0b,0x12,
0x04,0xf5,0xf8,0x0b,0xf9,0xb6,0xe4,0xee,0x0a,0x09,0x1b,0x14,
0xfd,0xf7,0x9a,0xa4,0x39,0x22,0x5b,0x6a,0xf7,0x03,0x0c,0xf6,
0x0d,0xf8,0xfa,0x0b,0x0d,0xf9,0xf5,0x0e,0x12,0x18,0x09,0xfc,
0x08,0xf2,0xf9,0x06,0xf5,0x1c,0x1d,0xa9,0xae,0xb8,0xab,0x03,
0xf8,0x0a,0x03,0xff,0xfd,0xe9,0xd5,0xe8,0x18,0x15,0x17,0x4a,
0xfd,0x12,0x04,0x00,0xf3,0xf7,0xfd,0x01,0x0c,0x1b,0xfa,0xf9,
0x01,0xfa,0x38,0x48,0x11,0xf4,0x07,0x0d,0x00,0x0b,0x11,0xf2,
0x0a,0xf6,0xb2,0xf7,0xf1,0xff,0x10,0x06,0x08,0xf3,0x0b,0xa7,
0xae,0x0e,0x0c,0x19,0x1e,0xeb,0xed,0xf5,0x06,0xf6,0xf6,0xf6,
0xed,0x06,0x08,0x06,0x14,0x7f,0x07,0x0e,0x00,0xf7,0x03,0xf9,
0x08,0xf9,0x68,0x78,0x26,0x24,0x02,0x0c,0xfc,0x04,0xf4,0xf4,
0xf7,0xfe,0xf8,0xff,0xf4,0xfb,0xf5,0xf1,0x00,0x01,0xfd,0xfe,
0x09,0xfd,0x00,0xf4,0x02,0xf8,0xf9,0x08,0x05,0xfe,0xfe,0x08,
0x0b,0x04,0xf8,0xee,0xf6,0xf4,0xf6,0xfe,0x00,0x05,0xfc,0x0f,
0x0b,0x18,0x06,0x04,0xfc,0x03,0x0c,0x11,0x3c,0x37,0xe3,0xf5,
0xa7,0xb0,0xe0,0xde,0x6a,0xff,0xff,0xff,0x00,0x00,0x00,0x09,
0x34,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x40,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,0x73,0x65,0x71,0x75,
0x65,0x6e,0x74,0x69,0x61,0x6c,0x5f,0x31,0x37,0x2f,0x64,0x65,
0x6e,0x73,0x65,0x5f,0x36,0x37,0x2f,0x4d,0x61,0x74,0x4d,0x75,
0x6c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x18,0x00,0x00,0x00,
0x1b,0x00,0x00,0x00,0x0c,0x00,0x0c,0x00,0x00,0x00,0x00,0x00,
0x04,0x00,0x08,0x00,0x0c,0x00,0x00,0x00,0x18,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0xac,0xa1,0xb7,0x3c,0x00,0x00,0x06,0x00,0x08,0x00,0x04,0x00,
0x06,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0x1b,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,
0x18,0x00,0x08,0x00,0x07,0x00,0x0c,0x00,0x10,0x00,0x14,0x00,
0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x34,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x30,0x00,0x00,0x00,
0x1e,0x00,0x00,0x00,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x5f,0x31,0x37,0x2f,0x66,0x6c,0x61,0x74,0x74,0x65,
0x6e,0x5f,0x31,0x37,0x2f,0x43,0x6f,0x6e,0x73,0x74,0x00,0x00,
0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x94,0xff,0xff,0xff,
0x14,0x00,0x18,0x00,0x04,0x00,0x00,0x00,0x08,0x00,0x0c,0x00,
0x10,0x00,0x00,0x00,0x00,0x00,0x14,0x00,0x14,0x00,0x00,0x00,
0x40,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x18,0x00,0x00,0x00,
0x40,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0x1b,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,
0x73,0x65,0x72,0x76,0x69,0x6e,0x67,0x5f,0x64,0x65,0x66,0x61,
0x75,0x6c,0x74,0x5f,0x69,0x6e,0x70,0x75,0x74,0x5f,0x31,0x38,
0x3a,0x30,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x1b,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0x04,0x00,0x04,0x00,
0x04,0x00,0x00,0x00
};

#endif //ULTASONIC_FLOW_MODEL_ESP32_H