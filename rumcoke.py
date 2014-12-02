#!/usr/bin/env python
# -*- coding: utf-8 -*-

import serial
ser = serial.Serial(port = '/dev/tty', baudrate = 9600)  # open first serial port
ser.write("1")      # write a string
ser.close()             # close port
