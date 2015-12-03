# hangul-typo
이 프로그램은 한영키가 반대로 된 체 써지는 글자를 상호변환한다. ( 안드로어, 메다어 지원 )

![alt tag](https://github.com/rollrat/hangul-typo/blob/master/vb.net/vb.net%20p.png)

## C에서의 사용
``` c
main()
{
	_wsetlocale(LC_ALL, TEXT("korean"));

	wchar_t st[] = TEXT("사람은 무엇으로 사는가?");
	wchar_t ff[33];
	
	hangul_assembly3(TEXT("nfyfzjgs ibjtqjgyv nfhgskfB"), ff);
	wprintf(TEXT("%s\n"), ff);
	
	hangul_total_disassembly(st, ff);
	wprintf(TEXT("%s\n"), ff);
}
```

## VB.NET에서의 사용
vb.net에는 total disassembly가 없다.
``` vb.net
' 한글 -> 영타
Dim text As String = ""
For Each ch As Char In RichTextBox1.Text
    If hangul_is(ch) Then
        text += hangul_disassembly(ch)
    Else
        text += ch
    End If
Next
RichTextBox1.Text = text

' 알파벳 -> 한타
RichTextBox1.Text = hangul_assembly(RichTextBox1.Text)

' 중성까지 있는 안전한 글자만 출력
_SafeLetterExecuative = true
```
