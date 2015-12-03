/*************************************************************************

   Copyright (C) 2015. rollrat. All Rights Reserved.

------
FILE NAME:

   hangul.c

Project:

   Displant Algorithm

------
   AUTHOR: HyunJun Jeong  2015-05-15

***************************************************************************/

#include <tchar.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>
#include "hangul.h"

/***

	main �Ǵ� �������� locale���� �Լ��� �̿��Ͽ� locale�� �����Ͻʽÿ�.

	_wsetlocale(LC_ALL, TEXT("korean"));

***/

#define TEXT(x)		L##x

static const wchar_t index_letter[] = {
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��')	
};

static const wchar_t *index_letter_2[] = {
	TEXT("r"),   TEXT("R"),  TEXT("rt"),  TEXT("s"),   TEXT("sw"),  TEXT("sg"), TEXT("e"),  TEXT("E"),
	TEXT("f"),   TEXT("fr"), TEXT("fa"),  TEXT("fq"),  TEXT("ft"),  TEXT("fe"), TEXT("fv"), TEXT("fg"),
	TEXT("a"),   TEXT("q"),  TEXT("Q"),   TEXT("qt"),  TEXT("t"),   TEXT("T"),  TEXT("d"),  TEXT("w"),
	TEXT("W"),   TEXT(""),   TEXT("z"),   TEXT("e"),   TEXT("v"),   TEXT("g"),  TEXT("k"),  TEXT("o"),
	TEXT("i"),   TEXT("O"),  TEXT("j"),   TEXT("p"),   TEXT("u"),   TEXT("P"),  TEXT("h"),  TEXT("hk"),
	TEXT("ho"),  TEXT("hl"), TEXT("y"),   TEXT("n"),   TEXT("nj"),  TEXT("np"), TEXT("nl"), TEXT("b"),
	TEXT("m"),   TEXT("ml"), TEXT("l"),   TEXT(" "),   TEXT("ss"),  TEXT("se"), TEXT("st"), TEXT(" "),
	TEXT("frt"), TEXT("fe"), TEXT("fqt"), TEXT(" "),   TEXT("fg"),  TEXT("aq"), TEXT("at"), TEXT(" "),
	TEXT(" "),   TEXT("qr"), TEXT("qe"),  TEXT("qtr"), TEXT("qte"), TEXT("qw"), TEXT("qe"), TEXT(" "),
	TEXT(" "),   TEXT("tr"), TEXT("ts"),  TEXT("te"),  TEXT("tq"),  TEXT("tw"), TEXT(" "),  TEXT("dd"),
	TEXT("d"),   TEXT("dt"), TEXT(" "),   TEXT(" "),   TEXT("gg"),  TEXT(" "),  TEXT("yi"), TEXT("yO"),
	TEXT("yl"),  TEXT("bu"), TEXT("bP"),  TEXT("bl")
};

static const wchar_t *index_letter_3[] = {
	TEXT("k"),  TEXT("kk"), TEXT("kn"), TEXT("h"),  TEXT("hl"), TEXT("hm"), TEXT("u"),  TEXT("uu"),
	TEXT("y"),  TEXT("yk"), TEXT("yi"), TEXT("y;"), TEXT("yn"), TEXT("y'"), TEXT("yp"), TEXT("ym"),
	TEXT("i"),  TEXT(";"),  TEXT(";;"), TEXT(";n"), TEXT("n"),  TEXT("nn"), TEXT("j"),  TEXT("l"),
	TEXT("ll"), TEXT("o"),  TEXT("0"),  TEXT("'"),  TEXT("p"),  TEXT("m"),  TEXT("f"),  TEXT("r"),
	TEXT("6"),  TEXT("G"),  TEXT("t"),  TEXT(""),   TEXT("e"),  TEXT("&"),  TEXT("v"),  TEXT("vf",)
	TEXT("vr"), TEXT("vd"), TEXT("4"),  TEXT("b"),  TEXT("bt"), TEXT("bc"), TEXT("bd"), TEXT("5"),
	TEXT("g"),  TEXT("8"),  TEXT("d")
};

static const wchar_t index_initial[] = {
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��')
};

static const wchar_t *index_initial_2[] = {
	TEXT("r"), TEXT("R"), TEXT("s"), TEXT("e"), TEXT("E"), TEXT("f"), TEXT("a"), TEXT("q"),
	TEXT("Q"), TEXT("t"), TEXT("T"), TEXT("d"), TEXT("w"), TEXT("W"), TEXT(""), TEXT( "z"),
	TEXT("x"), TEXT("v"), TEXT("g")
};

static const wchar_t *index_initial_3[] = {
	TEXT("k"),  TEXT("K"),  TEXT("h"),  TEXT("u"), TEXT("uu"), TEXT("y"),  TEXT("i"), TEXT(";"),
	TEXT(";;"), TEXT("n"),  TEXT("nn"), TEXT("j"), TEXT("l"),  TEXT("ll"), TEXT("o"), TEXT("0"),
	TEXT("'"),  TEXT( "p"), TEXT("m")
};

static const wchar_t index_initial_3_du[] = {
	TEXT('u'), TEXT(';'), TEXT('n'), TEXT('l')
};

static const wchar_t index_medial[] = {
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��')
};

static const wchar_t *index_medial_2[] = {
	TEXT( "k"), TEXT("o"),  TEXT( "i"), TEXT("O"),  TEXT("j"),  TEXT("p"), TEXT("u"),  TEXT( "P"),
	TEXT( "h"), TEXT("hk"), TEXT("ho"), TEXT("hl"), TEXT("y"),  TEXT("n"), TEXT("nj"), TEXT("np"),
	TEXT("nl"), TEXT("b"),  TEXT("m"),  TEXT("ml"), TEXT("l")
};

static const wchar_t *index_medial_2_du[] = {
	TEXT('k'), TEXT('o'), TEXT('l'), TEXT('j'), TEXT('p')
};

static const wchar_t *index_medial_3[] = {
	TEXT( "f"), TEXT("r"),  TEXT("6"),  TEXT("G"),  TEXT("t"), TEXT("c"), TEXT("e"), TEXT("7"),
	TEXT( "v"), TEXT("vf"), TEXT("vr"), TEXT("vd"), TEXT("4"), TEXT("b"), TEXT("bt"), TEXT("bc"),
	TEXT("bd"), TEXT("5"),  TEXT("g"),  TEXT("gd"), TEXT("d")
};

static const wchar_t index_medial_3_du[] = {
	TEXT('f'), TEXT('r'), TEXT('d'), TEXT('t'), TEXT('c')
};

static const wchar_t index_final[] = {
	TEXT('\0'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
	TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��')
};

static const wchar_t *index_final_2[] = {
	TEXT(""),  TEXT( "r"), TEXT("R"),  TEXT("rt"), TEXT("s"),  TEXT("sw"), TEXT("sg"), TEXT("e"),
	TEXT("f"), TEXT("fr"), TEXT("fa"), TEXT("fq"), TEXT("ft"), TEXT("fx"), TEXT("fv"), TEXT("fg"),
	TEXT("a"), TEXT("q"),  TEXT("qt"), TEXT("t"),  TEXT("T"),  TEXT("d"),  TEXT("w"),  TEXT(""),
	TEXT("z"), TEXT("x"),  TEXT("v"),  TEXT("g")
};

static const wchar_t index_final_2_du[] = {
	TEXT('t'), TEXT('w'), TEXT('g'), TEXT('r'), TEXT('a'), TEXT('q'), TEXT('x'), TEXT('v')
};

static const wchar_t *index_final_3[] = {
	TEXT(""),  TEXT("x"), TEXT("xx"), TEXT("xq"), TEXT("s"),  TEXT("E"), TEXT("S"), TEXT("A"),
	TEXT("w"), TEXT("@"), TEXT("F"),  TEXT("D"),  TEXT("T"),  TEXT("%"), TEXT("$"), TEXT("R"),
	TEXT("z"), TEXT("3"), TEXT("X"),  TEXT("q"),  TEXT("qq"), TEXT("a"), TEXT("#"), TEXT("Z"),
	TEXT("C"), TEXT("W"), TEXT("Q"),  TEXT("1")
};

static const wchar_t index_final_3_du[] = {
	TEXT('x'), TEXT('q')
};

static const wchar_t index_numberic[] = {
	TEXT('0'), TEXT('1'), TEXT('2'), TEXT('3'), TEXT('4'), TEXT('5'), TEXT('6'), TEXT('7'), TEXT('8'), TEXT('9')
};

static const wchar_t index_numberic_3[] = {
	TEXT('H'), TEXT('J'), TEXT('K'), TEXT('L'), TEXT(':'), TEXT('Y'), TEXT('U'), TEXT('I'), TEXT('O'), TEXT('P')
};

static const wchar_t index_symbol[] = {
	TEXT('*'), TEXT('='), TEXT('"'),  TEXT('"'),  TEXT('\''), TEXT('~'), TEXT(')'), TEXT('>'),
	TEXT(':'), TEXT('('), TEXT('<'),  TEXT(','),  TEXT('.'),  TEXT('!'), TEXT('?'), TEXT('��'),
	TEXT(';'), TEXT('+'), TEXT('\\'), TEXT('%'),  TEXT('/'),  TEXT(','), TEXT('.')
};

static const wchar_t index_symbol_3[] = {
	TEXT('`'),  TEXT('^'), TEXT('&'), TEXT('*'), TEXT('('), TEXT(')'), TEXT('-'), TEXT('='),
	TEXT('\\'), TEXT('['), TEXT(']'), TEXT(','), TEXT('.'), TEXT('?'), TEXT('B'), TEXT('~'),
	TEXT('_'),  TEXT('+'), TEXT('|'), TEXT('{'), TEXT('}'), TEXT('<'), TEXT('>')
};

#define HANGUL_UNICODE_MAGIC		0xAC00

#define TRUE	1
#define FALSE	0

#define STRUCTURE_SIZE_OF(ptr)		sizeof(ptr)/sizeof(*ptr)

wchar_t hangul_combination(HANGUL_INITIAL hInitial)
{
	return (wchar_t)(HANGUL_UNICODE_MAGIC + 
		hInitial.initial * 21 * 28 + 
		hInitial.medial * 28 + 
		hInitial.final);
}

wchar_t hangul_combination_native(int initial, int medial, int final)
{
	return (wchar_t)(HANGUL_UNICODE_MAGIC + 
		initial * 21 * 28 + 
		medial * 28 + 
		final);
}

HANGUL_INITIAL hangul_distortion(wchar_t ch)
{
	HANGUL_INITIAL ret;
	int unis = (int)(ch)-HANGUL_UNICODE_MAGIC;
	ret.initial = unis / (21 * 28);
	ret.medial = (unis % (21 * 28)) / 28;
	ret.final = (unis % (21 * 28)) % 28;
	return ret;
}

#define HANGUL_INITIAL(ch)	(((int)(ch)-HANGUL_UNICODE_MAGIC)/(21*28))
#define HANGUL_MEDIAL(ch)	((((int)(ch)-HANGUL_UNICODE_MAGIC)%(21*28))/28)
#define HANGUL_FINAL(ch)	((((int)(ch)-HANGUL_UNICODE_MAGIC)%(21*28))%28)

bool hangul_is(wchar_t ch)
{
	if ((0xac00 <= (int)ch && (int)ch <= 0xd7fb) ||
		(0x3131 <= (int)ch && (int)ch <= 0x3163) ||
		(0x1100 <= (int)ch && (int)ch <= 0x11ff))
		return TRUE;
	return FALSE;
}

bool hangul_is_letter(wchar_t ch)
{
	if (0xac00 <= (int)ch && (int)ch <= 0xd7fb)
		return TRUE;
	return FALSE;
}

bool hangul_is_jamo31(wchar_t ch)
{
	if (0x3131 <= (int)ch && (int)ch <= 0x3163)
		return TRUE;
	return FALSE;
}

bool hangul_is_jamo11(wchar_t ch)
{
	if (0x1100 <= (int)ch && (int)ch <= 0x11ff)
		return TRUE;
	return FALSE;
}

const wchar_t *hangul_disassembly(wchar_t ch)
{
	if(hangul_is_letter(ch)) {
		wchar_t buf[10];
		HANGUL_INITIAL hInitial = hangul_distortion(ch);
		swprintf(buf, 10, TEXT("%s%s%s"), index_initial_2[hInitial.initial],
			index_medial_2[hInitial.medial],
			index_final_2[hInitial.final]);
		return buf;
	} else if (hangul_is_jamo31(ch)) {
		return index_letter_2[ch - 0x3131];
	} else if (hangul_is_jamo11(ch)) {
		return index_letter_2[ch - 0x1100];
	}
	return 0;
}

const wchar_t *hangul_disassembly3(wchar_t ch)
{
	int num_sym, i;
	if(hangul_is_letter(ch)) {
		wchar_t buf[10];
		HANGUL_INITIAL hInitial = hangul_distortion(ch);
		swprintf(buf, 10, TEXT("%s%s%s"), index_initial_3[hInitial.initial],
			index_medial_3[hInitial.medial],
			index_final_3[hInitial.final]);
		return buf;
	} else if (hangul_is_jamo31(ch)) {
		return index_letter_3[ch - 0x3131];
	} else if (hangul_is_jamo11(ch)) {
		return index_letter_3[ch - 0x1100];
	} else {
		num_sym = -1;
		for(i = 0; i < STRUCTURE_SIZE_OF(index_numberic); i++)
			if(index_numberic[i] == ch) {
				num_sym = i;
				break;
			}
		if (num_sym >= 0)
			return index_numberic_3[num_sym];
		for(i = 0; i < STRUCTURE_SIZE_OF(index_symbol); i++)
			if(index_symbol[i] == ch) {
				num_sym = i;
				break;
			}
		if (num_sym >= 0)
			return index_symbol_3[num_sym];
	}
	return 0;
}

void hangul_total_disassembly(const wchar_t *what, wchar_t *buffer)
{
	int len, index = 0, j;
	const wchar_t *ptr;
	for (; *what; what++) {
		ptr = hangul_disassembly(*what);
		if (ptr) {
			len = wcslen(ptr);
			for(j = 0; j < len; j++) {
				*(buffer + index++) = ptr[j];
			}
		} else {
			buffer[index++] = *what;
		}
	}
	buffer[index] = 0;
}

void hangul_total_disassembly3(const wchar_t *what, wchar_t *buffer)
{
	int len, index = 0, j;
	const wchar_t *ptr;
	for (; *what; what++) {
		ptr = hangul_disassembly3(*what);
		if (ptr) {
			len = wcslen(ptr);
			for(j = 0; j < len; j++) {
				*(buffer + index++) = ptr[j];
			}
		} else {
			buffer[index++] = *what;
		}
	}
	buffer[index] = 0;
}

static int find_if_exist_ch(const wchar_t array[], int size, const wchar_t item)
{
	int i = 0;
	for (; i < size; i++)
		if (array[i] == item)
			return i;
	return -1;
}

static int find_if_exist_ch_only_1(const wchar_t *array[], int size, const wchar_t item)
{
	int i = 0;
	for (; i < size; i++)
		if ((array[i])[0] == item)
			return i;
	return -1;
}

static int find_if_exist_str(const wchar_t *array[], int size, const wchar_t *item)
{
	int i = 0;
	for (; i < size; i++)
		if (!wcscmp(array[i], item))
			return i;
	return -1;
}

static void buffer_put(wchar_t *buffer, int *index, const wchar_t *what)
{
	int i, len = wcslen(what);
	for (i = 0; i < len; i++)
		buffer[i + *index] = what[i];
	*index += len;
}

static void buffer_put_ch(wchar_t *buffer, int *index, const wchar_t what)
{
	buffer[(*index)++] = what;
}

/***
	�ι��� Ű������ �ѱ�-�����ǥ�⸦ �ѱ۷� �ٲߴϴ�.
	(��/��Ű�� ����ä�� �ѱ��� ĥ ��� �����ڰ� ��� �ԷµǹǷ� �װ���
	��/��Ű�� ���� ������ �������� ��ȯ�ϴ� ������ �����մϴ�.)
***/
void hangul_assembly(const wchar_t string[], wchar_t *buffer)
{
	int i;
	int index = 0, len = wcslen(string), len_m;
	int initial, medial, final, save;
	wchar_t index_du_buf[3];
	bool stop_force;

	len_m = len - 1;	// '\0'�� offset

	for(i = 0; i < len; i++) {
		initial = -1;	// -1�� �⺻������ � ����� �������� ����
		medial = -1;
		final = -1;

		initial = find_if_exist_ch_only_1(index_initial_2, 
								STRUCTURE_SIZE_OF(index_initial_2), 
								string[i]);
		if (initial < 0) {
			medial = find_if_exist_ch_only_1(index_medial_2,
								STRUCTURE_SIZE_OF(index_medial_2), 
								string[i]);
			if (medial < 0) // �߼��� �����ϴ� ����('��'�� ù�Ҹ��� ����մϴ�.)
				buffer_put_ch(buffer, &index, string[i]);
			else
				buffer_put_ch(buffer, &index, index_medial[medial]);
			continue;
		}
		if (i == len_m) {
			buffer_put_ch(buffer, &index, index_initial[initial]);
			break;
		}
		i++;

		medial = find_if_exist_ch_only_1(index_medial_2, 
								STRUCTURE_SIZE_OF(index_medial_2), 
								string[i]);
		if (medial < 0) {
			buffer_put_ch(buffer, &index, buffer[i]);
			continue;
		} else if (i == len_m) {
			buffer_put_ch(buffer, &index, hangul_combination_native(initial, medial, 0));
			break;
		} else if (!(find_if_exist_ch(index_medial_2_du, 
								STRUCTURE_SIZE_OF(index_medial_2_du),
								string[i+1]) < 0)) {
			index_du_buf[0] = string[i];
			index_du_buf[1] = string[i + 1];
			index_du_buf[2] = 0;
			save = find_if_exist_str(index_medial_2, 
								STRUCTURE_SIZE_OF(index_medial_2), 
								index_du_buf);
			if (save >= 0) {
				i += 1;
				medial = save;
			}
		}
		if(i == len_m) {
			buffer_put_ch(buffer, &index, hangul_combination_native(initial, medial, 0));
			break;
		}
		i += 1;

	    /*
		* �ٴ�������, �ٴٴ������ڰ� �߼��ΰ�?
		*/
		stop_force = FALSE;
		if (len_m >= i + 1) {
			if (!(find_if_exist_ch_only_1(index_medial_2,
								STRUCTURE_SIZE_OF(index_medial_2), 
								string[i+1]) < 0)) {
				i -= 1;
				buffer_put_ch(buffer, &index, hangul_combination_native(initial, medial, 0));
				continue;
			} else if (len_m >= i + 2) {
				// �ٴٴ������ڰ� �߼��̹Ƿ� ������ ���ħ�� ��찡 ����� �Ѵ�.
				if (!(find_if_exist_ch_only_1(index_medial_2,
									STRUCTURE_SIZE_OF(index_medial_2), 
									string[i+2]) < 0)) {
					stop_force = TRUE;
				}
			}
		}

		
		final = find_if_exist_ch_only_1(index_final_2, 
								STRUCTURE_SIZE_OF(index_final_2), 
								string[i]);
		if (final < 0) {
			buffer_put_ch(buffer, &index, hangul_combination_native(initial, medial, 0));
			i -= 1;
			continue;
		} else if (len_m >= i + 1 && !stop_force) {
			if (!(find_if_exist_ch(index_final_2_du, 
								STRUCTURE_SIZE_OF(index_final_2_du),
								string[i+1]) < 0)) {
				index_du_buf[0] = string[i];
				index_du_buf[1] = string[i + 1];
				index_du_buf[2] = 0;
				save = find_if_exist_str(index_final_2, 
									STRUCTURE_SIZE_OF(index_final_2), 
									index_du_buf);
				if (save >= 0) {
					i += 1;
					final = save;
				}
			}
		}
		buffer_put_ch(buffer, &index, hangul_combination_native(initial, medial, final));
	}
	buffer[index] = 0;
}

/***
	������ 360 Ű������ �ѱ�-�����ǥ�⸦ �ѱ۷� �ٲߴϴ�.
	(��/��Ű�� ����ä�� �ѱ��� ĥ ��� �����ڰ� ��� �ԷµǹǷ� �װ���
	��/��Ű�� ���� ������ �������� ��ȯ�ϴ� ������ �����մϴ�.)
***/
void hangul_assembly3(const wchar_t string[], wchar_t *buffer)
{
	int i;
	int index = 0, len = wcslen(string), len_m;
	int initial, medial, final, save, num_sym;
	wchar_t index_du_buf[3];
	bool stop_force;

	len_m = len - 1;

	for(i = 0; i < len; i++) {
		initial = -1;
		medial = -1;
		final = -1;

		initial = find_if_exist_ch_only_1(index_initial_3, 
								STRUCTURE_SIZE_OF(index_initial_3), 
								string[i]);
		if (initial < 0) {
			medial = find_if_exist_ch_only_1(index_medial_3,
								STRUCTURE_SIZE_OF(index_medial_3), 
								string[i]);
			if (medial < 0) {

				num_sym = find_if_exist_ch(index_numberic_3,
								STRUCTURE_SIZE_OF(index_numberic_3), 
								string[i]);
				if (num_sym >= 0) {	// ��ȣ�� ǥ�õ� ������ ���
					buffer_put_ch(buffer, &index, index_numberic[num_sym]);
				} else {
					num_sym = find_if_exist_ch(index_symbol_3,
									STRUCTURE_SIZE_OF(index_symbol_3), 
									string[i]);
					if (num_sym >= 0) {
						buffer_put_ch(buffer, &index, index_symbol[num_sym]);
					} else {
						buffer_put_ch(buffer, &index, string[i]);
					}
				}
			}
			else
				buffer_put_ch(buffer, &index, index_medial[medial]);
			continue;
		}
		if (i == len_m) {
			buffer_put_ch(buffer, &index, index_initial[initial]);
			break;
		} else {
			if (!(find_if_exist_ch(index_initial_3_du, 
								STRUCTURE_SIZE_OF(index_initial_3_du),
								string[i+1]) < 0)) {
				index_du_buf[0] = string[i];
				index_du_buf[1] = string[i + 1];
				index_du_buf[2] = 0;
				save = find_if_exist_str(index_initial_3, 
									STRUCTURE_SIZE_OF(index_initial_3), 
									index_du_buf);
				if (save >= 0) {
					i += 1;
					initial = save;
				}
			}
		}
		i++;

		medial = find_if_exist_ch_only_1(index_medial_3, 
								STRUCTURE_SIZE_OF(index_medial_3), 
								string[i]);
		if (medial < 0) {
			buffer_put_ch(buffer, &index, buffer[i]);
			continue;
		} else if (i == len_m) {
			buffer_put_ch(buffer, &index, hangul_combination_native(initial, medial, 0));
			break;
		} else if (!(find_if_exist_ch(index_medial_3_du, 
								STRUCTURE_SIZE_OF(index_medial_3_du),
								string[i+1]) < 0)) {
			index_du_buf[0] = string[i];
			index_du_buf[1] = string[i + 1];
			index_du_buf[2] = 0;
			save = find_if_exist_str(index_medial_3, 
								STRUCTURE_SIZE_OF(index_medial_3), 
								index_du_buf);
			if (save >= 0) {
				i += 1;
				medial = save;
			}
		}
		if(i == len_m) {
			buffer_put_ch(buffer, &index, hangul_combination_native(initial, medial, 0));
			break;
		}
		i += 1;

		stop_force = FALSE;
		if (len_m >= i + 1) {
			if (!(find_if_exist_ch_only_1(index_medial_3,
								STRUCTURE_SIZE_OF(index_medial_3), 
								string[i+1]) < 0)) {
				i -= 1;
				buffer_put_ch(buffer, &index, hangul_combination_native(initial, medial, 0));
				continue;
			} else if (len_m >= i + 2) {
				if (!(find_if_exist_ch_only_1(index_medial_3,
									STRUCTURE_SIZE_OF(index_medial_3), 
									string[i+2]) < 0)) {
					stop_force = TRUE;
				}
			}
		}

		
		final = find_if_exist_ch_only_1(index_final_3, 
								STRUCTURE_SIZE_OF(index_final_3), 
								string[i]);
		if (final < 0) {
			buffer_put_ch(buffer, &index, hangul_combination_native(initial, medial, 0));
			i -= 1;
			continue;
		} else if (len_m >= i + 1 && !stop_force) {
			if (!(find_if_exist_ch(index_final_3_du, 
								STRUCTURE_SIZE_OF(index_final_3_du),
								string[i+1]) < 0)) {
				index_du_buf[0] = string[i];
				index_du_buf[1] = string[i + 1];
				index_du_buf[2] = 0;
				save = find_if_exist_str(index_final_3, 
									STRUCTURE_SIZE_OF(index_final_3), 
									index_du_buf);
				if (save >= 0) {
					i += 1;
					final = save;
				}
			}
		}
		buffer_put_ch(buffer, &index, hangul_combination_native(initial, medial, final));
	}
	buffer[index] = 0;
}

/***
	������ �ʼ����� ����մϴ�.
***/
void hangul_initial(const wchar_t string[], wchar_t *buffer)
{
	int len = wcslen(string), i;

	for (i = 0; i < len; i++)
		i[buffer] = hangul_is_letter(string[i]) ? index_initial[HANGUL_INITIAL(string[i])] : string[i];

	buffer[i] = 0;
}

/***
	������ �պκк��� ���Ͽ� ��ġ�ϴ� �κб����� ���̸� ��ȯ�մϴ�.
	(�� �Լ��� �ʼ��˻��� ����ȭ�Ǿ������� �ʼ��˻縦 ���Ұ�� string1�� �ʼ�������
	�����ñ� �ٶ��ϴ�.)
***/
int hangul_startswith_compare(const wchar_t string1[], const wchar_t string2[])
{
	wchar_t *p1 = string1;
	wchar_t *p2 = string2;

	while(*p1 && *p2) {
		
		if (hangul_is_letter(*p1))
			if (*p2 == index_initial[HANGUL_INITIAL(*p1)])
				goto next;

		if (!(*p1 - *p2))
			goto next;

		if (hangul_is_letter(*p2))
			if (*p1 == index_initial[HANGUL_INITIAL(*p2)])
				goto next;

		break;
	next:
		p1++;
		p2++;
	}

	return p1 - string1;
}


//*----------------------------------------------
//
//	��� �м� �˰��� (������ �߽�)
//
//*----------------------------------------------

/***
	������ ���Ҹ��� target���� ��ü�մϴ�.
***/
wchar_t hangul_add_to_final(const wchar_t ch, const wchar_t target)
{
	HANGUL_INITIAL hi = hangul_distortion(ch);

	if (!hangul_is_jamo31(target))
		return 0;

	hi.final = index_letter[target - 0x3131];

	return hangul_combination(hi);
}

/***
	������ ���Ҹ��� �����ϴ��� Ȯ���մϴ�.
***/
bool hangul_is_final(const wchar_t ch)
{
	if (HANGUL_FINAL(ch))
		return TRUE;

	return FALSE;
}

/***
	����ȭ
***/
wchar_t hangul_expression_nasalization(const wchar_t ch1, const wchar_t ch2)
{
	const wchar_t is_in[3] = { TEXT('��'), TEXT('��'), TEXT('��') };
	const wchar_t af_in[3] = { TEXT('��'), TEXT('��'), TEXT('��') };
	const wchar_t is_in1[2] = { TEXT('��'), TEXT('��') };

	int is_success = find_if_exist_ch(is_in, STRUCTURE_SIZE_OF(is_in), index_final[HANGUL_FINAL(ch1)]);
	int is_complete = find_if_exist_ch(af_in, STRUCTURE_SIZE_OF(af_in), index_initial[HANGUL_INITIAL(ch2)]);

	HANGUL_INITIAL	hi;

	if (is_success < 0 || is_complete < 0)
		return 0;

	hi = hangul_distortion(ch1);
	hi.final = find_if_exist_ch(index_final, STRUCTURE_SIZE_OF(index_final), af_in[is_success]);

	return hangul_combination(hi);
}

/***
	����ȭ
***/
bool hangul_expression_liquidization(wchar_t *ch1, wchar_t *ch2)	// ������ Ʋ�� �ܾ� ������ �ƴ�
{
	wchar_t split1 = HANGUL_FINAL(*ch1);
	wchar_t split2 = HANGUL_INITIAL(*ch2);
	
	HANGUL_INITIAL	hi;

	if (index_final[split1] == TEXT('��') && index_initial[split2] == TEXT('��')) {
		hi = hangul_distortion(*ch1);
		hi.final = find_if_exist_ch(index_final, STRUCTURE_SIZE_OF(index_final), TEXT('��'));
		*ch1 = hangul_combination(hi);
	} else if (index_final[split1] == TEXT('��') && index_initial[split2] == TEXT('��')) {
		hi = hangul_distortion(*ch2);
		hi.initial = find_if_exist_ch(index_initial, STRUCTURE_SIZE_OF(index_initial), TEXT('��'));
		*ch2 = hangul_combination(hi);
	} else {
		return FALSE;
	}

	return TRUE;
}

/***
	������ȭ
***/
bool hangul_expression_palatalization(wchar_t *ch1, wchar_t *ch2)
{
	wchar_t split1 = HANGUL_FINAL(*ch1);
	wchar_t split2 = HANGUL_MEDIAL(*ch2);
	wchar_t split3 = HANGUL_INITIAL(*ch2);

	HANGUL_INITIAL	hi;

	if (index_medial[split2] == TEXT('��') && index_initial[split3] == TEXT('��')) {
		if (index_final[split1] == TEXT('��')) {

			hi = hangul_distortion(*ch1);
			hi.final = 0;
			*ch1 = hangul_combination(hi);

			hi = hangul_distortion(*ch2);
			hi.initial = find_if_exist_ch(index_initial, STRUCTURE_SIZE_OF(index_initial), TEXT('��'));
			*ch2 = hangul_combination(hi);

			return TRUE;
		} else if (index_final[split1] == TEXT('��')) {

			hi = hangul_distortion(*ch1);
			hi.final = 0;
			*ch1 = hangul_combination(hi);

			hi = hangul_distortion(*ch2);
			hi.initial = find_if_exist_ch(index_initial, STRUCTURE_SIZE_OF(index_initial), TEXT('��'));
			*ch2 = hangul_combination(hi);

			return TRUE;
		}
	}

	return FALSE;
}

/***
	������ ���Ҹ� ��Ģ
***/
bool hangul_expression_syllable_of_jongseong_rules(wchar_t *str)
{
	HANGUL_INITIAL	hi;
	const wchar_t af_in[] = {
		/* ������ �ܼ�ȭ�� ���⼭ �������� ����. */
		TEXT('\0'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
		TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
		TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
		TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��')
	};

	for (; *str; str++) {
		if (hangul_is_letter(*str)) {
			hi = hangul_distortion(*str);
			hi.final = find_if_exist_ch(index_final, STRUCTURE_SIZE_OF(index_final), af_in[hi.final]);
			*str = hangul_combination(hi);
		}
	}

	return TRUE;
}