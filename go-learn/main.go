
package main
import "fmt"

func parr(a* [100]int) {
	for i, v := range a{
		fmt.Printf("%d, %d\n", i, v)
	}
}


func main(){
	a := [...]int{99:100} ;
	parr( &a )
	fmt.Printf("%d\n", len(a))
}
