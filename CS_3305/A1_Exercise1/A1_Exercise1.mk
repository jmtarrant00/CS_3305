##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=A1_Exercise1
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305
ProjectPath            :=C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305/A1_Exercise1
IntermediateDirectory  :=../build-$(ConfigurationName)/A1_Exercise1
OutDir                 :=../build-$(ConfigurationName)/A1_Exercise1
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=tiger
Date                   :=02/09/2021
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
Objects0=../build-$(ConfigurationName)/A1_Exercise1/TestRectangle.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/A1_Exercise1/Rectangle.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/A1_Exercise1/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\A1_Exercise1" mkdir "..\build-$(ConfigurationName)\A1_Exercise1"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\A1_Exercise1" mkdir "..\build-$(ConfigurationName)\A1_Exercise1"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/A1_Exercise1/.d:
	@if not exist "..\build-$(ConfigurationName)\A1_Exercise1" mkdir "..\build-$(ConfigurationName)\A1_Exercise1"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/A1_Exercise1/TestRectangle.cpp$(ObjectSuffix): TestRectangle.cpp ../build-$(ConfigurationName)/A1_Exercise1/TestRectangle.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305/A1_Exercise1/TestRectangle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TestRectangle.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A1_Exercise1/TestRectangle.cpp$(DependSuffix): TestRectangle.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A1_Exercise1/TestRectangle.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A1_Exercise1/TestRectangle.cpp$(DependSuffix) -MM TestRectangle.cpp

../build-$(ConfigurationName)/A1_Exercise1/TestRectangle.cpp$(PreprocessSuffix): TestRectangle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A1_Exercise1/TestRectangle.cpp$(PreprocessSuffix) TestRectangle.cpp

../build-$(ConfigurationName)/A1_Exercise1/Rectangle.cpp$(ObjectSuffix): Rectangle.cpp ../build-$(ConfigurationName)/A1_Exercise1/Rectangle.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305/A1_Exercise1/Rectangle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Rectangle.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A1_Exercise1/Rectangle.cpp$(DependSuffix): Rectangle.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A1_Exercise1/Rectangle.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A1_Exercise1/Rectangle.cpp$(DependSuffix) -MM Rectangle.cpp

../build-$(ConfigurationName)/A1_Exercise1/Rectangle.cpp$(PreprocessSuffix): Rectangle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A1_Exercise1/Rectangle.cpp$(PreprocessSuffix) Rectangle.cpp


-include ../build-$(ConfigurationName)/A1_Exercise1//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


