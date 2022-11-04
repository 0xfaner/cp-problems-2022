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

createDataFile -t 100 -n 10 -m 1 -maxm 1 -zero_weight 0
createDataFile -t 100 -n 10 -m 2 -maxm 1 -zero_weight 0
createDataFile -t 100 -n 10 -m 2 -maxm 2 -zero_weight 0
createDataFile -t 100 -n 10 -m 3 -maxm 1 -zero_weight 0
createDataFile -t 100 -n 10 -m 3 -maxm 2 -zero_weight 0
createDataFile -t 100 -n 10 -m 3 -maxm 3 -zero_weight 0

createDataFile -t 10 -n 100 -m 1 -maxm 1 -zero_weight 1
createDataFile -t 10 -n 100 -m 2 -maxm 1 -zero_weight 1
createDataFile -t 10 -n 100 -m 2 -maxm 2 -zero_weight 1
createDataFile -t 10 -n 100 -m 3 -maxm 1 -zero_weight 1
createDataFile -t 10 -n 100 -m 3 -maxm 2 -zero_weight 1
createDataFile -t 10 -n 100 -m 3 -maxm 3 -zero_weight 1

createDataFile -t 2 -n 500 -m 100 -maxm 100 -zero_weight 4
createDataFile -t 2 -n 500 -m 1000 -maxm 1000 -zero_weight 4
createDataFile -t 2 -n 500 -m 10000 -maxm 10000 -zero_weight 4
createDataFile -t 2 -n 500 -m 100000 -maxm 100000 -zero_weight 4
createDataFile -t 2 -n 500 -m 1000000 -maxm 1000000 -zero_weight 4
createDataFile -t 2 -n 500 -m 10000000 -maxm 10000000 -zero_weight 4
createDataFile -t 2 -n 500 -m 100000000 -maxm 100000000 -zero_weight 4
createDataFile -t 2 -n 500 -m 1000000000 -maxm 1000000000 -zero_weight 4
