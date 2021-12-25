#include "gtx_0x106C.hpp"
#include "error.hpp"
#include "file.hpp"
#include <string.h>
#include <stdio.h>
#include <windows.h>

struct sty_header
{
    char field_0_type[4];
    short field_4_version;
};

struct chunk_header
{
    char field_0_type[4];
    int field_4_size;
};

// match
int gtx_0x106C::sub_5AA3B0(unsigned __int8 idx)
{
    return field_5C_cari[idx];
}

void gtx_0x106C::sub_5AABF0()
{
    // TODO
}

void gtx_0x106C::SetSpriteIndexDataPtrs_5AAC40()
{
    // TODO
}

void gtx_0x106C::LoadChunk_5AB4B0(const char *Str1, int chunk_len)
{
    // TODO
}

// match
void gtx_0x106C::sub_5AB720()
{
    if (field_50_delta_buffer && field_48_delta_store)
    {
        sub_5AABF0();
    }

    if (field_20_sprite_index)
    {
        if (field_34_sprite_graphics)
        {
            SetSpriteIndexDataPtrs_5AAC40();
        }
    }
}

// match
void gtx_0x106C::LoadSty_5AB750(const char *pStyFileName)
{
    File::Global_Open_4A7060(pStyFileName);

    sty_header styHeader;
    DWORD len = sizeof(sty_header);
    File::Global_Read_4A71C0(styHeader.field_0_type, &len);

    if (strncmp("GBST", styHeader.field_0_type, sizeof(styHeader.field_0_type)))
    {
        FatalError_4A38C0(93, "C:\\Splitting\\Gta2\\Source\\chunk.h", 37);
    }

    if (styHeader.field_4_version != 700)
    {
        FatalError_4A38C0(94, "C:\\Splitting\\Gta2\\Source\\chunk.h", 33);
    }

    chunk_header chunkHeader;
    for (len = sizeof(chunk_header); File::Global_Read_4A7210(&chunkHeader, &len); len = sizeof(chunk_header))
    {
        if (chunkHeader.field_4_size != 0)
        {
            LoadChunk_5AB4B0(chunkHeader.field_0_type, chunkHeader.field_4_size);
        }
    }

    File::Global_Close_4A70C0();

    sub_5AB720();
}
