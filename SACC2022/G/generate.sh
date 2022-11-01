scriptRoot=$(dirname "$0" | sed 's?\\?\/?g')


dataRoot="${scriptRoot}/data"

generatorCppFileName="generator.cpp"
generatorCppFilePath="${scriptRoot}/${generatorCppFileName}"
generatorExecFileName="generator.exe"
generatorExecFilePath="${scriptRoot}/${generatorExecFileName}"

solutionCppFileName="solution.cpp"
solutionCppFilePath="${scriptRoot}/${solutionCppFileName}"
solutionExecFileName="solution.exe"
solutionExecFilePath="${scriptRoot}/${solutionExecFileName}"

source ${scriptRoot}/../common/color.sh
source ${scriptRoot}/../common/message.sh
source ${scriptRoot}/../common/generator.sh

buildGeneratorExecFile
buildSolutionExecFile
createDataRoot

for i in $(seq 0 9); do
    createDataFile -n 100000 -m 100000 -maxd $i
done
