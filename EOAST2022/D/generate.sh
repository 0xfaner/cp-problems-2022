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

createDataFile -t 10 -n 8 -maxm 1 -zero_weight 0
createDataFile -t 10 -n 10 -maxm 1 -zero_weight 0
createDataFile -t 10 -n 10 -maxm 1 -zero_weight 0

createDataFile -t 2 -n 500 -maxm 1000 -zero_weight 4
createDataFile -t 2 -n 500 -maxm 1000 -zero_weight 4
createDataFile -t 2 -n 500 -maxm 10000 -zero_weight 4
createDataFile -t 2 -n 500 -maxm 100000 -zero_weight 4
createDataFile -t 2 -n 500 -maxm 1000000000 -zero_weight 4
createDataFile -t 2 -n 500 -maxm 1000000000 -zero_weight 4
createDataFile -t 2 -n 500 -maxm 1000000000 -zero_weight 4

