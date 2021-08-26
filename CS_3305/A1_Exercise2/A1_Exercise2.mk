##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=A1_Exercise2
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305
ProjectPath            :=C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305/A1_Exercise2
IntermediateDirectory  :=../build-$(ConfigurationName)/A1_Exercise2
OutDir                 :=../build-$(ConfigurationName)/A1_Exercise2
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=tiger
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
Objects0=../build-$(ConfigurationName)/A1_Exercise2/DailyTemps.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/A1_Exercise2/TestTemps.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/A1_Exercise2/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\A1_Exercise2" mkdir "..\build-$(ConfigurationName)\A1_Exercise2"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\A1_Exercise2" mkdir "..\build-$(ConfigurationName)\A1_Exercise2"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/A1_Exercise2/.d:
	@if not exist "..\build-$(ConfigurationName)\A1_Exercise2" mkdir "..\build-$(ConfigurationName)\A1_Exercise2"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/A1_Exercise2/DailyTemps.cpp$(ObjectSuffix): DailyTemps.cpp ../build-$(ConfigurationName)/A1_Exercise2/DailyTemps.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305/A1_Exercise2/DailyTemps.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DailyTemps.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A1_Exercise2/DailyTemps.cpp$(DependSuffix): DailyTemps.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A1_Exercise2/DailyTemps.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A1_Exercise2/DailyTemps.cpp$(DependSuffix) -MM DailyTemps.cpp

../build-$(ConfigurationName)/A1_Exercise2/DailyTemps.cpp$(PreprocessSuffix): DailyTemps.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A1_Exercise2/DailyTemps.cpp$(PreprocessSuffix) DailyTemps.cpp

../build-$(ConfigurationName)/A1_Exercise2/TestTemps.cpp$(ObjectSuffix): TestTemps.cpp ../build-$(ConfigurationName)/A1_Exercise2/TestTemps.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305/A1_Exercise2/TestTemps.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TestTemps.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A1_Exercise2/TestTemps.cpp$(DependSuffix): TestTemps.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A1_Exercise2/TestTemps.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A1_Exercise2/TestTemps.cpp$(DependSuffix) -MM TestTemps.cpp

../build-$(ConfigurationName)/A1_Exercise2/TestTemps.cpp$(PreprocessSuffix): TestTemps.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A1_Exercise2/TestTemps.cpp$(PreprocessSuffix) TestTemps.cpp


-include ../build-$(ConfigurationName)/A1_Exercise2//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


