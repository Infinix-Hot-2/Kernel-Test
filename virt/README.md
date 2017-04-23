This is MT6580 3.10.x kernel source taken from Asus go and ported to be used on Infinix Hot 2

## Known information
| Subsystem | Driver name | Availability | Working |
|-----------|-------------|--------------|---------|
| LCM driver #1 | `nt35521_dsi_vdo_yushun_cmi_hd720` | Yes | Yes |
| LCM driver #2 | `hx8394d_dsi_vdo_hlt_hsd_hd720` | Yes | No |
| Touch panel | `GT9XX (i2c 1-005D)` | Yes | Yes |
| GPU | `Mali-400 MP` | Yes | Yes |
| Camera #1 | `ov8865_mipi_2lane_raw` | Yes | Partially |
| Camera #2 | `syxov8865_mipi_2lane_raw` | No | No |
| Camera #3 | `hi545_2lane_mipi_raw` | Yes | No |
| Camera #4 | `gc2755_mipi_raw` | Yes | No |
| Accelerometer | `BMA222 (i2c 2-0018)` | Yes | ? |
| ALS/PS | `CM36283 (i2c 2-0060)` | Yes | ? |
| Charger | `BQ24158 (i2c 1-006A)` | Yes | ? |
| Flash | `Samsung Q8XSAB` | Yes | Yes |
| Lens #1 | `DW9714AF` | Yes | ? |
| Lens #1' | `DW9814AF` | - | - |
| Lens #2 | `FM50AF` | Yes | ? |
| RAM | `1 GB LPDDR3` | - | - |
| sound | `mtsndcard` | Yes | ? |

### Extra information

Back camera (ov8865_mipi_2lane_raw) is flipper upside down and pink.
RAM is divided into two version, 1GB and 2GB DDR3 RAM.
mtsndcard is avaible in [`sound/soc/mediatek/mt_soc_audio_6580`](sound/soc/mediatek/mt_soc_audio_6580) directory
