##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=A5_Average
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305
ProjectPath            :=C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305/A5_Average
IntermediateDirectory  :=../build-$(ConfigurationName)/A5_Average
OutDir                 :=../build-$(ConfigurationName)/A5_Average
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=tiger
Date                   :=19/10/2021
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
Objects0=../build-$(ConfigurationName)/A5_Average/AverageGrades.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/A5_Average/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\A5_Average" mkdir "..\build-$(ConfigurationName)\A5_Average"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\A5_Average" mkdir "..\build-$(ConfigurationName)\A5_Average"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/A5_Average/.d:
	@if not exist "..\build-$(ConfigurationName)\A5_Average" mkdir "..\build-$(ConfigurationName)\A5_Average"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/A5_Average/AverageGrades.cpp$(ObjectSuffix): AverageGrades.cpp ../build-$(ConfigurationName)/A5_Average/AverageGrades.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305/A5_Average/AverageGrades.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AverageGrades.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A5_Average/AverageGrades.cpp$(DependSuffix): AverageGrades.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A5_Average/AverageGrades.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A5_Average/AverageGrades.cpp$(DependSuffix) -MM AverageGrades.cpp

../build-$(ConfigurationName)/A5_Average/AverageGrades.cpp$(PreprocessSuffix): AverageGrades.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A5_Average/AverageGrades.cpp$(PreprocessSuffix) AverageGrades.cpp


-include ../build-$(ConfigurationName)/A5_Average//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


