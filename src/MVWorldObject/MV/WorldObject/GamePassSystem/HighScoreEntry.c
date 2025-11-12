
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreEntry::HighScoreEntry_ToString
                   (HighScoreEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1____2____3__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  aiStackX_8[0] = (this->fields).profileID;
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
    pSVar5 = (this->fields).username;
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
    aiStackX_8[0] = (this->fields).gamePoints;
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
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).isSubscriber);
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
    pSVar5 = StringLiteral__0____1____2____3__;
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


/* HighScoreEntry() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreEntry::HighScoreEntry__ctor
               (HighScoreEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).username = ::StringLiteral__;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).username >> 0xc);
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
  return;
}


/* HighScoreEntry(Int32, String, Int32, Boolean) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreEntry::HighScoreEntry__ctor_1
               (HighScoreEntry *this,int32_t profileID,String *username,int32_t gamePoints,
               bool isSubscriber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).username = ::StringLiteral__;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).username >> 0xc);
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
  (this->fields).profileID = profileID;
  (this->fields).username = username;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).username >> 0xc);
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
  (this->fields).isSubscriber = isSubscriber;
  (this->fields).gamePoints = gamePoints;
  return;
}

