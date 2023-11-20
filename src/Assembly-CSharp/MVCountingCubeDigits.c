
/* Void AssignNewNumber(Int32) */

void Assembly-CSharp.dll::MVCountingCubeDigits::MVCountingCubeDigits_AssignNewNumber
               (MVCountingCubeDigits *this,int32_t newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&StringLiteral__0);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&newValue,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength < 2) {
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral__0,pSVar1,(MethodInfo *)0x0);
      if (pSVar1 == (String *)0x0) goto code_?;
    }
    mscorlib.dll::System::String::String_get_Chars(pSVar1,0,(MethodInfo *)0x0);
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      newValue = (int32_t)TypeInfo__System__Char;
      this = (MVCountingCubeDigits *)&UNK_?;
      func_?();
    }
    s = mscorlib.dll::System::Char::Char_ToString((Char *)&stack0xfffffff8,(MethodInfo *)0x0);
    value = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_get_Chars(pSVar1,1,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::Char::Char_ToString((Char *)&stack0xfffffff8,(MethodInfo *)0x0);
    value_00 = mscorlib.dll::System::Int32::Int32_Parse(pSVar1,(MethodInfo *)0x0);
    pMVar2 = (this->fields).FrontFirst;
    if (pMVar2 != (MVCountingCubeDigit *)0x0) {
      MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar2,value,(MethodInfo *)0x0);
      pMVar2 = (this->fields).FrontSecond;
      if (pMVar2 != (MVCountingCubeDigit *)0x0) {
        MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar2,value_00,(MethodInfo *)0x0);
        pMVar2 = (this->fields).BackFirst;
        if (pMVar2 != (MVCountingCubeDigit *)0x0) {
          MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar2,value,(MethodInfo *)0x0);
          pMVar2 = (this->fields).BackSecond;
          if (pMVar2 != (MVCountingCubeDigit *)0x0) {
            MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar2,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_Number(Int32) */

void Assembly-CSharp.dll::MVCountingCubeDigits::MVCountingCubeDigits_set_Number
               (MVCountingCubeDigits *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&StringLiteral__0);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength < 2) {
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral__0,pSVar1,(MethodInfo *)0x0);
      if (pSVar1 == (String *)0x0) goto code_?;
    }
    uVar2 = mscorlib.dll::System::String::String_get_Chars(pSVar1,0,(MethodInfo *)0x0);
    value = (int32_t)uVar2;
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      value = (int32_t)TypeInfo__System__Char;
      this = (MVCountingCubeDigits *)&UNK_?;
      func_?();
    }
    s = mscorlib.dll::System::Char::Char_ToString((Char *)&value,(MethodInfo *)0x0);
    value_00 = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
    uVar2 = mscorlib.dll::System::String::String_get_Chars(pSVar1,1,(MethodInfo *)0x0);
    value = (int32_t)uVar2;
    pSVar1 = mscorlib.dll::System::Char::Char_ToString((Char *)&value,(MethodInfo *)0x0);
    value_01 = mscorlib.dll::System::Int32::Int32_Parse(pSVar1,(MethodInfo *)0x0);
    pMVar3 = (this->fields).FrontFirst;
    if (pMVar3 != (MVCountingCubeDigit *)0x0) {
      MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar3,value_00,(MethodInfo *)0x0);
      pMVar3 = (this->fields).FrontSecond;
      if (pMVar3 != (MVCountingCubeDigit *)0x0) {
        MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar3,value_01,(MethodInfo *)0x0);
        pMVar3 = (this->fields).BackFirst;
        if (pMVar3 != (MVCountingCubeDigit *)0x0) {
          MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar3,value_00,(MethodInfo *)0x0);
          pMVar3 = (this->fields).BackSecond;
          if (pMVar3 != (MVCountingCubeDigit *)0x0) {
            MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar3,value_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

