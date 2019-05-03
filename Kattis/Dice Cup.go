package main
import "fmt"

func main(){
  var taken[1000] int
  var n,m int
  var maxi int = 0
  fmt.Scanf("%d%d",&n,&m)
  for i:=1;i<=n;i+=1{
    for j:=1;j<=m;j+=1{
      taken[i+j]+=1;
      if taken[i+j]>maxi{
        maxi=taken[i+j]
      }
    }
  }
  for x:=2;x<=n+m;x+=1{
    if taken[x]==maxi{
      fmt.Println(x)
    }
  }

}
