
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
  ppMVar1 = &(this->fields).worldObject;
  *ppMVar1 = wo;
  func_?(ppMVar1,wo);
  ppCVar2 = &(this->fields).chatBubbleAnchor;
  (this->fields).ownerActorNr = ownerActorNr;
  *ppCVar2 = chatBubbleAnchor;
  func_?(ppCVar2,chatBubbleAnchor);
  if (isLocal == 0) {
code_?:
    pAVar3 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,(this->klass->vtable).SetShouldShowUI.methodPtr,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
    pAVar3 = (Action *)0x0;
    if (pAVar5 != (Action *)0x0) {
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar5;
      }
      if (pAVar3 == (Action *)0x0) {
        func_?();
        goto code_?;
      }
    }
    MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
              (pAVar3,(MethodInfo *)0x0);
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
    pMVar7 = (pMVar6->fields).playerContainer;
    if (pMVar7 == (MVPlayerContainer *)0x0) goto code_?;
    pAVar3 = (pMVar7->fields).OnPlayerListChanged;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,(this->klass->vtable).SetShouldShowUI.methodPtr,
               (MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
      _UNK_? = (Delegate *)0x0;
    }
    else {
      pDVar9 = (Delegate *)0x0;
      if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
        pDVar9 = pDVar8;
      }
      if (pDVar9 == (Delegate *)0x0) goto code_?;
      pDVar10 = (Delegate *)0x0;
      if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
        pDVar10 = pDVar8;
      }
      _UNK_? = pDVar9;
      if (pDVar10 == (Delegate *)0x0) goto code_?;
    }
    func_?();
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 != (MVNetworkGame *)0x0) {
      pMVar11 = (pMVar6->fields).teamManager;
      pEVar12 = (EventHandler_1_Object_ *)func_?();
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar12,(Object *)this,
                 MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar11 != (MVTeamManager *)0x0) {
        MVTeamManager::MVTeamManager_add_OnTeamAdded
                  (pMVar11,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pEVar12,(MethodInfo *)0x0)
        ;
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar6 != (MVNetworkGame *)0x0) {
          pMVar11 = (pMVar6->fields).teamManager;
          pEVar12 = (EventHandler_1_Object_ *)func_?();
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    (pEVar12,(Object *)this,
                     MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                     ,(MethodInfo *)0x0);
          if (pMVar11 != (MVTeamManager *)0x0) {
            MVTeamManager::MVTeamManager_add_OnTeamRemoved
                      (pMVar11,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pEVar12,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    pAVar13 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar13,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
code_?:
      func_?();
      goto code_?;
    }
    pAVar13 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?();
    if (pAVar13 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar13;
      iVar14 = func_?();
      if (iVar14 != 0) goto code_?;
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
         (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
    func_?();
    bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pAVar4 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this == (AvatarUIHandler *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,(this->klass->vtable).SetShouldShowUI.methodPtr,
               (MethodInfo *)0x0);
    pAVar6 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
    pAVar4 = (Action *)0x0;
    if (pAVar6 == (Action *)0x0) {
code_?:
      MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                (pAVar4,(MethodInfo *)0x0);
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar7 == (MVNetworkGame *)0x0) {
        return;
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar7 == (MVNetworkGame *)0x0) ||
         (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 == (MVPlayerContainer *)0x0))
      goto code_?;
      pAVar4 = (pMVar8->fields).OnPlayerListChanged;
      pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar5,(Object *)this,(this->klass->vtable).SetShouldShowUI.methodPtr,
                 (MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
      if (pAVar4 == (Action *)0x0) {
        (pMVar8->fields).OnPlayerListChanged = (Action *)0x0;
      }
      else {
        pAVar6 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar4;
        }
        if (pAVar6 == (Action *)0x0) goto code_?;
        (pMVar8->fields).OnPlayerListChanged = pAVar6;
        pAVar6 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar4;
        }
        if (pAVar6 == (Action *)0x0) goto code_?;
      }
      func_?();
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar7 != (MVNetworkGame *)0x0) {
        pMVar9 = (pMVar7->fields).teamManager;
        pEVar10 = (EventHandler_1_Object_ *)func_?();
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar10,(Object *)this,
                   MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                   ,(MethodInfo *)0x0);
        if (pMVar9 != (MVTeamManager *)0x0) {
          MVTeamManager::MVTeamManager_remove_OnTeamAdded
                    (pMVar9,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pEVar10,
                     (MethodInfo *)0x0);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame *)0x0) {
            pMVar9 = (pMVar7->fields).teamManager;
            pEVar10 = (EventHandler_1_Object_ *)func_?();
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar10,(Object *)this,
                       MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar9 != (MVTeamManager *)0x0) {
              MVTeamManager::MVTeamManager_remove_OnTeamRemoved
                        (pMVar9,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pEVar10,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if (pAVar6->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar6;
    }
    if (pAVar4 != (Action *)0x0) goto code_?;
  }
  else {
    pAVar1 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?();
    if (pAVar1 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar1;
      iVar11 = func_?();
      if (iVar11 != 0) goto code_?;
    }
    func_?();
code_?:
    func_?();
code_?:
    func_?();
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

