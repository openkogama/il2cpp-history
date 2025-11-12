
/* Boolean GetShowInShop() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::AccessoryBundle_GetShowInShop
               (AccessoryBundle *this,MethodInfo *method)

{
  this_00 = (this->fields).timelimit;
  if (this_00 == (AccessoryTimelimit *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((this_00->fields).timeLimit != 0) {
    bVar2 = AccessoryTimelimit::AccessoryTimelimit_GetHasTimeLeft(this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
  }
  return (this->fields).isAvailable;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::AccessoryBundle_ToString
                   (AccessoryBundle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___IsAvailable___1__Discount__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  pSVar1 = (this->fields).name;
  if (args != (Object__Array *)0x0) {
    if (pSVar1 != (String *)0x0) {
      lVar2 = FUN_?(pSVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,0,pSVar1);
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).isAvailable);
    lVar2 = FUN_?(uRam_?,aiStackX_8);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,1,lVar2);
    aiStackX_8[0] = (this->fields).discount;
    lVar2 = FUN_?(uRam_?,aiStackX_8);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,2,lVar2);
    aiStackX_8[0] = (this->fields).level;
    lVar2 = FUN_?(uRam_?,aiStackX_8);
    if (lVar2 != 0) {
      lVar2 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,3);
    pSVar1 = StringLiteral__0___IsAvailable___1__Discount__;
    PStack_6._arg0 = (Object *)0x0;
    PStack_6._arg1 = (Object *)0x0;
    PStack_6._arg2 = (Object *)0x0;
    PStack_6._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_6,args,(MethodInfo *)0x0);
    PStack_7._arg0 = PStack_6._arg0;
    PStack_7._arg1 = PStack_6._arg1;
    PStack_7._arg2 = PStack_6._arg2;
    PStack_7._args = PStack_6._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_7,(MethodInfo *)0x0);
    return pSVar1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* AccessoryBundle() */

void MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::AccessoryBundle__ctor
               (AccessoryBundle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).accessoryBundleID = -1;
  this_00 = (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).accessoryBundleItems = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).accessoryBundleItems >> 0xc);
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
  pAVar6 = (AccessoryTimelimit *)
           FUN_?(TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
  bVar1 = iRam_? != 0;
  (this->fields).timelimit = pAVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).timelimit >> 0xc);
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
  return;
}


/* Boolean get_IsEmptyBundle() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::
     AccessoryBundle_get_IsEmptyBundle(AccessoryBundle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).accessoryBundleItems;
  if (pLVar1 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
    return (pLVar1->fields)._size == 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsTimeLimited() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::
     AccessoryBundle_get_IsTimeLimited(AccessoryBundle *this,MethodInfo *method)

{
  pAVar1 = (this->fields).timelimit;
  if (pAVar1 != (AccessoryTimelimit *)0x0) {
    return (pAVar1->fields).timeLimit != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

