
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef MOTOR_OBJDICT_72_H
#define MOTOR_OBJDICT_72_H

#include "../canFestival/include/data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 Motor_Board_valueRangeTest (UNS8 typeValue, void * value);
const indextable * Motor_Board_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* Master node data struct */
extern CO_Data Motor_Board_Data;
extern INTEGER32 sensor71_strain_gauge_processed_Strain_Gauge_1P;		/* Mapped at index 0x2010, subindex 0x01 */
extern INTEGER32 sensor71_strain_gauge_processed_Strain_Gauge_2P;		/* Mapped at index 0x2010, subindex 0x02 */
extern INTEGER32 sensor71_strain_gauge_processed_Strain_Gauge_3P;		/* Mapped at index 0x2010, subindex 0x03 */
extern INTEGER32 sensor71_strain_gauge_processed_Strain_Gauge_4P;		/* Mapped at index 0x2010, subindex 0x04 */
extern INTEGER32 sensor71_strain_gauge_processed_Strain_Gauge_5P;		/* Mapped at index 0x2010, subindex 0x05 */
extern INTEGER32 sensor71_strain_gauge_processed_Strain_Gauge_6P;		/* Mapped at index 0x2010, subindex 0x06 */
extern INTEGER32 sensor71_strain_gauge_processed_Strain_Gauge_7P;		/* Mapped at index 0x2010, subindex 0x07 */
extern INTEGER32 sensor71_strain_gauge_processed_Strain_Gauge_8P;		/* Mapped at index 0x2010, subindex 0x08 */
extern INTEGER32 sensor71_strain_gauge_raw_Strain_Gauge_1R;		/* Mapped at index 0x2011, subindex 0x01 */
extern INTEGER32 sensor71_strain_gauge_raw_Strain_Gauge_2R;		/* Mapped at index 0x2011, subindex 0x02 */
extern INTEGER32 sensor71_strain_gauge_raw_Strain_Gauge_3R;		/* Mapped at index 0x2011, subindex 0x03 */
extern INTEGER32 sensor71_strain_gauge_raw_Strain_Gauge_4R;		/* Mapped at index 0x2011, subindex 0x04 */
extern INTEGER32 sensor71_strain_gauge_raw_Strain_Gauge_5R;		/* Mapped at index 0x2011, subindex 0x05 */
extern INTEGER32 sensor71_strain_gauge_raw_Strain_Gauge_6R;		/* Mapped at index 0x2011, subindex 0x06 */
extern INTEGER32 sensor71_strain_gauge_raw_Strain_Gauge_7R;		/* Mapped at index 0x2011, subindex 0x07 */
extern INTEGER32 sensor71_strain_gauge_raw_Strain_Gauge_8R;		/* Mapped at index 0x2011, subindex 0x08 */
extern UNS8 motor72_configuration_Current_Control_Type;		/* Mapped at index 0x2020, subindex 0x01 */
extern UNS32 motor72_configuration_Main_Loop_Update_Frequency;		/* Mapped at index 0x2020, subindex 0x02 */
extern UNS32 motor72_configuration_PWM_Frequency;		/* Mapped at index 0x2020, subindex 0x03 */
extern UNS32 motor72_configuration_Gear_Ratio_1000;		/* Mapped at index 0x2020, subindex 0x04 */
extern INTEGER32 motor72_state_Current_Postition;		/* Mapped at index 0x2021, subindex 0x01 */
extern INTEGER32 motor72_state_Current_Velocity;		/* Mapped at index 0x2021, subindex 0x02 */
extern INTEGER32 motor72_state_Current_Torque;		/* Mapped at index 0x2021, subindex 0x03 */
extern INTEGER32 motor72_state_Current_Motor_Voltage;		/* Mapped at index 0x2021, subindex 0x04 */
extern INTEGER32 motor72_state_Current_Motor_Current;		/* Mapped at index 0x2021, subindex 0x05 */
extern UNS8 motor72_state_Undefined;		/* Mapped at index 0x2021, subindex 0x06 */
extern UNS8 motor72_state_Undefined;		/* Mapped at index 0x2021, subindex 0x07 */
extern UNS8 motor72_state_Undefined;		/* Mapped at index 0x2021, subindex 0x08 */
extern INTEGER32 motor72_postition_control_Commanded_Position;		/* Mapped at index 0x2022, subindex 0x01 */
extern UNS16 motor72_postition_control_P_Gain;		/* Mapped at index 0x2022, subindex 0x02 */
extern UNS16 motor72_postition_control_I_Gain;		/* Mapped at index 0x2022, subindex 0x03 */
extern UNS16 motor72_postition_control_D_Gain;		/* Mapped at index 0x2022, subindex 0x04 */
extern REAL32 motor72_postition_control_SS_Gain_1st_Order;		/* Mapped at index 0x2022, subindex 0x05 */
extern REAL32 motor72_postition_control_SS_Gain_2nd_Order;		/* Mapped at index 0x2022, subindex 0x06 */
extern REAL32 motor72_postition_control_SS_Gain_3rd_Order;		/* Mapped at index 0x2022, subindex 0x07 */
extern REAL32 motor72_postition_control_O_Gain_1st_Order;		/* Mapped at index 0x2022, subindex 0x08 */
extern REAL32 motor72_postition_control_O_Gain_2nd_Order;		/* Mapped at index 0x2022, subindex 0x09 */
extern REAL32 motor72_postition_control_O_Gain_3rd_Order;		/* Mapped at index 0x2022, subindex 0x0A */
extern INTEGER32 motor72_velocity_control_Commanded_Velocity;		/* Mapped at index 0x2023, subindex 0x01 */
extern UNS16 motor72_velocity_control_P_Gain;		/* Mapped at index 0x2023, subindex 0x02 */
extern UNS16 motor72_velocity_control_I_Gain;		/* Mapped at index 0x2023, subindex 0x03 */
extern UNS16 motor72_velocity_control_D_Gain;		/* Mapped at index 0x2023, subindex 0x04 */
extern REAL32 motor72_velocity_control_SS_Gain_1st_Order;		/* Mapped at index 0x2023, subindex 0x05 */
extern REAL32 motor72_velocity_control_SS_Gain_2nd_Order;		/* Mapped at index 0x2023, subindex 0x06 */
extern REAL32 motor72_velocity_control_SS_Gain_3rd_Order;		/* Mapped at index 0x2023, subindex 0x07 */
extern REAL32 motor72_velocity_control_O_Gain_1st_Order;		/* Mapped at index 0x2023, subindex 0x08 */
extern REAL32 motor72_velocity_control_O_Gain_2nd_Order;		/* Mapped at index 0x2023, subindex 0x09 */
extern REAL32 motor72_velocity_control_O_Gain_3rd_Order;		/* Mapped at index 0x2023, subindex 0x0A */
extern INTEGER32 motor72_torque_control_Commanded_Torque;		/* Mapped at index 0x2024, subindex 0x01 */
extern UNS16 motor72_torque_control_P_Gain;		/* Mapped at index 0x2024, subindex 0x02 */
extern UNS16 motor72_torque_control_I_Gain;		/* Mapped at index 0x2024, subindex 0x03 */
extern UNS16 motor72_torque_control_D_Gain;		/* Mapped at index 0x2024, subindex 0x04 */
extern REAL32 motor72_torque_control_SS_Gain_1st_Order;		/* Mapped at index 0x2024, subindex 0x05 */
extern REAL32 motor72_torque_control_SS_Gain_2nd_Order;		/* Mapped at index 0x2024, subindex 0x06 */
extern REAL32 motor72_torque_control_SS_Gain_3rd_Order;		/* Mapped at index 0x2024, subindex 0x07 */
extern REAL32 motor72_torque_control_O_Gain_1st_Order;		/* Mapped at index 0x2024, subindex 0x08 */
extern REAL64 motor72_torque_control_O_Gain_2nd_Order;		/* Mapped at index 0x2024, subindex 0x09 */
extern REAL32 motor72_torque_control_O_Gain_3rd_Order;		/* Mapped at index 0x2024, subindex 0x0A */
extern UNS8 motor72_impedance_control_Commanded_Torque;		/* Mapped at index 0x2025, subindex 0x01 */
extern UNS8 motor72_impedance_control_Actual_Length;		/* Mapped at index 0x2025, subindex 0x02 */
extern UNS8 motor72_impedance_control_Actual_Velocity;		/* Mapped at index 0x2025, subindex 0x03 */
extern UNS8 motor72_impedance_control_Length_Offset;		/* Mapped at index 0x2025, subindex 0x04 */
extern UNS8 motor72_impedance_control_Velocity_Offset;		/* Mapped at index 0x2025, subindex 0x05 */
extern UNS8 motor72_impedance_control_Tension_Offset;		/* Mapped at index 0x2025, subindex 0x06 */
extern UNS8 motor72_impedance_control_Velocity_Gain;		/* Mapped at index 0x2025, subindex 0x07 */
extern UNS8 motor72_impedance_control_;		/* Mapped at index 0x2025, subindex 0x08 */
extern UNS8 motor72_impedance_control_Undefined;		/* Mapped at index 0x2025, subindex 0x09 */
extern UNS8 motor72_impedance_control_Undefined;		/* Mapped at index 0x2025, subindex 0x0A */
extern UNS8 motor72_impedance_control_Undefined;		/* Mapped at index 0x2025, subindex 0x0B */

#endif // MOTOR_OBJDICT_72_H
