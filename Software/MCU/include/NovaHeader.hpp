#pragma once

#define VERSION_1_0_0 0

#define HARDWARE_VERSION VERSION_1_0_0
#define SOFTWARE_VERSION VERSION_1_0_0


//Set the appropriate hardware defines
#if HARDWARE_VERSION == VERSION_1_0_0
#define NUMBER_OF_PYROS 3
#define MS5607-02BA03 	//Barometer
#define BMI088 			//IMU
#define W25N512GV 		//FLASH
#define H3LIS331DL 		//Accelerometer
#endif //HARDWARE_VERSION == VERSION_1_0_0 






//A bunch of defualt defines for the configs
#define DEFAULT_TWO_STAGE_ROCKET            (true)
#define DEFAULT_SAFETY_LOCK                 (true)
#define DEFAULT_SAFETY_LOCK_VALUE           (15)
#define DEFAULT_PYRO_CONFIG                 (NONE)  
#define DEFAULT_PYRO_VALUE                  (0)
#define DEFAULT_IGNITION_THRESHOLD          (5)
#define DEFAULT_CUTOFF_THRESHOLD            (2)
#define DEFAULT_PRE_LAUNCH_LOG_RATE         (0)
#define DEFAULT_POWERED_FLIGHT_LOG_RATE     (50)
#define DEFAULT_UNPOWERED_FLIGHT_LOG_RATE   (50)
#define DEFAULT_DESCENT_LOG_RATE            (1)
#define DEFAULT_ALTITUDE_DETERMINATION      (BOTH)
#define DEFAULT_ARMING_ALTITUDE             (50)
#define DEFAULT_DROGUE_CHUTE                (true)
#define DEFAULT_MAIN_PYRO_CHANNEL           (0)
#define DEFAULT_DROGUE_PYRO_CHANNEL         (1)

