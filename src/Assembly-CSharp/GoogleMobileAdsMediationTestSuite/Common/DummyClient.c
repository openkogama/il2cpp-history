
/* Void Show(String) */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Common::DummyClient::DummyClient_5_Show
               (DummyClient_5 *this,String *appId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient__Show_System__String_;
  if ((MethodInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient__Show_System__String_->
       iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient__Show_System__String_
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
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Common::DummyClient::
     DummyClient_5_Show_1(DummyClient_5 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient__Show__;
  if ((MethodInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient__Show__->iflags & 0x200)
      != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient__Show__
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
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* DummyClient() */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Common::DummyClient::
     DummyClient_5__ctor(DummyClient_5 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  pMVar1 = MethodInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient__DummyClient__;
  if ((MethodInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient__DummyClient__->iflags &
      0x200) != 0) {
    pMVar1 = (MethodInfo *)func_?();
  }
  piVar2 = (int *)func_?(pMVar1);
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
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void add_OnMediationTestSuiteDismissed(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Common::DummyClient::
     DummyClient_5_add_OnMediationTestSuiteDismissed
               (DummyClient_5 *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = (this->fields).OnMediationTestSuiteDismissed;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar1->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler_1_EventArgs_ *)func_?(&this->fields,pDVar2,a);
    bVar5 = pEVar4 == a;
    a = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_OnMediationTestSuiteDismissed(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Common::DummyClient::
     DummyClient_5_remove_OnMediationTestSuiteDismissed
               (DummyClient_5 *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).OnMediationTestSuiteDismissed;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar1->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler_1_EventArgs_ *)func_?(&this->fields,pDVar2,source);
    bVar5 = pEVar4 == source;
    source = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}

