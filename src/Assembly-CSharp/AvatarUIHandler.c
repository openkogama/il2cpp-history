
/* Void ForceDestroy() */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_ForceDestroy
               (AvatarUIHandler *this,MethodInfo *method)

{
  (*(this->klass->vtable).OnDestroy.methodPtr)(this,(this->klass->vtable).OnDestroy.method);
  return;
}


/* Void HandleTeamChange(Object, TeamEventArgs) */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_HandleTeamChange
               (AvatarUIHandler *this,Object *sender,TeamEventArgs *eventArgs,MethodInfo *method)

{
  (*(this->klass->vtable).HandleTeamChange.methodPtr)
            (this,(this->klass->vtable).HandleTeamChange.method);
  return;
}


/* Void Initialize(Boolean, MVWorldObjectClient, Int32, ChatAnchor) */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_Initialize
               (AvatarUIHandler *this,bool isLocal,MVWorldObjectClient *wo,int32_t ownerActorNr,
               ChatAnchor *chatBubbleAnchor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                   );
    func_?(&
                    MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    cRam_? = '\x01';
  }
  (this->fields).worldObject = wo;
  func_?(&(this->fields).worldObject,wo);
  (this->fields).ownerActorNr = ownerActorNr;
  (this->fields).chatBubbleAnchor = chatBubbleAnchor;
  func_?(&(this->fields).chatBubbleAnchor,chatBubbleAnchor);
  if (isLocal == 0) {
code_?:
    pAVar1 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (pNVar2 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,(this->klass->vtable).HandleTeamChange.method,(MethodInfo *)0x0
              );
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar3;
      }
      pAVar4 = TypeInfo__System__Action;
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
              (pAVar1,(MethodInfo *)0x0);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 == (MVNetworkGame *)0x0) ||
       (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0))
    goto code_?;
    pAVar1 = (pMVar6->fields).OnPlayerListChanged;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (pNVar2 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,(this->klass->vtable).HandleTeamChange.method,(MethodInfo *)0x0
              );
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      (pMVar6->fields).OnPlayerListChanged = (Action *)0x0;
code_?:
      func_?();
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame *)0x0) {
        pMVar7 = (pMVar5->fields).teamManager;
        pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
        if (pUVar8 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar8,(Object *)this,
                     MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                     ,(MethodInfo *)0x0);
          if (pMVar7 != (MVTeamManager *)0x0) {
            MVTeamManager::MVTeamManager_add_OnTeamAdded
                      (pMVar7,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar8,
                       (MethodInfo *)0x0);
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar5 != (MVNetworkGame *)0x0) {
              pMVar7 = (pMVar5->fields).teamManager;
              pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
                        func_?(
                                       TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>
                                       );
              if (pUVar8 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar8,(Object *)this,
                           MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                           ,(MethodInfo *)0x0);
                if (pMVar7 != (MVTeamManager *)0x0) {
                  MVTeamManager::MVTeamManager_add_OnTeamRemoved
                            (pMVar7,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar8,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 != (Action *)0x0) {
      (pMVar6->fields).OnPlayerListChanged = pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      if (pAVar3 != (Action *)0x0) goto code_?;
    }
  }
  else {
    pAVar9 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
    this_00 = (Action_2_Int32Enum_Object_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    if (this_00 == (Action_2_Int32Enum_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar9,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar10 == (Delegate *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
code_?:
      func_?();
      goto code_?;
    }
    pAVar9 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?();
    if (pAVar9 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar9;
      iVar11 = func_?();
      if (iVar11 != 0) goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
  pAVar3 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pAVar3,pAVar4);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_OnDestroy
               (AvatarUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                   );
    func_?(&
                    MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
  this_00 = (Action_2_Int32Enum_Object_ *)
            func_?(
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
  if (this_00 == (Action_2_Int32Enum_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pAVar2 = extraout_ECX;
    pAVar3 = extraout_EDX;
  }
  else {
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
    }
    else {
      pAVar1 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)func_?();
      if (pAVar1 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) goto code_?;
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar1;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    bVar6 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
    if (bVar6 == 0) {
      return;
    }
    pAVar7 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if ((pNVar8 == (NavMesh_OnNavMeshPreUpdate *)0x0) || (this == (AvatarUIHandler *)0x0))
    goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar8,(Object *)this,(this->klass->vtable).HandleTeamChange.method,(MethodInfo *)0x0
              );
    pAVar2 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
    pAVar7 = (Action *)0x0;
    if (pAVar2 == (Action *)0x0) {
code_?:
      MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                (pAVar7,(MethodInfo *)0x0);
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar9 == (MVNetworkGame *)0x0) {
        return;
      }
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar9 == (MVNetworkGame *)0x0) ||
         (pMVar10 = (pMVar9->fields).playerContainer, pMVar10 == (MVPlayerContainer *)0x0))
      goto code_?;
      pAVar7 = (pMVar10->fields).OnPlayerListChanged;
      pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (pNVar8 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar8,(Object *)this,(this->klass->vtable).HandleTeamChange.method,
                 (MethodInfo *)0x0);
      pAVar7 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
      if (pAVar7 == (Action *)0x0) {
        (pMVar10->fields).OnPlayerListChanged = (Action *)0x0;
code_?:
        func_?();
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar9 != (MVNetworkGame *)0x0) {
          pMVar11 = (pMVar9->fields).teamManager;
          pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
          if ((pUVar12 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
             (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar12,(Object *)this,
                         MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                         ,(MethodInfo *)0x0), pMVar11 != (MVTeamManager *)0x0)) {
            MVTeamManager::MVTeamManager_remove_OnTeamAdded
                      (pMVar11,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar12,
                       (MethodInfo *)0x0);
            pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar9 != (MVNetworkGame *)0x0) {
              pMVar11 = (pMVar9->fields).teamManager;
              pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                        func_?(
                                       TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>
                                       );
              if ((pUVar12 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
                 (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (pUVar12,(Object *)this,
                             MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                             ,(MethodInfo *)0x0), pMVar11 != (MVTeamManager *)0x0)) {
                MVTeamManager::MVTeamManager_remove_OnTeamRemoved
                          (pMVar11,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar12,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto code_?;
      }
      pAVar2 = (Action *)0x0;
      if (pAVar7->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar7;
      }
      if (pAVar2 != (Action *)0x0) {
        (pMVar10->fields).OnPlayerListChanged = pAVar2;
        pAVar2 = (Action *)0x0;
        if (pAVar7->klass == TypeInfo__System__Action) {
          pAVar2 = pAVar7;
        }
        if (pAVar2 != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar2;
    }
    pAVar3 = TypeInfo__System__Action;
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  func_?(pAVar2,pAVar3);
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnSayChatMessageRecieved(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_OnSayChatMessageRecieved
               (AvatarUIHandler *this,int32_t actorNr,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if ((this->fields).ownerActorNr != actorNr) {
    return;
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
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
      key = (Object *)func_?(TypeInfo__System__Byte);
      if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pSVar2 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        text = (String *)0x0;
        if (pSVar2 == (String *)0x0) {
code_?:
          ChatBubbleManager::ChatBubbleManager_ShowChatBubble
                    (text,anchorId,(this->fields).chatBubbleAnchor,(MethodInfo *)0x0);
          return;
        }
        if (pSVar2->klass == TypeInfo__System__String) {
          text = pSVar2;
        }
        if (text != (String *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

