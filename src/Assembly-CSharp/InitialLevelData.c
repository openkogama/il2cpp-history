
/* String ToString() */

String * Assembly-CSharp.dll::InitialLevelData::InitialLevelData_ToString
                   (InitialLevelData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<BadgeUrlData>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BadgeUrlData_Length__0___Level__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  pLVar1 = (this->fields).BadgeUrlData;
  if (pLVar1 != (List_1_BadgeUrlData_ *)0x0) {
    aiStackX_8[0] = (pLVar1->fields)._size;
    lVar2 = FUN_?(uRam_?,aiStackX_8);
    if (args != (Object__Array *)0x0) {
      if (lVar2 != 0) {
        lVar3 = FUN_?(lVar2,(args->klass->_0).element_class);
        if (lVar3 == 0) {
          uVar4 = FUN_?();
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          pSVar6 = (String *)(*pcVar5)();
          return pSVar6;
        }
      }
      FUN_?(args,0,lVar2);
      aiStackX_8[0] = (this->fields).Level;
      lVar2 = FUN_?(uRam_?,aiStackX_8);
      if (lVar2 != 0) {
        lVar3 = FUN_?(lVar2,(args->klass->_0).element_class);
        if (lVar3 == 0) {
          uVar4 = FUN_?();
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          pSVar6 = (String *)(*pcVar5)();
          return pSVar6;
        }
      }
      FUN_?(args,1,lVar2);
      aiStackX_8[0] = (this->fields).XP;
      lVar2 = FUN_?(uRam_?,aiStackX_8);
      if (lVar2 != 0) {
        lVar3 = FUN_?(lVar2,(args->klass->_0).element_class);
        if (lVar3 == 0) {
          uVar4 = FUN_?();
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          pSVar6 = (String *)(*pcVar5)();
          return pSVar6;
        }
      }
      FUN_?(args,2,lVar2);
      pXVar7 = (this->fields).XPLevelLimits;
      if (pXVar7 != (XPLevelLimits *)0x0) {
        lVar2 = FUN_?(pXVar7,(args->klass->_0).element_class);
        if (lVar2 == 0) {
          uVar4 = FUN_?();
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          pSVar6 = (String *)(*pcVar5)();
          return pSVar6;
        }
      }
      FUN_?(args,3);
      pSVar6 = StringLiteral_BadgeUrlData_Length__0___Level__;
      PStack_8._arg0 = (Object *)0x0;
      PStack_8._arg1 = (Object *)0x0;
      PStack_8._arg2 = (Object *)0x0;
      PStack_8._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_8,args,(MethodInfo *)0x0);
      PStack_9._arg0 = PStack_8._arg0;
      PStack_9._arg1 = PStack_8._arg1;
      PStack_9._arg2 = PStack_8._arg2;
      PStack_9._args = PStack_8._args;
      pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar6,&PStack_9,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}

