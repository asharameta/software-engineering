################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../kollokwium/kollokwium/19\ rok.cpp \
../kollokwium/kollokwium/19rik.cpp \
../kollokwium/kollokwium/R.cpp \
../kollokwium/kollokwium/Source.cpp 

OBJS += \
./kollokwium/kollokwium/19\ rok.o \
./kollokwium/kollokwium/19rik.o \
./kollokwium/kollokwium/R.o \
./kollokwium/kollokwium/Source.o 

CPP_DEPS += \
./kollokwium/kollokwium/19\ rok.d \
./kollokwium/kollokwium/19rik.d \
./kollokwium/kollokwium/R.d \
./kollokwium/kollokwium/Source.d 


# Each subdirectory must supply rules for building sources it contributes
kollokwium/kollokwium/19\ rok.o: ../kollokwium/kollokwium/19\ rok.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"kollokwium/kollokwium/19 rok.d" -MT"kollokwium/kollokwium/19\ rok.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

kollokwium/kollokwium/%.o: ../kollokwium/kollokwium/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


