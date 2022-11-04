scriptRoot=$(dirname "$0" | sed 's?\\?\/?g')

NOJRoot=$scriptRoot/NOJ

problemRoot=$scriptRoot/NOJ/problems
solutionRoot=$scriptRoot/NOJ/solutions
dataRoot=$scriptRoot/NOJ/data

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

cleanDir ${NOJRoot}
cleanDir ${problemRoot}
cleanDir ${solutionRoot}
cleanDir ${dataRoot}

array=(A B C D E F G H)
for i in "${array[@]}"; do
    cat $scriptRoot/$i/problem.md | sed -r -e 's?\$?$$$?g' | sed -r -e 's?\\?\\\\?g' > ${problemRoot}/$i.md
    cat $scriptRoot/$i/solution.cpp > ${solutionRoot}/$i.cpp
    cat $scriptRoot/$i/solution.md >> ${solutionRoot}/solution.md
    echo >> ${solutionRoot}/solution.md
    cp -r $scriptRoot/$i/data ${dataRoot}/$i/
done
