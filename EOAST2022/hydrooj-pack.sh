scriptRoot=$(dirname "$0" | sed 's?\\?\/?g')

HYDROOJRoot=$scriptRoot/HYDROOJ

problemRoot=$scriptRoot/HYDROOJ/problems
solutionRoot=$scriptRoot/HYDROOJ/solutions
dataRoot=$scriptRoot/HYDROOJ/data

cleanDir() {
    if [ -d $* ]; then
        rm -rf $*
        if [[ $? -ne 0 ]]; then
            echo failed
            exit
        fi
    fi
    
    mkdir $*
    if [[ $? -ne 0 ]]; then
        echo failed
        exit
    fi
}

cleanDir ${HYDROOJRoot}
cleanDir ${problemRoot}
cleanDir ${solutionRoot}
cleanDir ${dataRoot}

array=(A B C D E F)
for i in "${array[@]}"; do
    bash $scriptRoot/$i/generate.sh
    cat $scriptRoot/$i/problem.md > ${problemRoot}/$i.md
    cat $scriptRoot/$i/solution.cpp > ${solutionRoot}/$i.cpp
    cat $scriptRoot/$i/solution.md >> ${solutionRoot}/solution.md
    echo >> ${solutionRoot}/solution.md
    cp -r $scriptRoot/$i/data ${dataRoot}/$i/
done
