################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Kollokwium2zestawy/Kollokwium2zestawy/zestaw1-1.cpp \
../Kollokwium2zestawy/Kollokwium2zestawy/zestaw6-1.cpp \
../Kollokwium2zestawy/Kollokwium2zestawy/zestaw7-1.cpp 

OBJS += \
./Kollokwium2zestawy/Kollokwium2zestawy/zestaw1-1.o \
./Kollokwium2zestawy/Kollokwium2zestawy/zestaw6-1.o \
./Kollokwium2zestawy/Kollokwium2zestawy/zestaw7-1.o 

CPP_DEPS += \
./Kollokwium2zestawy/Kollokwium2zestawy/zestaw1-1.d \
./Kollokwium2zestawy/Kollokwium2zestawy/zestaw6-1.d \
./Kollokwium2zestawy/Kollokwium2zestawy/zestaw7-1.d 


# Each subdirectory must supply rules for building sources it contributes
Kollokwium2zestawy/Kollokwium2zestawy/%.o: ../Kollokwium2zestawy/Kollokwium2zestawy/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


