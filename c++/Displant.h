/***

   RollRat Software Project.
   Copyright (C) 2015. rollrat. All Rights Reserved.

File name:
   
   Displant.h

Purpose:

	RollRat Library

Author:

   10-10-2015:   HyunJun Jeong, Creation

***/

#ifndef _DISPLANT_9bf1541fdf7efd41b7b39543fd870ac4_
#define _DISPLANT_9bf1541fdf7efd41b7b39543fd870ac4_

#include "WString.h"
#include "PreHelper.h"

// �ϼ����� ���� ���ڸ� �����մϴ�.
#define _DISPLANT_SAFE_EXECUATIVE

namespace Utility {

	// ������
	/*const wchar_t index_letter[];
	  const wchar_t *index_letter_2[];
	  const wchar_t *index_letter_3[];
	  const wchar_t index_initial[];
	  const wchar_t *index_initial_2[];
	  const wchar_t *index_initial_3[];
	  const wchar_t index_initial_3_du[];
	  const wchar_t index_medial[];
	  const wchar_t *index_medial_2[];
	  const wchar_t index_medial_2_du[];
	  const wchar_t *index_medial_3[];
	  const wchar_t index_medial_3_du[];
	  const wchar_t index_final[];
	  const wchar_t *index_final_2[];
	  const wchar_t index_final_2_du[];
	  const wchar_t *index_final_3[];
	  const wchar_t index_final_3_du[];
	  const wchar_t index_numberic[];
	  const wchar_t index_numberic_3[];
	  const wchar_t index_symbol[];
	  const wchar_t index_symbol_3[];  */

	const wchar_t index_letter[] = {
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
	
	const wchar_t *index_letter_2[] = {
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
	
	const wchar_t *index_letter_3[] = {
		TEXT("k"),  TEXT("kk"), TEXT("kn"), TEXT("h"),  TEXT("hl"), TEXT("hm"), TEXT("u"),  TEXT("uu"),
		TEXT("y"),  TEXT("yk"), TEXT("yi"), TEXT("y;"), TEXT("yn"), TEXT("y'"), TEXT("yp"), TEXT("ym"),
		TEXT("i"),  TEXT(";"),  TEXT(";;"), TEXT(";n"), TEXT("n"),  TEXT("nn"), TEXT("j"),  TEXT("l"),
		TEXT("ll"), TEXT("o"),  TEXT("0"),  TEXT("'"),  TEXT("p"),  TEXT("m"),  TEXT("f"),  TEXT("r"),
		TEXT("6"),  TEXT("G"),  TEXT("t"),  TEXT(""),   TEXT("e"),  TEXT("&"),  TEXT("v"),  TEXT("vf",)
		TEXT("vr"), TEXT("vd"), TEXT("4"),  TEXT("b"),  TEXT("bt"), TEXT("bc"), TEXT("bd"), TEXT("5"),
		TEXT("g"),  TEXT("8"),  TEXT("d")
	};
	
	const wchar_t index_initial[] = {
		TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
		TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
		TEXT('��'), TEXT('��'), TEXT('��')
	};
	
	const wchar_t *index_initial_2[] = {
		TEXT("r"), TEXT("R"), TEXT("s"), TEXT("e"), TEXT("E"), TEXT("f"), TEXT("a"), TEXT("q"),
		TEXT("Q"), TEXT("t"), TEXT("T"), TEXT("d"), TEXT("w"), TEXT("W"), TEXT(""), TEXT( "z"),
		TEXT("x"), TEXT("v"), TEXT("g")
	};
	
	const wchar_t *index_initial_3[] = {
		TEXT("k"),  TEXT("K"),  TEXT("h"),  TEXT("u"), TEXT("uu"), TEXT("y"),  TEXT("i"), TEXT(";"),
		TEXT(";;"), TEXT("n"),  TEXT("nn"), TEXT("j"), TEXT("l"),  TEXT("ll"), TEXT("o"), TEXT("0"),
		TEXT("'"),  TEXT( "p"), TEXT("m")
	};
	
	const wchar_t index_initial_3_du[] = {
		TEXT('u'), TEXT(';'), TEXT('n'), TEXT('l')
	};
	
	const wchar_t index_medial[] = {
		TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
		TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
		TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��')
	};
	
	const wchar_t *index_medial_2[] = {
		TEXT( "k"), TEXT("o"),  TEXT( "i"), TEXT("O"),  TEXT("j"),  TEXT("p"), TEXT("u"),  TEXT( "P"),
		TEXT( "h"), TEXT("hk"), TEXT("ho"), TEXT("hl"), TEXT("y"),  TEXT("n"), TEXT("nj"), TEXT("np"),
		TEXT("nl"), TEXT("b"),  TEXT("m"),  TEXT("ml"), TEXT("l")
	};
	
	const wchar_t index_medial_2_du[] = {
		TEXT('k'), TEXT('o'), TEXT('l'), TEXT('j'), TEXT('p')
	};
	
	const wchar_t *index_medial_3[] = {
		TEXT( "f"), TEXT("r"),  TEXT("6"),  TEXT("G"),  TEXT("t"), TEXT("c"), TEXT("e"), TEXT("7"),
		TEXT( "v"), TEXT("vf"), TEXT("vr"), TEXT("vd"), TEXT("4"), TEXT("b"), TEXT("bt"), TEXT("bc"),
		TEXT("bd"), TEXT("5"),  TEXT("g"),  TEXT("gd"), TEXT("d")
	};
	
	const wchar_t index_medial_3_du[] = {
		TEXT('f'), TEXT('r'), TEXT('d'), TEXT('t'), TEXT('c')
	};
	
	const wchar_t index_final[] = {
		TEXT('\0'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
		TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
		TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
		TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��')
	};
	
	const wchar_t *index_final_2[] = {
		TEXT(""),  TEXT( "r"), TEXT("R"),  TEXT("rt"), TEXT("s"),  TEXT("sw"), TEXT("sg"), TEXT("e"),
		TEXT("f"), TEXT("fr"), TEXT("fa"), TEXT("fq"), TEXT("ft"), TEXT("fx"), TEXT("fv"), TEXT("fg"),
		TEXT("a"), TEXT("q"),  TEXT("qt"), TEXT("t"),  TEXT("T"),  TEXT("d"),  TEXT("w"),  TEXT(""),
		TEXT("z"), TEXT("x"),  TEXT("v"),  TEXT("g")
	};
	
	const wchar_t index_final_2_du[] = {
		TEXT('t'), TEXT('w'), TEXT('g'), TEXT('r'), TEXT('a'), TEXT('q'), TEXT('x'), TEXT('v')
	};
	
	const wchar_t *index_final_3[] = {
		TEXT(""),  TEXT("x"), TEXT("xx"), TEXT("xq"), TEXT("s"),  TEXT("E"), TEXT("S"), TEXT("A"),
		TEXT("w"), TEXT("@"), TEXT("F"),  TEXT("D"),  TEXT("T"),  TEXT("%"), TEXT("$"), TEXT("R"),
		TEXT("z"), TEXT("3"), TEXT("X"),  TEXT("q"),  TEXT("qq"), TEXT("a"), TEXT("#"), TEXT("Z"),
		TEXT("C"), TEXT("W"), TEXT("Q"),  TEXT("1")
	};
	
	const wchar_t index_final_3_du[] = {
		TEXT('x'), TEXT('q')
	};
	
	const wchar_t index_numberic[] = {
		TEXT('0'), TEXT('1'), TEXT('2'), TEXT('3'), TEXT('4'), TEXT('5'), TEXT('6'), TEXT('7'), TEXT('8'), TEXT('9')
	};
	
	const wchar_t index_numberic_3[] = {
		TEXT('H'), TEXT('J'), TEXT('K'), TEXT('L'), TEXT(':'), TEXT('Y'), TEXT('U'), TEXT('I'), TEXT('O'), TEXT('P')
	};
	
	const wchar_t index_symbol[] = {
		TEXT('*'), TEXT('='), TEXT('"'),  TEXT('"'),  TEXT('\''), TEXT('~'), TEXT(')'), TEXT('>'),
		TEXT(':'), TEXT('('), TEXT('<'),  TEXT(','),  TEXT('.'),  TEXT('!'), TEXT('?'), TEXT('��'),
		TEXT(';'), TEXT('+'), TEXT('\\'), TEXT('%'),  TEXT('/'),  TEXT(','), TEXT('.')
	};
	
	const wchar_t index_symbol_3[] = {
		TEXT('`'),  TEXT('^'), TEXT('&'), TEXT('*'), TEXT('('), TEXT(')'), TEXT('-'), TEXT('='),
		TEXT('\\'), TEXT('['), TEXT(']'), TEXT(','), TEXT('.'), TEXT('?'), TEXT('B'), TEXT('~'),
		TEXT('_'),  TEXT('+'), TEXT('|'), TEXT('{'), TEXT('}'), TEXT('<'), TEXT('>')
	};

	//
	//	�ι���, ���������� ������ ������, �ѱ��� ���� �ݴ�� �ٲٴ� ������ �����ϴ�
	//	�Լ����� ���մϴ�.
	//
	static class HangulConverter
	{
		static const wchar_t magic = 0xAC00;

		class __HangulJamo
		{
		public:
			wchar_t initial;
			wchar_t medial;
			wchar_t final;
		};
		
#        define HANGUL_INITIAL(ch)	(((wchar_t)(ch)-magic)/(21*28))
#        define HANGUL_MEDIAL(ch)	((((wchar_t)(ch)-magic)%(21*28))/28)
#        define HANGUL_FINAL(ch)	((((wchar_t)(ch)-magic)%(21*28))%28)

	public:

		static WString EngToHan(const WString& eng)
		{
			wchar_t *buf = new wchar_t[eng.Length()];
			assembly(eng.Reference(), buf);

			return WString(buf, wcslen(buf));
		}

		static WString EngToHan3(const WString& eng)
		{
			wchar_t *buf = new wchar_t[eng.Length()];
			assembly3(eng.Reference(), buf);

			return WString(buf, wcslen(buf));
		}

		static WString HanToEng(const WString& han)
		{
			// 4�� �Ҵ�
			wchar_t *buf = new wchar_t[han.Length() << 2];
			total_disassembly(han.Reference(), buf);

			return WString(buf, wcslen(buf));
		}

		static WString HanToEng3(const WString& han)
		{
			// 3�� �Ҵ�
			wchar_t *buf = new wchar_t[(han.Length() << 1) + han.Length()];
			total_disassembly3(han.Reference(), buf);

			return WString(buf, wcslen(buf));
		}

	private:

		static wchar_t combination(__HangulJamo jamo)
		{
			return (wchar_t)(magic + 
				jamo.initial * 21 * 28 + 
				jamo.medial * 28 + 
				jamo.final);
		}

		static wchar_t combination(const wchar_t initial, 
			const wchar_t medial, const wchar_t final)
		{
			return (wchar_t)(magic + 
				initial * 21 * 28 + 
				medial * 28 + 
				final);
		}

		static __HangulJamo distortion(const wchar_t ch)
		{
			__HangulJamo ret;
			wchar_t unis = (wchar_t)(ch)-magic;
			ret.initial = unis / (21 * 28);
			ret.medial = (unis % (21 * 28)) / 28;
			ret.final = (unis % (21 * 28)) % 28;
			return ret;
		}

		static bool check(const wchar_t ch)
		{
#ifdef _DISPLANT_SAFE_EXECUATIVE
			if ((wchar_t)0xac00 <= ch && ch <= (wchar_t)0xd7fb)
#else
			if (((wchar_t)0xac00 <= ch && ch <= (wchar_t)0xd7fb) ||
				((wchar_t)0x3131 <= ch && ch <= (wchar_t)0x3163) ||
				((wchar_t)0x1100 <= ch && ch <= (wchar_t)0x11ff))
#endif
				return true;
			return false;
		}

		// ������
		static bool check3(const wchar_t ch)
		{
#ifdef _DISPLANT_SAFE_EXECUATIVE
			if (((wchar_t)0xac00 <= ch && ch <= (wchar_t)0xd7fb) ||
#else
			if (((wchar_t)0xac00 <= ch && ch <= (wchar_t)0xd7fb) ||
				((wchar_t)0x3131 <= ch && ch <= (wchar_t)0x3163) ||
				((wchar_t)0x1100 <= ch && ch <= (wchar_t)0x11ff) ||
#endif
				iswdigit(ch) || wcschr(L"*=\"'~)>:(<,.!?��;+\\%/", ch))
				return true;
			return false;
		}

		static bool check_letter(const wchar_t  ch)
		{
			if ((wchar_t)0xac00 <= ch && ch <= (wchar_t)0xd7fb)
				return true;
			return false;
		}

		static bool check_jamo31(const wchar_t  ch)
		{
			if ((wchar_t)0x3131 <= ch && ch <= (wchar_t)0x3163)
				return true;
			return false;
		}

		static bool check_jamo11(const wchar_t  ch)
		{
			if ((wchar_t)0x1100 <= ch && ch <= (wchar_t)0x11ff)
				return true;
			return false;
		}

		//
		//
		//		Disassembly Algorithm Parts
		//
		//

		static size_t shortlen(const wchar_t *ws)
		{
			const wchar_t *ptr = ws;
			while ( *ptr++ )
				;
			return ptr - ws + 1;
		}

		static const wchar_t *disassembly(wchar_t ch)
		{
			if(check_letter(ch)) 
			{
				wchar_t buf[10];
				__HangulJamo jamo = distortion(ch);

				swprintf(buf, 10, L"%s%s%s", index_initial_2[jamo.initial],
					index_medial_2[jamo.medial],
					index_final_2[jamo.final]);

				return buf;
			} 
			else if (check_jamo31(ch)) 
			{
				return index_letter_2[ch - 0x3131];
			} 
			else if (check_jamo11(ch)) 
			{
				return index_letter_2[ch - 0x1100];
			}
			return 0;
		}
		
		static const wchar_t *disassembly3(wchar_t ch)
		{
			int num_sym, i;
			if(check(ch)) 
			{
				wchar_t buf[10];
				__HangulJamo jamo = distortion(ch);
				
				swprintf(buf, 10, L"%s%s%s", index_initial_3[jamo.initial],
					index_medial_3[jamo.medial],
					index_final_3[jamo.final]);

				return buf;
			} 
			else if (check_jamo31(ch)) 
			{
				return index_letter_3[ch - 0x3131];
			} 
			else if (check_jamo11(ch)) 
			{
				return index_letter_3[ch - 0x1100];
			} 
			else 
			{
				wchar_t buf[2];

				num_sym = -1;

				for(i = 0; i < STRUCTURE_SIZE_OF(index_numberic); i++)
				{
					if(index_numberic[i] == ch) 
					{
						num_sym = i;
						break;
					}
				}

				if (num_sym >= 0)
				{
					buf[0] = index_numberic_3[num_sym];
				}
				else
				{
					for(i = 0; i < STRUCTURE_SIZE_OF(index_symbol); i++)
					{
						if(index_symbol[i] == ch) 
						{
							num_sym = i;
							break;
						}
					}
				}

				if (num_sym >= 0)
				{
					buf[0] = index_symbol_3[num_sym];
				}
				else
				{
					buf[0] = ch;
				}

				buf[1] = 0;
				return buf;
			}
			return 0;
		}

		static void total_disassembly(const wchar_t *what, wchar_t *buffer)
		{
			size_t len, index = 0, j;
			const wchar_t *ptr;
			for (; *what; what++) 
			{
				ptr = disassembly(*what);
				if (ptr) 
				{
					len = wcslen(ptr);
					for(j = 0; j < len; j++) 
					{
						*(buffer + index++) = ptr[j];
					}
				} 
				else 
				{
					buffer[index++] = *what;
				}
			}
			buffer[index] = 0;
		}
		
		static void total_disassembly3(const wchar_t *what, wchar_t *buffer)
		{
			size_t len, index = 0, j;
			const wchar_t *ptr;
			for (; *what; what++) 
			{
				ptr = disassembly3(*what);
				if (ptr) 
				{
					len = wcslen(ptr);
					for(j = 0; j < len; j++) 
					{
						*(buffer + index++) = ptr[j];
					}
				} 
				else 
				{
					buffer[index++] = *what;
				}
			}
			buffer[index] = 0;
		}

		

		//
		//
		//		Assembly Algorithm Parts
		//
		//

		// Find If
		static int find_if_exist_ch(const wchar_t array[], size_t size, const wchar_t item)
		{
			size_t i = 0;
			for (; i < size; i++)
				if (array[i] == item)
					return i;
			return -1;
		}
		static int find_if_exist_ch_only_1(const wchar_t *array[], size_t size, const wchar_t item)
		{
			size_t i = 0;
			for (; i < size; i++)
				if ((array[i])[0] == item)
					return i;
			return -1;
		}
		static int find_if_exist_str(const wchar_t *array[], size_t size, const wchar_t *item)
		{
			size_t i = 0;
			for (; i < size; i++)
				if (!wcscmp(array[i], item))
					return i;
			return -1;
		}
		static void buffer_put(wchar_t *buffer, size_t *index, const wchar_t *what)
		{
			size_t i, len = wcslen(what);
			for (i = 0; i < len; i++)
				buffer[i + *index] = what[i];
			*index += len;
		}
		static void buffer_put_ch(wchar_t *buffer, size_t *index, const wchar_t what)
		{
			buffer[(*index)++] = what;
		}

		static void assembly(const wchar_t string[], wchar_t *buffer)
		{
			size_t    index = 0;
			size_t    len = wcslen(string);
			size_t    len_m;
			int       initial, medial, final, save;
			wchar_t   index_du_buf[3];
			bool      stop_force;

			len_m = len - 1;	// '\0'�� offset

			for(size_t i = 0; i < len; i++) 
			{
				initial = -1;	// -1�� �⺻������ � ����� �������� ����
				medial = -1;
				final = -1;

				initial = find_if_exist_ch_only_1(index_initial_2, 
										STRUCTURE_SIZE_OF(index_initial_2), 
										string[i]);
				if (initial < 0)
				{
					// �ʼ��� ���� ���
#ifdef _DISPLANT_SAFE_EXECUATIVE
					buffer_put_ch(buffer, &index, string[i]);
					continue;
#endif

					medial = find_if_exist_ch_only_1(index_medial_2,
										STRUCTURE_SIZE_OF(index_medial_2), 
										string[i]);

					if (medial < 0) // �߼��� �����ϴ� ����('��'�� ù�Ҹ��� ����մϴ�.)
					{
						buffer_put_ch(buffer, &index, string[i]);
					}
					else
					{
						buffer_put_ch(buffer, &index, index_medial[medial]);
					}

					continue;
				}
				if (i == len_m) 
				{
					buffer_put_ch(buffer, &index, index_initial[initial]);
					break;
				}
				i++;

				medial = find_if_exist_ch_only_1(index_medial_2, 
										STRUCTURE_SIZE_OF(index_medial_2), 
										string[i]);
				if (medial < 0)
				{
					buffer_put_ch(buffer, &index, buffer[i]);
					continue;
				} 
				else if (i == len_m) 
				{
					buffer_put_ch(buffer, &index, combination(initial, medial, 0));
					break;
				} 
				else if (!(find_if_exist_ch(index_medial_2_du, 
										STRUCTURE_SIZE_OF(index_medial_2_du),
										string[i+1]) < 0)) 
				{
					index_du_buf[0] = string[i];
					index_du_buf[1] = string[i + 1];
					index_du_buf[2] = 0;
					save = find_if_exist_str(index_medial_2, 
										STRUCTURE_SIZE_OF(index_medial_2), 
										index_du_buf);
					if (save >= 0) 
					{
						i += 1;
						medial = save;
					}
				}
				if(i == len_m) 
				{
					buffer_put_ch(buffer, &index, combination(initial, medial, 0));
					break;
				}
				i += 1;


				// �ٴ�������, �ٴٴ������ڰ� �߼��ΰ�?
				stop_force = FALSE;
				if (len_m >= i + 1) {
					if (!(find_if_exist_ch_only_1(index_medial_2,
										STRUCTURE_SIZE_OF(index_medial_2), 
										string[i+1]) < 0))
					{
						i -= 1;
						buffer_put_ch(buffer, &index, combination(initial, medial, 0));
						continue;
					} 
					else if (len_m >= i + 2) 
					{
						// �ٴٴ������ڰ� �߼��̹Ƿ� ������ ���ħ�� ��찡 ����� �Ѵ�.
						if (!(find_if_exist_ch_only_1(index_medial_2,
											STRUCTURE_SIZE_OF(index_medial_2), 
											string[i+2]) < 0)) 
						{
							stop_force = TRUE;
						}
					}
				}

				final = find_if_exist_ch_only_1(index_final_2, 
										STRUCTURE_SIZE_OF(index_final_2), 
										string[i]);
				if (final < 0) 
				{
					buffer_put_ch(buffer, &index, combination(initial, medial, 0));
					i -= 1;
					continue;
				} 
				else if (len_m >= i + 1 && !stop_force) 
				{
					if (!(find_if_exist_ch(index_final_2_du, 
										STRUCTURE_SIZE_OF(index_final_2_du),
										string[i+1]) < 0)) 
					{
						index_du_buf[0] = string[i];
						index_du_buf[1] = string[i + 1];
						index_du_buf[2] = 0;
						save = find_if_exist_str(index_final_2, 
											STRUCTURE_SIZE_OF(index_final_2), 
											index_du_buf);
						if (save >= 0) 
						{
							i += 1;
							final = save;
						}
					}
				}

				buffer_put_ch(buffer, &index, combination(initial, medial, final));

			}

			buffer[index] = 0;
		}

		/***
			������ 360 Ű������ �ѱ�-�����ǥ�⸦ �ѱ۷� �ٲߴϴ�.
			(��/��Ű�� ����ä�� �ѱ��� ĥ ��� �����ڰ� ��� �ԷµǹǷ� �װ���
			��/��Ű�� ���� ������ �������� ��ȯ�ϴ� ������ �����մϴ�.)
		***/
		static void assembly3(const wchar_t string[], wchar_t *buffer)
		{
			size_t    index = 0;
			size_t    len = wcslen(string);
			size_t    len_m;
			int       initial, medial, final, save, num_sym;
			wchar_t   index_du_buf[3];
			bool      stop_force;

			len_m = len - 1;

			for(size_t i = 0; i < len; i++) 
			{
				initial = -1;
				medial = -1;
				final = -1;

				initial = find_if_exist_ch_only_1(index_initial_3, 
										STRUCTURE_SIZE_OF(index_initial_3), 
										string[i]);
				if (initial < 0) 
				{
					medial = find_if_exist_ch_only_1(index_medial_3,
										STRUCTURE_SIZE_OF(index_medial_3), 
										string[i]);
					if (medial < 0) 
					{
						num_sym = find_if_exist_ch(index_numberic_3,
										STRUCTURE_SIZE_OF(index_numberic_3), 
										string[i]);
						if (num_sym >= 0) 
						{	// ��ȣ�� ǥ�õ� ������ ���
							buffer_put_ch(buffer, &index, index_numberic[num_sym]);
						}
						else
						{
							num_sym = find_if_exist_ch(index_symbol_3,
											STRUCTURE_SIZE_OF(index_symbol_3), 
											string[i]);
							if (num_sym >= 0) 
							{
								buffer_put_ch(buffer, &index, index_symbol[num_sym]);
							}
							else
							{
								buffer_put_ch(buffer, &index, string[i]);
							}
						}
					}
					else
					{
						// �ʼ��� ���� ���
#ifdef _DISPLANT_SAFE_EXECUATIVE
						buffer_put_ch(buffer, &index, string[i]);
						continue;
#endif

						buffer_put_ch(buffer, &index, index_medial[medial]);
					}
					continue;
				}
				if (i == len_m)
				{
					buffer_put_ch(buffer, &index, index_initial[initial]);
					break;
				}
				else
				{
					if (!(find_if_exist_ch(index_initial_3_du, 
										STRUCTURE_SIZE_OF(index_initial_3_du),
										string[i+1]) < 0))
					{
						index_du_buf[0] = string[i];
						index_du_buf[1] = string[i + 1];
						index_du_buf[2] = 0;
						save = find_if_exist_str(index_initial_3, 
											STRUCTURE_SIZE_OF(index_initial_3), 
											index_du_buf);
						if (save >= 0)
						{
							i += 1;
							initial = save;
						}
					}
				}
				i++;

				medial = find_if_exist_ch_only_1(index_medial_3, 
										STRUCTURE_SIZE_OF(index_medial_3), 
										string[i]);
				if (medial < 0)
				{
					buffer_put_ch(buffer, &index, buffer[i]);
					continue;
				}
				else if (i == len_m)
				{
					buffer_put_ch(buffer, &index, combination(initial, medial, 0));
					break;
				}
				else if (!(find_if_exist_ch(index_medial_3_du, 
										STRUCTURE_SIZE_OF(index_medial_3_du),
										string[i+1]) < 0))
				{
					index_du_buf[0] = string[i];
					index_du_buf[1] = string[i + 1];
					index_du_buf[2] = 0;
					save = find_if_exist_str(index_medial_3, 
										STRUCTURE_SIZE_OF(index_medial_3), 
										index_du_buf);
					if (save >= 0)
					{
						i += 1;
						medial = save;
					}
				}
				if(i == len_m)
				{
					buffer_put_ch(buffer, &index, combination(initial, medial, 0));
					break;
				}
				i += 1;

				stop_force = FALSE;
				if (len_m >= i + 1)
				{
					if (!(find_if_exist_ch_only_1(index_medial_3,
										STRUCTURE_SIZE_OF(index_medial_3), 
										string[i+1]) < 0))
					{
						i -= 1;
						buffer_put_ch(buffer, &index, combination(initial, medial, 0));
						continue;
					}
					else if (len_m >= i + 2)
					{
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
				if (final < 0)
				{
					buffer_put_ch(buffer, &index, combination(initial, medial, 0));
					i -= 1;
					continue;
				}
				else if (len_m >= i + 1 && !stop_force)
				{
					if (!(find_if_exist_ch(index_final_3_du, 
										STRUCTURE_SIZE_OF(index_final_3_du),
										string[i+1]) < 0))
					{
						index_du_buf[0] = string[i];
						index_du_buf[1] = string[i + 1];
						index_du_buf[2] = 0;
						save = find_if_exist_str(index_final_3, 
											STRUCTURE_SIZE_OF(index_final_3), 
											index_du_buf);
						if (save >= 0)
						{
							i += 1;
							final = save;
						}
					}
				}
				buffer_put_ch(buffer, &index, combination(initial, medial, final));
			}
			buffer[index] = 0;
		}

		static void get_initial(const wchar_t string[], wchar_t *buffer)
		{
			size_t len = wcslen(string), i;

			for (i = 0; i < len; i++)
				i[buffer] = check(string[i]) ? index_initial[HANGUL_INITIAL(string[i])] : string[i];

			buffer[i] = 0;
		}

		/***
			������ �պκк��� ���Ͽ� ��ġ�ϴ� �κб����� ���̸� ��ȯ�մϴ�.
			(�� �Լ��� �ʼ��˻��� ����ȭ�Ǿ������� �ʼ��˻縦 ���Ұ�� string1�� �ʼ�������
			�����ñ� �ٶ��ϴ�.)
		***/
		static size_t hangul_startswith_compare(const wchar_t string1[], const wchar_t string2[])
		{
			const wchar_t *p1 = string1;
			const wchar_t *p2 = string2;

			while(*p1 && *p2) {

				if (check(*p1))
					if (*p2 == index_initial[HANGUL_INITIAL(*p1)])
						goto next;

				if (!(*p1 - *p2))
					goto next;

				if (check(*p2))
					if (*p1 == index_initial[HANGUL_INITIAL(*p2)])
						goto next;

				break;
			next:
				p1++;
				p2++;
			}

			return p1 - string1;
		}

		/***
			������ ���Ҹ��� target���� ��ü�մϴ�.
		***/
		static wchar_t hangul_add_to_final(const wchar_t ch, const wchar_t target)
		{
			__HangulJamo hj = distortion(ch);

			if (!check_jamo31(target))
				return 0;

			hj.final = index_letter[target - 0x3131];

			return combination(hj);
		}
		
		/***
			������ ���Ҹ��� �����ϴ��� Ȯ���մϴ�.
		***/
		static bool hangul_is_final(const wchar_t ch)
		{
			if (HANGUL_FINAL(ch))
				return TRUE;

			return FALSE;
		}

		/***
			����ȭ
		***/
		static wchar_t nasalization(const wchar_t ch1, const wchar_t ch2)
		{
			const wchar_t is_in[3] = { TEXT('��'), TEXT('��'), TEXT('��') };
			const wchar_t af_in[3] = { TEXT('��'), TEXT('��'), TEXT('��') };
			const wchar_t is_in1[2] = { TEXT('��'), TEXT('��') };

			int is_success = find_if_exist_ch(is_in, STRUCTURE_SIZE_OF(is_in), index_final[HANGUL_FINAL(ch1)]);
			int is_complete = find_if_exist_ch(af_in, STRUCTURE_SIZE_OF(af_in), index_initial[HANGUL_INITIAL(ch2)]);

			__HangulJamo	hi;

			if (is_success < 0 || is_complete < 0)
				return 0;

			hi = distortion(ch1);
			hi.final = find_if_exist_ch(index_final, STRUCTURE_SIZE_OF(index_final), af_in[is_success]);

			return combination(hi);
		}
		
		/***
			����ȭ
		***/
		static bool liquidization(wchar_t *ch1, wchar_t *ch2)	// ������ Ʋ�� �ܾ� ������ �ƴ�
		{
			wchar_t split1 = HANGUL_FINAL(*ch1);
			wchar_t split2 = HANGUL_INITIAL(*ch2);

			__HangulJamo	hj;

			if (index_final[split1] == TEXT('��') && index_initial[split2] == TEXT('��'))
			{
				hj = distortion(*ch1);
				hj.final = find_if_exist_ch(index_final, STRUCTURE_SIZE_OF(index_final), TEXT('��'));
				*ch1 = combination(hj);
			}
			else if (index_final[split1] == TEXT('��') && index_initial[split2] == TEXT('��'))
			{
				hj = distortion(*ch2);
				hj.initial = find_if_exist_ch(index_initial, STRUCTURE_SIZE_OF(index_initial), TEXT('��'));
				*ch2 = combination(hj);
			}
			else
			{
				return FALSE;
			}

			return TRUE;
		}
		
		/***
			������ȭ
		***/
		static bool palatalization(wchar_t *ch1, wchar_t *ch2)
		{
			wchar_t split1 = HANGUL_FINAL(*ch1);
			wchar_t split2 = HANGUL_MEDIAL(*ch2);
			wchar_t split3 = HANGUL_INITIAL(*ch2);

			__HangulJamo	hj;

			if (index_medial[split2] == TEXT('��') && index_initial[split3] == TEXT('��'))
			{
				if (index_final[split1] == TEXT('��'))
				{

					hj = distortion(*ch1);
					hj.final = 0;
					*ch1 = combination(hj);

					hj = distortion(*ch2);
					hj.initial = find_if_exist_ch(index_initial, STRUCTURE_SIZE_OF(index_initial), TEXT('��'));
					*ch2 = combination(hj);

					return TRUE;
				}
				else if (index_final[split1] == TEXT('��'))
				{
					
					hj = distortion(*ch1);
					hj.final = 0;
					*ch1 = combination(hj);

					hj = distortion(*ch2);
					hj.initial = find_if_exist_ch(index_initial, STRUCTURE_SIZE_OF(index_initial), TEXT('��'));
					*ch2 = combination(hj);

					return TRUE;
				}
			}
		
			return FALSE;
		}
		
		/***
			������ ���Ҹ� ��Ģ
		***/
		static bool syllable_of_jongseong_rules(wchar_t *str)
		{
			__HangulJamo	hj;

			const wchar_t af_in[] = {
				/* ������ �ܼ�ȭ�� ���⼭ �������� ����. */
				TEXT('\0'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
				TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
				TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��'),
				TEXT('��'), TEXT('��'), TEXT('��'), TEXT('��')
			};

			for (; *str; str++)
			{
				if (check(*str))
				{
					hj = distortion(*str);
					hj.final = find_if_exist_ch(index_final, STRUCTURE_SIZE_OF(index_final), af_in[hj.final]);
					*str = combination(hj);
				}
			}

			return TRUE;
		}
	};

}

#endif