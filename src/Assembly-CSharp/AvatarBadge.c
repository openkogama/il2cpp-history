
/* Void Initialize(Int32) */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_Initialize
               (AvatarBadge *this,int32_t ownerActorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarBadge__OnLevelingInitialized__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarBadge__ScaleAnimationIntermediateCallback_float_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).scaleAnimation;
  (this->fields).ownerActorId = ownerActorId;
  if (pSVar1 == (ScaleAnimations *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (pSVar1->fields).OnIntermediateScaleAnimationStopped;
  this_00 = (UnityAction_1_System_Single_ *)
            FUN_?(TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
  UnityAction_1_System_Single___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarBadge__ScaleAnimationIntermediateCallback_float_,(MethodInfo *)0x0);
  pSVar4 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pSVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  pSVar3 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
  if (pSVar4 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
    (pSVar1->fields).OnIntermediateScaleAnimationStopped =
         (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
  }
  else {
    pSVar5 = pSVar3;
    if (pSVar4->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
      pSVar5 = pSVar4;
    }
    if (pSVar5 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pSVar1->fields).OnIntermediateScaleAnimationStopped = pSVar5;
    pSVar5 = pSVar3;
    if (pSVar4->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
      pSVar5 = pSVar4;
    }
    if (pSVar5 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(pSVar1->fields).OnIntermediateScaleAnimationStopped >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
    if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    a = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__AvatarBadge__OnLevelingInitialized__,
               (MethodInfo *)0x0);
    pSVar4 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pSVar4 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
    }
    else {
      pSVar5 = pSVar3;
      if (pSVar4->klass ==
          (ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)
          TypeInfo__UnityEngine__Events__UnityAction) {
        pSVar5 = pSVar4;
      }
      if (pSVar5 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        FUN_?(pSVar4,TypeInfo__UnityEngine__Events__UnityAction);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)pSVar5;
      if (pSVar4->klass ==
          (ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)
          TypeInfo__UnityEngine__Events__UnityAction) {
        pSVar3 = pSVar4;
      }
      if (pSVar3 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        FUN_?(pSVar4);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  else {
    AvatarBadge_OnLevelingInitialized(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnBadgeTextureReceived(UnityWebRequest) */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_OnBadgeTextureReceived
               (AvatarBadge *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get_AvatarBadge__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UIItems);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (DownloadHandlerTexture *)
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
            DownloadHandler_GetCheckedDownloader
                      (www,
                       UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                      );
  if (this_00 != (DownloadHandlerTexture *)0x0) {
    pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
             DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                       (this_00,(MethodInfo *)0x0);
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
    if (pTVar1 != (Texture2D *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
        pMVar2 = (this->fields).badgeRenderer;
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
        if (pMVar2 != (MeshRenderer *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pMVar2->fields)._._._.m_CachedPtr != (void *)0x0) {
            pMVar2 = (this->fields).badgeRenderer;
            if (pMVar2 != (MeshRenderer *)0x0) {
              this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pMVar2,(MethodInfo *)0x0);
              value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                (StringLiteral_UIItems,(MethodInfo *)0x0);
              if (this_01 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                          (this_01,value,(MethodInfo *)0x0);
                bVar3 = iRam_? != 0;
                (this->fields).badgeTextureAsset = (Texture *)pTVar1;
                if (bVar3) {
                  uVar4 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                  do {
                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar3 = uVar6 == *puVar7;
                    if (bVar3) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar3);
                }
                pSVar8 = (this->fields).scaleAnimation;
                if (pSVar8 != (ScaleAnimations *)0x0) {
                  (*(pSVar8->klass->vtable).Play.methodPtr)
                            (pSVar8,0,(pSVar8->klass->vtable).Play.method);
                  return;
                }
              }
            }
            goto code_?;
          }
        }
      }
    }
    if (www != (UnityWebRequest *)0x0) {
      pSVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      pSVar9 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Failed_to_get_AvatarBadge__,pSVar9,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar9,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_OnDestroy(AvatarBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarBadge__OnLevelingInitialized__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarBadge__ScaleAnimationIntermediateCallback_float_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarBadge__UpdateBadge_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelingManager);
  }
  source = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,MethodInfo__AvatarBadge__OnLevelingInitialized__,
             (MethodInfo *)0x0);
  pSVar1 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)source,(Delegate *)this_02,(MethodInfo *)0x0);
  pSVar2 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
  if (pSVar1 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
  }
  else {
    pSVar3 = pSVar2;
    if (pSVar1->klass ==
        (ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)
        TypeInfo__UnityEngine__Events__UnityAction) {
      pSVar3 = pSVar1;
    }
    if (pSVar3 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
      FUN_?(pSVar1,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)pSVar3;
    pSVar3 = pSVar2;
    if (pSVar1->klass ==
        (ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)
        TypeInfo__UnityEngine__Events__UnityAction) {
      pSVar3 = pSVar1;
    }
    if (pSVar3 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
      FUN_?(pSVar1);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  bVar10 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar10 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar11 != (MVGameControllerBase *)0x0) {
    if ((pMVar11->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    if ((this->fields).ownerActorId != -1) {
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar12 == (MVNetworkGame *)0x0) ||
         (pMVar13 = (pMVar12->fields).playerContainer, pMVar13 == (MVPlayerContainer *)0x0))
      goto code_?;
      bVar10 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                        (pMVar13,(this->fields).ownerActorId,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar12 == (MVNetworkGame *)0x0) ||
            (pMVar13 = (pMVar12->fields).playerContainer, pMVar13 == (MVPlayerContainer *)0x0)) ||
           (pMVar14 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                (pMVar13,(this->fields).ownerActorId,(MethodInfo *)0x0),
           pMVar14 == (MVPlayer *)0x0)) goto code_?;
        pUVar15 = (pMVar14->fields).OnLevelChanged;
        pDVar16 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        FUN_?(pDVar16,this);
        pDVar16 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pUVar15,pDVar16,(MethodInfo *)0x0);
        pUVar17 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        if (pDVar16 == (Delegate *)0x0) {
          (pMVar14->fields).OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
        }
        else {
          pUVar15 = (UnityAction_1_System_Int32_ *)
                    FUN_?(pDVar16,TypeInfo__UnityEngine__Events__UnityAction<int>);
          if (pUVar15 == (UnityAction_1_System_Int32_ *)0x0) {
            FUN_?(pDVar16,pUVar17);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (pMVar14->fields).OnLevelChanged = pUVar15;
          pUVar17 = TypeInfo__UnityEngine__Events__UnityAction<int>;
          lVar18 = FUN_?();
          if (lVar18 == 0) {
            FUN_?(pDVar16,pUVar17);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        func_?(&(pMVar14->fields).OnLevelChanged);
      }
    }
    pSVar19 = (this->fields).scaleAnimation;
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
    if (pSVar19 != (ScaleAnimations *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pSVar19->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        pSVar19 = (this->fields).scaleAnimation;
        if (pSVar19 == (ScaleAnimations *)0x0) goto code_?;
        pSVar1 = (pSVar19->fields).OnIntermediateScaleAnimationStopped;
        this_03 = (UnityAction_1_System_Single_ *)
                  FUN_?(TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
        UnityAction_1_System_Single___ctor
                  (this_03,(Object *)this,
                   MethodInfo__AvatarBadge__ScaleAnimationIntermediateCallback_float_,
                   (MethodInfo *)0x0);
        pSVar1 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pSVar1,(Delegate *)this_03,(MethodInfo *)0x0);
        if (pSVar1 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
          (pSVar19->fields).OnIntermediateScaleAnimationStopped =
               (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
        }
        else {
          pSVar3 = pSVar2;
          if (pSVar1->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
            pSVar3 = pSVar1;
          }
          if (pSVar3 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
            FUN_?(pSVar1);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (pSVar19->fields).OnIntermediateScaleAnimationStopped = pSVar3;
          if (pSVar1->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
            pSVar2 = pSVar1;
          }
          if (pSVar2 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
            FUN_?(pSVar1);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        func_?(&(pSVar19->fields).OnIntermediateScaleAnimationStopped);
      }
    }
    this_00 = (this->fields).badgeRenderer;
    if (this_00 != (MeshRenderer *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                      ((Renderer *)this_00,(MethodInfo *)0x0);
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
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnLevelingInitialized() */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_OnLevelingInitialized
               (AvatarBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarBadge__UpdateBadge_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                         (this_00,(this->fields).ownerActorId,(MethodInfo *)0x0),
     pMVar3 != (MVPlayer *)0x0)) {
    level = (pMVar3->fields).level;
    aIStackX_18[0].m_value = level;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__BadgeManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_02 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,(MethodInfo *)0x0);
    this_01 = (this->fields).levelText;
    value = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
    if (this_01 != (TextMesh *)0x0) {
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (this_01,value,(MethodInfo *)0x0);
      pUVar4 = (pMVar3->fields).OnLevelChanged;
      pDVar5 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      FUN_?(pDVar5,this);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar4,pDVar5,(MethodInfo *)0x0);
      pUVar6 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      if (pDVar5 == (Delegate *)0x0) {
        (pMVar3->fields).OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
      }
      else {
        pUVar4 = (UnityAction_1_System_Int32_ *)
                  FUN_?(pDVar5,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (pUVar4 == (UnityAction_1_System_Int32_ *)0x0) {
          FUN_?(pDVar5,pUVar6);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (pMVar3->fields).OnLevelChanged = pUVar4;
        pUVar6 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        lVar8 = FUN_?(pDVar5,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (lVar8 == 0) {
          FUN_?(pDVar5,pUVar6);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar3->fields).OnLevelChanged >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ScaleAnimationIntermediateCallback(Single) */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_ScaleAnimationIntermediateCallback
               (AvatarBadge *this,float extraTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GUIDevScene);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  sceneHandle = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                SceneManager_GetActiveScene((MethodInfo *)0x0);
  pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::Scene::Scene_GetNameInternal
                     (sceneHandle.m_Handle,(MethodInfo *)0x0);
  if ((pSVar1 != StringLiteral_GUIDevScene) &&
     ((((pSVar1 == (String *)0x0 || (StringLiteral_GUIDevScene == (String *)0x0)) ||
       ((pSVar1->fields)._stringLength != (StringLiteral_GUIDevScene->fields)._stringLength)) ||
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral_GUIDevScene->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 == 0)))) {
    this_00 = (this->fields).badgeRenderer;
    if ((this_00 == (MeshRenderer *)0x0) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)this_00,(MethodInfo *)0x0), this_01 == (Material *)0x0)) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
              (this_01,(this->fields).badgeTextureAsset,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields).badgeTextureAsset = (Texture *)0x0;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
  }
  return;
}


/* Void UpdateBadge(Int32) */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_UpdateBadge
               (AvatarBadge *this,int32_t level,MethodInfo *method)

{
  aIStackX_10[0].m_value = level;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  BadgeManager::BadgeManager_GetBadgeTexture
            (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  obj = (this->fields).levelText;
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  if (obj == (TextMesh *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::TextMesh>_UnityEngine__TextMesh_
                  ,pSVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStack_3 = (uint16_t *)0x0;
  uStack_4 = 0;
  uStack_5 = 0;
  puStack_6 = &stack0x00000008;
  if (obj != (TextMesh *)0x0) {
    pvVar7 = (obj->fields)._._.m_CachedPtr;
    if (pvVar7 != (void *)0x0) {
      if (pSVar1 != (String *)0x0) {
        if ((pSVar1->fields)._stringLength == 0) {
          puStack_3 = (uint16_t *)0x1;
          uStack_4 = 0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar8 = (pSVar1->fields)._stringLength;
          puStack_3 = &(pSVar1->fields)._firstChar;
          if (iVar8 == 0) {
            puStack_3 = (uint16_t *)0x0;
          }
          uStack_4 = CONCAT44(uStack_4._4_4_,iVar8);
        }
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? != (code *)0x0) ||
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 != (code *)0x0)) {
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar7,&puStack_3);
        return;
      }
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

