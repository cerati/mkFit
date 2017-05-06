#include "../Config.h"
#include "../TrackerInfo.h"

void Create_TrackerInfo(TrackerInfo& ti, bool verbose)
{
  Config::chi2Cut = 30.0;

  for (int i =  0; i < 18; ++i) ti.new_barrel_layer();
  for (int i = 18; i < 45; ++i) ti.new_ecap_pos_layer();
  for (int i = 45; i < 72; ++i) ti.new_ecap_neg_layer();

  // PIXB

  {
    LayerInfo & li  = ti.m_layers[0];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(2.720, 3.390, -26.700, 26.700);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(1, 18, 45);
    li.m_is_outer = false;
    li.m_q_bin = 2.000;
    li.set_selection_limits(0.01, 0.05, 1.0, 2.0);
  }

  {
    LayerInfo & li  = ti.m_layers[1];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(6.560, 7.270, -26.700, 26.700);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(2, 18, 45);
    li.m_is_outer = false;
    li.m_q_bin = 2.000;
    li.set_selection_limits(0.01, 0.05, 1.0, 2.0);
  }

  {
    LayerInfo & li  = ti.m_layers[2];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(10.690, 11.360, -26.700, 26.700);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(3, 18, 45);
    li.m_is_outer = false;
    li.m_q_bin = 2.000;
    li.set_selection_limits(0.01, 0.05, 1.0, 2.0);
  }

  {
    LayerInfo & li  = ti.m_layers[3];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(15.800, 16.460, -26.700, 26.690);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(4, 21, 48);
    li.m_is_outer = false;
    li.m_q_bin = 2.000;
    li.set_selection_limits(0.01, 0.05, 1.0, 2.0);
  }


  // TIB

  {
    LayerInfo & li  = ti.m_layers[4];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(23.450, 27.880, -66.670, 63.930);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(5, 21, 48);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[5];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(23.450, 27.880, -66.670, 63.930);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(6, 21, 48);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[6];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(31.830, 36.240, -65.890, 66.670);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(7, 21, 48);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[7];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(31.830, 36.240, -65.890, 66.670);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(8, 21, 48);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[8];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(39.880, 44.040, -66.400, 65.240);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(9, 21, 48);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[9];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(47.810, 51.980, -66.400, 66.400);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(10, 27, 54);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }


  // TOB

  {
    LayerInfo & li  = ti.m_layers[10];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(58.410, 63.430, -108.710, 108.710);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(11, 27, 54);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[11];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(58.410, 63.430, -108.710, 108.710);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(12, 27, 54);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[12];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(66.810, 71.740, -108.700, 108.710);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(13, 27, 54);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[13];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(66.810, 71.740, -108.700, 108.710);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(14, 27, 54);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[14];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(76.040, 80.090, -108.300, 108.290);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(15, 27, 54);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[15];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(84.840, 88.880, -108.290, 108.300);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(16, 27, 54);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[16];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(94.540, 98.570, -108.290, 108.290);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(17, 27, 54);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  {
    LayerInfo & li  = ti.m_layers[17];
    li.m_layer_type = LayerInfo::Barrel;
    li.set_limits(106.040, 110.060, -108.290, 108.290);
    li.m_propagate_to = li.r_mean();
    li.set_next_layers(-1, -1, -1);
    li.m_is_outer = true;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }


  // PIXE +/-

  {
    LayerInfo & li  = ti.m_layers[18];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(4.590, 16.090, 29.440, 35.210);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(4, 19, -1);
    li.m_is_outer = false;
    li.m_q_bin = 1.000;
    li.set_selection_limits(0.01, 0.05, 0.8, 1.6);
  }
  {
    LayerInfo & li  = ti.m_layers[45];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(4.590, 16.090, -35.200, -29.440);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(4, 46, -1);
    li.m_is_outer = false;
    li.m_q_bin = 1.000;
    li.set_selection_limits(0.01, 0.05, 0.8, 1.6);
  }
  {
    LayerInfo & li  = ti.m_layers[19];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(4.590, 16.090, 36.940, 42.700);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(4, 20, -1);
    li.m_is_outer = false;
    li.m_q_bin = 1.000;
    li.set_selection_limits(0.01, 0.05, 0.8, 1.6);
  }
  {
    LayerInfo & li  = ti.m_layers[46];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(4.590, 16.090, -42.700, -36.940);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(4, 47, -1);
    li.m_is_outer = false;
    li.m_q_bin = 1.000;
    li.set_selection_limits(0.01, 0.05, 0.8, 1.6);
  }
  {
    LayerInfo & li  = ti.m_layers[20];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(4.590, 16.090, 46.450, 52.200);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(4, 21, -1);
    li.m_is_outer = false;
    li.m_q_bin = 1.000;
    li.set_selection_limits(0.01, 0.05, 0.8, 1.6);
  }
  {
    LayerInfo & li  = ti.m_layers[47];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(4.590, 16.090, -52.210, -46.450);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(4, 48, -1);
    li.m_is_outer = false;
    li.m_q_bin = 1.000;
    li.set_selection_limits(0.01, 0.05, 0.8, 1.6);
  }

  // TID +/-

  {
    LayerInfo & li  = ti.m_layers[21];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(22.980, 50.440, 74.350, 84.050);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 22, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[48];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(22.980, 50.440, -84.050, -74.350);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 49, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[22];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(22.980, 50.440, 74.350, 84.050);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 23, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[49];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(22.980, 50.440, -84.050, -74.350);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 50, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[23];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(22.980, 50.440, 87.300, 97.000);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 24, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[50];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(22.980, 50.440, -97.000, -87.300);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 51, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[24];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(22.980, 50.440, 87.300, 97.000);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 25, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[51];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(22.980, 50.440, -97.000, -87.300);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 52, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[25];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(22.980, 50.440, 100.250, 109.950);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 26, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[52];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(22.980, 50.440, -109.950, -100.250);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 53, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[26];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(22.980, 50.440, 100.250, 109.950);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 27, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[53];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(22.980, 50.440, -109.950, -100.250);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(10, 54, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  // TID +/-

  {
    LayerInfo & li  = ti.m_layers[27];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(23.370, 109.390, 126.380, 137.390);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 28, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[54];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(23.360, 109.400, -137.390, -126.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 55, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[28];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(23.370, 109.390, 126.380, 137.390);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 29, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[55];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(23.360, 109.400, -137.390, -126.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 56, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[29];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(23.360, 109.410, 140.380, 151.390);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 30, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[56];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(23.360, 109.390, -151.420, -140.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 57, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[30];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(23.360, 109.410, 140.380, 151.390);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 31, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[57];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(23.360, 109.390, -151.420, -140.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 58, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[31];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(23.360, 109.390, 154.380, 165.390);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 32, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[58];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(23.360, 109.390, -165.390, -154.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 59, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[32];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(23.360, 109.390, 154.380, 165.390);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 33, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[59];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(23.360, 109.390, -165.390, -154.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 60, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[33];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(32.110, 109.400, 168.380, 179.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 34, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[60];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(32.110, 109.390, -179.390, -168.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 61, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[34];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(32.110, 109.400, 168.380, 179.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 35, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[61];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(32.110, 109.390, -179.390, -168.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 62, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[35];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(32.110, 109.390, 182.370, 193.390);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 36, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[62];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(32.110, 109.390, -193.380, -182.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 63, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[36];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(32.110, 109.390, 182.370, 193.390);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 37, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[63];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(32.110, 109.390, -193.380, -182.380);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 64, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[37];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(32.110, 109.390, 199.870, 210.880);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 38, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[64];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(32.110, 109.390, -210.880, -199.870);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 65, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[38];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(32.110, 109.390, 199.870, 210.880);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 39, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[65];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(32.110, 109.390, -210.880, -199.870);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 66, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[39];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(39.200, 109.390, 218.870, 229.860);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 40, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[66];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(39.200, 109.390, -229.860, -218.870);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 67, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[40];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(39.200, 109.390, 218.870, 229.860);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 41, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[67];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(39.200, 109.390, -229.860, -218.870);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 68, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[41];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(39.200, 109.400, 239.370, 250.360);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 42, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[68];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(39.200, 109.400, -250.360, -239.370);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 69, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[42];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(39.200, 109.400, 239.370, 250.360);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 43, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[69];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(39.200, 109.400, -250.360, -239.370);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 70, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[43];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(50.410, 109.400, 260.870, 271.870);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 44, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[70];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(50.410, 109.390, -271.880, -260.870);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, 71, -1);
    li.m_is_outer = false;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[44];
    li.m_layer_type = LayerInfo::EndCapPos;
    li.set_limits(50.410, 109.400, 260.870, 271.870);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, -1, -1);
    li.m_is_outer = true;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }
  {
    LayerInfo & li  = ti.m_layers[71];
    li.m_layer_type = LayerInfo::EndCapNeg;
    li.set_limits(50.410, 109.390, -271.880, -260.870);
    li.m_propagate_to = li.z_mean();
    li.set_next_layers(-1, -1, -1);
    li.m_is_outer = true;
    li.m_q_bin = 20.000;
    li.set_selection_limits(0.01, 0.2, 10.0, 20.0);
  }

  if (verbose) { printf("==========================================================================================\n"); }
  printf("CMS-2017 -- Create_TrackerInfo finished\n");
  if (verbose)
  {
    printf("==========================================================================================\n");
    for (auto &i : ti.m_layers)  i.print_layer();
    printf("==========================================================================================\n");
  }
}