
/* Boolean ContainsOnlyWhiteSpace(String) */

bool Assembly-CSharp.dll::RTG::StringEx::StringEx_ContainsOnlyWhiteSpace
               (String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  index = 0;
  if (str != (String *)0x0) {
    while( true ) {
      if ((str->fields)._stringLength <= index) {
        return 1;
      }
      c = mscorlib.dll::System::String::String_get_Chars(str,index,(MethodInfo *)0x0);
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Char);
      }
      bVar1 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
      if (bVar1 == 0) break;
      index = index + 1;
    }
    return 0;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean IsSingleChar(String, Char) */

bool Assembly-CSharp.dll::RTG::StringEx::StringEx_IsSingleChar
               (String *str,uint16_t character,MethodInfo *method)

{
  if (str == (String *)0x0) {
    uVar1 = func_?(&stack0xfffffff0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((str->fields)._stringLength != 1) {
    return 0;
  }
  uVar4 = mscorlib.dll::System::String::String_get_Chars(str,0,(MethodInfo *)0x0);
  return uVar4 == character;
}


/* Boolean IsSingleDigit(String) */

bool Assembly-CSharp.dll::RTG::StringEx::StringEx_IsSingleDigit(String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if (str != (String *)0x0) {
    if ((str->fields)._stringLength != 1) {
      return 0;
    }
    c = mscorlib.dll::System::String::String_get_Chars(str,0,(MethodInfo *)0x0);
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::Char::Char_IsDigit(c,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean IsSingleLetter(String) */

bool Assembly-CSharp.dll::RTG::StringEx::StringEx_IsSingleLetter(String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if (str != (String *)0x0) {
    if ((str->fields)._stringLength != 1) {
      return 0;
    }
    c = mscorlib.dll::System::String::String_get_Chars(str,0,(MethodInfo *)0x0);
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::Char::Char_IsLetter(c,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Char LastChar(String) */

uint16_t Assembly-CSharp.dll::RTG::StringEx::StringEx_LastChar(String *str,MethodInfo *method)

{
  if (str != (String *)0x0) {
    uVar1 = mscorlib.dll::System::String::String_get_Chars
                      (str,(str->fields)._stringLength + -1,(MethodInfo *)0x0);
    return uVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  uVar1 = (*pcVar3)();
  return uVar1;
}


/* Int32 LastCharIndex(String) */

int32_t Assembly-CSharp.dll::RTG::StringEx::StringEx_LastCharIndex(String *str,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (str != (String *)0x0) {
    return (str->fields)._stringLength + -1;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* String RemoveTrailingSlashes(String) */

String * Assembly-CSharp.dll::RTG::StringEx::StringEx_RemoveTrailingSlashes
                   (String *str,MethodInfo *method)

{
  for (; str != (String *)0x0;
      str = mscorlib.dll::System::String::String_Substring_1
                      (str,0,(str->fields)._stringLength + -1,(MethodInfo *)0x0)) {
    uVar1 = mscorlib.dll::System::String::String_get_Chars
                      (str,(str->fields)._stringLength + -1,(MethodInfo *)0x0);
    if (uVar1 != 0x5c) {
      if (str == (String *)0x0) break;
      uVar1 = mscorlib.dll::System::String::String_get_Chars
                        (str,(str->fields)._stringLength + -1,(MethodInfo *)0x0);
      if (uVar1 != 0x2f) {
        return str;
      }
      if (str == (String *)0x0) break;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}

