
/* Void Activate() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_Activate
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).sayChatBubbleHandler;
  if (pSVar1 != (SayChatBubbleHandler *)0x0) {
    (pSVar1->fields).isActive = 1;
    this_00 = (this->fields).teamIconRenderer;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
      if ((pMVar3 != (MVLocalPlayer *)0x0) &&
         (pBVar4 = (pMVar3->fields).boostController, pBVar4 != (BoostController *)0x0)) {
        bVar5 = BoostController::BoostController_IsBoostActive
                          (pBVar4,BoostType__Enum_XRayVision,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          value = (this->fields).enemyIconMaterial;
        }
        else {
          value = (this->fields).enemyIconMaterialVisibleThroughWalls;
        }
        if (this_00 != (Renderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    (this_00,value,(MethodInfo *)0x0);
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 != (MVNetworkGame *)0x0) {
            pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
            if (pMVar3 != (MVLocalPlayer *)0x0) {
              pBVar4 = (pMVar3->fields).boostController;
              this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_01,(Object *)this,
                         MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__,(MethodInfo *)0x0);
              if (pBVar4 != (BoostController *)0x0) {
                BoostController::BoostController_SubscribeToBoostChanged
                          (pBVar4,BoostType__Enum_XRayVision,(Action *)this_01,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_Deactivate
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).sayChatBubbleHandler;
  if (pSVar1 != (SayChatBubbleHandler *)0x0) {
    this_00 = (pSVar1->fields).sayChatBubble;
    (pSVar1->fields).isActive = 0;
    if (this_00 != (MeshRenderer *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,0,(MethodInfo *)0x0);
        (pSVar1->fields).isIndicatorActive = 0;
        this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_03 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            this_01 = (pMVar2->fields).boostController;
            this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_04,(Object *)this,
                       MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__,(MethodInfo *)0x0);
            if (this_01 != (BoostController *)0x0) {
              BoostController::BoostController_UnSubscribeToBoostChanged
                        (this_01,BoostType__Enum_XRayVision,(Action *)this_04,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleTeamChange() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_HandleTeamChange
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  AvatarUIHandlerRemote_UpdateNameTag(this,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarUIHandlerRemote__HideUI__);
    func_?(&
                    MethodInfo__AvatarUIHandlerRemote__OnStateChanged_UnityEngine__CullingGroupEvent_
                   );
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    cRam_? = '\x01';
  }
  AvatarUIHandler::AvatarUIHandler_Initialize
            ((AvatarUIHandler *)this,isLocal,wo,ownerActorNr,chatBubbleAnchor,(MethodInfo *)0x0);
  this_00 = (this->fields).avatarBadge;
  if (this_00 != (AvatarBadge *)0x0) {
    AvatarBadge::AvatarBadge_Initialize(this_00,ownerActorNr,(MethodInfo *)0x0);
    pRVar1 = (this->fields).teamIconRenderer;
    if (pRVar1 != (Renderer *)0x0) {
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar1,(MethodInfo *)0x0);
      if (this_03 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe8,this_03,(MethodInfo *)0x0);
        fVar3 = pVVar2->z;
        this_04 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
        uVar4 = CONCAT44(this,this_04);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
        UnityAction_1_UnityEngine_Vector2___ctor
                  (this_04,(Object *)this,
                   MethodInfo__AvatarUIHandlerRemote__OnStateChanged_UnityEngine__CullingGroupEvent_
                   ,(MethodInfo *)0x0);
        this_05 = (CullingSubscriberBase *)func_?();
        ownerActorNr = (int32_t)uVar4;
        chatBubbleAnchor = (ChatAnchor *)((ulonglong)uVar4 >> 0x20);
        position.z = fVar3;
        position.x = (float)(int)uVar4;
        position.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  (this_05,0.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_04,
                   (MethodInfo *)0x0);
        _UNK_? = this_05;
        func_?();
        if (_UNK_? != (Component *)0x0) {
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (_UNK_?,(MethodInfo *)0x0);
          if (pGVar5 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,1,(MethodInfo *)0x0);
            if (_UNK_? != (Component *)0x0) {
              pRVar1 = (Renderer *)
                       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                 (_UNK_?,
                                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                 );
              if (pRVar1 != (Renderer *)0x0) {
                _UNK_? =
                     UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar1,(MethodInfo *)0x0);
                func_?();
                if (_UNK_? != (Renderer *)0x0) {
                  _UNK_? =
                       UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                 (_UNK_?,(MethodInfo *)0x0);
                  func_?();
                  if (_UNK_? != (Renderer *)0x0) {
                    _UNK_? =
                         UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                   (_UNK_?,(MethodInfo *)0x0);
                    func_?();
                    if (_UNK_? != (SayChatBubbleHandler *)0x0) {
                      SayChatBubbleHandler::SayChatBubbleHandler_Initialize
                                (_UNK_?,ownerActorNr,chatBubbleAnchor,(MethodInfo *)0x0);
                      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game
                                         ((MethodInfo *)0x0);
                      if ((pMVar6 != (MVNetworkGame *)0x0) &&
                         (this_01 = (pMVar6->fields).playerContainer,
                         this_01 != (MVPlayerContainer *)0x0)) {
                        pMVar7 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                           (this_01,ownerActorNr,(MethodInfo *)0x0);
                        pGVar5 = _UNK_?;
                        if (pMVar7 == (MVPlayer *)0x0) {
code_?:
                          AvatarUIHandlerRemote_UpdateNameTag
                                    ((AvatarUIHandlerRemote *)&UNK_?,(MethodInfo *)0x0);
                          AvatarUIHandlerRemote_UpdateHealthBarColor
                                    ((AvatarUIHandlerRemote *)&UNK_?,(MethodInfo *)0x0);
                          if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pAVar8 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                             (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
                          this_06 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                          NavMesh_OnNavMeshPreUpdate__ctor
                                    (this_06,(Object *)&UNK_?,
                                     MethodInfo__AvatarUIHandlerRemote__HideUI__,(MethodInfo *)0x0);
                          pAVar9 = (Action *)
                                   mscorlib.dll::System::Delegate::Delegate_Combine
                                             ((Delegate *)pAVar8,(Delegate *)this_06,
                                              (MethodInfo *)0x0);
                          pAVar8 = (Action *)0x0;
                          if (pAVar9 == (Action *)0x0) {
code_?:
                            ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                                      (ChatCommand__Enum_HideAllUI,pAVar8,(MethodInfo *)0x0);
                            return;
                          }
                          if (pAVar9->klass == TypeInfo__System__Action) {
                            pAVar8 = pAVar9;
                          }
                          if (pAVar8 != (Action *)0x0) goto code_?;
                          goto code_?;
                        }
                        this_02 = (pMVar7->fields)._SubscriptionRules_k__BackingField;
                        if (this_02 != (SubscriptionRulesWrapper *)0x0) {
                          MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper
                          ::SubscriptionRulesWrapper_HasBenefit
                                    (this_02,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
                          if (pGVar5 != (GameObject *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar5,0,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean IsOnSameTeamAsLocalAvatar() */

bool Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_IsOnSameTeamAsLocalAvatar
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_IsOnSameTeam_1
                        ((MVPlayer *)this_01,(this->fields)._.worldObject,(MethodInfo *)0x0);
      return bVar1 != 0;
    }
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_OnDestroy
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarUIHandlerRemote__HideUI__);
    func_?(&MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__);
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    func_?(&(this->fields).cullingSubscriberBase,0);
  }
  obj = (this->fields).avatarNameMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)(this->fields).avatarHealthMaterial,(MethodInfo *)0x0);
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame *)0x0) goto code_?;
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    this_00 = (pMVar2->fields).boostController;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__,
               (MethodInfo *)0x0);
    if (this_00 == (BoostController *)0x0) goto code_?;
    BoostController::BoostController_UnSubscribeToBoostChanged
              (this_00,BoostType__Enum_XRayVision,(Action *)pNVar3,(MethodInfo *)0x0);
  }
  if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pAVar4 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                     (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
  pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar3,(Object *)this,MethodInfo__AvatarUIHandlerRemote__HideUI__,(MethodInfo *)0x0);
  pAVar5 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar4,(Delegate *)pNVar3,(MethodInfo *)0x0);
  pAVar4 = (Action *)0x0;
  if (pAVar5 != (Action *)0x0) {
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar5;
    }
    if (pAVar4 == (Action *)0x0) {
      func_?();
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
            (ChatCommand__Enum_HideAllUI,pAVar4,(MethodInfo *)0x0);
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
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_01,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_Visible(cullingEvent,distanceBandIndex,(MethodInfo *)0x0);
    this_00 = (this->fields).teamIconRenderer;
    if (this_00 != (Renderer *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        cullingEvent.m_PrevState = (uint8_t)this_00;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,cullingEvent.m_PrevState,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnXRayBoostChanged() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_OnXRayBoostChanged
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  this_00 = (this->fields).teamIconRenderer;
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (this_01 = (pMVar1->fields).boostController, this_01 != (BoostController *)0x0)) {
      bVar2 = BoostController::BoostController_IsBoostActive
                        (this_01,BoostType__Enum_XRayVision,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        value = (this->fields).enemyIconMaterial;
      }
      else {
        value = (this->fields).enemyIconMaterialVisibleThroughWalls;
      }
      if (this_00 != (Renderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetHealthBarColor(Boolean) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
               (AvatarUIHandlerRemote *this,bool isFriendly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).avatarShieldMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pMVar1 = (this->fields).avatarShieldMaterial;
  if (pMVar1 != (Material *)0x0) {
    value_02.g = (float)_UNK_?;
    value_02.r = (float)_UNK_?;
    value_02.b = (float)_UNK_?;
    value_02.a = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (pMVar1,value_02,(MethodInfo *)0x0);
    pMVar1 = (this->fields).avatarHealthMaterial;
    if (isFriendly == 0) {
      if (pMVar1 != (Material *)0x0) {
        value.g = (float)_UNK_?;
        value.r = (float)_UNK_?;
        value.b = (float)_UNK_?;
        value.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar1,value,(MethodInfo *)0x0);
        pMVar1 = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          value_01.g = (float)_UNK_?;
          value_01.r = (float)_UNK_?;
          value_01.b = (float)_UNK_?;
          value_01.a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar1,value_01,(MethodInfo *)0x0);
          pRVar3 = (this->fields).teamIconRenderer;
          pMVar1 = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
          if (pRVar3 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      (pRVar3,pMVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if (pMVar1 != (Material *)0x0) {
      value_00.g = (float)_UNK_?;
      value_00.r = (float)_UNK_?;
      value_00.b = (float)_UNK_?;
      value_00.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar1,value_00,(MethodInfo *)0x0);
      pRVar3 = (this->fields).teamIconRenderer;
      if (pRVar3 != (Renderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  (pRVar3,(this->fields).teamIconMaterial,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetShouldShowUI(Boolean) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetShouldShowUI
               (AvatarUIHandlerRemote *this,bool shouldShow,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar2 = (this->fields).avatarBadge;
  value_00 = 0;
  if ((this->fields).forceHideUI == 0) {
    value_00 = shouldShow;
  }
  (this->fields)._.shouldShowUI = value_00;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pAVar2 = (this->fields).avatarBadge;
    if (pAVar2 == (AvatarBadge *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pAVar2,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,value_00,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).healthBar;
  if (this_00 != (HealthBar *)0x0) {
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,value_00,(MethodInfo *)0x0);
      this_01 = (this->fields).shieldBar;
      if (this_01 != (ShieldBar *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,value_00,(MethodInfo *)0x0);
          if ((this->fields).shouldShowMobileIcon != 0) {
            this_02 = (this->fields).mobileIcon;
            if (this_02 == (MeshRenderer *)0x0) goto code_?;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_02,(MethodInfo *)0x0);
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,value_00,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          bVar3 = 0;
          if ((this->fields).forceHideUI == 0) {
            bVar3 = value_00;
          }
          this_03 = (AvatarUIHandlerRemote *)(this->fields).nameTagLabel;
          (this->fields).nameTagLabelVisible = bVar3;
          if (this_03 != (AvatarUIHandlerRemote *)0x0) {
            pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                     Component_GetComponentsInChildren_2
                               ((Component *)this_03,1,
                                UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>_bool_____
                               );
            uVar6 = 0;
            if (pOVar5 != (Object__Array *)0x0) {
              ppOVar7 = pOVar5->vector;
              this = this_03;
              while( true ) {
                if ((int)pOVar5->max_length <= (int)uVar6) break;
                if (pOVar5->max_length <= uVar6) goto code_?;
                this = (AvatarUIHandlerRemote *)*ppOVar7;
                if (this == (AvatarUIHandlerRemote *)0x0) goto code_?;
                value = (pAVar1->fields).nameTagLabelVisible;
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                          ((Renderer *)this,value,(MethodInfo *)0x0);
                uVar6 = uVar6 + 1;
                ppOVar7 = (Object **)(value + 4);
              }
              this_04 = (pAVar1->fields).teamIcon;
              if (this_04 != (TeamIconScaleWithDistance *)0x0) {
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_04,(MethodInfo *)0x0);
                if (pGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,(bool)this,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ShowMobileIcon(BuildTarget) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_ShowMobileIcon
               (AvatarUIHandlerRemote *this,BuildTarget__Enum bT,MethodInfo *method)

{
  pMVar1 = (this->fields).mobileIcon;
  if (pMVar1 != (MeshRenderer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pMVar1,(MethodInfo *)0x0);
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateHealthBarColor() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateHealthBarColor
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void UpdateNameTag() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateNameTag
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
    bVar3 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                      (pMVar2,(this->fields)._.ownerActorNr,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    unaff_ESI = this;
    if ((((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) &&
        (pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             (pMVar2,(this->fields)._.ownerActorNr,(MethodInfo *)0x0),
        pMVar4 != (MVPlayer *)0x0)) &&
       ((pUVar5 = (pMVar4->fields)._UserProfileData_k__BackingField,
        pUVar5 != (UserProfileData *)0x0 &&
        (this_00 = (this->fields).avatarName, this_00 != (TextMesh *)0x0)))) {
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (this_00,(pUVar5->fields).UserName,(MethodInfo *)0x0);
      uVar6 = _UNK_?;
      uVar7 = _UNK_?;
      uVar8 = _UNK_?;
      fVar9 = _UNK_?;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (this_01 = (pMVar1->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
        fStack10 = fVar9;
        iVar11 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
        if (1 < iVar11) {
          switch((pMVar4->fields)._Team_k__BackingField) {
          case 0:
            uVar6 = 0;
            uVar7 = 0;
            break;
          case 1:
            uVar7 = 0;
            uVar8 = 0;
            break;
          case 2:
            uVar6 = 0;
            uVar8 = 0;
            break;
          case 3:
            uVar7 = 0x3f6bebec;
            uVar8 = 0x3c808081;
          }
        }
        this_02 = (this->fields).avatarNameMaterial;
        if (this_02 != (Material *)0x0) {
          value.g = (float)uVar7;
          value.r = (float)uVar6;
          value.b = (float)uVar8;
          value.a = fStack10;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (this_02,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  bVar12 = false;
  bVar13 = 0;
  uVar14 = func_?();
  bVar15 = (byte)uVar14;
  bVar16 = bVar13;
  if (!bVar12) {
    pbVar17 = (byte *)(extraout_ECX + -0x6eefd1ff);
    bVar16 = CARRY1(*pbVar17,bVar15) || CARRY1(*pbVar17 + bVar15,bVar13);
    *pbVar17 = *pbVar17 + bVar15 + bVar13;
  }
  *(char *)(extraout_ECX + -0x6eefd1ff) = *(char *)(extraout_ECX + -0x6eefd1ff) + bVar15 + bVar16;
  pAVar18 = unaff_ESI->klass;
  unaff_ESI->klass = (AvatarUIHandlerRemote__Class *)(&stack0xfffffffc + (int)unaff_ESI->klass);
  *(char *)(extraout_ECX + -0x33efd1ff) =
       *(char *)(extraout_ECX + -0x33efd1ff) + (char)((ushort)uVar14 >> 8) +
       CARRY4((uint)pAVar18,(uint)&stack0xfffffffc);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Material get_EnemyIconMaterial() */

Material *
Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_EnemyIconMaterial
          (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar1->fields).boostController, this_00 != (BoostController *)0x0)) {
      bVar2 = BoostController::BoostController_IsBoostActive
                        (this_00,BoostType__Enum_XRayVision,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return pMRam00000058;
      }
      return pMRam00000054;
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pMVar6 = (Material *)(*pcVar5)();
  return pMVar6;
}


/* Boolean get_ForceHideUI() */

bool Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ForceHideUI
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  return (this->fields).forceHideUI;
}


/* Void set_ForceHideUI(Boolean) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_ForceHideUI
               (AvatarUIHandlerRemote *this,bool value,MethodInfo *method)

{
  pAVar1 = this->klass;
  (this->fields).forceHideUI = value;
  (*(code *)(pAVar1->vtable).SetShouldShowUI.method)
            (this,value ^ 1,(pAVar1->vtable).OnDestroy.methodPtr);
  return;
}


/* Void set_NameTagLabelVisible(Boolean) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
               (AvatarUIHandlerRemote *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>_bool_____
                   );
    cRam_? = '\x01';
  }
  bVar1 = 0;
  if ((this->fields).forceHideUI == 0) {
    bVar1 = value;
  }
  this_00 = (this->fields).nameTagLabel;
  (this->fields).nameTagLabelVisible = bVar1;
  if (this_00 != (Transform *)0x0) {
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren_2
                       ((Component *)this_00,1,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>_bool_____
                       );
    uVar3 = 0;
    if (pOVar2 != (Object__Array *)0x0) {
      ppOVar4 = pOVar2->vector;
      while( true ) {
        if ((int)pOVar2->max_length <= (int)uVar3) {
          return;
        }
        if (pOVar2->max_length <= uVar3) break;
        if ((Renderer *)*ppOVar4 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppOVar4,(this->fields).nameTagLabelVisible,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        ppOVar4 = ppOVar4 + 1;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

