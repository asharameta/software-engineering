################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ZANOGO/ZANOGO/Main.cpp \
../ZANOGO/ZANOGO/Source.cpp \
../ZANOGO/ZANOGO/Source1.cpp \
../ZANOGO/ZANOGO/cofeeGrinder.cpp \
../ZANOGO/ZANOGO/zad2(main).cpp \
../ZANOGO/ZANOGO/zad2(source).cpp 

OBJS += \
./ZANOGO/ZANOGO/Main.o \
./ZANOGO/ZANOGO/Source.o \
./ZANOGO/ZANOGO/Source1.o \
./ZANOGO/ZANOGO/cofeeGrinder.o \
./ZANOGO/ZANOGO/zad2(main).o \
./ZANOGO/ZANOGO/zad2(source).o 

CPP_DEPS += \
./ZANOGO/ZANOGO/Main.d \
./ZANOGO/ZANOGO/Source.d \
./ZANOGO/ZANOGO/Source1.d \
./ZANOGO/ZANOGO/cofeeGrinder.d \
./ZANOGO/ZANOGO/zad2(main).d \
./ZANOGO/ZANOGO/zad2(source).d 


# Each subdirectory must supply rules for building sources it contributes
ZANOGO/ZANOGO/%.o: ../ZANOGO/ZANOGO/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

ZANOGO/ZANOGO/zad2(main).o: ../ZANOGO/ZANOGO/zad2(main).cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"ZANOGO/ZANOGO/zad2(main).d" -MT"ZANOGO/ZANOGO/zad2(main).d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

ZANOGO/ZANOGO/zad2(source).o: ../ZANOGO/ZANOGO/zad2(source).cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"ZANOGO/ZANOGO/zad2(source).d" -MT"ZANOGO/ZANOGO/zad2(source).d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


