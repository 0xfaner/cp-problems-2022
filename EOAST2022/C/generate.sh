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

createDataFile -t 10 -maxn 10000
createDataFile -t 10 -maxn 10000
createDataFile -t 10 -maxn 10000

createDataFile -t 10000 -maxn 2000000
createDataFile -t 10000 -maxn 2000000
createDataFile -t 10000 -maxn 2000000
createDataFile -t 10000 -maxn 2000000

createDataFile -t 500000 -maxn 1000000000000
createDataFile -t 500000 -maxn 1000000000000
createDataFile -t 500000 -maxn 1000000000000

