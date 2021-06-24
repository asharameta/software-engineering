################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../From\ cpp\ to\ C/From\ cpp\ to\ C/zad1cpp.c \
../From\ cpp\ to\ C/From\ cpp\ to\ C/zadd3.c 

CPP_SRCS += \
../From\ cpp\ to\ C/From\ cpp\ to\ C/123A.cpp \
../From\ cpp\ to\ C/From\ cpp\ to\ C/zad4.cpp \
../From\ cpp\ to\ C/From\ cpp\ to\ C/zad7.cpp 

OBJS += \
./From\ cpp\ to\ C/From\ cpp\ to\ C/123A.o \
./From\ cpp\ to\ C/From\ cpp\ to\ C/zad1cpp.o \
./From\ cpp\ to\ C/From\ cpp\ to\ C/zad4.o \
./From\ cpp\ to\ C/From\ cpp\ to\ C/zad7.o \
./From\ cpp\ to\ C/From\ cpp\ to\ C/zadd3.o 

C_DEPS += \
./From\ cpp\ to\ C/From\ cpp\ to\ C/zad1cpp.d \
./From\ cpp\ to\ C/From\ cpp\ to\ C/zadd3.d 

CPP_DEPS += \
./From\ cpp\ to\ C/From\ cpp\ to\ C/123A.d \
./From\ cpp\ to\ C/From\ cpp\ to\ C/zad4.d \
./From\ cpp\ to\ C/From\ cpp\ to\ C/zad7.d 


# Each subdirectory must supply rules for building sources it contributes
From\ cpp\ to\ C/From\ cpp\ to\ C/123A.o: ../From\ cpp\ to\ C/From\ cpp\ to\ C/123A.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"From cpp to C/From cpp to C/123A.d" -MT"From\ cpp\ to\ C/From\ cpp\ to\ C/123A.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

From\ cpp\ to\ C/From\ cpp\ to\ C/zad1cpp.o: ../From\ cpp\ to\ C/From\ cpp\ to\ C/zad1cpp.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"From cpp to C/From cpp to C/zad1cpp.d" -MT"From\ cpp\ to\ C/From\ cpp\ to\ C/zad1cpp.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

From\ cpp\ to\ C/From\ cpp\ to\ C/zad4.o: ../From\ cpp\ to\ C/From\ cpp\ to\ C/zad4.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"From cpp to C/From cpp to C/zad4.d" -MT"From\ cpp\ to\ C/From\ cpp\ to\ C/zad4.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

From\ cpp\ to\ C/From\ cpp\ to\ C/zad7.o: ../From\ cpp\ to\ C/From\ cpp\ to\ C/zad7.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"From cpp to C/From cpp to C/zad7.d" -MT"From\ cpp\ to\ C/From\ cpp\ to\ C/zad7.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

From\ cpp\ to\ C/From\ cpp\ to\ C/zadd3.o: ../From\ cpp\ to\ C/From\ cpp\ to\ C/zadd3.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"From cpp to C/From cpp to C/zadd3.d" -MT"From\ cpp\ to\ C/From\ cpp\ to\ C/zadd3.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


