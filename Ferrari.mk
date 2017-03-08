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
Date                   :=07/03/2017
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
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Ferrari.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ferrari.cpp$(ObjectSuffix) $(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Motor.cpp$(ObjectSuffix) $(IntermediateDirectory)/Carro.cpp$(ObjectSuffix) $(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix) $(IntermediateDirectory)/Moto.cpp$(ObjectSuffix) $(IntermediateDirectory)/Onibus.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Ferrari.cpp$(ObjectSuffix): Ferrari.cpp $(IntermediateDirectory)/Ferrari.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Ferrari.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ferrari.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ferrari.cpp$(DependSuffix): Ferrari.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Ferrari.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Ferrari.cpp$(DependSuffix) -MM Ferrari.cpp

$(IntermediateDirectory)/Ferrari.cpp$(PreprocessSuffix): Ferrari.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ferrari.cpp$(PreprocessSuffix) Ferrari.cpp

$(IntermediateDirectory)/Data.cpp$(ObjectSuffix): Data.cpp $(IntermediateDirectory)/Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Data.cpp$(DependSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Data.cpp$(DependSuffix) -MM Data.cpp

$(IntermediateDirectory)/Data.cpp$(PreprocessSuffix): Data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Data.cpp$(PreprocessSuffix) Data.cpp

$(IntermediateDirectory)/Motor.cpp$(ObjectSuffix): Motor.cpp $(IntermediateDirectory)/Motor.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Motor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Motor.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Motor.cpp$(DependSuffix): Motor.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Motor.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Motor.cpp$(DependSuffix) -MM Motor.cpp

$(IntermediateDirectory)/Motor.cpp$(PreprocessSuffix): Motor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Motor.cpp$(PreprocessSuffix) Motor.cpp

$(IntermediateDirectory)/Carro.cpp$(ObjectSuffix): Carro.cpp $(IntermediateDirectory)/Carro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Carro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Carro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Carro.cpp$(DependSuffix): Carro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Carro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Carro.cpp$(DependSuffix) -MM Carro.cpp

$(IntermediateDirectory)/Carro.cpp$(PreprocessSuffix): Carro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Carro.cpp$(PreprocessSuffix) Carro.cpp

$(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix): Veiculo.cpp $(IntermediateDirectory)/Veiculo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Veiculo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Veiculo.cpp$(DependSuffix): Veiculo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Veiculo.cpp$(DependSuffix) -MM Veiculo.cpp

$(IntermediateDirectory)/Veiculo.cpp$(PreprocessSuffix): Veiculo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Veiculo.cpp$(PreprocessSuffix) Veiculo.cpp

$(IntermediateDirectory)/Moto.cpp$(ObjectSuffix): Moto.cpp $(IntermediateDirectory)/Moto.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Moto.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Moto.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Moto.cpp$(DependSuffix): Moto.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Moto.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Moto.cpp$(DependSuffix) -MM Moto.cpp

$(IntermediateDirectory)/Moto.cpp$(PreprocessSuffix): Moto.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Moto.cpp$(PreprocessSuffix) Moto.cpp

$(IntermediateDirectory)/Onibus.cpp$(ObjectSuffix): Onibus.cpp $(IntermediateDirectory)/Onibus.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Fabio/Documents/ProgII/Ferrari/Onibus.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Onibus.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Onibus.cpp$(DependSuffix): Onibus.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Onibus.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Onibus.cpp$(DependSuffix) -MM Onibus.cpp

$(IntermediateDirectory)/Onibus.cpp$(PreprocessSuffix): Onibus.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Onibus.cpp$(PreprocessSuffix) Onibus.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


