
/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::AdMobCredentials::
         AdMobCredentials_ToString(AdMobCredentials *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  pSVar1 = (this->fields).AppId;
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar1;
    pSVar1 = (this->fields).RewardedAdUnitId;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar1;
    pSVar1 = (this->fields).InterstitialAdUnitId;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pSVar1;
    pSVar1 = (this->fields).BannerAdUnitId;
    if (pSVar1 == (String *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = (Object *)pSVar1;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar1 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_AppId__0___RewardedAdUnitId__1__,args,(MethodInfo *)0x0);
        return pSVar1;
      }
      goto code_?;
    }
    iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}

