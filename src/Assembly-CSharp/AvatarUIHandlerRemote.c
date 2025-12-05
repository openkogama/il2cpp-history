
/* Void Activate() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_Activate
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).sayChatBubbleHandler;
  if (pSVar1 != (SayChatBubbleHandler *)0x0) {
    (pSVar1->fields).isActive = 1;
    this_01 = (this->fields).teamIconRenderer;
    m = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
    if (this_01 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                (this_01,m,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         (this_02 = (pMVar3->fields).playerContainer, this_02 != (MVPlayerContainer *)0x0)) {
        pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_02,(MethodInfo *)0x0);
        if (pMVar4 != (MVLocalPlayer *)0x0) {
          pBVar5 = (pMVar4->fields).boostController;
          this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_03,(Object *)this,MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__,
                     (MethodInfo *)0x0);
          if (pBVar5 != (BoostController *)0x0) {
            uVar6 = 0;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action,4,this_03,0);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_00 = (pBVar5->fields).onBoostTypeUpdate;
            if (this_00 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
              pDVar7 = (Delegate *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,4,
                                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                                 );
              pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                 (pDVar7,(Delegate *)this_03,(MethodInfo *)0x0);
              pDVar7 = (Delegate *)0x0;
              if (pDVar8 != (Delegate *)0x0) {
                if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                  pDVar7 = pDVar8;
                }
                if (pDVar7 == (Delegate *)0x0) {
                  FUN_?(pDVar8);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,4,(Object *)pDVar7,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
                         ->klass->rgctx_data[0x22].method);
              return;
            }
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_Deactivate
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).sayChatBubbleHandler;
  if (pSVar1 != (SayChatBubbleHandler *)0x0) {
    this_01 = (pSVar1->fields).sayChatBubble;
    (pSVar1->fields).isActive = 0;
    if (this_01 != (MeshRenderer *)0x0) {
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_01,(MethodInfo *)0x0);
      if (this_03 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_03,0,(MethodInfo *)0x0);
        bVar2 = cRam_? == '\0';
        (pSVar1->fields).isIndicatorActive = 0;
        if (bVar2) {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar3 != (MVGameControllerBase *)0x0) &&
            (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
           (this_02 = (pMVar4->fields).playerContainer, this_02 != (MVPlayerContainer *)0x0)) {
          pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_02,(MethodInfo *)0x0);
          if (pMVar5 != (MVLocalPlayer *)0x0) {
            pBVar6 = (pMVar5->fields).boostController;
            this_04 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_04,(Object *)this,
                       MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__,(MethodInfo *)0x0);
            if (pBVar6 != (BoostController *)0x0) {
              uVar7 = 0;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action,4,this_04,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_00 = (pBVar6->fields).onBoostTypeUpdate;
              if (this_00 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
                pDVar8 = (Delegate *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Object]::
                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                   ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,4,
                                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                                   );
                pDVar9 = mscorlib.dll::System::Delegate::Delegate_Remove
                                   (pDVar8,(Delegate *)this_04,(MethodInfo *)0x0);
                pDVar8 = (Delegate *)0x0;
                if (pDVar9 != (Delegate *)0x0) {
                  if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
                    pDVar8 = pDVar9;
                  }
                  if (pDVar8 == (Delegate *)0x0) {
                    FUN_?(pDVar9);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,4,
                           (Object *)pDVar8,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),1),
                           MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
                           ->klass->rgctx_data[0x22].method);
                return;
              }
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void HandleTeamChange() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_HandleTeamChange
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  AvatarUIHandlerRemote_UpdateNameTag(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 == (MVLocalPlayer *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                    ((MVPlayer *)this_01,(this->fields)._.worldObject,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = (this->fields).avatarShieldMaterial;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar5 != (Material *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar5->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar5 = (this->fields).avatarShieldMaterial;
      if (pMVar5 == (Material *)0x0) goto code_?;
      CStack_6.r = _UNK_?;
      CStack_6.g = _UNK_?;
      CStack_6.b = _UNK_?;
      CStack_6.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar5,&CStack_6,(MethodInfo *)0x0);
      pMVar5 = (this->fields).avatarHealthMaterial;
      if (bVar4 == 0) {
        if (pMVar5 == (Material *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        CStack_6.r = _UNK_?;
        CStack_6.g = _UNK_?;
        CStack_6.b = _UNK_?;
        CStack_6.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar5,&CStack_6,(MethodInfo *)0x0);
        pMVar5 = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
        if (pMVar5 == (Material *)0x0) goto code_?;
        CStack_6.r = _UNK_?;
        CStack_6.g = _UNK_?;
        CStack_6.b = _UNK_?;
        CStack_6.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar5,&CStack_6,(MethodInfo *)0x0);
        this_02 = (this->fields).teamIconRenderer;
        pMVar5 = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
        if (this_02 == (Renderer *)0x0) goto code_?;
      }
      else {
        if (pMVar5 == (Material *)0x0) goto code_?;
        CStack_6.r = _UNK_?;
        CStack_6.g = _UNK_?;
        CStack_6.b = _UNK_?;
        CStack_6.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar5,&CStack_6,(MethodInfo *)0x0);
        this_02 = (this->fields).teamIconRenderer;
        if (this_02 == (Renderer *)0x0) goto code_?;
        pMVar5 = (this->fields).teamIconMaterial;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                (this_02,pMVar5,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Initialize(Boolean, MVWorldObjectClient, Int32, ChatAnchor) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_Initialize
               (AvatarUIHandlerRemote *this,bool isLocal,MVWorldObjectClient *wo,
               int32_t ownerActorNr,ChatAnchor *chatBubbleAnchor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarUIHandlerRemote__HideUI__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarUIHandlerRemote__OnStateChanged_UnityEngine__CullingGroupEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value_00 = (Delegate *)0x0;
  AvatarUIHandler::AvatarUIHandler_Initialize
            ((AvatarUIHandler *)this,isLocal,wo,ownerActorNr,chatBubbleAnchor,(MethodInfo *)0x0);
  this_00 = (this->fields).avatarBadge;
  if (this_00 != (AvatarBadge *)0x0) {
    AvatarBadge::AvatarBadge_Initialize(this_00,ownerActorNr,(MethodInfo *)0x0);
    pRVar1 = (this->fields).teamIconRenderer;
    if ((pRVar1 != (Renderer *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pRVar1,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_2.x = 0.0;
      VStack_2.y = 0.0;
      VStack_2.z = 0.0;
      pvVar3 = (obj->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,&VStack_2);
      callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                 FUN_?(
                              TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                              );
      FUN_?(callback,this);
      this_08 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
      CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_08,callback,(MethodInfo *)0x0);
      VStack_6.z = VStack_2.z;
      VStack_6.x = VStack_2.x;
      VStack_6.y = VStack_2.y;
      CullingSubscriberBase::CullingSubscriberBase_Setup
                (this_08,_UNK_?,&VStack_6,(MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields).cullingSubscriberBase = this_08;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      this_01 = (this->fields).teamIcon;
      if ((this_01 != (TeamIconScaleWithDistance *)0x0) &&
         (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_01,(MethodInfo *)0x0), pGVar12 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar12,1,(MethodInfo *)0x0);
        this_02 = (this->fields).avatarName;
        if ((this_02 != (TMP_Text *)0x0) &&
           (pRVar1 = (Renderer *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               ((Component *)this_02,
                                UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                               ), pRVar1 != (Renderer *)0x0)) {
          pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              (pRVar1,(MethodInfo *)0x0);
          bVar7 = iRam_? != 0;
          (this->fields).avatarNameMaterial = pMVar13;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields).avatarNameMaterial >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          pRVar1 = (this->fields).healthBarRenderer;
          if (pRVar1 != (Renderer *)0x0) {
            pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                (pRVar1,(MethodInfo *)0x0);
            bVar7 = iRam_? != 0;
            (this->fields).avatarHealthMaterial = pMVar13;
            if (bVar7) {
              uVar8 = (uint)((ulonglong)&(this->fields).avatarHealthMaterial >> 0xc);
              uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
              do {
                uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                LOCK();
                bVar7 = uVar10 == *puVar11;
                if (bVar7) {
                  *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            pRVar1 = (this->fields).shieldBarRenderer;
            if (pRVar1 != (Renderer *)0x0) {
              pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  (pRVar1,(MethodInfo *)0x0);
              bVar7 = iRam_? != 0;
              (this->fields).avatarShieldMaterial = pMVar13;
              if (bVar7) {
                uVar8 = (uint)((ulonglong)&(this->fields).avatarShieldMaterial >> 0xc);
                uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                do {
                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                  LOCK();
                  bVar7 = uVar10 == *puVar11;
                  if (bVar7) {
                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar7);
              }
              this_03 = (this->fields).sayChatBubbleHandler;
              if (this_03 != (SayChatBubbleHandler *)0x0) {
                SayChatBubbleHandler::SayChatBubbleHandler_Initialize
                          (this_03,ownerActorNr,chatBubbleAnchor,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar14 != (MVGameControllerBase *)0x0) &&
                    (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
                   (this_04 = (pMVar15->fields).playerContainer, this_04 != (MVPlayerContainer *)0x0)
                   ) {
                  pMVar16 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                      (this_04,ownerActorNr,(MethodInfo *)0x0);
                  if (pMVar16 != (MVPlayer *)0x0) {
                    this_05 = (pMVar16->fields)._SubscriptionRules_k__BackingField;
                    pGVar12 = (this->fields).memberFrame;
                    if ((this_05 == (SubscriptionRulesWrapper *)0x0) ||
                       (value = MVWorldObject.dll::MV::WorldObject::Subscription::
                                SubscriptionRulesWrapper::SubscriptionRulesWrapper_HasBenefit
                                          (this_05,SubscriptionBenefit__Enum_XPBoost,
                                           (MethodInfo *)0x0), pGVar12 == (GameObject *)0x0))
                    goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar12,value,(MethodInfo *)0x0);
                  }
                  AvatarUIHandlerRemote_UpdateNameTag(this,(MethodInfo *)0x0);
                  AvatarUIHandlerRemote_UpdateHealthBarColor(this,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  a = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
                  this_09 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                  uVar5 = 0;
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_09,(Object *)this,MethodInfo__AvatarUIHandlerRemote__HideUI__,
                             (MethodInfo *)0x0);
                  pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)a,(Delegate *)this_09,(MethodInfo *)0x0);
                  if (pDVar17 != (Delegate *)0x0) {
                    if ((Action__Class *)pDVar17->klass == TypeInfo__System__Action) {
                      value_00 = pDVar17;
                    }
                    if (value_00 == (Delegate *)0x0) {
                      FUN_?(pDVar17);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__ChatCommandManager,value_00,0);
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__ChatCommandManager);
                  }
                  this_06 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                            TypeInfo__ChatCommandManager->static_fields->
                            chatCommandCallBackDictionary;
                  if (this_06 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
code_?:
                    FUN_?();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,UnityEngine::Vector3]::
                          Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                    (this_06,3,
                                     MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                                     ->klass->rgctx_data[0x21].method);
                  if (-1 < iVar18) {
                    if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__ChatCommandManager);
                    }
                    this_07 = TypeInfo__ChatCommandManager->static_fields->
                              chatCommandCallBackDictionary;
                    if (this_07 == (Dictionary_2_ChatCommand_System_Action_ *)0x0)
                    goto code_?;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::
                    Dictionary_2_System_Int32Enum_System_Object__TryInsert
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_07,3,
                               (Object *)value_00,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),1),
                               MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                               ->klass->rgctx_data[0x22].method);
                  }
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
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsOnSameTeamAsLocalAvatar() */

bool Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_IsOnSameTeamAsLocalAvatar
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar3 = MVPlayer::MVPlayer_IsOnSameTeam_1
                        ((MVPlayer *)this_01,(this->fields)._.worldObject,(MethodInfo *)0x0);
      return bVar3 != 0;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_OnDestroy
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarUIHandlerRemote__HideUI__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)0x0;
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  pMVar7 = (this->fields).avatarNameMaterial;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)pMVar7,0.0,(MethodInfo *)0x0);
  pMVar7 = (this->fields).avatarHealthMaterial;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)pMVar7,0.0,(MethodInfo *)0x0);
  bVar8 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar8 == 0) {
code_?:
    if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar9 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                        (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
    pNVar10 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar10,(Object *)this,MethodInfo__AvatarUIHandlerRemote__HideUI__,(MethodInfo *)0x0)
    ;
    pAVar9 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
    if (pAVar9 != (Action *)0x0) {
      if (pAVar9->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar9;
      }
      if (pAVar1 == (Action *)0x0) {
        FUN_?(pAVar9);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
              (ChatCommand__Enum_HideAllUI,pAVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                    ,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Action);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar12 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
    this_01 = (Action_2_Int32Enum_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar13 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar12,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar14 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    pAVar1 = (Action *)0x0;
    if (pDVar13 == (Delegate *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
    }
    else {
      pAVar12 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)FUN_?(pDVar13,
                                 TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                );
      if (pAVar12 ==
          (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0
         ) {
        FUN_?(pDVar13,pAVar14);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar12;
      pAVar14 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      lVar15 = FUN_?(pDVar13,
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
      if (lVar15 == 0) {
        FUN_?(pDVar13,pAVar14);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)
                      &TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                       OnSayChatMessageRecieved >> 0xc);
      lVar15 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar15 + 0xADDR);
        puVar6 = (ulonglong *)(lVar15 + 0xADDR);
        LOCK();
        bVar2 = uVar4 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    bVar8 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
    if (bVar8 == 0) {
      return;
    }
    pAVar9 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                        ((MethodInfo *)0x0);
    pNVar10 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    if (this != (AvatarUIHandlerRemote *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar10,(Object *)this,(this->klass->vtable).HandleTeamChange.method,
                 (MethodInfo *)0x0);
      pAVar16 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
      pAVar9 = pAVar1;
      if (pAVar16 != (Action *)0x0) {
        if (pAVar16->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar16;
        }
        if (pAVar9 == (Action *)0x0) {
          FUN_?(pAVar16);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                (pAVar9,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar17 != (MVGameControllerBase *)0x0) {
        if ((pMVar17->fields).game == (MVNetworkGame *)0x0) {
          return;
        }
        pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar18 != (MVNetworkGame *)0x0) &&
           (pMVar19 = (pMVar18->fields).playerContainer, pMVar19 != (MVPlayerContainer *)0x0)) {
          pAVar9 = (pMVar19->fields).OnPlayerListChanged;
          pNVar10 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar10,(Object *)this,(this->klass->vtable).HandleTeamChange.method,
                     (MethodInfo *)0x0);
          pAVar9 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pAVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
          if (pAVar9 == (Action *)0x0) {
            (pMVar19->fields).OnPlayerListChanged = (Action *)0x0;
          }
          else {
            pAVar16 = pAVar1;
            if (pAVar9->klass == TypeInfo__System__Action) {
              pAVar16 = pAVar9;
            }
            if (pAVar16 == (Action *)0x0) {
              FUN_?(pAVar9);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            (pMVar19->fields).OnPlayerListChanged = pAVar16;
            if (pAVar9->klass == TypeInfo__System__Action) {
              pAVar1 = pAVar9;
            }
            if (pAVar1 == (Action *)0x0) {
              FUN_?(pAVar9);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&(pMVar19->fields).OnPlayerListChanged >> 0xc);
            lVar15 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar15 + 0xADDR);
              puVar6 = (ulonglong *)(lVar15 + 0xADDR);
              LOCK();
              bVar2 = uVar4 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar18 != (MVNetworkGame *)0x0) {
            pMVar20 = (pMVar18->fields).teamManager;
            pUVar21 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar21,(Object *)this,
                       MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar20 != (MVTeamManager *)0x0) {
              MVTeamManager::MVTeamManager_remove_OnTeamAdded
                        (pMVar20,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar21,
                         (MethodInfo *)0x0);
              pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar18 != (MVNetworkGame *)0x0) {
                pMVar20 = (pMVar18->fields).teamManager;
                pUVar21 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar21,(Object *)this,
                           MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                           ,(MethodInfo *)0x0);
                if (pMVar20 != (MVTeamManager *)0x0) {
                  MVTeamManager::MVTeamManager_remove_OnTeamRemoved
                            (pMVar20,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar21,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar17 != (MVGameControllerBase *)0x0) &&
       (pMVar18 = (pMVar17->fields).game, pMVar18 != (MVNetworkGame *)0x0)) &&
      (pMVar19 = (pMVar18->fields).playerContainer, pMVar19 != (MVPlayerContainer *)0x0)) &&
     (pMVar22 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar19,(MethodInfo *)0x0),
     pMVar22 != (MVLocalPlayer *)0x0)) {
    this_00 = (pMVar22->fields).boostController;
    pNVar10 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar10,(Object *)this,MethodInfo__AvatarUIHandlerRemote__OnXRayBoostChanged__,
               (MethodInfo *)0x0);
    if (this_00 != (BoostController *)0x0) {
      BoostController::BoostController_UnSubscribeToBoostChanged
                (this_00,BoostType__Enum_XRayVision,(Action *)pNVar10,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_OnPositionChanged
               (AvatarUIHandlerRemote *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pCVar1 = (this->fields).cullingSubscriberBase;
  this_00 = (this->fields).teamIconRenderer;
  if ((this_00 != (Renderer *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    fStack_3 = 0.0;
    pvVar4 = (obj->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&uStack_2);
    if (pCVar1 != (CullingSubscriberBase *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CullingApiWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CullingApiWrapper);
      }
      pBVar7 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar7 != (BoundingSphere__Array *)0x0) {
        uVar8 = (pCVar1->fields)._CullingIndex_k__BackingField;
        if ((uint)pBVar7->max_length <= uVar8) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pBVar9 = pBVar7->vector + (int)uVar8;
        (pBVar9->position).x = (float)(undefined4)uStack_2;
        (pBVar9->position).y = (float)uStack_2._4_4_;
        (pBVar9->position).z = fStack_3;
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_OnStateChanged
               (AvatarUIHandlerRemote *this,CullingGroupEvent cullingEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = (this->fields).teamIconRenderer;
    if ((this_00 != (Renderer *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
      bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                        (cullingEvent,distanceBandIndex,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,bVar2,0,in_R9,unaff_RSI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (obj->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,bVar2);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnXRayBoostChanged() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_OnXRayBoostChanged
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  obj = (this->fields).teamIconRenderer;
  pMVar1 = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
  if (obj == (Renderer *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                  ,pMVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Renderer *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  if (pMVar1 == (Material *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (pMVar1->fields)._.m_CachedPtr;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,pvVar4);
  return;
}


/* Void SetHealthBarColor(Boolean) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
               (AvatarUIHandlerRemote *this,bool isFriendly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).avatarShieldMaterial;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar1 != (Material *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).avatarShieldMaterial;
      if (pMVar1 == (Material *)0x0) goto code_?;
      CStack_2.r = _UNK_?;
      CStack_2.g = _UNK_?;
      CStack_2.b = _UNK_?;
      CStack_2.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar1,&CStack_2,(MethodInfo *)0x0);
      pMVar1 = (this->fields).avatarHealthMaterial;
      if (isFriendly == 0) {
        if (pMVar1 == (Material *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        CStack_2.r = _UNK_?;
        CStack_2.g = _UNK_?;
        CStack_2.b = _UNK_?;
        CStack_2.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar1,&CStack_2,(MethodInfo *)0x0);
        pMVar1 = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
        if (pMVar1 == (Material *)0x0) goto code_?;
        CStack_2.r = _UNK_?;
        CStack_2.g = _UNK_?;
        CStack_2.b = _UNK_?;
        CStack_2.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar1,&CStack_2,(MethodInfo *)0x0);
        this_00 = (this->fields).teamIconRenderer;
        pMVar1 = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
        if (this_00 == (Renderer *)0x0) goto code_?;
      }
      else {
        if (pMVar1 == (Material *)0x0) goto code_?;
        CStack_2.r = _UNK_?;
        CStack_2.g = _UNK_?;
        CStack_2.b = _UNK_?;
        CStack_2.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar1,&CStack_2,(MethodInfo *)0x0);
        this_00 = (this->fields).teamIconRenderer;
        if (this_00 == (Renderer *)0x0) goto code_?;
        pMVar1 = (this->fields).teamIconMaterial;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                (this_00,pMVar1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetShouldShowUI(Boolean) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetShouldShowUI
               (AvatarUIHandlerRemote *this,bool shouldShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = 0;
  if ((this->fields).forceHideUI == 0) {
    value = shouldShow;
  }
  pAVar1 = (this->fields).avatarBadge;
  (this->fields)._.shouldShowUI = value;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pAVar1 != (AvatarBadge *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).avatarBadge;
      if ((pAVar1 == (AvatarBadge *)0x0) ||
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pAVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,value,(MethodInfo *)0x0);
    }
  }
  this_00 = (this->fields).healthBar;
  if ((this_00 != (HealthBar *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,value,(MethodInfo *)0x0);
    this_01 = (this->fields).shieldBar;
    if ((this_01 != (ShieldBar *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,value,(MethodInfo *)0x0);
      if ((this->fields).shouldShowMobileIcon != 0) {
        this_02 = (this->fields).mobileIcon;
        if ((this_02 == (MeshRenderer *)0x0) ||
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_02,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0
           )) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,value,(MethodInfo *)0x0);
      }
      AvatarUIHandlerRemote_set_NameTagLabelVisible(this,value,(MethodInfo *)0x0);
      this_03 = (this->fields).teamIcon;
      if ((this_03 != (TeamIconScaleWithDistance *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_03,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,value,0,in_R9,unaff_RSI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar2 == (GameObject *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar4 = (pGVar2->fields)._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,value);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowMobileIcon(BuildTarget) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_ShowMobileIcon
               (AvatarUIHandlerRemote *this,BuildTarget__Enum bT,MethodInfo *method)

{
  pMVar1 = (this->fields).mobileIcon;
  if (pMVar1 == (MeshRenderer *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pMVar1,(MethodInfo *)0x0);
  if (this_00 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,1,(MethodInfo *)0x0);
  if ((char)bT == '\x03') {
    pMVar1 = (this->fields).mobileIcon;
    if (pMVar1 == (MeshRenderer *)0x0) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pMVar1,(MethodInfo *)0x0);
    if (this_01 == (Material *)0x0) goto code_?;
    value = (this->fields).androidTexture;
  }
  else {
    if ((char)bT != '\x04') goto code_?;
    pMVar1 = (this->fields).mobileIcon;
    if (pMVar1 == (MeshRenderer *)0x0) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pMVar1,(MethodInfo *)0x0);
    if (this_01 == (Material *)0x0) goto code_?;
    value = (this->fields).iOSTexture;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
            (this_01,value,(MethodInfo *)0x0);
code_?:
  (this->fields).shouldShowMobileIcon = 1;
  return;
}


/* Void UpdateHealthBarColor() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateHealthBarColor
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 == (MVLocalPlayer *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                    ((MVPlayer *)this_01,(this->fields)._.worldObject,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = (this->fields).avatarShieldMaterial;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar5 != (Material *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar5->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar5 = (this->fields).avatarShieldMaterial;
      if (pMVar5 == (Material *)0x0) goto code_?;
      CStack_6.r = _UNK_?;
      CStack_6.g = _UNK_?;
      CStack_6.b = _UNK_?;
      CStack_6.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar5,&CStack_6,(MethodInfo *)0x0);
      pMVar5 = (this->fields).avatarHealthMaterial;
      if (bVar4 == 0) {
        if (pMVar5 == (Material *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        CStack_6.r = _UNK_?;
        CStack_6.g = _UNK_?;
        CStack_6.b = _UNK_?;
        CStack_6.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar5,&CStack_6,(MethodInfo *)0x0);
        pMVar5 = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
        if (pMVar5 == (Material *)0x0) goto code_?;
        CStack_6.r = _UNK_?;
        CStack_6.g = _UNK_?;
        CStack_6.b = _UNK_?;
        CStack_6.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar5,&CStack_6,(MethodInfo *)0x0);
        this_02 = (this->fields).teamIconRenderer;
        pMVar5 = AvatarUIHandlerRemote_get_EnemyIconMaterial(this,(MethodInfo *)0x0);
        if (this_02 == (Renderer *)0x0) goto code_?;
      }
      else {
        if (pMVar5 == (Material *)0x0) goto code_?;
        CStack_6.r = _UNK_?;
        CStack_6.g = _UNK_?;
        CStack_6.b = _UNK_?;
        CStack_6.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar5,&CStack_6,(MethodInfo *)0x0);
        this_02 = (this->fields).teamIconRenderer;
        if (this_02 == (Renderer *)0x0) goto code_?;
        pMVar5 = (this->fields).teamIconMaterial;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                (this_02,pMVar5,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void UpdateNameTag() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateNameTag
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0))
  goto code_?;
  bVar4 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                     (pMVar3,(this->fields)._.ownerActorNr,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0 ||
       ((pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             (pMVar3,(this->fields)._.ownerActorNr,(MethodInfo *)0x0),
        pMVar5 == (MVPlayer *)0x0 ||
        (pUVar6 = (pMVar5->fields)._UserProfileData_k__BackingField,
        pUVar6 == (UserProfileData *)0x0)))))) ||
     (pTVar7 = (this->fields).avatarName, pTVar7 == (TMP_Text *)0x0)) goto code_?;
  (*(pTVar7->klass->vtable).set_text.methodPtr)
            (pTVar7,(pUVar6->fields).UserName,(pTVar7->klass->vtable).set_text.method);
  uVar8 = _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar9 = (pMVar2->fields).teamManager, pMVar9 == (MVTeamManager *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar10 = (pMVar9->fields).teams;
  if (pDVar10 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
  goto code_?;
  uStack_11 = uVar8;
  uStack_12 = uVar8;
  if (1 < (pDVar10->fields)._count - (pDVar10->fields)._freeCount) {
    iVar13 = (pMVar5->fields)._Team_k__BackingField;
    if (iVar13 == 0) {
      uStack_12 = 0;
code_?:
      uVar8 = 0;
    }
    else if (iVar13 == 1) {
      uStack_12 = 0;
      uStack_11 = 0;
    }
    else {
      if (iVar13 == 2) {
        uStack_11 = 0;
        goto code_?;
      }
      if (iVar13 == 3) {
        uStack_11 = _UNK_?;
        uStack_12 = _UNK_?;
      }
    }
  }
  pTVar7 = (this->fields).avatarName;
  if (pTVar7 != (TMP_Text *)0x0) {
    uStack_14 = 0x3f800000;
    uStack_15 = uVar8;
    (*(pTVar7->klass->vtable).set_color.methodPtr)
              (pTVar7,&uStack_15,(pTVar7->klass->vtable).set_color.method);
    return;
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* AvatarUIHandlerRemote() */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote__ctor
               (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._.shouldShowUI = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Material get_EnemyIconMaterial() */

Material *
Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_EnemyIconMaterial
          (AvatarUIHandlerRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar3 != (MVLocalPlayer *)0x0) &&
       (this_01 = (pMVar3->fields).boostController, this_01 != (BoostController *)0x0)) {
      bVar4 = BoostController::BoostController_IsBoostActive
                        (this_01,BoostType__Enum_XRayVision,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return (this->fields).enemyIconMaterialVisibleThroughWalls;
      }
      return (this->fields).enemyIconMaterial;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pMVar6 = (Material *)(*pcVar5)();
  return pMVar6;
}


/* Void set_ForceHideUI(Boolean) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_ForceHideUI
               (AvatarUIHandlerRemote *this,bool value,MethodInfo *method)

{
  pAVar1 = this->klass;
  (this->fields).forceHideUI = value;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar1->vtable).SetShouldShowUI.methodPtr)
            (this,value ^ 1,(pAVar1->vtable).SetShouldShowUI.method);
  return;
}


/* Void set_NameTagLabelVisible(Boolean) */

void Assembly-CSharp.dll::AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
               (AvatarUIHandlerRemote *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>_bool_____
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).nameTagLabel;
  uVar1 = 0;
  uVar2 = uVar1;
  if ((this->fields).forceHideUI == 0) {
    uVar2 = (uint)value;
  }
  (this->fields).nameTagLabelVisible = (bool)uVar2;
  pMVar3 = 
  UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>_bool_____
  ;
  if (this_00 != (Transform *)0x0) {
    if ((
        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>_bool_____
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>_bool_____
                   );
    }
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if ((this_01 != (GameObject *)0x0) &&
       (p_Var3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_4
                           (this_01,1,((pMVar3->field7_0x38).rgctx_data)->method),
       p_Var3 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
      pp_Var8 = p_Var3->vector;
      while( true ) {
        if ((int)p_Var3->max_length <= (int)uVar1) {
          return;
        }
        if ((uint)p_Var3->max_length <= uVar1) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        obj = (Object *)*pp_Var8;
        if (obj == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar5 = obj[1].klass;
        if (pOVar5 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pOVar5);
        uVar1 = uVar1 + 1;
        pp_Var8 = pp_Var8 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

