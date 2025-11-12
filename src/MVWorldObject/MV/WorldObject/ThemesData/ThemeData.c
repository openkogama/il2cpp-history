
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::ThemesData::ThemeData::ThemeData_ToString
                   (ThemeData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_id__0___themeIdentifier__1___pri);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  aiStackX_8[0] = (this->fields).id;
  lVar1 = FUN_?(uRam_?,aiStackX_8);
  if (args != (Object__Array *)0x0) {
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,0,lVar1);
    pSVar5 = (this->fields).themeIdentifier;
    if (pSVar5 != (String *)0x0) {
      lVar1 = FUN_?(pSVar5,(args->klass->_0).element_class);
      if (lVar1 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,1,pSVar5);
    aiStackX_8[0] = (this->fields).priceGold;
    lVar1 = FUN_?(uRam_?,aiStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,2,lVar1);
    aiStackX_8[0] = (this->fields).levelRequirement;
    lVar1 = FUN_?(uRam_?,aiStackX_8);
    if (lVar1 != 0) {
      lVar1 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar1 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,3);
    pSVar5 = StringLiteral_id__0___themeIdentifier__1___pri;
    PStack_6._arg0 = (Object *)0x0;
    PStack_6._arg1 = (Object *)0x0;
    PStack_6._arg2 = (Object *)0x0;
    PStack_6._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_6,args,(MethodInfo *)0x0);
    PStack_7._arg0 = PStack_6._arg0;
    PStack_7._arg1 = PStack_6._arg1;
    PStack_7._arg2 = PStack_6._arg2;
    PStack_7._args = PStack_6._args;
    pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar5,&PStack_7,(MethodInfo *)0x0);
    return pSVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* ThemeData(Int32, String, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::ThemesData::ThemeData::ThemeData__ctor_1
               (ThemeData *this,int32_t id,String *themeIdentifier,int32_t priceGold,
               int32_t levelRequirement,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).id = id;
  (this->fields).themeIdentifier = themeIdentifier;
  if (bVar1) {
    (this->fields).levelRequirement = levelRequirement;
    (this->fields).priceGold = priceGold;
    return;
  }
  uVar2 = (uint)((ulonglong)&(this->fields).themeIdentifier >> 0xc);
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
  (this->fields).levelRequirement = levelRequirement;
  (this->fields).priceGold = priceGold;
  return;
}

