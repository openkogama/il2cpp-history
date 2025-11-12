
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MVItem::MVItem_ToString
                   (MVItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name___0__ItemID___1__ItemTypeID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,5);
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
    aiStackX_8[0] = (this->fields).itemID;
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
    aiStackX_8[0] = (this->fields).itemTypeID;
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
    aiStackX_8[0] = (this->fields).priceGold;
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
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).resellable);
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
    FUN_?(args,4);
    pSVar1 = StringLiteral_Name___0__ItemID___1__ItemTypeID;
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

