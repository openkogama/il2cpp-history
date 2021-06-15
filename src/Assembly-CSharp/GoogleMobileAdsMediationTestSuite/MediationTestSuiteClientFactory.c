
/* IMediationTestClient MediationTestSuiteInstance() */

IMediationTestClient *
Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::MediationTestSuiteClientFactory::
MediationTestSuiteClientFactory_MediationTestSuiteInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)
         func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,unaff_EDI);
  pMVar1 = MethodInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient__DummyClient__;
  if ((MethodInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient__DummyClient__->iflags &
      0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient__DummyClient__
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return (IMediationTestClient *)this;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pIVar5 = (IMediationTestClient *)(*pcVar4)();
  return pIVar5;
}

