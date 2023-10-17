
/* Void Initialize(MVAvatar, Boolean) */

void Assembly-CSharp.dll::AvatarRemote::AvatarRemote_Initialize
               (AvatarRemote *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarRemote__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&
                    InteractionDataHandlerBase_MethodInfo__UnityEngine__Component__GetComponent<InteractionDataHandlerBase>__
                   );
    cRam_? = '\x01';
  }
  (this->fields)._.mvAvatar = mvAvatar;
  func_?(&(this->fields)._.mvAvatar,mvAvatar);
  if (((mvAvatar != (MVAvatar *)0x0) && (pMVar1 = (mvAvatar->fields).body, pMVar1 != (MVBody *)0x0))
     && (pAVar2 = (this->fields)._.avatarFader, pAVar2 != (AvatarFader *)0x0)) {
    pTVar3 = (pMVar1->fields)._._._.transform;
    (pAVar2->fields).bodyTransform = pTVar3;
    func_?(&(pAVar2->fields).bodyTransform,pTVar3);
    (this->fields)._.isLocal = isLocal;
    pIVar4 = (InteractionDataHandlerBase *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        InteractionDataHandlerBase_MethodInfo__UnityEngine__Component__GetComponent<InteractionDataHandlerBase>__
                       );
    (this->fields)._.interactionDataHandler = pIVar4;
    func_?(&(this->fields)._.interactionDataHandler,pIVar4);
    pCVar5 = (Collider *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                       );
    (this->fields)._.avatarCollider = pCVar5;
    func_?(&(this->fields)._.avatarCollider,pCVar5);
    this_00 = (this->fields)._.avatarLevelUp;
    if (this_00 != (AvatarLevelUp *)0x0) {
      AvatarLevelUp::AvatarLevelUp_Init
                (this_00,(mvAvatar->fields)._._._.ownerActorNr,(MethodInfo *)0x0);
      pWVar6 = (this->fields)._.waterSplashComponent;
      if (pWVar6 != (WaterSplashComponent *)0x0) {
        (*(pWVar6->klass->vtable).Initialize.methodPtr)
                  (pWVar6,this,(pWVar6->klass->vtable).Initialize.method);
        pAVar7 = (this->fields)._.avatarUIHandler;
        if (pAVar7 != (AvatarUIHandler *)0x0) {
          (*(pAVar7->klass->vtable).Initialize.methodPtr)
                    (pAVar7,(uint)(this->fields)._.isLocal,mvAvatar,
                     (mvAvatar->fields)._._._.ownerActorNr,(this->fields)._.chatBubbleAnchor,
                     (pAVar7->klass->vtable).Initialize.method);
          this_01 = (this->fields)._.chatBubbleAnchor;
          if (this_01 != (ChatAnchor *)0x0) {
            ChatAnchor::ChatAnchor_Initialize(this_01,isLocal,(Avatar *)this,(MethodInfo *)0x0);
            this_02 = (this->fields)._.avatarPaused;
            if (this_02 != (AvatarPaused *)0x0) {
              WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_Init
                        (this_02,(mvAvatar->fields)._._._.ownerActorNr,(MethodInfo *)0x0);
              pUVar8 = (mvAvatar->fields)._._.PositionChanged;
              this_03 = (UnityAction_2_System_Object_System_Object_ *)
                        func_?(
                                       TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                       );
              if (this_03 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (this_03,(Object *)this,
                           MethodInfo__AvatarRemote__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                           ,(MethodInfo *)0x0);
                pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pUVar8,(Delegate *)this_03,(MethodInfo *)0x0);
                if (pDVar9 == (Delegate *)0x0) {
                  (mvAvatar->fields)._._.PositionChanged =
                       (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
                  func_?();
                  return;
                }
                pUVar8 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                          func_?();
                if (pUVar8 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
                  (mvAvatar->fields)._._.PositionChanged = pUVar8;
                  iVar10 = func_?();
                  if (iVar10 != 0) {
                    func_?();
                    return;
                  }
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::AvatarRemote::AvatarRemote_OnPositionChanged
               (AvatarRemote *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pAVar2 = (this->fields)._.avatarUIHandler;
  if (pAVar2 != (AvatarUIHandler *)0x0) {
    pMStack_1 = (pAVar2->klass->vtable).OnPositionChanged.method;
    pPStack_3 = positionChangedEventArgs;
    pMStack_4 = arg0;
    (*(pAVar2->klass->vtable).OnPositionChanged.methodPtr)(pAVar2);
    return;
  }
  uVar5 = func_?(&pMStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

