##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=A6_remDupes
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/GitHub/CS_3305/CS_3305
ProjectPath            :=D:/GitHub/CS_3305/CS_3305/A6_remDupes
IntermediateDirectory  :=../build-$(ConfigurationName)/A6_remDupes
OutDir                 :=../build-$(ConfigurationName)/A6_remDupes
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jonathan
Date                   :=05/11/2021
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
Objects0=../build-$(ConfigurationName)/A6_remDupes/removeDuplicates.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/A6_remDupes/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\A6_remDupes" mkdir "..\build-$(ConfigurationName)\A6_remDupes"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\A6_remDupes" mkdir "..\build-$(ConfigurationName)\A6_remDupes"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/A6_remDupes/.d:
	@if not exist "..\build-$(ConfigurationName)\A6_remDupes" mkdir "..\build-$(ConfigurationName)\A6_remDupes"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/A6_remDupes/removeDuplicates.cpp$(ObjectSuffix): removeDuplicates.cpp ../build-$(ConfigurationName)/A6_remDupes/removeDuplicates.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/GitHub/CS_3305/CS_3305/A6_remDupes/removeDuplicates.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/removeDuplicates.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A6_remDupes/removeDuplicates.cpp$(DependSuffix): removeDuplicates.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A6_remDupes/removeDuplicates.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A6_remDupes/removeDuplicates.cpp$(DependSuffix) -MM removeDuplicates.cpp

../build-$(ConfigurationName)/A6_remDupes/removeDuplicates.cpp$(PreprocessSuffix): removeDuplicates.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A6_remDupes/removeDuplicates.cpp$(PreprocessSuffix) removeDuplicates.cpp


-include ../build-$(ConfigurationName)/A6_remDupes//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


