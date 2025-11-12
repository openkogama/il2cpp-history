
/* String Validate(String) */

String * Assembly-CSharp.dll::CloudyTheme::CloudyTheme_Validate
                   (CloudyTheme *this,String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((str == (String *)0x0) || (::StringLiteral____ == (String *)0x0)) ||
      (((iVar1 = (::StringLiteral____->fields)._stringLength, pSVar2 = ::StringLiteral____,
        (str->fields)._stringLength < iVar1 ||
        ((pSVar3 = mscorlib.dll::System::String::String_Substring_1(str,0,iVar1,(MethodInfo *)0x0),
         pSVar2 = ::StringLiteral____, pSVar3 != ::StringLiteral____ &&
         ((((pSVar3 == (String *)0x0 || (::StringLiteral____ == (String *)0x0)) ||
           ((pSVar3->fields)._stringLength != (::StringLiteral____->fields)._stringLength)) ||
          (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar3->fields)._firstChar,
                              (uint8_t *)&(::StringLiteral____->fields)._firstChar,
                              (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar4 == 0)))))) &&
       (str = mscorlib.dll::System::String::String_Concat_4(pSVar2,str,(MethodInfo *)0x0),
       str == (String *)0x0)))) || (::StringLiteral___ == (String *)0x0)) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar5)();
    return pSVar2;
  }
  iVar1 = (::StringLiteral___->fields)._stringLength;
  pSVar2 = ::StringLiteral___;
  if (iVar1 <= (str->fields)._stringLength) {
    pSVar3 = mscorlib.dll::System::String::String_Substring_1
                       (str,(str->fields)._stringLength - iVar1,iVar1,(MethodInfo *)0x0);
    pSVar2 = ::StringLiteral___;
    if (pSVar3 == ::StringLiteral___) {
      return str;
    }
    if (((pSVar3 != (String *)0x0) && (::StringLiteral___ != (String *)0x0)) &&
       (((pSVar3->fields)._stringLength == (::StringLiteral___->fields)._stringLength &&
        (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar3->fields)._firstChar,
                            (uint8_t *)&(::StringLiteral___->fields)._firstChar,
                            (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar4 != 0)))) {
      return str;
    }
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4(str,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


/* CloudyTheme() */

void Assembly-CSharp.dll::CloudyTheme::CloudyTheme__ctor(CloudyTheme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_No_name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Description_missing_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).identifier = StringLiteral_UID;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).identifier >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).displayName = StringLiteral_No_name;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).displayName >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).description = StringLiteral_Description_missing_;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).description >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<ThemeComponent>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ThemeComponent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_ThemeComponent_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<ThemeComponent>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ThemeComponent>__List__);
  bVar6 = iRam_? != 0;
  (this->fields)._._.components = this_00;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.components >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

