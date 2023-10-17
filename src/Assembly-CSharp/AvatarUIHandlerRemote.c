
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
              if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_01,(Object *)this,
                           MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__,(MethodInfo *)0x0
                          );
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
            if (this_04 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
  (*(this->klass->vtable).SetShouldShowUI.methodPtr)
            (this,0,(this->klass->vtable).SetShouldShowUI.method);
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
      this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar1,(MethodInfo *)0x0);
      if (this_06 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe8,this_06,(MethodInfo *)0x0);
        fVar3 = pVVar2->z;
        this_07 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
        if (this_07 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
          puVar4 = &UNK_?;
          pUVar5 = this_07;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
          UnityAction_1_UnityEngine_Vector2___ctor
                    (this_07,(Object *)this,
                     MethodInfo__AvatarUIHandlerRemote__OnStateChanged_UnityEngine__CullingGroupEvent_
                     ,(MethodInfo *)0x0);
          this_08 = (CullingSubscriberBase *)func_?();
          if (this_08 != (CullingSubscriberBase *)0x0) {
            position.y = (float)pUVar5;
            position.x = (float)puVar4;
            position.z = fVar3;
            CullingSubscriberBase::CullingSubscriberBase__ctor_2
                      (this_08,0.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_07,
                       (MethodInfo *)0x0);
            (this->fields).cullingSubscriberBase = this_08;
            func_?();
            this_01 = (this->fields).teamIcon;
            if (this_01 != (TeamIconScaleWithDistance *)0x0) {
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_01,(MethodInfo *)0x0);
              if (pGVar6 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,1,(MethodInfo *)0x0);
                this_02 = (this->fields).avatarName;
                if (this_02 != (TextMesh *)0x0) {
                  pRVar1 = (Renderer *)
                           UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_GetComponent_1
                                     ((Component *)this_02,
                                      UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                     );
                  if (pRVar1 != (Renderer *)0x0) {
                    pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                             Renderer_get_material(pRVar1,(MethodInfo *)0x0);
                    (this->fields).avatarNameMaterial = pMVar7;
                    func_?();
                    pRVar1 = (this->fields).healthBarRenderer;
                    if (pRVar1 != (Renderer *)0x0) {
                      pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                               Renderer_get_material(pRVar1,(MethodInfo *)0x0);
                      (this->fields).avatarHealthMaterial = pMVar7;
                      func_?();
                      pRVar1 = (this->fields).shieldBarRenderer;
                      if (pRVar1 != (Renderer *)0x0) {
                        pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                 Renderer_get_material(pRVar1,(MethodInfo *)0x0);
                        (this->fields).avatarShieldMaterial = pMVar7;
                        func_?();
                        this_03 = (this->fields).sayChatBubbleHandler;
                        if (this_03 != (SayChatBubbleHandler *)0x0) {
                          SayChatBubbleHandler::SayChatBubbleHandler_Initialize
                                    (this_03,ownerActorNr,chatBubbleAnchor,(MethodInfo *)0x0);
                          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game
                                             ((MethodInfo *)0x0);
                          if ((pMVar8 != (MVNetworkGame *)0x0) &&
                             (this_04 = (pMVar8->fields).playerContainer,
                             this_04 != (MVPlayerContainer *)0x0)) {
                            pMVar9 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                               (this_04,ownerActorNr,(MethodInfo *)0x0);
                            if (pMVar9 == (MVPlayer *)0x0) {
code_?:
                              AvatarUIHandlerRemote_UpdateNameTag(this,(MethodInfo *)0x0);
                              AvatarUIHandlerRemote_UpdateHealthBarColor(this,(MethodInfo *)0x0);
                              if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0
                                 ) {
                                func_?();
                              }
                              pAVar10 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                                 (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
                              this_09 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                              if (this_09 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                UnityEngine.AIModule.dll::UnityEngine::AI::
                                NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                          (this_09,(Object *)this,
                                           MethodInfo__AvatarUIHandlerRemote__HideUI__,
                                           (MethodInfo *)0x0);
                                pAVar11 = (Action *)
                                          mscorlib.dll::System::Delegate::Delegate_Combine
                                                    ((Delegate *)pAVar10,(Delegate *)this_09,
                                                     (MethodInfo *)0x0);
                                pAVar10 = (Action *)0x0;
                                if (pAVar11 == (Action *)0x0) {
code_?:
                                  ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                                            (ChatCommand__Enum_HideAllUI,pAVar10,(MethodInfo *)0x0);
                                  return;
                                }
                                if (pAVar11->klass == TypeInfo__System__Action) {
                                  pAVar10 = pAVar11;
                                }
                                if (pAVar10 != (Action *)0x0) goto code_?;
                                goto code_?;
                              }
                            }
                            else {
                              this_05 = (pMVar9->fields)._SubscriptionRules_k__BackingField;
                              pGVar6 = (this->fields).memberFrame;
                              if (this_05 != (SubscriptionRulesWrapper *)0x0) {
                                value = MVWorldObject.dll::MV::WorldObject::Subscription::
                                        SubscriptionRulesWrapper::
                                        SubscriptionRulesWrapper_HasBenefit
                                                  (this_05,SubscriptionBenefit__Enum_XPBoost,
                                                   (MethodInfo *)0x0);
                                if (pGVar6 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar6,value,(MethodInfo *)0x0);
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
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  if (bVar1 == 0) {
code_?:
    if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar2 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                       (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,(Object *)this,MethodInfo__AvatarUIHandlerRemote__HideUI__,(MethodInfo *)0x0
                );
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
      pAVar2 = (Action *)0x0;
      if (pAVar4 == (Action *)0x0) {
code_?:
        ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                  (ChatCommand__Enum_HideAllUI,pAVar2,(MethodInfo *)0x0);
        AvatarUIHandler::AvatarUIHandler_OnDestroy((AvatarUIHandler *)this,(MethodInfo *)0x0);
        return;
      }
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar4;
      }
      if (pAVar2 != (Action *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (pMVar5 != (MVLocalPlayer *)0x0) {
        this_00 = (pMVar5->fields).boostController;
        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar3,(Object *)this,MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__,
                     (MethodInfo *)0x0);
          if (this_00 != (BoostController *)0x0) {
            BoostController::BoostController_UnSubscribeToBoostChanged
                      (this_00,BoostType__Enum_XRayVision,(Action *)pNVar3,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarBadge;
  value = 0;
  if ((this->fields).forceHideUI == 0) {
    value = shouldShow;
  }
  (this->fields)._.shouldShowUI = value;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).avatarBadge;
    if (pAVar1 == (AvatarBadge *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pAVar1,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,value,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).healthBar;
  if (this_00 != (HealthBar *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,value,(MethodInfo *)0x0);
      this_01 = (this->fields).shieldBar;
      if (this_01 != (ShieldBar *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,value,(MethodInfo *)0x0);
          if ((this->fields).shouldShowMobileIcon != 0) {
            this_02 = (this->fields).mobileIcon;
            if (this_02 == (MeshRenderer *)0x0) goto code_?;
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_02,(MethodInfo *)0x0);
            if (pGVar3 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,value,(MethodInfo *)0x0);
          }
          AvatarUIHandlerRemote_set_NameTagLabelVisible(this,value,(MethodInfo *)0x0);
          this_03 = (this->fields).teamIcon;
          if (this_03 != (TeamIconScaleWithDistance *)0x0) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_03,(MethodInfo *)0x0);
            if (pGVar3 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  bVar2 = (POPCOUNT((uint)pMVar1 & 0xff) & 1U) == 0;
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar3 = (pMVar1->fields).playerContainer;
    bVar2 = (POPCOUNT((uint)pMVar3 & 0xff) & 1U) == 0;
    if (pMVar3 != (MVPlayerContainer *)0x0) {
      bVar4 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                        (pMVar3,(this->fields)._.ownerActorNr,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = (POPCOUNT((uint)pMVar1 & 0xff) & 1U) == 0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar3 = (pMVar1->fields).playerContainer;
        bVar2 = (POPCOUNT((uint)pMVar3 & 0xff) & 1U) == 0;
        if (pMVar3 != (MVPlayerContainer *)0x0) {
          pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             (pMVar3,(this->fields)._.ownerActorNr,(MethodInfo *)0x0);
          bVar2 = (POPCOUNT((uint)pMVar5 & 0xff) & 1U) == 0;
          if (pMVar5 != (MVPlayer *)0x0) {
            pUVar6 = (pMVar5->fields)._UserProfileData_k__BackingField;
            bVar2 = (POPCOUNT((uint)pUVar6 & 0xff) & 1U) == 0;
            if (pUVar6 != (UserProfileData *)0x0) {
              this_00 = (this->fields).avatarName;
              bVar2 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
              if (this_00 != (TextMesh *)0x0) {
                UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                          (this_00,(pUVar6->fields).UserName,(MethodInfo *)0x0);
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                bVar2 = (POPCOUNT((uint)pMVar1 & 0xff) & 1U) == 0;
                if (pMVar1 != (MVNetworkGame *)0x0) {
                  this_01 = (pMVar1->fields).teamManager;
                  bVar2 = (POPCOUNT((uint)this_01 & 0xff) & 1U) == 0;
                  if (this_01 != (MVTeamManager *)0x0) {
                    iVar7 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
                    in_XMM0_Da = _UNK_?;
                    in_XMM0_Db = _UNK_?;
                    in_XMM0_Dc = _UNK_?;
                    in_XMM0_Dd = _UNK_?;
                    if (1 < iVar7) {
                      switch((pMVar5->fields)._Team_k__BackingField) {
                      case 0:
                        in_XMM0_Da = _UNK_?;
                        in_XMM0_Db = _UNK_?;
                        in_XMM0_Dc = _UNK_?;
                        in_XMM0_Dd = _UNK_?;
                        break;
                      case 1:
                        in_XMM0_Da = _UNK_?;
                        in_XMM0_Db = _UNK_?;
                        in_XMM0_Dc = _UNK_?;
                        in_XMM0_Dd = _UNK_?;
                        break;
                      case 2:
                        in_XMM0_Da = _UNK_?;
                        in_XMM0_Db = _UNK_?;
                        in_XMM0_Dc = _UNK_?;
                        in_XMM0_Dd = _UNK_?;
                        break;
                      case 3:
                        in_XMM0_Da = _UNK_?;
                        in_XMM0_Db = _UNK_?;
                        in_XMM0_Dc = _UNK_?;
                        in_XMM0_Dd = _UNK_?;
                      }
                    }
                    this_02 = (this->fields).avatarNameMaterial;
                    bVar2 = (POPCOUNT((uint)this_02 & 0xff) & 1U) == 0;
                    if (this_02 != (Material *)0x0) goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cVar8 = '\0';
  func_?();
  if (bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(extraout_DX);
  *(char *)(unaff_EBX + 0x110f51c4) = *(char *)(unaff_EBX + 0x110f51c4) + (char)extraout_ECX + cVar8
  ;
  this_02 = extraout_ECX;
code_?:
  value.g = (float)in_XMM0_Db;
  value.r = (float)in_XMM0_Da;
  value.b = (float)in_XMM0_Dc;
  value.a = in_XMM0_Dd;
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
            (this_02,value,(MethodInfo *)0x0);
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
        return pMRam00000054;
      }
      return pMRam00000050;
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
  (*(pAVar1->vtable).SetShouldShowUI.methodPtr)
            (this,(uint)(value ^ 1),(pAVar1->vtable).SetShouldShowUI.method);
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
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_TryGetComponent
                      ((Component *)this_00,(Object **)0x1,
                       UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>_bool_____
                      );
    iVar2 = CONCAT31(extraout_var,bVar1);
    uVar3 = 0;
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)(iVar2 + 0x10);
      while( true ) {
        if (*(int *)(iVar2 + 0xc) <= (int)uVar3) {
          return;
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar3) break;
        if ((Renderer *)*puVar4 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*puVar4,(this->fields).nameTagLabelVisible,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
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

