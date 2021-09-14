
/* Void Activate() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_Activate
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sayChatBubbleHandler;
  if (this_00 != (SayChatBubbleHandler *)0x0) {
    SpawnRoleSelectionButton::SpawnRoleSelectionButton_OnPointerEnter
              ((SpawnRoleSelectionButton *)this_00,(PointerEventData *)0x0,unaff_EDI);
    this_01 = (this->fields).teamIconRenderer;
    value = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
    if (this_01 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (this_01,value,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame *)0x0) {
        this_03 = (PrefabPool *)
                  MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
        if (this_03 != (PrefabPool *)0x0) {
          this_04 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                              (this_03,(MethodInfo *)0x0);
          this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_05,(Object *)this,MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__,
                     (MethodInfo *)0x0);
          if (this_04 != (ObjectiveArrow *)0x0) {
            BoostController::BoostController_SubscribeToBoostChanged
                      ((BoostController *)this_04,BoostType__Enum_XRayVision,(Action *)this_05,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_Deactivate
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sayChatBubbleHandler;
  if (this_00 != (SayChatBubbleHandler *)0x0) {
    SayChatBubbleHandler::SayChatBubbleHandler_Deactivate(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = (PrefabPool *)
                MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (this_02 != (PrefabPool *)0x0) {
        this_03 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            (this_02,(MethodInfo *)0x0);
        this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_04,(Object *)this,MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__,
                   (MethodInfo *)0x0);
        if (this_03 != (ObjectiveArrow *)0x0) {
          BoostController::BoostController_UnSubscribeToBoostChanged
                    ((BoostController *)this_03,BoostType__Enum_XRayVision,(Action *)this_04,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleTeamChange() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_HandleTeamChange
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  AvatarUIHandlerRemote_UpdateNameTag(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_IsOnSameTeam_1
                        ((MVPlayer *)this_01,(unaff_ESI->fields)._.worldObject,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        AvatarUIHandlerRemote_SetHealthBarColor(unaff_ESI,0,(MethodInfo *)0x0);
        return;
      }
      AvatarUIHandlerRemote_SetHealthBarColor(unaff_ESI,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HideUI() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_HideUI
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).SetShouldShowUI.method)
            (this,0,(this->klass->vtable).OnDestroy.methodPtr);
  return;
}


/* Void Initialize(Boolean, MVWorldObjectClient, Int32, ChatAnchor) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_Initialize
               (AvatarUIHandlerRemote *this,bool isLocal,MVWorldObjectClient *wo,
               int32_t ownerActorNr,ChatAnchor *chatBubbleAnchor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  AvatarUIHandler::AvatarUIHandler_Initialize
            ((AvatarUIHandler *)this,isLocal,wo,ownerActorNr,chatBubbleAnchor,(MethodInfo *)0x0);
  this_00 = (this->fields).avatarBadge;
  if (this_00 != (AvatarBadge *)0x0) {
    AvatarBadge::AvatarBadge_Initialize(this_00,ownerActorNr,(MethodInfo *)0x0);
    this_01 = (this->fields).teamIconRenderer;
    if (this_01 != (Renderer *)0x0) {
      this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      if (this_05 != (Transform *)0x0) {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe8,this_05,(MethodInfo *)0x0);
        this_04 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>;
        fVar2 = pVVar1->z;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        uVar4 = CONCAT44(this,pUVar3);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__AvatarUIHandlerRemote__OnStateChanged_UnityEngine__CullingGroupEvent_
                   ,
                   MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                  );
        pIVar5 = (Il2CppClass *)func_?();
        position.z = fVar2;
        position.x = (float)(int)uVar4;
        position.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  ((CullingSubscriberBase *)pIVar5,0.5,position,
                   (UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar3,(MethodInfo *)0x0);
        pCVar6 = (Component_1 *)this_04->interfaceOffsets;
        (this_04->_0).parent = pIVar5;
        if (pCVar6 != (Component_1 *)0x0) {
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (pCVar6,(MethodInfo *)0x0);
          if (pGVar7 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar7,1,(MethodInfo *)0x0);
            pCVar6 = (Component_1 *)(this_04->_0).typeMetadataHandle;
            if (pCVar6 != (Component_1 *)0x0) {
              this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_GetComponent_58
                                  (pCVar6,
                                   UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                  );
              if (this_06 != (MVInteractableBase *)0x0) {
                pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                   ((Renderer *)this_06,(MethodInfo *)0x0);
                *(Material **)&(this_04->_0).this_arg.attrs = pMVar8;
                this_02 = (this_04->_0).interopData;
                if (this_02 != (Il2CppInteropData *)0x0) {
                  pIVar5 = (Il2CppClass *)
                           UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                     ((Renderer *)this_02,(MethodInfo *)0x0);
                  (this_04->_0).element_class = pIVar5;
                  pIVar5 = (this_04->_0).klass;
                  if (pIVar5 != (Il2CppClass *)0x0) {
                    pIVar5 = (Il2CppClass *)
                             UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                             Renderer_get_material((Renderer *)pIVar5,(MethodInfo *)0x0);
                    (this_04->_0).castClass = pIVar5;
                    this_03 = (SayChatBubbleHandler *)(this_04->_1).initializationExceptionGCHandle;
                    if (this_03 != (SayChatBubbleHandler *)0x0) {
                      SayChatBubbleHandler::SayChatBubbleHandler_Initialize
                                (this_03,ownerActorNr,chatBubbleAnchor,(MethodInfo *)0x0);
                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                        func_?();
                      }
                      this_07 = (MVAvatar *)
                                MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if (this_07 != (MVAvatar *)0x0) {
                        this_08 = MVAvatar::MVAvatar_get_Shield(this_07,(MethodInfo *)0x0);
                        if (this_08 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                          this_09 = (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                                    MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                              ((MVPlayerContainer *)this_08,ownerActorNr,
                                               (MethodInfo *)0x0);
                          if (this_09 == (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0) {
code_?:
                            AvatarUIHandlerRemote_UpdateNameTag
                                      ((AvatarUIHandlerRemote *)this_04,(MethodInfo *)0x0);
                            AvatarUIHandlerRemote_UpdateHealthBarColor
                                      ((AvatarUIHandlerRemote *)this_04,(MethodInfo *)0x0);
                            if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
                              func_?();
                            }
                            pAVar9 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                               (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
                            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                      *)func_?();
                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                            UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                            SceneManagement::Scene]::
                            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                      (pUVar3,(Object *)this_04,
                                       MethodInfo__AvatarUIHandlerRemote__HideUI__,(MethodInfo *)0x0
                                      );
                            pAVar10 = (Action *)
                                      mscorlib.dll::System::Delegate::Delegate_Combine
                                                ((Delegate *)pAVar9,(Delegate *)pUVar3,
                                                 (MethodInfo *)0x0);
                            pAVar9 = (Action *)0x0;
                            if (pAVar10 == (Action *)0x0) {
code_?:
                              ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                                        (ChatCommand__Enum_HideAllUI,pAVar9,(MethodInfo *)0x0);
                              return;
                            }
                            if (pAVar10->klass == TypeInfo__System__Action) {
                              pAVar9 = pAVar10;
                            }
                            if (pAVar9 != (Action *)0x0) goto code_?;
                            goto code_?;
                          }
                          pGVar7 = (GameObject *)(this_04->_1).cctor_started;
                          this_10 = (SubscriptionRulesWrapper *)
                                    PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                                    PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                              (this_09,(MethodInfo *)0x0);
                          if (this_10 != (SubscriptionRulesWrapper *)0x0) {
                            MVWorldObject.dll::MV::WorldObject::Subscription::
                            SubscriptionRulesWrapper::SubscriptionRulesWrapper_HasBenefit
                                      (this_10,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
                            if (pGVar7 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar7,0,(MethodInfo *)0x0);
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                  }
                }
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


/* Boolean IsOnSameTeamAsLocalAvatar() */

bool Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_IsOnSameTeamAsLocalAvatar
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_IsOnSameTeam_1
                        ((MVPlayer *)this_01,(this->fields)._.worldObject,(MethodInfo *)0x0);
      return bVar1 != 0;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_OnDestroy
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
  }
  obj = (this->fields).avatarNameMaterial;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)(this->fields).avatarHealthMaterial,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame *)0x0) goto code_?;
    this_02 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 == (PrefabPool *)0x0) goto code_?;
    this_03 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(this_02,(MethodInfo *)0x0)
    ;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__,
               (MethodInfo *)0x0);
    if (this_03 == (ObjectiveArrow *)0x0) goto code_?;
    BoostController::BoostController_UnSubscribeToBoostChanged
              ((BoostController *)this_03,BoostType__Enum_XRayVision,(Action *)pUVar2,
               (MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar3 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                     (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__AvatarUIHandlerRemote__HideUI__,(MethodInfo *)0x0);
  pAVar4 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar3,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar3 = (Action *)0x0;
  if (pAVar4 != (Action *)0x0) {
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar4;
    }
    if (pAVar3 == (Action *)0x0) {
      func_?();
code_?:
      func_?(0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
            (ChatCommand__Enum_HideAllUI,pAVar3,(MethodInfo *)0x0);
  AvatarUIHandler::AvatarUIHandler_OnDestroy((AvatarUIHandler *)this,(MethodInfo *)0x0);
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_OnPositionChanged
               (AvatarUIHandlerRemote *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  this_00 = (this->fields).cullingSubscriberBase;
  this_01 = (this->fields).teamIconRenderer;
  if (this_01 != (Renderer *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_01,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
      if (this_00 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,*pVVar1,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_OnStateChanged
               (AvatarUIHandlerRemote *this,CullingGroupEvent cullingEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingEvent,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    this_01 = (this->fields).teamIconRenderer;
    if (this_01 != (Renderer *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnXRayBoostChanged() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_OnXRayBoostChanged
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  this_00 = (this->fields).teamIconRenderer;
  value = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
  if (this_00 != (Renderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetHealthBarColor(Boolean) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
               (AvatarUIHandlerRemote *this,bool isFriendly,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarShieldMaterial;
  fVar2 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  func_?(&stack0xffffffec,0x3dc8c8c9,0x3dc8c8c9,0x3ee0e0e1,0);
  if (pMVar1 != (Material *)0x0) {
    value_00.g = fVar3;
    value_00.r = fVar2;
    value_00.b = fVar4;
    value_00.a = fVar5;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (pMVar1,value_00,(MethodInfo *)0x0);
    pMVar1 = (this->fields).avatarHealthMaterial;
    if (isFriendly == 0) {
      if (pMVar1 != (Material *)0x0) {
        value_01.g = (float)_UNK_?;
        value_01.r = (float)_UNK_?;
        value_01.b = (float)_UNK_?;
        value_01.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar1,value_01,(MethodInfo *)0x0);
        pMVar1 = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          value.g = (float)_UNK_?;
          value.r = (float)_UNK_?;
          value.b = (float)_UNK_?;
          value.a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar1,value,(MethodInfo *)0x0);
          pRVar6 = (this->fields).teamIconRenderer;
          pMVar1 = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
          if (pRVar6 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      (pRVar6,pMVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      if (pMVar1 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar1,*pCVar7,(MethodInfo *)0x0);
        pRVar6 = (this->fields).teamIconRenderer;
        if (pRVar6 != (Renderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    (pRVar6,(this->fields).teamIconMaterial,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetShouldShowUI(Boolean) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetShouldShowUI
               (AvatarUIHandlerRemote *this,bool shouldShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarBadge;
  (this->fields)._.shouldShowUI = shouldShow;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).avatarBadge;
    if ((pAVar1 == (AvatarBadge *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pAVar1,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,shouldShow,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).healthBar;
  if ((this_00 != (HealthBar *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,shouldShow,(MethodInfo *)0x0);
    this_01 = (this->fields).shieldBar;
    if ((this_01 != (ShieldBar *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_01,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,shouldShow,(MethodInfo *)0x0);
      if ((this->fields).shouldShowMobileIcon != 0) {
        this_02 = (this->fields).mobileIcon;
        if ((this_02 == (MeshRenderer *)0x0) ||
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_02,(MethodInfo *)0x0),
           pGVar3 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,shouldShow,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_03 = (this->fields).nameTagLabel;
      (this->fields).nameTagLabelVisible = shouldShow;
      if (this_03 != (Transform *)0x0) {
        this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                  Component_1_GetComponentsInChildren_12
                            ((Component_1 *)this_03,1,
                             UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>_bool_____
                            );
        uVar4 = 0;
        if (this_05 != (Renderer__Array *)0x0) {
          ppRVar5 = this_05->vector;
          for (; (int)uVar4 < (int)this_05->max_length; uVar4 = uVar4 + 1) {
            if (this_05->max_length <= uVar4) goto code_?;
            this_05 = (Renderer__Array *)*ppRVar5;
            if (this_05 == (Renderer__Array *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      ((Renderer *)this_05,(this->fields).nameTagLabelVisible,(MethodInfo *)0x0);
            ppRVar5 = ppRVar5 + 1;
          }
          this_04 = (this->fields).teamIcon;
          if ((this_04 != (TeamIconScaleWithDistance *)0x0) &&
             (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_04,(MethodInfo *)0x0),
             pGVar3 != (GameObject *)0x0)) {
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)func_?(), pcVar6 == (code *)0x0)) {
              func_?();
              func_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)();
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowMobileIcon(BuildTarget) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_ShowMobileIcon
               (AvatarUIHandlerRemote *this,BuildTarget__Enum bT,MethodInfo *method)

{
  pMVar1 = (this->fields).mobileIcon;
  if (pMVar1 != (MeshRenderer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      if ((undefined1)bT == BuildTarget__Enum_Android) {
        pMVar1 = (this->fields).mobileIcon;
        if (pMVar1 != (MeshRenderer *)0x0) {
          pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             ((Renderer *)pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                      (pMVar2,(this->fields).androidTexture,(MethodInfo *)0x0);
            (this->fields).shouldShowMobileIcon = 1;
            return;
          }
        }
      }
      else {
        if ((undefined1)bT != BuildTarget__Enum_IOS) {
code_?:
          (this->fields).shouldShowMobileIcon = 1;
          return;
        }
        pMVar1 = (this->fields).mobileIcon;
        if (pMVar1 != (MeshRenderer *)0x0) {
          pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             ((Renderer *)pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                      (pMVar2,(this->fields).iOSTexture,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateHealthBarColor() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateHealthBarColor
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_IsOnSameTeam_1
                        ((MVPlayer *)this_01,(unaff_ESI->fields)._.worldObject,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        AvatarUIHandlerRemote_SetHealthBarColor(unaff_ESI,0,(MethodInfo *)0x0);
        return;
      }
      AvatarUIHandlerRemote_SetHealthBarColor(unaff_ESI,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateNameTag() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateNameTag
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVAvatar *)0x0) &&
     (pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    bVar3 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                      ((MVPlayerContainer *)pMVar2,(this->fields)._.ownerActorNr,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    unaff_ESI = this;
    if (pMVar1 != (MVAvatar *)0x0) {
      pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0);
      if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        this_01 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                            ((MVPlayerContainer *)pMVar2,(this->fields)._.ownerActorNr,
                             (MethodInfo *)0x0);
        unaff_EBX = (this->fields).avatarName;
        if (((this_01 != (MVPlayer *)0x0) &&
            (iVar4 = GamePointGainEffect::GamePointGainEffect_get_ID
                               ((GamePointGainEffect *)this_01,(MethodInfo *)0x0), iVar4 != 0)) &&
           (unaff_EBX != (TextMesh *)0x0)) {
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    (unaff_EBX,*(String **)(iVar4 + 0xc),(MethodInfo *)0x0);
          pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                             ((Color *)&fStack_6,(MethodInfo *)0x0);
          fStack_6 = pCVar5->r;
          puStack_7 = (undefined *)pCVar5->g;
          fVar8 = pCVar5->b;
          fVar9 = pCVar5->a;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_02 != (MVNetworkGame *)0x0) {
            in_stack_10 = &UNK_?;
            this_03 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                ((DayNightCycle *)this_02,(MethodInfo *)0x0);
            if (this_03 != (SkyParam *)0x0) {
              iVar4 = MVTeamManager::MVTeamManager_TeamCount
                                ((MVTeamManager *)this_03,(MethodInfo *)0x0);
              fVar11 = fStack_6;
              puVar12 = puStack_7;
              if (1 < iVar4) {
                pIVar13 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                         KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                         KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                   ((KogamaSettingNumericBase_1_System_Single_ *)this_01,
                                    (MethodInfo *)0x0);
                fVar11 = fStack_6;
                puVar12 = puStack_7;
                switch(pIVar13) {
                case (IKogamaSetting *)0x0:
                  pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_blue
                                     ((Color *)&fStack_6,(MethodInfo *)0x0);
                  fVar8 = pCVar5->b;
                  fVar9 = pCVar5->a;
                  fVar11 = pCVar5->r;
                  puVar12 = (undefined *)pCVar5->g;
                  break;
                case (IKogamaSetting *)0x1:
                  pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                                     ((Color *)&fStack_6,(MethodInfo *)0x0);
                  fVar8 = pCVar5->b;
                  fVar9 = pCVar5->a;
                  fVar11 = pCVar5->r;
                  puVar12 = (undefined *)pCVar5->g;
                  break;
                case (IKogamaSetting *)0x2:
                  pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                                     ((Color *)&fStack_6,(MethodInfo *)0x0);
                  fVar8 = pCVar5->b;
                  fVar9 = pCVar5->a;
                  fVar11 = pCVar5->r;
                  puVar12 = (undefined *)pCVar5->g;
                  break;
                case (IKogamaSetting *)0x3:
                  pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_yellow
                                     ((Color *)&fStack_6,(MethodInfo *)0x0);
                  fVar8 = pCVar5->b;
                  fVar9 = pCVar5->a;
                  fVar11 = pCVar5->r;
                  puVar12 = (undefined *)pCVar5->g;
                }
              }
              this_00 = (this->fields).avatarNameMaterial;
              if (this_00 != (Material *)0x0) {
                value.g = (float)puVar12;
                value.r = fVar11;
                value.b._0_2_ = SUB42(fVar8,0);
                value.b._2_2_ = (short)((uint)fVar8 >> 0x10);
                value.a._0_2_ = SUB42(fVar9,0);
                value.a._2_2_ = (short)((uint)fVar9 >> 0x10);
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                          (this_00,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pbVar14 = (byte *)(extraout_ECX + 0x35);
  bVar15 = *pbVar14;
  bVar16 = (byte)((uint)extraout_ECX >> 8);
  *pbVar14 = *pbVar14 + bVar16;
  (&stack0x0000001a)[(int)unaff_ESI] =
       (&stack0x0000001a)[(int)unaff_ESI] + (char)((uint)((int)&unaff_EBX->klass + 1) >> 8) +
       CARRY1(bVar15,bVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Material get_EnemyIconMaterial() */

Material *
Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_EnemyIconMaterial
          (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (PrefabPool *)0x0) {
      pOVar1 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                         (this_02,(MethodInfo *)0x0);
      if (pOVar1 != (ObjectiveArrow *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_BoostType_System_Object_ *)(pOVar1->fields).arrowOffset.y;
        if (this_00 != (Dictionary_2_BoostType_System_Object_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]
                  ::Dictionary_2_BoostType_System_Object__ContainsKey
                            (this_00,BoostType__Enum_XRayVision,
                             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                            );
          if (bVar2 == 0) {
            return (Material *)this_00[1].fields.emptySlot;
          }
          return (Material *)this_00[1].fields.count;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (Material *)(*pcVar3)();
  return pMVar4;
}


/* ShieldBar get_ShieldBar() */

ShieldBar *
Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
          (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  return (this->fields).shieldBar;
}


/* Void set_NameTagLabelVisible(Boolean) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
               (AvatarUIHandlerRemote *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).nameTagLabelVisible = value;
  this_00 = (this->fields).nameTagLabel;
  if (this_00 != (Transform *)0x0) {
    pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
             Component_1_GetComponentsInChildren_12
                       ((Component_1 *)this_00,1,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>_bool_____
                       );
    uVar2 = 0;
    if (pRVar1 != (Renderer__Array *)0x0) {
      ppRVar3 = pRVar1->vector;
      while( true ) {
        if ((int)pRVar1->max_length <= (int)uVar2) {
          return;
        }
        if (pRVar1->max_length <= uVar2) break;
        if (*ppRVar3 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (*ppRVar3,(this->fields).nameTagLabelVisible,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppRVar3 = ppRVar3 + 1;
      }
      uVar4 = func_?(0,0);
      func_?(uVar4);
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

