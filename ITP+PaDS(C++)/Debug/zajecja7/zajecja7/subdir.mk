################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../zajecja7/zajecja7/132.cpp \
../zajecja7/zajecja7/Source1.cpp \
../zajecja7/zajecja7/Source2.cpp 

OBJS += \
./zajecja7/zajecja7/132.o \
./zajecja7/zajecja7/Source1.o \
./zajecja7/zajecja7/Source2.o 

CPP_DEPS += \
./zajecja7/zajecja7/132.d \
./zajecja7/zajecja7/Source1.d \
./zajecja7/zajecja7/Source2.d 


# Each subdirectory must supply rules for building sources it contributes
zajecja7/zajecja7/%.o: ../zajecja7/zajecja7/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


