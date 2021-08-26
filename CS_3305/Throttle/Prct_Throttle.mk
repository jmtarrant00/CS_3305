##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Prct_Throttle
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/GitHub/CS_3305/CS_3305
ProjectPath            :=D:/GitHub/CS_3305/CS_3305/Throttle
IntermediateDirectory  :=../build-$(ConfigurationName)/Throttle
OutDir                 :=../build-$(ConfigurationName)/Throttle
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jonathan
Date                   :=26/08/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/Throttle/TestThrottle.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Throttle/Throttle.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Throttle/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Throttle" mkdir "..\build-$(ConfigurationName)\Throttle"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Throttle" mkdir "..\build-$(ConfigurationName)\Throttle"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Throttle/.d:
	@if not exist "..\build-$(ConfigurationName)\Throttle" mkdir "..\build-$(ConfigurationName)\Throttle"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Throttle/TestThrottle.cpp$(ObjectSuffix): TestThrottle.cpp ../build-$(ConfigurationName)/Throttle/TestThrottle.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/GitHub/CS_3305/CS_3305/Throttle/TestThrottle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TestThrottle.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Throttle/TestThrottle.cpp$(DependSuffix): TestThrottle.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Throttle/TestThrottle.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Throttle/TestThrottle.cpp$(DependSuffix) -MM TestThrottle.cpp

../build-$(ConfigurationName)/Throttle/TestThrottle.cpp$(PreprocessSuffix): TestThrottle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Throttle/TestThrottle.cpp$(PreprocessSuffix) TestThrottle.cpp

../build-$(ConfigurationName)/Throttle/Throttle.cpp$(ObjectSuffix): Throttle.cpp ../build-$(ConfigurationName)/Throttle/Throttle.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/GitHub/CS_3305/CS_3305/Throttle/Throttle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Throttle.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Throttle/Throttle.cpp$(DependSuffix): Throttle.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Throttle/Throttle.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Throttle/Throttle.cpp$(DependSuffix) -MM Throttle.cpp

../build-$(ConfigurationName)/Throttle/Throttle.cpp$(PreprocessSuffix): Throttle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Throttle/Throttle.cpp$(PreprocessSuffix) Throttle.cpp


-include ../build-$(ConfigurationName)/Throttle//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


