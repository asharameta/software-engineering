################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test123/test123/5iczb.cpp \
../test123/test123/PczyF.cpp \
../test123/test123/ab.cpp 

OBJS += \
./test123/test123/5iczb.o \
./test123/test123/PczyF.o \
./test123/test123/ab.o 

CPP_DEPS += \
./test123/test123/5iczb.d \
./test123/test123/PczyF.d \
./test123/test123/ab.d 


# Each subdirectory must supply rules for building sources it contributes
test123/test123/%.o: ../test123/test123/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


