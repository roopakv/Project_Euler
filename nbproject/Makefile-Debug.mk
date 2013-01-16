#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc.exe
CCC=g++.exe
CXX=g++.exe
FC=gfortran.exe
AS=as.exe

# Macros
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/problem1.o \
	${OBJECTDIR}/problem5.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/problem10.o \
	${OBJECTDIR}/problem6.o \
	${OBJECTDIR}/problem3.o \
	${OBJECTDIR}/problem13.o \
	${OBJECTDIR}/_ext/723857475/random.o \
	${OBJECTDIR}/problem8.o \
	${OBJECTDIR}/problem7.o \
	${OBJECTDIR}/problem17.o \
	${OBJECTDIR}/_ext/723857475/problem14.o \
	${OBJECTDIR}/problem2.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/projecteuler.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/projecteuler.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/projecteuler ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/problem1.o: problem1.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/problem1.o problem1.cpp

${OBJECTDIR}/problem5.o: problem5.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/problem5.o problem5.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/problem10.o: problem10.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/problem10.o problem10.cpp

${OBJECTDIR}/problem6.o: problem6.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/problem6.o problem6.cpp

${OBJECTDIR}/problem3.o: problem3.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/problem3.o problem3.cpp

${OBJECTDIR}/problem13.o: problem13.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/problem13.o problem13.cpp

${OBJECTDIR}/_ext/723857475/random.o: /cygdrive/D/development/ProjectEuler/random.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/723857475
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/723857475/random.o /cygdrive/D/development/ProjectEuler/random.cpp

${OBJECTDIR}/problem8.o: problem8.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/problem8.o problem8.cpp

${OBJECTDIR}/problem7.o: problem7.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/problem7.o problem7.cpp

${OBJECTDIR}/problem17.o: problem17.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/problem17.o problem17.cpp

${OBJECTDIR}/_ext/723857475/problem14.o: /cygdrive/D/development/ProjectEuler/problem14.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/723857475
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/723857475/problem14.o /cygdrive/D/development/ProjectEuler/problem14.cpp

${OBJECTDIR}/problem2.o: problem2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/problem2.o problem2.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/projecteuler.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
