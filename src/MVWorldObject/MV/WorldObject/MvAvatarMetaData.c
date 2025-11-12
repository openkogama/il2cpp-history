
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData_ToString
                   (MvAvatarMetaData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_avatarID___0___name___1___priceG);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,5);
  aiStackX_8[0] = (this->fields).avatarID;
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
    pSVar5 = (this->fields).name;
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
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).isOnMarketPlace);
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
    FUN_?(args,3,lVar1);
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).canBeSoldOnMarketPlace);
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
    FUN_?(args,4);
    pSVar5 = StringLiteral_avatarID___0___name___1___priceG;
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


/* MvAvatarMetaData(BytePacker) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
               (MvAvatarMetaData *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).avatarID = -1;
  (this->fields).name = ::StringLiteral__;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).name >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).priceGold = -1;
  if (bp == (BytePacker *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar7 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  (this->fields).avatarID = iVar7;
  pSVar8 = BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).name = pSVar8;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).name >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  iVar7 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  (this->fields).priceGold = iVar7;
  uVar9 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
  (this->fields).isOnMarketPlace = uVar9 != 0;
  uVar9 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
  (this->fields).canBeSoldOnMarketPlace = uVar9 != 0;
  return;
}

