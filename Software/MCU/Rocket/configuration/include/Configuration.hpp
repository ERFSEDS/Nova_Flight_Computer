#pragma once
#include "NovaHeader.hpp"
enum PyroConfig {
	VELOCITY_ABOVE,
	VELOCITY_BELOW,
	ACCELERATION_BELOW,
	ACCELERATION_ABOVE,
	ALTITUDE_ABOVE,
	ALTITUDE_BELOW,
	TIME_DELAY,
	NONE
};
enum AltitudeDeterminination {
	ACCELEROMETER_ONLY,
	BAROMETER_ONLY,
	BOTH
};
struct Pyro {
	PyroConfig configOne;
	float valueOne;
	PyroConfig configTwo;
	float valueTwo;
	
	bool operator==(const Pyro& pyro){
    	if ( (configOne == pyro.configOne) &&
			 (valueOne == pyro.valueOne) &&
			 (configTwo == pyro.configTwo) &&
			 (valueTwo == pyro.valueTwo) ) {
			return true;
		}
		
		return false;
	}
};
struct LoggingRates {
	float preLaunch;
	float poweredFlight;
	float unpoweredFlight;
	float descent;
	
	bool operator==(const LoggingRates& rates){
   	if ( (preLaunch == rates.preLaunch) &&
		 (poweredFlight == rates.poweredFlight) &&
		 (unpoweredFlight == rates.unpoweredFlight) &&
		 (descent == rates.descent) ) {
		return true;
	}
	
	return false;
	}
};

class Configuration {	
	public:
		static bool getTwoStageRocket();
		static void setTwoStageRocket(bool twoStage);

		static bool getSafetyLock();
		static void setSafetyLock(bool safetyLock);
		static float getSafetyLockValue();						
		static void setSafetyLockValue(float safetyLockValue); 

		static void setPyro(int pyroNum, Pyro& pyro);
		static void setPyro(int pyroNum, 
					 PyroConfig& configOne, float& valueOne,
					 PyroConfig& configTwo, float& valueTwo);
		static void setPyro(int pyroNum, int pyroConfigNum,
					 PyroConfig& config, float& value);
		static Pyro* getPyro(int pyroNum);	
		static Pyro* getAllPyros();
		
		static float getIgnitionThreshold();
		static void setIgnitionThreshold(float ignitionThreshold);
		static float getCutoffThreshold();
		static void setCutoffThreshold(float cutoffThreshold);

		static LoggingRates* getLoggingRates(); 
		static void setLoggingRates(LoggingRates logRates);
		
		static AltitudeDeterminination getAltitudeDetermination();
		static void setAltitudeDetermination(AltitudeDeterminination determination);
		
		static float getArmingAltitude();
		static void setArmingAltitude(float altitude);
		
		static bool getDrogueChute();
		static void setDrogueChute(bool drogueChute);
		
		static int getMainPyroChannel();
		static void setMainPyroChannel(int channel);
		
		static int getDroguePyroChannel();
		static void setDroguePyroChannel(int channel);

		Configuration(const Configuration &conf) = delete; //copy constructor is not allowed
		
	//Private Functions
	private:
		Configuration(); //constructor is private
		
		~Configuration(); //deconstructor is private

		void setToDefault();
		
	private:		
		static Configuration &GET_INSTANCE();
		bool getTwoStageRocket_I();
		void setTwoStageRocket_I(bool twoStage);

		bool getSafetyLock_I();
		void setSafetyLock_I(bool safetyLock);
		float getSafetyLockValue_I();						
		void setSafetyLockValue_I(float safetyLockValue); 

		void setPyro_I(int pyroNum, Pyro& pyro);
		void setPyro_I(int pyroNum, 
					 PyroConfig& configOne, float& valueOne,
					 PyroConfig& configTwo, float& valueTwo);
		void setPyro_I(int pyroNum, int pyroConfigNum,
					 PyroConfig& config, float& value);
		Pyro* getPyro_I(int pyroNum);	
		Pyro* getAllPyros_I();
		
		float getIgnitionThreshold_I();
		void setIgnitionThreshold_I(float ignitionThreshold);
		float getCutoffThreshold_I();
		void setCutoffThreshold_I(float cutoffThreshold);

		LoggingRates* getLoggingRates_I(); 
		void setLoggingRates_I(LoggingRates logRates);
		
		AltitudeDeterminination getAltitudeDetermination_I();
		void setAltitudeDetermination_I(AltitudeDeterminination determination);
		
		float getArmingAltitude_I();
		void setArmingAltitude_I(float altitude);
		
		bool getDrogueChute_I();
		void setDrogueChute_I(bool drogueChute);
		
		int getMainPyroChannel_I();
		void setMainPyroChannel_I(int channel);
		
		int getDroguePyroChannel_I();
		void setDroguePyroChannel_I(int channel);
		
		
	//Private Variables
	private:
		static Configuration INSTANCE;
		
		bool twoStageRocket;
		
		bool safetyLock;
		float safetyLockValue;
		
		Pyro pyroChannels[NUMBER_OF_PYROS];
		
		float ignitionThreshold;
		float cutoffThreshold;
		
		LoggingRates loggingRates;
		
		AltitudeDeterminination altitudeDetermination;
		
		float armingAltitude;
		
		bool drogueChute;
		
		int mainPyroChannel;
		int droguePyroChannel;
		
};
