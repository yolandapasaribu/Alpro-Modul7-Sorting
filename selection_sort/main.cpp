#include <iostream>//library input output pada program c++

using namespace std;//meringkas std pada program c++
void cetak_data(int data[], int panjang);//membuat prosedur cetak data dengan paramater data array tipe data int dan paramater panjang ber tipe data int

void selection_sort(int data[], int panjang){//membuat prosedur insertion sort dengan paramater data array tipe data int dan paramater panjang tipe data int
    int pos_min, tmp;//tipe data sementara dan posmin

        for(int i=0;i<panjang;i++){//membuat perulangan untuk pengecekan mulai data ke 1 sampai data ke n
            pos_min=i;//memasukan data perulangan ke var posmin
            for(int j=i+1; j<panjang; j++){//proses pencarian nilai terkecil
                if(data[j]<data[pos_min]){//banding kan data ke j kurang dari data pos_min
                    pos_min=j; //posmin sama dengan j
                }
            }
            if(pos_min!=i){//melakukan kondisi jika posmin tidak sama dengan i
                tmp=data[i];//maka data ke i di simpan di var bayangan
                data[i]=data[pos_min];//lalu data ke i di tukar dengan data posmin
                data[pos_min]=tmp;//data posmin di pindah ke var bayangan

                cetak_data(data,panjang);//mencetak prosedur cetak data
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
    selection_sort(data, panjang);//menampilkan prosedur insertion_sort dengan paramater data dan panjang
    cout << "Data setelah diurutkan : " <<endl;//menampilkan kalimat data setelah diurutkan
    cetak_data(data, panjang);//menampilkan prosedur cetak_data dengan paramater data dan panjang

    return 0;//mengembalikan fungsi
}
