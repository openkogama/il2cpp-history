
/* String ToString() */

String * Assembly-CSharp.dll::BadgeUrlData::BadgeUrlData_ToString
                   (BadgeUrlData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Level__0___Url__1___FriendsLimit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).level;
  arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
  aiStackX_8[0] = (this->fields).friendsLimit;
  pSVar1 = (this->fields).url;
  arg2 = (Object *)FUN_?(uRam_?,aiStackX_8);
  format = StringLiteral_Level__0___Url__1___FriendsLimit;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_2,arg0,(Object *)pSVar1,arg2,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,format,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* BadgeUrlData() */

void Assembly-CSharp.dll::BadgeUrlData::BadgeUrlData__ctor(BadgeUrlData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).level = -1;
  (this->fields).url = ::StringLiteral__;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).url >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  (this->fields).friendsLimit = 200;
  return;
}


/* BadgeUrlData(Int32, String) */

void Assembly-CSharp.dll::BadgeUrlData::BadgeUrlData__ctor_1
               (BadgeUrlData *this,int32_t level,String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).level = -1;
  (this->fields).url = ::StringLiteral__;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).url >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).friendsLimit = 200;
  (this->fields).level = level;
  (this->fields).url = url;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).url >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}

