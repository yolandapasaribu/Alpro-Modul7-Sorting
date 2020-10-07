#include <iostream>//library input output pada program c++

using namespace std;//meringkas std pada program c++
void cetak_data(int data[], int panjang);//membuat prosedur cetak data dengan paramater data array tipe data int dan paramater panjang ber tipe data int

void bubble_sort(int data[], int panjang){//membuat prosedur bubble sort dengan paramater data array tipe data int dan paramater panjang tipe data int
    bool not_sorted=true;//membuat var not_sorted dan bernilai benar
    int j=0,tmp; //membuat var j bernilai 0 dan membuat var bayangan

    while(not_sorted){//melakukan kondisi apabila not_sorted bernilai salah
        not_sorted=false;
        j++;

        for(int i=0; i<panjang-j; i++){//melakukan pengecekan dari data ke 1 sampai data ke n dan bansingkan dengan data sebelumnya
            if(data[i]>data[i+1]){//jika lebih kecil bilangan tersebut dengan bilangan yg ada di depannya
                tmp=data[i];//maka, simpan bil tersebut ke var bayangan(tmp)
                data[i]=data[i+1];//data bayangan tsb pindahkan ke paramater data i
                data[i+1]=tmp;//lalu paramater i tsb di pindahkan lagi ke data bayangan
                not_sorted=true;//jika lebih besar maka tidak terjadi pemindahan

                cetak_data(data,panjang);//mencetak prosedur cetak data
            }
        }
    }
}

void cetak_data(int data[], int panjang){//membuat prosedur cetak data dengan paramater data array tipe data int dan paramater panjang ber tipe data int
    for(int i=0;i<panjang;i++){//melakukan perulangan pengurutan data ke i
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

    cout << "Proses pengurutan data : \n";//menampilkan kalimat proses pengurutan data
    bubble_sort(data, panjang);//menampilkan prosedur insertion_sort dengan paramater data dan panjang
    cout << "Data setelah diurutkan : " <<endl;//menampilkan kalimat data setelah diurutkan
    cetak_data(data, panjang);//menampilkan prosedur cetak_data dengan paramater data dan panjang

    return 0;
}
