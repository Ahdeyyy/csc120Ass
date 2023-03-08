echo "enter the chapter number"
read chapter

case $chapter in
    3.17)
        echo "chapter 3.17"
        echo " "
        ./mortgagecalc
        ;;
    
    3.18)
        echo "chapter 3.18"
        echo " "
        ./salescommisioncalc
        ;;
    
    3.19)
        echo "chapter 3.19"
        echo " "
        ./interestcalc
        ;;
    
    3.20)
        echo "chapter 3.20"
        echo " "
        ./salarycalc
        ;;
    
    4.17)
        echo "chapter 4.17"
        echo " "
        ./calculatingcreditlimits
        ;;
    
    4.18)
        echo "chapter 4.18" 
        echo " "
        ./barchartprinting
        ;;
    
    4.19)
        echo "chapter 4.19"
        echo " "
        ./calculatingsales
        ;;
    
    4.20)
        echo "chapter 4.20"
        echo " "
        echo "Condition1        Condition2        Condition1 && Condition2"
        echo "  0                   0                       0             "
        echo "  0               non zero                    0             "
        echo "non zero              0                       0             "
        echo "non zero          non zero                    1             "
        echo " "

        echo "Condition1        Condition2        Condition1 || Condition2"
        echo "  0                   0                       0             "
        echo "  0               non zero                    1             "
        echo "non zero              0                       1             "
        echo "non zero          non zero                    1             "
        echo " "

        echo "Condition1        !Condition1"
        echo "  0                   1      "
        echo "non zero              0      "
        echo " "
        
        ;;
    *)
        echo "Not a valid chapter."
        ;;
    
esac

