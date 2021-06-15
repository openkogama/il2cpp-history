
/* Void ForceDestroy() */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_ForceDestroy
               (AvatarUIHandler *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).OnDestroy.method)(this,this->klass[1]._0.image);
  return;
}


/* Void HandleTeamChange(Object, TeamEventArgs) */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_HandleTeamChange
               (AvatarUIHandler *this,Object *sender,TeamEventArgs *eventArgs,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).HandleTeamChange.method)
            (this,(this->klass->vtable).SetShouldShowUI.methodPtr);
  return;
}


/* Void Initialize(Boolean, MVWorldObjectClient, Int32, ChatAnchor) */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_Initialize
               (AvatarUIHandler *this,bool isLocal,MVWorldObjectClient *wo,int32_t ownerActorNr,
               ChatAnchor *chatBubbleAnchor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).worldObject = wo;
  (this->fields).ownerActorNr = ownerActorNr;
  (this->fields).chatBubbleAnchor = chatBubbleAnchor;
  if (isLocal == 0) {
code_?:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pAVar1 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,(this->klass->vtable).SetShouldShowUI.methodPtr,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar3;
      }
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
              (pAVar1,(MethodInfo *)0x0);
    this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVAvatar *)0x0) {
      pMVar4 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
      if (pMVar4 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        pDVar5 = (Delegate *)(pMVar4->fields)._._.sendInterval;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,(this->klass->vtable).SetShouldShowUI.methodPtr,
                   (MethodInfo *)0x0);
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
        pDVar5 = (Delegate *)0x0;
        if (pDVar6 != (Delegate *)0x0) {
          if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
            pDVar5 = pDVar6;
          }
          if (pDVar5 == (Delegate *)0x0) goto code_?;
        }
        (pMVar4->fields)._._.sendInterval = (float)pDVar5;
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkGame *)0x0) {
          pSVar8 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                              ((DayNightCycle *)pMVar7,(MethodInfo *)0x0);
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                     ,
                     MethodInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>__EventHandler_System__Object__void__
                    );
          if (pSVar8 != (SkyParam *)0x0) {
            MVTeamManager::MVTeamManager_add_OnTeamAdded
                      ((MVTeamManager *)pSVar8,
                       (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar2,(MethodInfo *)0x0);
            pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar7 != (MVNetworkGame *)0x0) {
              pSVar8 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                  ((DayNightCycle *)pMVar7,(MethodInfo *)0x0);
              pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar2,(Object *)this,
                         MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                         ,
                         MethodInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>__EventHandler_System__Object__void__
                        );
              if (pSVar8 != (SkyParam *)0x0) {
                MVTeamManager::MVTeamManager_add_OnTeamRemoved
                          ((MVTeamManager *)pSVar8,
                           (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar2,(MethodInfo *)0x0)
                ;
                return;
              }
            }
          }
        }
      }
    }
    uVar9 = func_?();
  }
  else {
    pAVar10 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,
               MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
              );
    pAVar11 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar10,(Delegate *)pUVar2,(MethodInfo *)0x0);
    uVar9 = CONCAT44(TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                      ,pAVar11);
    pAVar10 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
              )0x0;
    if (pAVar11 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
code_?:
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar10;
      goto code_?;
    }
    if (pAVar11->klass ==
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
       ) {
      pAVar10 = pAVar11;
    }
    if (pAVar10 !=
        (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0)
    goto code_?;
  }
  func_?(uVar9);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_OnDestroy
               (AvatarUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,
             MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
            );
  pAVar3 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
            0x0;
  if (pAVar3 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)0x0) {
code_?:
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar5 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    if (this == (AvatarUIHandler *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,(this->klass->vtable).SetShouldShowUI.methodPtr,
               (MethodInfo *)0x0);
    pAVar6 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pAVar5 = (Action *)0x0;
    if (pAVar6 != (Action *)0x0) {
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar6;
      }
      if (pAVar5 == (Action *)0x0) goto code_?;
    }
    MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
              (pAVar5,(MethodInfo *)0x0);
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar7 == (MVNetworkGame *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 == (MVAvatar *)0x0) ||
       (pMVar8 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
       pMVar8 == (MVRuntimeDataVariableClampedFloat *)0x0)) goto code_?;
    pDVar9 = (Delegate *)(pMVar8->fields)._._.sendInterval;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,(this->klass->vtable).SetShouldShowUI.methodPtr,
               (MethodInfo *)0x0);
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar9,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pDVar9 = (Delegate *)0x0;
    if (pDVar10 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar10->klass == TypeInfo__System__Action) {
        pDVar9 = pDVar10;
      }
      if (pDVar9 == (Delegate *)0x0) goto code_?;
    }
    (pMVar8->fields)._._.sendInterval = (float)pDVar9;
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar7 != (MVNetworkGame *)0x0) {
      pSVar11 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)pMVar7,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                 ,
                 MethodInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>__EventHandler_System__Object__void__
                );
      if (pSVar11 != (SkyParam *)0x0) {
        MVTeamManager::MVTeamManager_remove_OnTeamAdded
                  ((MVTeamManager *)pSVar11,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar2,
                   (MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkGame *)0x0) {
          pSVar11 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                              ((DayNightCycle *)pMVar7,(MethodInfo *)0x0);
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                     ,
                     MethodInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>__EventHandler_System__Object__void__
                    );
          if (pSVar11 != (SkyParam *)0x0) {
            MVTeamManager::MVTeamManager_remove_OnTeamRemoved
                      ((MVTeamManager *)pSVar11,
                       (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    if (pAVar3->klass ==
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
       ) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 !=
        (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0)
    goto code_?;
    func_?();
code_?:
    func_?();
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnSayChatMessageRecieved(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_OnSayChatMessageRecieved
               (AvatarUIHandler *this,int32_t actorNr,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).ownerActorNr != actorNr) {
    return;
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_00 = (this->fields).chatBubbleAnchor;
    if (this_00 != (ChatAnchor *)0x0) {
      anchorId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                           ((Object_1 *)this_00,(MethodInfo *)0x0);
      key = (Type *)func_?(TypeInfo__System__Byte);
      if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)data,key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        text = (Pool *)0x0;
        if (pPVar2 == (Pool *)0x0) {
code_?:
          ChatBubbleManager::ChatBubbleManager_ShowChatBubble
                    ((String *)text,anchorId,(this->fields).chatBubbleAnchor,(MethodInfo *)0x0);
          return;
        }
        if ((String__Class *)pPVar2->klass == TypeInfo__System__String) {
          text = pPVar2;
        }
        if (text != (Pool *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

