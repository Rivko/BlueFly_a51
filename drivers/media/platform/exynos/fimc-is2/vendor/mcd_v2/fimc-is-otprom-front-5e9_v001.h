#ifndef FIMC_IS_OTPROM_FRONT_5E9_V001_H
#define FIMC_IS_OTPROM_FRONT_5E9_V001_H

/* Header Offset Addr Section */
#define OTP_HEADER_DIRECT_ADDR
#define OTP_5E9_GET_PAGE(a,b,c) ((((a) - (b) + (c))/64)+17)
#define OTP_5E9_GET_REG(a,b,c) (((a) - (b) + (c))%64)


/* OEM referenced section */
#define OTP_OEM_START_ADDR    (0xF4)			// For Check the checksum
#define OTP_AWB_START_ADDR    (0x174)			// For Check the checksum
#define OTP_USED_CAL_SIZE     (0x1E0 + 4)		// For Check the checksum

#define FIMC_IS_FRONT_MAX_CAL_SIZE	OTP_USED_CAL_SIZE

const struct fimc_is_vender_rom_addr front_5e9_otp_cal_addr = {
	/* Set '-1' if not used */

	.camera_module_es_version = 'A',
	.cal_map_es_version = '1',
	.rom_max_cal_size = OTP_USED_CAL_SIZE,

	.rom_header_cal_data_start_addr = 0x00,
	.rom_header_main_module_info_start_addr = 0x34,
	.rom_header_cal_map_ver_start_addr = 0x54,
	.rom_header_project_name_start_addr = 0x5C,
	.rom_header_module_id_addr = 0xBA,
	.rom_header_main_sensor_id_addr = 0xC4,

	.rom_header_sub_module_info_start_addr = -1,
	.rom_header_sub_sensor_id_addr = -1,

	.rom_header_main_header_start_addr = -1,
	.rom_header_main_header_end_addr = -1,
	.rom_header_main_oem_start_addr = 0x00,
	.rom_header_main_oem_end_addr = 0x08,
	.rom_header_main_awb_start_addr = 0x10,
	.rom_header_main_awb_end_addr = 0x18,
	.rom_header_main_shading_start_addr = -1,
	.rom_header_main_shading_end_addr = -1,
	.rom_header_main_sensor_cal_start_addr = -1,
	.rom_header_main_sensor_cal_end_addr = -1,
	.rom_header_dual_cal_start_addr = -1,
	.rom_header_dual_cal_end_addr = -1,
	.rom_header_pdaf_cal_start_addr = -1,
	.rom_header_pdaf_cal_end_addr = -1,

	.rom_header_sub_oem_start_addr = -1,
	.rom_header_sub_oem_end_addr = -1,
	.rom_header_sub_awb_start_addr = -1,
	.rom_header_sub_awb_end_addr = -1,
	.rom_header_sub_shading_start_addr = -1,
	.rom_header_sub_shading_end_addr = -1,

	.rom_header_main_mtf_data_addr = 0x74,
	.rom_header_sub_mtf_data_addr = -1,

	.rom_header_checksum_addr = 0xF0,
	.rom_header_checksum_len = 240,

	.rom_oem_af_inf_position_addr = 0xF4,
	.rom_oem_af_macro_position_addr = 0xFC,
	.rom_oem_module_info_start_addr = 0x0154,
	.rom_oem_checksum_addr = 0x0170,
	.rom_oem_checksum_len = 96,

	.rom_awb_module_info_start_addr = 0x1B4,
	.rom_awb_checksum_addr = 0x1E0,
	.rom_awb_checksum_len = 64,

	.rom_shading_module_info_start_addr = -1,
	.rom_shading_checksum_addr = -1,
	.rom_shading_checksum_len = -1,

	.rom_sensor_cal_module_info_start_addr = -1,
	.rom_sensor_cal_checksum_addr = -1,
	.rom_sensor_cal_checksum_len = -1,

	.rom_dual_module_info_start_addr = -1,
	.rom_dual_checksum_addr = -1,
	.rom_dual_checksum_len = -1,

	.rom_pdaf_module_info_start_addr = -1,
	.rom_pdaf_checksum_addr = -1,
	.rom_pdaf_checksum_len = -1,

	.rom_sub_oem_af_inf_position_addr = -1,
	.rom_sub_oem_af_macro_position_addr = -1,
	.rom_sub_oem_module_info_start_addr = -1,
	.rom_sub_oem_checksum_addr = -1,
	.rom_sub_oem_checksum_len = -1,

	.rom_sub_awb_module_info_start_addr = -1,
	.rom_sub_awb_checksum_addr = -1,
	.rom_sub_awb_checksum_len = -1,

	.rom_sub_shading_module_info_start_addr = -1,
	.rom_sub_shading_checksum_addr = -1,
	.rom_sub_shading_checksum_len = -1,

	.rom_dual_cal_data2_start_addr = -1,
	.rom_dual_cal_data2_size = -1,
	.rom_dual_tilt_x_addr = -1,
	.rom_dual_tilt_y_addr = -1,
	.rom_dual_tilt_z_addr = -1,
	.rom_dual_tilt_sx_addr = -1,
	.rom_dual_tilt_sy_addr = -1,
	.rom_dual_tilt_range_addr = -1,
	.rom_dual_tilt_max_err_addr = -1,
	.rom_dual_tilt_avg_err_addr = -1,
	.rom_dual_tilt_dll_version_addr = -1,
	.rom_dual_shift_x_addr = -1,
	.rom_dual_shift_y_addr = -1,

	.extend_cal_addr = NULL,
};

#define OTP_PAGE_ADDR				     0x0A02
#define OTP_REG_ADDR_START			     0x0A04
#define OTP_REG_ADDR_MAX			     0x0A43
#define OTP_PAGE_START_ADDR			     0
#define OTP_START_PAGE                               0x11           //cal written from Page17

#define OTP_START_ADDR                               0xC
#define OTP_START_ADDR_BANK2                         0x20C
#define OTP_START_ADDR_BANK3                         0x40C
#define OTP_BANK_ADDR                                0

static const u32 OTP_Init_reg[] = {
	0x0A00, 0x04, 0x1,
	0x0A00, 0x00, 0x1,
};

static const u32 OTP_Init_size =
	sizeof(OTP_Init_reg) / sizeof(OTP_Init_reg[0]);


static const u32 OTP_first_page_select_reg[] = {
	0x0A00, 0x04, 0x1,
	0x0A02, 0x02, 0x1,
	0x0A00, 0x01, 0x1,
};

static const u32 OTP_first_page_select_reg_size =
	sizeof(OTP_first_page_select_reg) / sizeof(OTP_first_page_select_reg[0]);

static const u32 OTP_second_page_select_reg[] = {
	0x0A00, 0x04, 0x1,
	0x0A02, 0x03, 0x1,
	0x0A00, 0x01, 0x1,
};

static const u32 OTP_second_page_select_reg_size =
	sizeof(OTP_second_page_select_reg) / sizeof(OTP_second_page_select_reg[0]);

static const u32 sensor_mode_change_to_OTP_reg[] = {
	0x0A00, 0x04, 0x1,
	0x0A02, 0x02, 0x1,
	0x0A00, 0x01, 0x1,
};

static const u32 sensor_mode_change_to_OTP_reg_size =
	sizeof(sensor_mode_change_to_OTP_reg) / sizeof(sensor_mode_change_to_OTP_reg[0]);

static const u32 sensor_mode_change_from_OTP_reg[] = {
	0x0A00, 0x04, 0x1,
	0x0A00, 0x00, 0x1,
};

static const u32 sensor_mode_change_from_OTP_reg_size =
	sizeof(sensor_mode_change_from_OTP_reg) / sizeof(sensor_mode_change_from_OTP_reg[0]);

/* 5E9_EVT00_Setfile_?????????_REV21.xlsx */
static const u32 sensor_Global[] = {
	/* Analog Global Setting */
	0x0100, 0x00, 0x1, 
	0x0A02, 0x3F, 0x1, 
	0x3B45, 0x01, 0x1, 
	0x3290, 0x10, 0x1, 
	0x0B05, 0x01, 0x1, 
	0x3069, 0x87, 0x1, 
	0x3074, 0x06, 0x1, 
	0x3075, 0x2F, 0x1, 
	0x301F, 0x20, 0x1, 
	0x306B, 0x9A, 0x1, 
	0x3091, 0x16, 0x1, 
	0x306E, 0x71, 0x1, 
	0x306F, 0x28, 0x1, 
	0x306D, 0x08, 0x1, 
	0x3084, 0x16, 0x1, 
	0x3070, 0x0F, 0x1, 
	0x306A, 0x79, 0x1, 
	0x30B0, 0xFF, 0x1, 
	0x30C2, 0x05, 0x1, 
	0x30C4, 0x06, 0x1, 
	0x3012, 0x4E, 0x1, 
	0x3080, 0x08, 0x1, 
	0x3083, 0x14, 0x1, 
	0x3200, 0x01, 0x1, 
	0x3081, 0x07, 0x1, 
	0x307B, 0x85, 0x1, 
	0x307A, 0x0A, 0x1, 
	0x3079, 0x0A, 0x1, 
	0x308A, 0x20, 0x1, 
	0x308B, 0x08, 0x1, 
	0x308C, 0x0B, 0x1, 
	0x392F, 0x01, 0x1, 
	0x3930, 0x00, 0x1, 
	0x3924, 0x7F, 0x1, 
	0x3925, 0xFD, 0x1, 
	0x3C08, 0xFF, 0x1, 
	0x3C09, 0xFF, 0x1, 
	0x3C31, 0xFF, 0x1, 
	0x3C32, 0xFF, 0x1, 
};

static const u32 sensor_Global_size = sizeof( sensor_Global ) / sizeof( sensor_Global[0] );


#endif /* FIMC_IS_OTPROM_FRONT_5E9_V001_H */
