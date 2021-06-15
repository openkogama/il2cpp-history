
/* Void Activate() */

void Assembly-CSharp.dll::AvatarRemoteBuildMode::AvatarRemoteBuildMode_Activate
               (AvatarRemoteBuildMode *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarUIHandlerRemote;
  if (pAVar1 != (AvatarUIHandlerRemote *)0x0) {
    (*(code *)(pAVar1->klass->vtable).Activate.method)
              (pAVar1,(pAVar1->klass->vtable).Deactivate.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::AvatarRemoteBuildMode::AvatarRemoteBuildMode_Deactivate
               (AvatarRemoteBuildMode *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarUIHandlerRemote;
  if (pAVar1 != (AvatarUIHandlerRemote *)0x0) {
    (*(code *)(pAVar1->klass->vtable).Deactivate.method)
              (pAVar1,(pAVar1->klass->vtable).OnPositionChanged.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Int32, MVBuildModeAvatar) */

void Assembly-CSharp.dll::AvatarRemoteBuildMode::AvatarRemoteBuildMode_Initialize
               (AvatarRemoteBuildMode *this,int32_t ownerActorNr,MVBuildModeAvatar *avatar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarUIHandlerRemote;
  if (pAVar1 != (AvatarUIHandlerRemote *)0x0) {
    (*(code *)(pAVar1->klass->vtable).Initialize.method)
              (pAVar1,0,avatar,ownerActorNr,(this->fields).chatBubbleAnchor,
               (pAVar1->klass->vtable).Activate.methodPtr);
    if (avatar != (MVBuildModeAvatar *)0x0) {
      pUVar2 = (avatar->fields)._._.PositionChanged;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__AvatarRemoteBuildMode__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
code_?:
        (avatar->fields)._._.PositionChanged = pUVar2;
        return;
      }
      if (pUVar3->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar2 = pUVar3;
      }
      pUStack4 =
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      if (pUVar2 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pUStack4 = extraout_EDX;
code_?:
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
  pAVar1 = (this->fields).avatarUIHandlerRemote;
  if (pAVar1 != (AvatarUIHandlerRemote *)0x0) {
    (*(code *)(pAVar1->klass->vtable).OnPositionChanged.method)
              (pAVar1,arg0,positionChangedEventArgs,
               (pAVar1->klass->vtable).HandleTeamChange.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

