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

buildgeneratorExecFile
buildsolutionExecFile
createDataRoot

createDataFile -type 1
createDataFile -type 2

for i in $(seq 2 9); do
    createDataFile -type 0 -t 10000 -maxn $((10**${i}))
done
