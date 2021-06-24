################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Anton17z1/Anton17z1/Source.cpp \
../Anton17z1/Anton17z1/zestaw1.cpp 

OBJS += \
./Anton17z1/Anton17z1/Source.o \
./Anton17z1/Anton17z1/zestaw1.o 

CPP_DEPS += \
./Anton17z1/Anton17z1/Source.d \
./Anton17z1/Anton17z1/zestaw1.d 


# Each subdirectory must supply rules for building sources it contributes
Anton17z1/Anton17z1/%.o: ../Anton17z1/Anton17z1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


