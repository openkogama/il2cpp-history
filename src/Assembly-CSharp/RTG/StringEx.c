
/* Boolean ContainsOnlyWhiteSpace(String) */

bool Assembly-CSharp.dll::RTG::StringEx::StringEx_ContainsOnlyWhiteSpace
               (String *str,MethodInfo *method)

{
  uVar1 = 0;
  if (str == (String *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  puVar4 = &(str->fields)._firstChar;
  while( true ) {
    if ((str->fields)._stringLength <= (int)uVar1) {
      return 1;
    }
    if ((longlong)(str->fields)._stringLength <= (longlong)(ulonglong)uVar1) break;
    c = *puVar4;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    bVar3 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return 0;
    }
    uVar1 = uVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException((MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsSingleChar(String, Char) */

bool Assembly-CSharp.dll::RTG::StringEx::StringEx_IsSingleChar
               (String *str,uint16_t character,MethodInfo *method)

{
  if (str == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((str->fields)._stringLength != 1) {
    return 0;
  }
  return (str->fields)._firstChar == character;
}


/* Boolean IsSingleDigit(String) */

bool Assembly-CSharp.dll::RTG::StringEx::StringEx_IsSingleDigit(String *str,MethodInfo *method)

{
  if (str == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((str->fields)._stringLength != 1) {
    return 0;
  }
  uVar3 = (str->fields)._firstChar;
  codePoint = (uint)uVar3;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
  }
  if (0xff < uVar3) {
    UVar4 = mscorlib.dll::System::Globalization::CharUnicodeInfo::
            CharUnicodeInfo_GetUnicodeCategory_2(codePoint,(MethodInfo *)0x0);
    return UVar4 == UnicodeCategory__Enum_DecimalDigitNumber;
  }
  if (codePoint < 0x30) {
    return 0;
  }
  return codePoint < 0x3a;
}


/* Boolean IsSingleLetter(String) */

bool Assembly-CSharp.dll::RTG::StringEx::StringEx_IsSingleLetter(String *str,MethodInfo *method)

{
  if (str == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((str->fields)._stringLength != 1) {
    return 0;
  }
  ch = (str->fields)._firstChar;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (0xff < ch) {
    UVar3 = mscorlib.dll::System::Globalization::CharUnicodeInfo::
            CharUnicodeInfo_GetUnicodeCategory_2((uint)ch,(MethodInfo *)0x0);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    return UVar3 < UnicodeCategory__Enum_NonSpacingMark;
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (0x7f < ch) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    UVar3 = mscorlib.dll::System::Char::Char_GetLatin1UnicodeCategory(ch,(MethodInfo *)0x0);
    return UVar3 < UnicodeCategory__Enum_NonSpacingMark;
  }
  if ((ch | 0x20) < 0x61) {
    return 0;
  }
  return (ch | 0x20) < 0x7b;
}


/* Char LastChar(String) */

uint16_t Assembly-CSharp.dll::RTG::StringEx::StringEx_LastChar(String *str,MethodInfo *method)

{
  if (str == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  iVar3 = (str->fields)._stringLength;
  if ((longlong)(ulonglong)(iVar3 - 1) < (longlong)(str->fields)._stringLength) {
    return *(uint16_t *)((longlong)&(str->fields)._stringLength + (longlong)iVar3 * 2 + 2);
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException((MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


/* Int32 LastCharIndex(String) */

int32_t Assembly-CSharp.dll::RTG::StringEx::StringEx_LastCharIndex(String *str,MethodInfo *method)

{
  if (str != (String *)0x0) {
    return (str->fields)._stringLength + -1;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* String RemoveTrailingSlashes(String) */

String * Assembly-CSharp.dll::RTG::StringEx::StringEx_RemoveTrailingSlashes
                   (String *str,MethodInfo *method)

{
  if (str != (String *)0x0) {
    do {
      iVar1 = (str->fields)._stringLength;
      if ((longlong)(str->fields)._stringLength <= (longlong)(ulonglong)(iVar1 - 1)) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      if (*(short *)((longlong)&(str->fields)._stringLength + (longlong)iVar1 * 2 + 2) != 0x5c) {
        if (str == (String *)0x0) break;
        iVar1 = (str->fields)._stringLength;
        if ((longlong)(str->fields)._stringLength <= (longlong)(ulonglong)(iVar1 - 1))
        goto code_?;
        if (*(short *)((longlong)&(str->fields)._stringLength + (longlong)iVar1 * 2 + 2) != 0x2f) {
          return str;
        }
      }
      if ((str == (String *)0x0) ||
         (str = mscorlib.dll::System::String::String_Substring_1
                          (str,0,(str->fields)._stringLength + -1,(MethodInfo *)0x0),
         str == (String *)0x0)) break;
    } while( true );
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}

