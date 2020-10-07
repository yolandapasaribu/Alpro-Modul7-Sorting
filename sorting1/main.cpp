#include <iostream>//library input output pada program c++

using namespace std;//meringkas std pada program c++
void cetak_data(int data[], int panjang);//membuat prosedur cetak data dengan paramater data array tipe data int dan paramater panjang ber tipe data int
void insertion_sort(int data[], int panjang){ //membuat prosedur insertion sort dengan paramater data array tipe data int dan paramater panjang tipe data int
    int tmp;//tipe data sementara

    for(int i=1;i<panjang;i++){//membuat perulangan untuk pengecekan mulai data ke 1 sampai data ke n
        int j=i;//data j = i

        while(j>0 && data [j-1]>data[j]){//membandingkan data ke 2 sampai data ke n dengan data sebelum j lebih besar dari data j
            tmp=data[j]; //membuat var data bayangan data j
            data[j]=data[j-1];//membandingkan data ke 2- ke n dengan data sebelumnya jika lebih kecil data tsb sapat disisipkan ke data awal
            data[j-1]=tmp;//data yang sudah dibandingkan maka di simpan sementara di var bayangan
            j--;
            cetak_data(data,panjang);//mencetak prosedur cetak data dengan paramater data dan panjang
        }
    }
}
void cetak_data(int data[], int panjang){//membuat prosedur cetak data denagn paramater array data dan panjang
    for(int i=0;i>panjang;i++){//melakukan perulangan pengurutan data i
        cout << data[i] << " ";//mencetak data i
    }
    cout<<endl;
}

int main()//program utama c++
{
    int data[] = {7,8,5,2,4,6,3};//membuat array data dengan nilai 7,8,5,2,4,6,3
    int panjang = sizeof(data)/sizeof(*data);//membuat var panjang dan menampilkan proses dari data

    cout << "Data sebelum diurutkan : \n";//menampilkan kalimat data sebelum di urutkan
    cetak_data(data, panjang);//menampilkan prosedur cetak data dengan paramater data dan panjang

    cout << "Proses pengurutan data : \n";//meb
    insertion_sort(data, panjang);
    cout << "Data setelah diurutkan : " <<endl;
    cetak_data(data, panjang);

    return 0;
}
