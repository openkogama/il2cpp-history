
/* Void Activate() */

void Assembly-CSharp.dll::AvatarRemoteBuildMode::AvatarRemoteBuildMode_Activate
               (AvatarRemoteBuildMode *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarUIHandlerRemote;
  if (pAVar1 != (AvatarUIHandlerRemote *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->klass->vtable).Activate.methodPtr)(pAVar1,(pAVar1->klass->vtable).Activate.method);
    return;
  }
  FUN_?();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->klass->vtable).Deactivate.methodPtr)
              (pAVar1,(pAVar1->klass->vtable).Deactivate.method);
    return;
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__AvatarRemoteBuildMode__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarUIHandlerRemote;
  if ((pAVar1 == (AvatarUIHandlerRemote *)0x0) ||
     ((*(pAVar1->klass->vtable).Initialize.methodPtr)
                (pAVar1,0,avatar,(ulonglong)(uint)ownerActorNr,(this->fields).chatBubbleAnchor,
                 (pAVar1->klass->vtable).Initialize.method), avatar == (MVBuildModeAvatar *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar3 = (avatar->fields)._._.PositionChanged;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarRemoteBuildMode__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
  ;
  if (pDVar4 == (Delegate *)0x0) {
    (avatar->fields)._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
             FUN_?(pDVar4,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (pUVar3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar4,pUVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (avatar->fields)._._.PositionChanged = pUVar3;
    pUVar5 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar6 = FUN_?(pDVar4,
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
    if (lVar6 == 0) {
      FUN_?(pDVar4,pUVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(avatar->fields)._._.PositionChanged >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::AvatarRemoteBuildMode::AvatarRemoteBuildMode_OnPositionChanged
               (AvatarRemoteBuildMode *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarUIHandlerRemote;
  if (pAVar1 != (AvatarUIHandlerRemote *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->klass->vtable).OnPositionChanged.methodPtr)();
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

