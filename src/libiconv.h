/* DO NOT MODIFY THIS FILE!  It was generated by `recode/doc/tables.py'.  */

/* Conversion of files between different charsets and surfaces.
   Copyright © 1999 Free Software Foundation, Inc.
   Contributed by François Pinard <pinard@iro.umontreal.ca>, 1993, 1997.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License
   as published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This library is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty
   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the `recode' Library; see the file `COPYING.LIB'.
   If not, write to the Free Software Foundation, Inc., 59 Temple Place -
   Suite 330, Boston, MA 02111-1307, USA.  */

/* This is derived from Bruno Haible's `libiconv' package.  */
static const char *iconv_name_list[434] =
  {
    "US-ASCII",
	"ASCII",
	"ISO646-US",
	"ISO_646.IRV:1991",
	"ISO-IR-6",
	"ANSI_X3.4-1968",
	"CP367",
	"IBM367",
	"US",
	"csASCII",
	"ISO646.1991-IRV", NULL,

    /* General multi-byte encodings.  */

    "UTF-8",
	"UTF8", NULL,
    "UCS-2",
	"ISO-10646-UCS-2",
	"csUnicode", NULL,
    "UCS-2BE",
	"UNICODEBIG",
	"UNICODE-1-1",
	"csUnicode11", NULL,
    "UCS-2LE",
	"UNICODELITTLE", NULL,
    "UCS-4",
	"ISO-10646-UCS-4",
	"csUCS4", NULL,
    "UCS-4BE", NULL,
    "UCS-4LE", NULL,
    "UTF-16", NULL,
    "UTF-16BE", NULL,
    "UTF-16LE", NULL,
    "UTF-7",
	"UNICODE-1-1-UTF-7",
	"csUnicode11UTF7", NULL,
    "UCS-2-INTERNAL", NULL,
    "UCS-2-SWAPPED", NULL,
    "UCS-4-INTERNAL", NULL,
    "UCS-4-SWAPPED", NULL,
    "JAVA", NULL,

    /* Standard 8-bit encodings.  */

    "ISO-8859-1",
	"ISO_8859-1",
	"ISO_8859-1:1987",
	"ISO-IR-100",
	"CP819",
	"IBM819",
	"LATIN1",
	"L1",
	"csISOLatin1",
	"ISO8859-1",
	"ISO8859_1", NULL,
    "ISO-8859-2",
	"ISO_8859-2",
	"ISO_8859-2:1987",
	"ISO-IR-101",
	"LATIN2",
	"L2",
	"csISOLatin2",
	"ISO8859-2",
	"ISO8859_2", NULL,
    "ISO-8859-3",
	"ISO_8859-3",
	"ISO_8859-3:1988",
	"ISO-IR-109",
	"LATIN3",
	"L3",
	"csISOLatin3",
	"ISO8859-3",
	"ISO8859_3", NULL,
    "ISO-8859-4",
	"ISO_8859-4",
	"ISO_8859-4:1988",
	"ISO-IR-110",
	"LATIN4",
	"L4",
	"csISOLatin4",
	"ISO8859-4",
	"ISO8859_4", NULL,
    "ISO-8859-5",
	"ISO_8859-5",
	"ISO_8859-5:1988",
	"ISO-IR-144",
	"CYRILLIC",
	"csISOLatinCyrillic",
	"ISO8859-5",
	"ISO8859_5", NULL,
    "ISO-8859-6",
	"ISO_8859-6",
	"ISO_8859-6:1987",
	"ISO-IR-127",
	"ECMA-114",
	"ASMO-708",
	"ARABIC",
	"csISOLatinArabic",
	"ISO8859-6",
	"ISO8859_6", NULL,
    "ISO-8859-7",
	"ISO_8859-7",
	"ISO_8859-7:1987",
	"ISO-IR-126",
	"ECMA-118",
	"ELOT_928",
	"GREEK8",
	"GREEK",
	"csISOLatinGreek",
	"ISO8859-7",
	"ISO8859_7", NULL,
    "ISO-8859-8",
	"ISO_8859-8",
	"ISO_8859-8:1988",
	"ISO-IR-138",
	"HEBREW",
	"csISOLatinHebrew",
	"ISO8859-8",
	"ISO8859_8", NULL,
    "ISO-8859-9",
	"ISO_8859-9",
	"ISO_8859-9:1989",
	"ISO-IR-148",
	"LATIN5",
	"L5",
	"csISOLatin5",
	"ISO8859-9",
	"ISO8859_9", NULL,
    "ISO-8859-10",
	"ISO_8859-10",
	"ISO_8859-10:1992",
	"ISO-IR-157",
	"LATIN6",
	"L6",
	"csISOLatin6",
	"ISO8859-10", NULL,
    "ISO-8859-13",
	"ISO_8859-13",
	"ISO-IR-179",
	"LATIN7",
	"L7", NULL,
    "ISO-8859-14",
	"ISO_8859-14",
	"ISO_8859-14:1998",
	"ISO-IR-199",
	"LATIN8",
	"L8", NULL,
    "ISO-8859-15",
	"ISO_8859-15",
	"ISO_8859-15:1998",
	"ISO-IR-203", NULL,
    "ISO-8859-16",
	"ISO_8859-16",
	"ISO_8859-16:2000",
	"ISO-IR-226", NULL,
    "KOI8-R",
	"csKOI8R", NULL,
    "KOI8-U", NULL,
    "KOI8-RU", NULL,

    /* Windows 8-bit encodings.  */

    "CP1250",
	"WINDOWS-1250",
	"MS-EE", NULL,
    "CP1251",
	"WINDOWS-1251",
	"MS-CYRL", NULL,
    "CP1252",
	"WINDOWS-1252",
	"MS-ANSI", NULL,
    "CP1253",
	"WINDOWS-1253",
	"MS-GREEK", NULL,
    "CP1254",
	"WINDOWS-1254",
	"MS-TURK", NULL,
    "CP1255",
	"WINDOWS-1255",
	"MS-HEBR", NULL,
    "CP1256",
	"WINDOWS-1256",
	"MS-ARAB", NULL,
    "CP1257",
	"WINDOWS-1257",
	"WINBALTRIM", NULL,
    "CP1258",
	"WINDOWS-1258", NULL,

    /* DOS 8-bit encodings.  */

    "CP850",
	"IBM850",
	"850",
	"csPC850Multilingual", NULL,
    "CP866",
	"IBM866",
	"866",
	"csIBM866", NULL,

    /* Macintosh 8-bit encodings.  */

    "MacRoman",
	"Macintosh",
	"MAC",
	"csMacintosh", NULL,
    "MacCentralEurope", NULL,
    "MacIceland", NULL,
    "MacCroatian", NULL,
    "MacRomania", NULL,
    "MacCyrillic", NULL,
    "MacUkraine", NULL,
    "MacGreek", NULL,
    "MacTurkish", NULL,
    "MacHebrew", NULL,
    "MacArabic", NULL,
    "MacThai", NULL,

    /* Other platform specific 8-bit encodings.  */

    "HP-ROMAN8",
	"ROMAN8",
	"R8",
	"csHPRoman8", NULL,
    "NEXTSTEP", NULL,

    /* Regional 8-bit encodings used for a single language.  */

    "ARMSCII-8", NULL,
    "Georgian-Academy", NULL,
    "Georgian-PS", NULL,
    "MuleLao-1", NULL,
    "CP1133",
	"IBM-CP1133", NULL,
    "TIS-620",
	"TIS620",
	"TIS620-0",
	"TIS620.2529-1",
	"TIS620.2533-0",
	"TIS620.2533-1",
	"ISO-IR-166", NULL,
    "CP874",
	"WINDOWS-874", NULL,
    "VISCII",
	"VISCII1.1-1",
	"csVISCII", NULL,
    "TCVN",
	"TCVN-5712",
	"TCVN5712-1",
	"TCVN5712-1:1993", NULL,

    /* CJK character sets (not documented).  */

    "JIS_C6220-1969-RO",
	"ISO646-JP",
	"ISO-IR-14",
	"JP",
	"csISO14JISC6220ro", NULL,
    "JIS_X0201",
	"JISX0201-1976",
	"X0201",
	"csHalfWidthKatakana",
	"JISX0201.1976-0",
	"JIS0201", NULL,
    "JIS_X0208",
	"JIS_X0208-1983",
	"JIS_X0208-1990",
	"JIS0208",
	"X0208",
	"ISO-IR-87",
	"csISO87JISX0208",
	"JISX0208.1983-0",
	"JISX0208.1990-0",
	"JIS0208", NULL,
    "JIS_X0212",
	"JIS_X0212.1990-0",
	"JIS_X0212-1990",
	"X0212",
	"ISO-IR-159",
	"csISO159JISX02121990",
	"JISX0212.1990-0",
	"JIS0212", NULL,
    "GB_1988-80",
	"ISO646-CN",
	"ISO-IR-57",
	"CN",
	"csISO57GB1988", NULL,
    "GB_2312-80",
	"ISO-IR-58",
	"csISO58GB231280",
	"CHINESE",
	"GB2312.1980-0", NULL,
    "ISO-IR-165",
	"CN-GB-ISOIR165", NULL,
    "KSC_5601",
	"KS_C_5601-1987",
	"KS_C_5601-1989",
	"ISO-IR-149",
	"csKSC56011987",
	"KOREAN",
	"KSC5601.1987-0",
	"KSX1001:1992", NULL,

    /* CJK encodings.  */

    "EUC-JP",
	"EUCJP",
	"Extended_UNIX_Code_Packed_Format_for_Japanese",
	"csEUCPkdFmtJapanese",
	"EUC_JP", NULL,
    "SJIS",
	"SHIFT_JIS",
	"SHIFT-JIS",
	"MS_KANJI",
	"csShiftJIS", NULL,
    "CP932", NULL,
    "ISO-2022-JP",
	"csISO2022JP",
	"ISO2022JP", NULL,
    "ISO-2022-JP-1", NULL,
    "ISO-2022-JP-2",
	"csISO2022JP2", NULL,
    "EUC-CN",
	"EUCCN",
	"GB2312",
	"CN-GB",
	"csGB2312",
	"EUC_CN", NULL,
    "GBK",
	"CP936", NULL,
    "GB18030", NULL,
    "ISO-2022-CN",
	"csISO2022CN",
	"ISO2022CN", NULL,
    "ISO-2022-CN-EXT", NULL,
    "HZ",
	"HZ-GB-2312", NULL,
    "EUC-TW",
	"EUCTW",
	"csEUCTW",
	"EUC_TW", NULL,
    "BIG5",
	"BIG-5",
	"BIG-FIVE",
	"BIGFIVE",
	"CN-BIG5",
	"csBig5", NULL,
    "CP950", NULL,
    "BIG5HKSCS", NULL,
    "EUC-KR",
	"EUCKR",
	"csEUCKR",
	"EUC_KR", NULL,
    "CP949",
	"UHC", NULL,
    "JOHAB",
	"CP1361", NULL,
    "ISO-2022-KR",
	"csISO2022KR",
	"ISO2022KR", NULL,
    "CHAR", NULL,
    "WCHAR_T", NULL,
    NULL
  };
