#include <linux/types.h>
#include <mach/mt_pm_ldo.h>
#include <cust_alsps.h>
#include <mach/upmu_common.h>

static struct alsps_hw cust_alsps_hw = {
	.i2c_num    = 2,
	.polling_mode_ps =0,
	.polling_mode_als =1,
	.power_id   = MT65XX_POWER_NONE,    /*LDO is not used*/
	.power_vol  = VOL_DEFAULT,          /*LDO is not used*/
	.i2c_addr   = {0x90, 0x00, 0x00, 0x00},     /*STK3x1x*/
	//.als_level  = {5,  9, 36, 59, 82, 132, 205, 273, 500, 845, 1136, 1545, 2364, 4655, 6982},   		 /* als_code */
	//.als_value  = {10, 10, 40, 65, 90, 145, 225, 300, 550, 930, 1250, 1700, 2600, 5120, 7680, 10240},    /* lux */
	.als_level  = {0,  66,  124, 250, 380, 508, 630, 820, 1003, 1255, 1884, 2510, 3664, 10240, 10240},   		 /* als_code */
	.als_value  = {0,  50,  100, 200, 300, 400, 500, 650, 800, 1000, 1500, 2000, 3000, 10240, 10240, 10240},    	 /* lux */
	.state_val = 0x0,               /* disable all */
	.psctrl_val = 0x31,             /* ps_persistance=1, ps_gain=64X, PS_IT=0.391ms */
	.alsctrl_val = 0x39,  			/* als_persistance=1, als_gain=16X, ALS_IT=200ms */
	.ledctrl_val = 0xFF,   			 /* 100mA IRDR, 64/64 LED duty */
	.wait_val = 0x7,                /* 50 ms */
	.ps_threshold_high = 1700,
	.ps_threshold_low = 1500,
	.diff_val = 200,
	.lt_ct_val = 22,
	.ht_ct_val = 45,
	.is_batch_supported_ps = false,
	.is_batch_supported_als = false,
};

struct alsps_hw *get_cust_alsps_hw(void) {

	return &cust_alsps_hw;
}
