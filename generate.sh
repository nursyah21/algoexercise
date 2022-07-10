# list every directory
# count file cpp and filter with name of folder

header(){
  printf "# algoexercise\n\n"

  printf "good resource to exercise :\n"
  echo "- [basic cpp hackerrank](https://www.hackerrank.com/domains/cpp?filters%5Bdifficulty%5D%5B%5D=easy)  (min: solve 14 question)"
  echo "- [algorithm projecteuler](https://projecteuler.net/archives) (min: solve 6 question)"
  echo "- [top easy interview leetcode](https://leetcode.com/explore/interview/card/top-interview-questions-easy/)"

  printf "\ndeadline 15 july\n\n"

  printf "please use c++ language\n\n"

  printf "compiler online: https://www.online-cpp.com/\n\n"
 
}


generate(){

  echo "---"

  ls -l | grep "^d" | awk '{print $NF}'| while read i;do
    # show name folder
    printf "\n[%s](%s)" $i $i; cd $i; 
    
    # traverse to every folder name
    ls -l | grep "^d" | awk '{print $NF}' |while read j;do
      printf "\n- %s: %d" $j `ls $j | wc -l`
    done

    cd ..

    printf "\n"
  done
}



header > README.md
generate >> README.md
