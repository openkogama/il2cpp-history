
/* Void CallShow(String) */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
     MediationTestSuite_CallShow(MediationTestSuite *this,String *appId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IMediationTestClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient
           ) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&(pIVar1->klass->vtable).Show)[iVar5].method)
                    (pIVar1,appId,(&(pIVar1->klass->vtable).Show_1)[iVar5].methodPtr);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient
                             ,3);
    (*(code *)*puVar6)(pIVar1,appId,puVar6[1]);
    return;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CallShow() */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
     MediationTestSuite_CallShow_1(MediationTestSuite *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IMediationTestClient *)0x0) {
    func_?(4,TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient,
                    pIVar1);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleMediationTestSuiteDismissed(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
     MediationTestSuite_HandleMediationTestSuiteDismissed
               (MediationTestSuite *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started == 0)
     ) {
    func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  }
  if (TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->static_fields->
      OnMediationTestSuiteDismissed != (EventHandler_1_EventArgs_ *)0x0) {
    if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).
                Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started ==
        0)) {
      func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
    }
    this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
              TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->static_fields->
              OnMediationTestSuiteDismissed;
    if (this_00 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
              );
  }
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
     MediationTestSuite_Show(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started == 0)
     ) {
    func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started == 0)
     ) {
    func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  }
  pMVar1 = TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->static_fields->
           instance;
  if (pMVar1 != (MediationTestSuite *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pIVar2 = (pMVar1->fields).client;
    if (pIVar2 != (IMediationTestClient *)0x0) {
      func_?(4,TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient,
                      pIVar2);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Show(String) */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
     MediationTestSuite_Show_1(String *appId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started == 0)
     ) {
    func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started == 0)
     ) {
    func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  }
  pMVar1 = TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->static_fields->
           instance;
  if (pMVar1 != (MediationTestSuite *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pIVar2 = (pMVar1->fields).client;
    if (pIVar2 != (IMediationTestClient *)0x0) {
      pIVar3 = pIVar2->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)
              TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient) {
            iVar6 = pIVar3->interfaceOffsets[uVar4].offset;
            (*(code *)(&(pIVar2->klass->vtable).Show)[iVar6].method)
                      (pIVar2,appId,(&(pIVar2->klass->vtable).Show_1)[iVar6].methodPtr);
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      puVar7 = (undefined4 *)
               func_?(pIVar2,
                               TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient
                               ,3);
      (*(code *)*puVar7)(pIVar2,appId,puVar7[1]);
      return;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MediationTestSuite() */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
     MediationTestSuite__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (MediationTestSuite *)
         func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  MediationTestSuite__ctor(this,(MethodInfo *)0x0);
  TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->static_fields->instance =
       this;
  return;
}


/* MediationTestSuite() */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
     MediationTestSuite__ctor(MediationTestSuite *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started == 0)
     ) {
    func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Common__DummyClient);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_EBX);
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
    (this->fields).client = (IMediationTestClient *)this_00;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite__HandleMediationTestSuiteDismissed_System__Object__System__EventArgs_
               ,
               MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
              );
    if (this_00 != (ScaleAnimationBase *)0x0) {
      pSVar4 = this_00->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pSVar4->_1).rank;
      uVar6._1_1_ = (pSVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pSVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)
              TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient) {
            ppMVar7 = &(&(this_00->klass->vtable).Equals)[pSVar4->interfaceOffsets[uVar5].offset].
                       method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      ppMVar7 = (MethodInfo **)
                func_?(this_00,
                                TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient
                                ,0);
code_?:
      (*(code *)*ppMVar7)(this_00,ppMVar7[1]);
      return;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void add_OnMediationTestSuiteDismissed(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
     MediationTestSuite_add_OnMediationTestSuiteDismissed
               (EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started == 0)
     ) {
    func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  }
  a = TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->static_fields->
      OnMediationTestSuiteDismissed;
  do {
    if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).
                Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started ==
        0)) {
      func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
    }
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
    pEVar4 = (EventHandler_1_EventArgs_ *)
             func_?(&TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->
                              static_fields->OnMediationTestSuiteDismissed,pDVar2,a);
    bVar5 = pEVar4 == a;
    a = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* MediationTestSuite get_Instance() */

MediationTestSuite *
Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
MediationTestSuite_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started == 0)
     ) {
    func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  }
  return TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->static_fields->
         instance;
}


/* Void remove_OnMediationTestSuiteDismissed(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
     MediationTestSuite_remove_OnMediationTestSuiteDismissed
               (EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started == 0)
     ) {
    func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  }
  source = TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->static_fields->
           OnMediationTestSuiteDismissed;
  do {
    if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).
                Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started ==
        0)) {
      func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
    }
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
    pEVar4 = (EventHandler_1_EventArgs_ *)
             func_?(&TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->
                              static_fields->OnMediationTestSuiteDismissed,pDVar2,source);
    bVar5 = pEVar4 == source;
    source = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void set_AdRequest(AdRequest) */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
     MediationTestSuite_set_AdRequest(AdRequest *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started == 0)
     ) {
    func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->_1).cctor_started == 0)
     ) {
    func_?(TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite);
  }
  pMVar1 = TypeInfo__GoogleMobileAdsMediationTestSuite__Api__MediationTestSuite->static_fields->
           instance;
  if (pMVar1 != (MediationTestSuite *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pIVar2 = (pMVar1->fields).client;
    if (pIVar2 != (IMediationTestClient *)0x0) {
      pIVar3 = pIVar2->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)
              TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient) {
            iVar6 = pIVar3->interfaceOffsets[uVar4].offset;
            (*(code *)(&(pIVar2->klass->vtable).set_AdRequest)[iVar6].method)
                      (pIVar2,value,(&(pIVar2->klass->vtable).Show)[iVar6].methodPtr);
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      puVar7 = (undefined4 *)
               func_?(pIVar2,
                               TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient
                               ,2);
      (*(code *)*puVar7)(pIVar2,value,puVar7[1]);
      return;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_AdRequestImpl(AdRequest) */

void Assembly-CSharp.dll::GoogleMobileAdsMediationTestSuite::Api::MediationTestSuite::
     MediationTestSuite_set_AdRequestImpl
               (MediationTestSuite *this,AdRequest *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IMediationTestClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient
           ) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&(pIVar1->klass->vtable).set_AdRequest)[iVar5].method)
                    (pIVar1,value,(&(pIVar1->klass->vtable).Show)[iVar5].methodPtr);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAdsMediationTestSuite__Common__IMediationTestClient
                             ,2);
    (*(code *)*puVar6)(pIVar1,value,puVar6[1]);
    return;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

