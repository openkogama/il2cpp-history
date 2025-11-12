
/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::AdMobCredentials::
         AdMobCredentials_ToString(AdMobCredentials *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AppId__0___RewardedAdUnitId__1__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  pSVar1 = (this->fields).AppId;
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
    pSVar1 = (this->fields).RewardedAdUnitId;
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
    FUN_?(args,1,pSVar1);
    pSVar1 = (this->fields).InterstitialAdUnitId;
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
    FUN_?(args,2,pSVar1);
    pSVar1 = (this->fields).BannerAdUnitId;
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
    FUN_?(args,3);
    pSVar1 = StringLiteral_AppId__0___RewardedAdUnitId__1__;
    PStack_5._arg0 = (Object *)0x0;
    PStack_5._arg1 = (Object *)0x0;
    PStack_5._arg2 = (Object *)0x0;
    PStack_5._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_5,args,(MethodInfo *)0x0);
    PStack_6._arg0 = PStack_5._arg0;
    PStack_6._arg1 = PStack_5._arg1;
    PStack_6._arg2 = PStack_5._arg2;
    PStack_6._args = PStack_5._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_6,(MethodInfo *)0x0);
    return pSVar1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}

