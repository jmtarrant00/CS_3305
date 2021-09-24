##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=A3_Node1_New
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/GitHub/CS_3305/CS_3305
ProjectPath            :=D:/GitHub/CS_3305/CS_3305/A3_Node1_New
IntermediateDirectory  :=../build-$(ConfigurationName)/A3_Node1_New
OutDir                 :=../build-$(ConfigurationName)/A3_Node1_New
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jonathan
Date                   :=23/09/2021
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
Objects0=../build-$(ConfigurationName)/A3_Node1_New/node1_New_Test.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/A3_Node1_New/node1_New.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/A3_Node1_New/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\A3_Node1_New" mkdir "..\build-$(ConfigurationName)\A3_Node1_New"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\A3_Node1_New" mkdir "..\build-$(ConfigurationName)\A3_Node1_New"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/A3_Node1_New/.d:
	@if not exist "..\build-$(ConfigurationName)\A3_Node1_New" mkdir "..\build-$(ConfigurationName)\A3_Node1_New"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/A3_Node1_New/node1_New_Test.cpp$(ObjectSuffix): node1_New_Test.cpp ../build-$(ConfigurationName)/A3_Node1_New/node1_New_Test.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/GitHub/CS_3305/CS_3305/A3_Node1_New/node1_New_Test.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/node1_New_Test.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A3_Node1_New/node1_New_Test.cpp$(DependSuffix): node1_New_Test.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A3_Node1_New/node1_New_Test.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A3_Node1_New/node1_New_Test.cpp$(DependSuffix) -MM node1_New_Test.cpp

../build-$(ConfigurationName)/A3_Node1_New/node1_New_Test.cpp$(PreprocessSuffix): node1_New_Test.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A3_Node1_New/node1_New_Test.cpp$(PreprocessSuffix) node1_New_Test.cpp

../build-$(ConfigurationName)/A3_Node1_New/node1_New.cpp$(ObjectSuffix): node1_New.cpp ../build-$(ConfigurationName)/A3_Node1_New/node1_New.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/GitHub/CS_3305/CS_3305/A3_Node1_New/node1_New.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/node1_New.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A3_Node1_New/node1_New.cpp$(DependSuffix): node1_New.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A3_Node1_New/node1_New.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A3_Node1_New/node1_New.cpp$(DependSuffix) -MM node1_New.cpp

../build-$(ConfigurationName)/A3_Node1_New/node1_New.cpp$(PreprocessSuffix): node1_New.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A3_Node1_New/node1_New.cpp$(PreprocessSuffix) node1_New.cpp


-include ../build-$(ConfigurationName)/A3_Node1_New//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


