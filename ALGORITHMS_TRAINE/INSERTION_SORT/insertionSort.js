
let array = [3,2,0,69,4,98,8,3]
// 2 3 0
function insertionSort(arr){

    for(let i =0; i < arr.length -1;i ++){
        
        let j = i+1   
        while(i >= 0 && arr[i] > arr[j]){
           
                let aux =  arr[i]
                arr[i] = arr[j]
                arr[j] =  aux
                
            i--
        }
    }
}

insertionSort(array)
console.log(array)