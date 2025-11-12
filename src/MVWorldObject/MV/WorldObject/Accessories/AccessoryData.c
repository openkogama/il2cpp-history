
/* Boolean GetShowInShop() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::AccessoryData_GetShowInShop
               (AccessoryData *this,MethodInfo *method)

{
  this_00 = (this->fields).time;
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
  return (this->fields).iAvlb;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::AccessoryData_ToString
                   (AccessoryData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AccessoryCategory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__AccessorySlotType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u000Du000A__isAvailable__1_u000Du000A__isLim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,0xb);
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
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).iAvlb);
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
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).iNew);
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
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).iFtr);
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
    FUN_?(args,3,lVar2);
    aiStackX_8[0] = (this->fields).cost;
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
    FUN_?(args,4,lVar2);
    aiStackX_8[0] = (this->fields).dsc;
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
    FUN_?(args,5,lVar2);
    aiStackX_8[0] = (this->fields).lvl;
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
    FUN_?(args,6,lVar2);
    aiStackX_8[0] = (this->fields).cat;
    lVar2 = FUN_?(TypeInfo__MV__Common__AccessoryCategory,aiStackX_8);
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
    FUN_?(args,7,lVar2);
    aiStackX_8[0] = (this->fields).pos;
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
    FUN_?(args,8,lVar2);
    pSVar1 = (this->fields).url;
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
    FUN_?(args,9,pSVar1);
    aiStackX_8[0] = (this->fields).slot;
    lVar2 = FUN_?(TypeInfo__MV__Common__AccessorySlotType,aiStackX_8);
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
    FUN_?(args,10);
    pSVar1 = StringLiteral__0__u000Du000A__isAvailable__1_u000Du000A__isLim;
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


/* AccessoryData() */

void MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::AccessoryData__ctor
               (AccessoryData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AccessoryTimelimit *)
           FUN_?(TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
  bVar2 = iRam_? != 0;
  (this->fields).time = pAVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).time >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Int32 get_DiscountedPrice() */

int32_t MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
        AccessoryData_get_DiscountedPrice(AccessoryData *this,MethodInfo *method)

{
  return (this->fields).cost - ((this->fields).dsc * (this->fields).cost) / 100;
}

