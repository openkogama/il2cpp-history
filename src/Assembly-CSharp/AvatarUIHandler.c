
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
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,(this->klass->vtable).SetShouldShowUI.methodPtr,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar3;
      }
      if (pAVar1 == (Action *)0x0) {
        func_?();
        goto code_?;
      }
    }
    MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
              (pAVar1,(MethodInfo *)0x0);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 == (MVNetworkGame *)0x0) ||
       (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 == (MVPlayerContainer *)0x0))
    goto code_?;
    pAVar1 = (pMVar5->fields).OnPlayerListChanged;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,(this->klass->vtable).SetShouldShowUI.methodPtr,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    if (pDVar6 != (Delegate *)0x0) {
      pDVar7 = (Delegate *)0x0;
      if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
        pDVar7 = pDVar6;
      }
      if (pDVar7 == (Delegate *)0x0) goto code_?;
      pDVar7 = (Delegate *)0x0;
      if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
        pDVar7 = pDVar6;
      }
      if (pDVar7 == (Delegate *)0x0) goto code_?;
    }
    func_?();
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pMVar8 = (pMVar4->fields).teamManager;
      pEVar9 = (EventHandler_1_Object_ *)func_?();
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar9,(Object *)this,
                 MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar8 != (MVTeamManager *)0x0) {
        MVTeamManager::MVTeamManager_add_OnTeamAdded
                  (pMVar8,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pEVar9,(MethodInfo *)0x0)
        ;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar4 != (MVNetworkGame *)0x0) {
          pMVar8 = (pMVar4->fields).teamManager;
          pEVar9 = (EventHandler_1_Object_ *)func_?();
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    (pEVar9,(Object *)this,
                     MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                     ,(MethodInfo *)0x0);
          if (pMVar8 != (MVTeamManager *)0x0) {
            MVTeamManager::MVTeamManager_add_OnTeamRemoved
                      (pMVar8,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pEVar9,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    pAVar10 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar10,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
code_?:
      func_?();
      goto code_?;
    }
    pAVar10 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?();
    if (pAVar10 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar10;
      iVar11 = func_?();
      if (iVar11 != 0) goto code_?;
    }
code_?:
    func_?();
code_?:
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
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar2 != (Delegate *)0x0) {
    pAVar1 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?();
    if (pAVar1 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar1;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
    }
    func_?();
    goto code_?;
  }
  TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
       (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
  func_?();
  bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar4 == 0) {
    return;
  }
  pAVar5 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                     ((MethodInfo *)0x0);
  pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  if (this == (AvatarUIHandler *)0x0) goto code_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar6,(Object *)this,(this->klass->vtable).SetShouldShowUI.methodPtr,(MethodInfo *)0x0
            );
  pAVar7 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
  pAVar5 = (Action *)0x0;
  if (pAVar7 == (Action *)0x0) {
code_?:
    MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
              (pAVar5,(MethodInfo *)0x0);
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar8 == (MVNetworkGame *)0x0) {
      return;
    }
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar8 == (MVNetworkGame *)0x0) ||
       (pMVar9 = (pMVar8->fields).playerContainer, pMVar9 == (MVPlayerContainer *)0x0))
    goto code_?;
    pAVar5 = (pMVar9->fields).OnPlayerListChanged;
    pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar6,(Object *)&UNK_?,*(void **)(_UNK_? + 0x104),(MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      (pMVar9->fields).OnPlayerListChanged = (Action *)0x0;
code_?:
      func_?();
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar8 != (MVNetworkGame *)0x0) {
        pMVar10 = (pMVar8->fields).teamManager;
        pEVar11 = (EventHandler_1_Object_ *)func_?();
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar11,(Object *)&UNK_?,
                   MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                   ,(MethodInfo *)0x0);
        if (pMVar10 != (MVTeamManager *)0x0) {
          MVTeamManager::MVTeamManager_remove_OnTeamAdded
                    (pMVar10,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pEVar11,
                     (MethodInfo *)0x0);
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar8 != (MVNetworkGame *)0x0) {
            pMVar10 = (pMVar8->fields).teamManager;
            pEVar11 = (EventHandler_1_Object_ *)func_?();
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar11,(Object *)&UNK_?,
                       MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar10 != (MVTeamManager *)0x0) {
              MVTeamManager::MVTeamManager_remove_OnTeamRemoved
                        (pMVar10,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pEVar11,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 != (Action *)0x0) {
      (pMVar9->fields).OnPlayerListChanged = pAVar7;
      pAVar7 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar5;
      }
      if (pAVar7 != (Action *)0x0) goto code_?;
    }
code_?:
    func_?();
  }
  else {
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar7;
    }
    if (pAVar5 != (Action *)0x0) goto code_?;
  }
  func_?();
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
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        text.m_Index = 0;
        if (TVar2.m_Index == 0) {
code_?:
          ChatBubbleManager::ChatBubbleManager_ShowChatBubble
                    ((String *)text.m_Index,anchorId,(this->fields).chatBubbleAnchor,
                     (MethodInfo *)0x0);
          return;
        }
        if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
          text = TVar2;
        }
        if ((String *)text.m_Index != (String *)0x0) goto code_?;
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

