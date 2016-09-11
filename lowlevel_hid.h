/**
	Copyright 2016 by Sean Nelson
 */
#ifndef _LOWLEVEL_HID_H
#define _LOWLEVEL_HID_H

int corsairlink_hid_init(struct libusb_device_handle *dev_handle,
			unsigned char endpoint);

int corsairlink_hid_deinit(struct libusb_device_handle *dev_handle,
			unsigned char endpoint);

int corsairlink_hid_write(struct libusb_device_handle *dev_handle,
 			unsigned char endpoint,
			unsigned char *data,
			int length);

int corsairlink_hid_read(struct libusb_device_handle *dev_handle,
			unsigned char endpoint,
			unsigned char *data,
			int length);

#endif
