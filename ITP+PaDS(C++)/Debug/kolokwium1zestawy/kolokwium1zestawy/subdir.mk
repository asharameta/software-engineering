################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../kolokwium1zestawy/kolokwium1zestawy/kol1-1.cpp \
../kolokwium1zestawy/kolokwium1zestawy/kol1-2.cpp \
../kolokwium1zestawy/kolokwium1zestawy/zestaw3-1.cpp \
../kolokwium1zestawy/kolokwium1zestawy/zestaw5-1.cpp \
../kolokwium1zestawy/kolokwium1zestawy/zestaw6-1.cpp 

OBJS += \
./kolokwium1zestawy/kolokwium1zestawy/kol1-1.o \
./kolokwium1zestawy/kolokwium1zestawy/kol1-2.o \
./kolokwium1zestawy/kolokwium1zestawy/zestaw3-1.o \
./kolokwium1zestawy/kolokwium1zestawy/zestaw5-1.o \
./kolokwium1zestawy/kolokwium1zestawy/zestaw6-1.o 

CPP_DEPS += \
./kolokwium1zestawy/kolokwium1zestawy/kol1-1.d \
./kolokwium1zestawy/kolokwium1zestawy/kol1-2.d \
./kolokwium1zestawy/kolokwium1zestawy/zestaw3-1.d \
./kolokwium1zestawy/kolokwium1zestawy/zestaw5-1.d \
./kolokwium1zestawy/kolokwium1zestawy/zestaw6-1.d 


# Each subdirectory must supply rules for building sources it contributes
kolokwium1zestawy/kolokwium1zestawy/%.o: ../kolokwium1zestawy/kolokwium1zestawy/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


