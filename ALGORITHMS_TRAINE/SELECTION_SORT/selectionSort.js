let array = [ 4,2,7,8,45,3,95]
function selectionSort(arr){

for(let i =0; i < arr.length -1;i ++){
	for(let j =i+1; j < arr.length-1;j ++){
		if(arr[j] < arr[i]){
		let aux = arr[i]
		arr[i]=arr[j]
		arr[j]=aux
			}
		}
	}
	return arr
}

selectionSort(array)
console.log(array)

