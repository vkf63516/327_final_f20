################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../drinks/Coffee.cpp \
../drinks/Drink.cpp \
../drinks/Water.cpp 

OBJS += \
./drinks/Coffee.o \
./drinks/Drink.o \
./drinks/Water.o 

CPP_DEPS += \
./drinks/Coffee.d \
./drinks/Drink.d \
./drinks/Water.d 


# Each subdirectory must supply rules for building sources it contributes
drinks/%.o: ../drinks/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


