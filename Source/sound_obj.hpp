#pragma once

#include <windows.h>

struct serene_brattain // same as sound_68 ?
{
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
    char field_24;
    char field_25;
    char field_26;
    char field_27;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
    int field_40;
    int field_44;
    int field_48;
    int field_4C;
    int field_50;
    int field_54;
    int field_58;
    int field_5C;
    int field_60;
    int field_64;
};

struct vigilant_maxwell
{
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    int field_4_pObj;
    int field_8;
};

struct sound_7
{
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    int field_4_fp;
    int field_8_fp;
    char field_C;
    char field_D;
    char field_E;
    char field_F;
    int field_10;
    int field_14;
    int field_18;
};

struct sound_0x68
{
    int field_0;
    char field_4;
    char field_5;
    char field_6;
    char field_7;
    int field_8_obj;
    int field_C;
    int field_10;
    int field_14_samp_idx;
    char field_18;
    char field_19;
    char field_1A;
    char field_1B;
    int field_1C_ReleasingVolumeModificator;
    int field_20_rate;
    unsigned __int8 field_24_nVolume;
    char field_25;
    char field_26;
    char field_27;
    int field_28;
    char field_2C;
    char field_2D;
    char field_2E;
    char field_2F;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
    char field_40_pan;
    char field_41;
    char field_42;
    char field_43;
    int field_44;
    unsigned int field_48_nCalculatedVolume;
    int field_4C;
    char field_50;
    char field_51;
    char field_52;
    char field_53;
    int field_54;
    int field_58_type;
    sound_0x68 *field_5C;
    unsigned __int8 field_60;
    char field_61;
    char field_62;
    char field_63;
    int field_64;
};

struct infallible_turing;

class sound_obj
{
public:
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    int field_4;
    unsigned __int8 field_8;
    char field_9;
    char field_A;
    char field_B;
    int field_C;
    unsigned __int8 field_10_nActiveSamples;
    char field_11;
    char field_12;
    char field_13;
    int field_14_sample_rate;
    char field_18;
    char field_19;
    char field_1A;
    char field_1B;
    BYTE field_1C_samp_count;
    char field_1D_b3d_sound;
    char field_1E;
    char field_1F;
    int field_20;
    char field_24_sfx_vol;
    unsigned __int8 field_25_cdVol;
    char field_26;
    char field_27;
    int field_28;
    char field_2C;
    char field_2D;
    char field_2E;
    char field_2F;
    sound_0x68 field_30_sQueueSample;
    unsigned __int8 field_98_nActiveSampleQueue;
    char field_99_pad;
    char field_9A_pad;
    char field_9B_pad;
    sound_0x68 field_9C_asSamples[2][16];
    BYTE field_D9C_abSampleQueueIndexTable[2][16];
    BYTE field_DBC_SampleRequestQueuesStatus[2];
    __int16 field_DBE;
    sound_0x68 field_DC0[16];
    int field_1440;
    char field_1444;
    char field_1445;
    char field_1446;
    char field_1447;
    int field_1448;
    int field_144C;
    char field_1450;
    char field_1451;
    char field_1452;
    char field_1453;
    int field_1454_anRandomTable[5];
    int field_1468_v1;
    int field_146C_v2;
    int field_1470_v3;
    __int16 field_1474;
    char field_1476;
    char field_1477;
    int field_1478;
    vigilant_maxwell field_147C[1020];
    int field_444C_pEntities[1020];
    int field_543C_444C_max_idx;
    int field_5440;
    int field_5444;
    int field_5448_m_FrameCounter;
    sound_7 field_544C[5];
    char field_54D8[5];
    char field_54DD;
    char field_54DE;
    char field_54DF;
    char field_54E0;
    char field_54E1;
    char field_54E2;
    char field_54E3;
    char field_54E4;
    char field_54E5;
    char field_54E6;
    char field_54E7;
    __int16 field_54E8[5];
    unsigned __int8 field_54F2[5];
    char field_54F7[5];
    int field_54FC;
    int field_5500;
    char field_5504;
    char field_5505;
    char field_5506;
    char field_5507;
    int field_5508;
    int field_550C;
    char field_5510;
    char field_5511;
    char field_5512;
    char field_5513;
    int field_5514;
    int field_5518;
    int field_551C;
    char field_5520;
    char field_5521;
    char field_5522;
    char field_5523;
    int field_5524;
    unsigned __int8 field_5528_idx15_cur;
    unsigned __int8 field_5529_idx15;
    char field_552A_pad;
    char field_552B_pad;
    int field_552C_15array[15];
    char field_5568;
    char field_5569;
    __int16 field_556A;
    __int16 field_556C;
    __int16 field_556E;
    __int16 field_5570;
    __int16 field_5572;
    int field_5574;

    void ClearRequestedQueue_41B700();

    void ClearActivateSamples_41B7A0();

    void sub_41A2A0();

    void SetSfxVol_41A250(char sfxVol);

    void SetCDVol_41A270(unsigned char cdVol);

    char Set3DSound_41A2F0(char b3dSound);

    char Get3dSound_41A390();


    void Init_15_Array_427180();

    void GenerateIntegerRandomNumberTable_41BA90();

    void sub_41B540();

    void sub_41B520(int a1, float *a2);

    char sub_41B660(unsigned __int8 a1, unsigned int a2, unsigned int a3);

    void AddDetailsToRequestedOrderList_41A910(unsigned __int8 a2);

    void AddSampleToRequestedQueue_41A850();

    int RandomDisplacement_41A650(unsigned int seed);

    void ServiceSoundEffects_41A3A0();

    void InterrogateAudioEntities_41A730();

    void AddReleasingSounds_41A9D0();

    void ProcessActiveQueues_41AB80();

    void sub_41A6F0();

    char CalcVolume_41A3F0(unsigned __int8 a1, int a2, int a3);

    bool VolCalc_419070(int a2, int a3, char a4);

    char sub_419020(int a2);

    char sub_4186D0(sound_0x68 *pObj);

    char sub_4182A0(sound_0x68 *pObj);

    char sub_418130(sound_0x68 *pObj);

    char sub_417F40(int a1);

    int sub_417EF0(sound_0x68 *pObj);

    int ConvertToPlayBackRate_417C60(int a1);

    char sub_4153F0(sound_0x68 *pObj);

    void sub_41A6C0(int idx);

    void null_412240();

    void sub_418C20();

    void sub_419E10();

    char LoadStyle_41A1B0(const char *pStyleName);

    const char* GetFileName_41A1E0(const char *pStr);

    int sub_419FA0(infallible_turing* a2);

    void sub_41A090(int a2);

    void Release_41A290();

};

extern sound_obj gSound_obj_66F680;
