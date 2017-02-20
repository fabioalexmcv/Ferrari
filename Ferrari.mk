##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Ferrari
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/Fabio/Documents/ProgII
ProjectPath            :=C:/Users/Fabio/Documents/ProgII/Ferrari
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Fabio
Date                   :=17/02/2017
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=clang++
SharedObjectLinkerName :=clang++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="Ferrari.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
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
AR       := ar rcus
CXX      := clang++
CC       := clang
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := llvm-as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ferrari.cpp$(ObjectSuffix) $(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Motor.cpp$(ObjectSuffix) $(IntermediateDirectory)/Carro.cpp$(ObjectSuffix) $(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix) $(IntermediateDirectory)/Moto.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Ferrari.cpp$(ObjectSuffix): Ferrari.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Ferrari.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ferrari.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ferrari.cpp$(PreprocessSuffix): Ferrari.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ferrari.cpp$(PreprocessSuffix) Ferrari.cpp

$(IntermediateDirectory)/Data.cpp$(ObjectSuffix): Data.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Data.cpp$(PreprocessSuffix): Data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Data.cpp$(PreprocessSuffix) Data.cpp

$(IntermediateDirectory)/Motor.cpp$(ObjectSuffix): Motor.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Motor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Motor.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Motor.cpp$(PreprocessSuffix): Motor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Motor.cpp$(PreprocessSuffix) Motor.cpp

$(IntermediateDirectory)/Carro.cpp$(ObjectSuffix): Carro.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Carro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Carro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Carro.cpp$(PreprocessSuffix): Carro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Carro.cpp$(PreprocessSuffix) Carro.cpp

$(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix): Veiculo.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Veiculo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Veiculo.cpp$(PreprocessSuffix): Veiculo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Veiculo.cpp$(PreprocessSuffix) Veiculo.cpp

$(IntermediateDirectory)/Moto.cpp$(ObjectSuffix): Moto.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Moto.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Moto.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Moto.cpp$(PreprocessSuffix): Moto.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Moto.cpp$(PreprocessSuffix) Moto.cpp

##
## Clean
##
clean:
	$(RM) -r ./Debug/


