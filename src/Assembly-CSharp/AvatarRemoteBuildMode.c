
/* Void Activate() */

void Assembly-CSharp.dll::AvatarRemoteBuildMode::AvatarRemoteBuildMode_Activate
               (AvatarRemoteBuildMode *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pAStack_2 = (this->fields).avatarUIHandlerRemote;
  if (pAStack_2 != (AvatarUIHandlerRemote *)0x0) {
    pIStack_1 = (pAStack_2->klass->vtable).Deactivate.methodPtr;
    (*(code *)(pAStack_2->klass->vtable).Activate.method)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::AvatarRemoteBuildMode::AvatarRemoteBuildMode_Deactivate
               (AvatarRemoteBuildMode *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pAStack_2 = (this->fields).avatarUIHandlerRemote;
  if (pAStack_2 != (AvatarUIHandlerRemote *)0x0) {
    pIStack_1 = (pAStack_2->klass->vtable).OnPositionChanged.methodPtr;
    (*(code *)(pAStack_2->klass->vtable).Deactivate.method)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(Int32, MVBuildModeAvatar) */

void Assembly-CSharp.dll::AvatarRemoteBuildMode::AvatarRemoteBuildMode_Initialize
               (AvatarRemoteBuildMode *this,int32_t ownerActorNr,MVBuildModeAvatar *avatar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarRemoteBuildMode__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarUIHandlerRemote;
  if (pAVar1 != (AvatarUIHandlerRemote *)0x0) {
    (*(code *)(pAVar1->klass->vtable).Initialize.method)
              (pAVar1,0,avatar,ownerActorNr,(this->fields).chatBubbleAnchor,
               (pAVar1->klass->vtable).Activate.methodPtr);
    if (avatar != (MVBuildModeAvatar *)0x0) {
      pUVar2 = (avatar->fields)._._.PositionChanged;
      ppUVar3 = &(avatar->fields)._._.PositionChanged;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__AvatarRemoteBuildMode__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pUStack4 =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EDI = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pUStack4 ==
          (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
        *ppUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        func_?();
        return;
      }
      pUStack4 =
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar2 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        *ppUVar3 = pUVar2;
        unaff_EDI = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        pUStack4 =
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
        ;
        pUStack4 =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)func_?()
        ;
        if (pUStack4 !=
            (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pUStack4 = unaff_EDI;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::AvatarRemoteBuildMode::AvatarRemoteBuildMode_OnPositionChanged
               (AvatarRemoteBuildMode *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pAVar2 = (this->fields).avatarUIHandlerRemote;
  if (pAVar2 != (AvatarUIHandlerRemote *)0x0) {
    pIStack_1 = (pAVar2->klass->vtable).HandleTeamChange.methodPtr;
    pPStack_3 = positionChangedEventArgs;
    pMStack_4 = arg0;
    (*(code *)(pAVar2->klass->vtable).OnPositionChanged.method)(pAVar2);
    return;
  }
  uVar5 = func_?(&pMStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

