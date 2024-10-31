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
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/bca1f66f/BorneException.o \
	${OBJECTDIR}/_ext/bca1f66f/BorneFontaine.o \
	${OBJECTDIR}/_ext/bca1f66f/BorneStationnement.o \
	${OBJECTDIR}/_ext/bca1f66f/RegistreBorne.o \
	${OBJECTDIR}/Borne.o \
	${OBJECTDIR}/ContratException.o \
	${OBJECTDIR}/validationFormat.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1 \
	${TESTDIR}/TestFiles/f2 \
	${TESTDIR}/TestFiles/f3 \
	${TESTDIR}/TestFiles/f4

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/_ext/836b3a81/TesteurBorne.o \
	${TESTDIR}/_ext/836b3a81/TesteurBorneFontaine.o \
	${TESTDIR}/_ext/836b3a81/TesteurBorneStationnement.o \
	${TESTDIR}/_ext/836b3a81/TesteurRegistreBorne.o

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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libsource.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libsource.a: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libsource.a
	${AR} -rv ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libsource.a ${OBJECTFILES} 
	$(RANLIB) ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libsource.a

${OBJECTDIR}/_ext/bca1f66f/BorneException.o: /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneException.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/bca1f66f
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/bca1f66f/BorneException.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneException.cpp

${OBJECTDIR}/_ext/bca1f66f/BorneFontaine.o: /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneFontaine.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/bca1f66f
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/bca1f66f/BorneFontaine.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneFontaine.cpp

${OBJECTDIR}/_ext/bca1f66f/BorneStationnement.o: /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneStationnement.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/bca1f66f
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/bca1f66f/BorneStationnement.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneStationnement.cpp

${OBJECTDIR}/_ext/bca1f66f/RegistreBorne.o: /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/RegistreBorne.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/bca1f66f
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/bca1f66f/RegistreBorne.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/RegistreBorne.cpp

${OBJECTDIR}/Borne.o: Borne.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Borne.o Borne.cpp

${OBJECTDIR}/ContratException.o: ContratException.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ContratException.o ContratException.cpp

${OBJECTDIR}/validationFormat.o: validationFormat.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/validationFormat.o validationFormat.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:

${TESTDIR}/TestFiles/f1: ${TESTDIR}/_ext/836b3a81/TesteurBorne.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS}   -lgtest_main -lgtest -lpthread -lgtest_main -lgtest -lpthread 

${TESTDIR}/TestFiles/f2: ${TESTDIR}/_ext/836b3a81/TesteurBorneFontaine.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f2 $^ ${LDLIBSOPTIONS}   -lgtest_main -lgtest -lpthread 

${TESTDIR}/TestFiles/f3: ${TESTDIR}/_ext/836b3a81/TesteurBorneStationnement.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f3 $^ ${LDLIBSOPTIONS}   -lgtest_main -lgtest -lpthread 

${TESTDIR}/TestFiles/f4: ${TESTDIR}/_ext/836b3a81/TesteurRegistreBorne.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f4 $^ ${LDLIBSOPTIONS}   -lgtest_main -lgtest -lpthread 


${TESTDIR}/_ext/836b3a81/TesteurBorne.o: /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/tests/TesteurBorne.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/836b3a81
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/src/gtest/include -I. -I/usr/src/gtest/include -MMD -MP -MF "$@.d" -o ${TESTDIR}/_ext/836b3a81/TesteurBorne.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/tests/TesteurBorne.cpp


${TESTDIR}/_ext/836b3a81/TesteurBorneFontaine.o: /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/tests/TesteurBorneFontaine.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/836b3a81
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/src/gtest/include -I. -MMD -MP -MF "$@.d" -o ${TESTDIR}/_ext/836b3a81/TesteurBorneFontaine.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/tests/TesteurBorneFontaine.cpp


${TESTDIR}/_ext/836b3a81/TesteurBorneStationnement.o: /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/tests/TesteurBorneStationnement.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/836b3a81
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/src/gtest/include -I. -MMD -MP -MF "$@.d" -o ${TESTDIR}/_ext/836b3a81/TesteurBorneStationnement.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/tests/TesteurBorneStationnement.cpp


${TESTDIR}/_ext/836b3a81/TesteurRegistreBorne.o: /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/tests/TesteurRegistreBorne.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/836b3a81
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/src/gtest/include -I. -MMD -MP -MF "$@.d" -o ${TESTDIR}/_ext/836b3a81/TesteurRegistreBorne.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/tests/TesteurRegistreBorne.cpp


${OBJECTDIR}/_ext/bca1f66f/BorneException_nomain.o: ${OBJECTDIR}/_ext/bca1f66f/BorneException.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneException.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/bca1f66f
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/bca1f66f/BorneException.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/bca1f66f/BorneException_nomain.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneException.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/bca1f66f/BorneException.o ${OBJECTDIR}/_ext/bca1f66f/BorneException_nomain.o;\
	fi

${OBJECTDIR}/_ext/bca1f66f/BorneFontaine_nomain.o: ${OBJECTDIR}/_ext/bca1f66f/BorneFontaine.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneFontaine.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/bca1f66f
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/bca1f66f/BorneFontaine.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/bca1f66f/BorneFontaine_nomain.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneFontaine.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/bca1f66f/BorneFontaine.o ${OBJECTDIR}/_ext/bca1f66f/BorneFontaine_nomain.o;\
	fi

${OBJECTDIR}/_ext/bca1f66f/BorneStationnement_nomain.o: ${OBJECTDIR}/_ext/bca1f66f/BorneStationnement.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneStationnement.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/bca1f66f
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/bca1f66f/BorneStationnement.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/bca1f66f/BorneStationnement_nomain.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/BorneStationnement.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/bca1f66f/BorneStationnement.o ${OBJECTDIR}/_ext/bca1f66f/BorneStationnement_nomain.o;\
	fi

${OBJECTDIR}/_ext/bca1f66f/RegistreBorne_nomain.o: ${OBJECTDIR}/_ext/bca1f66f/RegistreBorne.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/RegistreBorne.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/bca1f66f
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/bca1f66f/RegistreBorne.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/bca1f66f/RegistreBorne_nomain.o /home/etudiant/Documents/tp3-integration-equipe-212/TP3/source/RegistreBorne.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/bca1f66f/RegistreBorne.o ${OBJECTDIR}/_ext/bca1f66f/RegistreBorne_nomain.o;\
	fi

${OBJECTDIR}/Borne_nomain.o: ${OBJECTDIR}/Borne.o Borne.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Borne.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Borne_nomain.o Borne.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Borne.o ${OBJECTDIR}/Borne_nomain.o;\
	fi

${OBJECTDIR}/ContratException_nomain.o: ${OBJECTDIR}/ContratException.o ContratException.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/ContratException.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ContratException_nomain.o ContratException.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/ContratException.o ${OBJECTDIR}/ContratException_nomain.o;\
	fi

${OBJECTDIR}/validationFormat_nomain.o: ${OBJECTDIR}/validationFormat.o validationFormat.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/validationFormat.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/validationFormat_nomain.o validationFormat.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/validationFormat.o ${OBJECTDIR}/validationFormat_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	    ${TESTDIR}/TestFiles/f2 || true; \
	    ${TESTDIR}/TestFiles/f3 || true; \
	    ${TESTDIR}/TestFiles/f4 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
