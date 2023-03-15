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
    5.10)
        echo "chapter 5.10"
        echo " "
        ./roundingNumbersCeil
        ;;
    5.11)
        echo "chapter 5.11"
        echo " "
        ./roundingNumbersFloor
        ;;
    5.12)
        echo "chapter 5.12"
        echo " "
        cat ./5-12.txt
        ;;
    5.13)
        echo "chapter 5.13"
        echo " "
        ./5-13
        ;;
    5.14)
        echo "chapter 5.14"
        echo " "
        ./5-14
        ;;
    5.15)
        echo "chapter 5.15"
        echo " "
        ./hypotenuseCalculations
        ;;
    5.16)
        echo "chapter 5.16"
        echo " "
        ./sidesOfaTriangle
        ;;
    5.17)
        echo "chapter 5.17"
        echo " "
        ./sidesOfaRightTriangle
        ;;
    5.18)
        echo "chapter 5.18"
        echo " "
        ./evenOrOdd
        ;;
    5.19)
        echo "chapter 5.19"
        echo " "
        ./rectangleOfAsterisks
        ;;
    5.20)
        echo "chapter 5.20"
        echo " "
        ./rectangleOfCharacters
        ;;


    *)
        echo "Not a valid chapter."
        ;;
    
esac

