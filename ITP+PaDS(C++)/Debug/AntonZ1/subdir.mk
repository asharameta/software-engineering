################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AntonZ1/bib_func.cpp \
../AntonZ1/program.cpp 

OBJS += \
./AntonZ1/bib_func.o \
./AntonZ1/program.o 

CPP_DEPS += \
./AntonZ1/bib_func.d \
./AntonZ1/program.d 


# Each subdirectory must supply rules for building sources it contributes
AntonZ1/%.o: ../AntonZ1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


