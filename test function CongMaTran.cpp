void congMaTran(MaTran matran[][], int n) {
    int hang = matran[0].get_soHang();
    int cot = matran[0].get_soCot();
    MaTran tong;
    
    
    //su dung con tro
    tong.phanTu = new int*[hang];
    
    for (int i = 0; i < hang; i++) {
        tong.phanTu[i] = new int[cot]{0};
    }
    for (int x = 0; x < n; x++) {
        for (int i = 0; i < hang; i++) {
            for (int j = 0; j < cot; j++) {
                tong.phanTu[i][j] += matran[x].phanTu[i][j];
            }
        }
    }
    cout << "Tong cac ma tran:" << endl;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            cout << "[" << tong.phanTu[i][j] << "] ";
        }
        cout << endl;
    }
    
    //giai phong bo nho
//    for (int i = 0; i < rows; i++) {
//        delete[] tong.phanTu[i];
//    }
//    delete[] tong.phanTu;
