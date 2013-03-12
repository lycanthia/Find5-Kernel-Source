#ifndef _ARCH_ARM_MACH_MSM_MDM_IOCTLS_H
#define _ARXH_ARM_MACH_MSM_MDM_IOCTLS_H


#define CHARM_CODE		0xCC
#define WAKE_CHARM		_IO(CHARM_CODE, 1)
#define RESET_CHARM		_IO(CHARM_CODE, 2)
#define CHECK_FOR_BOOT		_IOR(CHARM_CODE, 3, int)
#define WAIT_FOR_BOOT		_IO(CHARM_CODE, 4)
#define NORMAL_BOOT_DONE	_IOW(CHARM_CODE, 5, int)
#define RAM_DUMP_DONE		_IOW(CHARM_CODE, 6, int)
#define WAIT_FOR_RESTART	_IOR(CHARM_CODE, 7, int)
#define GET_DLOAD_STATUS	_IOR(CHARM_CODE, 8, int)

#ifdef CONFIG_VENDOR_EDIT
/* DuYuanHua@OnLineRD.AirService.MDM, 2012/12/04, Add for CR401598 Communicate MDM A5 thru' SYSMON */
#define SHUTDOWN_CHARM		_IOW(CHARM_CODE, 10, int)
#endif

enum charm_boot_type {
	CHARM_NORMAL_BOOT = 0,
	CHARM_RAM_DUMPS,
};

#endif
