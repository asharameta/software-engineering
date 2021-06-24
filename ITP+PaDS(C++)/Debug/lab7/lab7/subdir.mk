################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lab7/lab7/main.cpp \
../lab7/lab7/pochodna.cpp 

OBJS += \
./lab7/lab7/main.o \
./lab7/lab7/pochodna.o 

CPP_DEPS += \
./lab7/lab7/main.d \
./lab7/lab7/pochodna.d 


# Each subdirectory must supply rules for building sources it contributes
lab7/lab7/%.o: ../lab7/lab7/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


