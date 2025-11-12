
/* Void Awake() */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_Awake(LevelBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__LevelBadge__OnLevelingInitialized__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).levelBadge;
  if (this_00 != (RawImage *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pPVar1 = (this->fields).xpBar;
    if ((pPVar1 != (ProgressBarAndroid *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pPVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pPVar1 = (this->fields).subscriberXPBar;
      if ((pPVar1 != (ProgressBarAndroid *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pPVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
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
        if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__LevelBadge__UpdateBadge_int_);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__LevelBadge__UpdateProgress_XPProgressData_);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
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
          pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar3 != (MVGameControllerBase *)0x0) &&
               (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
              (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) &&
             (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar5,(MethodInfo *)0x0), pMVar6 != (MVLocalPlayer *)0x0)) {
            level = (pMVar6->fields)._.level;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__BadgeManager);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pUVar7 = (UnityAction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (pUVar7,(Object *)this,
                       MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
              FUN_?();
            }
            BadgeManager::BadgeManager_GetBadgeTexture
                      (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar7,
                       (MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar3 != (MVGameControllerBase *)0x0) &&
                (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
               ((pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0 &&
                (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                     (pMVar5,(MethodInfo *)0x0), pMVar6 != (MVLocalPlayer *)0x0))))
            {
              pUVar8 = (pMVar6->fields)._.OnLevelChanged;
              pDVar9 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
              FUN_?(pDVar9,this);
              pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pUVar8,pDVar9,(MethodInfo *)0x0);
              pUVar10 = TypeInfo__UnityEngine__Events__UnityAction<int>;
              if (pDVar9 == (Delegate *)0x0) {
                (pMVar6->fields)._.OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
              }
              else {
                pUVar8 = (UnityAction_1_System_Int32_ *)
                          FUN_?(pDVar9,TypeInfo__UnityEngine__Events__UnityAction<int>);
                if (pUVar8 == (UnityAction_1_System_Int32_ *)0x0) {
                  FUN_?(pDVar9,pUVar10);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                (pMVar6->fields)._.OnLevelChanged = pUVar8;
                pUVar10 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                lVar12 = FUN_?();
                if (lVar12 == 0) {
                  FUN_?(pDVar9,pUVar10);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar13 = (uint)((ulonglong)&(pMVar6->fields)._.OnLevelChanged >> 0xc);
                lVar12 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
                do {
                  uVar14 = *(ulonglong *)(lVar12 + 0xADDR);
                  puVar15 = (ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar16 = uVar14 == *puVar15;
                  if (bVar16) {
                    *puVar15 = uVar14 | 1L << (uVar13 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar16);
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar3 != (MVGameControllerBase *)0x0) &&
                  (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
                 ((pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0 &&
                  ((pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                        (pMVar5,(MethodInfo *)0x0), pMVar6 != (MVLocalPlayer *)0x0
                   && (pXVar17 = (pMVar6->fields).xpProgress, pXVar17 != (XPProgress *)0x0)))))) {
                LevelBadge_UpdateProgress(this,(pXVar17->fields).xpProgressData,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((((pMVar3 != (MVGameControllerBase *)0x0) &&
                     (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
                    (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0))
                   && (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                           (pMVar5,(MethodInfo *)0x0),
                      pMVar6 != (MVLocalPlayer *)0x0)) {
                  pXVar18 = (pMVar6->fields).OnXPProgressData;
                  pUVar7 = (UnityAction_1_System_Object_ *)
                            FUN_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                  UnityAction_1_System_Object___ctor
                            (pUVar7,(Object *)this,
                             MethodInfo__LevelBadge__UpdateProgress_XPProgressData_,
                             (MethodInfo *)0x0);
                  pXVar18 = (XPProgress_OnXPProgressDataDelegate *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pXVar18,(Delegate *)pUVar7,(MethodInfo *)0x0);
                  if (pXVar18 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
                    (pMVar6->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
                  }
                  else {
                    pXVar19 = (XPProgress_OnXPProgressDataDelegate *)0x0;
                    if (pXVar18->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
                      pXVar19 = pXVar18;
                    }
                    if (pXVar19 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
                      FUN_?(pXVar18);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    (pMVar6->fields).OnXPProgressData = pXVar19;
                    pXVar19 = (XPProgress_OnXPProgressDataDelegate *)0x0;
                    if (pXVar18->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
                      pXVar19 = pXVar18;
                    }
                    if (pXVar19 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
                      FUN_?(pXVar18);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar13 = (uint)((ulonglong)&(pMVar6->fields).OnXPProgressData >> 0xc);
                    lVar12 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar14 = *(ulonglong *)(lVar12 + 0xADDR);
                      puVar15 = (ulonglong *)(lVar12 + 0xADDR);
                      LOCK();
                      bVar16 = uVar14 == *puVar15;
                      if (bVar16) {
                        *puVar15 = uVar14 | 1L << (uVar13 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar16);
                  }
                  return;
                }
              }
            }
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        pUVar20 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this,MethodInfo__LevelBadge__OnLevelingInitialized__,
                   (MethodInfo *)0x0);
        pUVar20 = (UnityAction *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar20,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pUVar20 == (UnityAction *)0x0) {
          TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
        }
        else {
          pUVar21 = (UnityAction *)0x0;
          if (pUVar20->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar21 = pUVar20;
          }
          if (pUVar21 == (UnityAction *)0x0) {
            FUN_?(pUVar20,TypeInfo__UnityEngine__Events__UnityAction);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar21;
          pUVar21 = (UnityAction *)0x0;
          if (pUVar20->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar21 = pUVar20;
          }
          if (pUVar21 == (UnityAction *)0x0) {
            FUN_?(pUVar20,TypeInfo__UnityEngine__Events__UnityAction);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar13 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
          puVar15 = (ulonglong *)((ulonglong)((uVar13 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar22 = *puVar15;
            LOCK();
            uVar14 = *puVar15;
            if (uVar22 == uVar14) {
              *puVar15 = uVar22 | 1L << (uVar13 & 0x3f);
            }
            UNLOCK();
          } while (uVar22 != uVar14);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_OnDestroy(LevelBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
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
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).badgeTextureAsset = (Texture2D *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void OnLevelingInitialized() */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_OnLevelingInitialized
               (LevelBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__LevelBadge__UpdateBadge_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LevelBadge__UpdateProgress_XPProgressData_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
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
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    level = (pMVar4->fields)._.level;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__BadgeManager);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pUVar5 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar5,(Object *)this,
               MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
        (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
        pMVar4 != (MVLocalPlayer *)0x0)))) {
      pUVar6 = (pMVar4->fields)._.OnLevelChanged;
      pDVar7 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      FUN_?(pDVar7,this);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar6,pDVar7,(MethodInfo *)0x0);
      pUVar8 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      if (pDVar7 == (Delegate *)0x0) {
        (pMVar4->fields)._.OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
      }
      else {
        pUVar6 = (UnityAction_1_System_Int32_ *)
                  FUN_?(pDVar7,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (pUVar6 == (UnityAction_1_System_Int32_ *)0x0) {
          FUN_?(pDVar7,pUVar8);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (pMVar4->fields)._.OnLevelChanged = pUVar6;
        pUVar8 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        lVar10 = FUN_?();
        if (lVar10 == 0) {
          FUN_?(pDVar7,pUVar8);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)&(pMVar4->fields)._.OnLevelChanged >> 0xc);
        lVar10 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar13 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
          ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
           pMVar4 != (MVLocalPlayer *)0x0 &&
           (pXVar15 = (pMVar4->fields).xpProgress, pXVar15 != (XPProgress *)0x0)))))) {
        LevelBadge_UpdateProgress(this,(pXVar15->fields).xpProgressData,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
             (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
            (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
           (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
           pMVar4 != (MVLocalPlayer *)0x0)) {
          pXVar16 = (pMVar4->fields).OnXPProgressData;
          pUVar5 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar5,(Object *)this,MethodInfo__LevelBadge__UpdateProgress_XPProgressData_,
                     (MethodInfo *)0x0);
          pXVar16 = (XPProgress_OnXPProgressDataDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pXVar16,(Delegate *)pUVar5,(MethodInfo *)0x0);
          if (pXVar16 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
            (pMVar4->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
          }
          else {
            pXVar17 = (XPProgress_OnXPProgressDataDelegate *)0x0;
            if (pXVar16->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
              pXVar17 = pXVar16;
            }
            if (pXVar17 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
              FUN_?(pXVar16);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (pMVar4->fields).OnXPProgressData = pXVar17;
            pXVar17 = (XPProgress_OnXPProgressDataDelegate *)0x0;
            if (pXVar16->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
              pXVar17 = pXVar16;
            }
            if (pXVar17 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
              FUN_?(pXVar16);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar11 = (uint)((ulonglong)&(pMVar4->fields).OnXPProgressData >> 0xc);
            lVar10 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar10 + 0xADDR);
              puVar13 = (ulonglong *)(lVar10 + 0xADDR);
              LOCK();
              bVar14 = uVar12 == *puVar13;
              if (bVar14) {
                *puVar13 = uVar12 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_StreamingAssetCallback
               (LevelBadge *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
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
  this_02 = (DownloadHandlerTexture *)
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
            DownloadHandler_GetCheckedDownloader
                      (www,
                       UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                      );
  if (this_02 == (DownloadHandlerTexture *)0x0) goto code_?;
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
            DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                      (this_02,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).badgeTextureAsset = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pTVar1 = (this->fields).badgeTextureAsset;
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
      pRVar7 = (this->fields).levelBadge;
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
      if (pRVar7 != (RawImage *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((void *)(pRVar7->fields)._._._._._._._ != (void *)0x0) {
          pRVar7 = (this->fields).levelBadge;
          if (pRVar7 != (RawImage *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pRVar7,1,(MethodInfo *)0x0);
            pRVar7 = (this->fields).levelBadge;
            if (pRVar7 != (RawImage *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (pRVar7,(Texture *)(this->fields).badgeTextureAsset,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField !=
                  0) {
                return;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar8 != (MVGameControllerBase *)0x0) &&
                   (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
                  (this_00 = (pMVar9->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0))
                 && ((pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                          (this_00,(MethodInfo *)0x0),
                     pMVar10 != (MVLocalPlayer *)0x0 &&
                     (this_01 = (pMVar10->fields)._._SubscriptionRules_k__BackingField,
                     this_01 != (SubscriptionRulesWrapper *)0x0)))) {
                value = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                        SubscriptionRulesWrapper_HasBenefit
                                  (this_01,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
                pPVar11 = (this->fields).xpBar;
                if ((pPVar11 != (ProgressBarAndroid *)0x0) &&
                   (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pPVar11,(MethodInfo *)0x0),
                   pGVar12 != (GameObject *)0x0)) {
                  bVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeSelf(pGVar12,(MethodInfo *)0x0);
                  if (bVar13 == value) {
                    pPVar11 = (this->fields).xpBar;
                    if ((pPVar11 == (ProgressBarAndroid *)0x0) ||
                       (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pPVar11,(MethodInfo *)0x0),
                       pGVar12 == (GameObject *)0x0)) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar12,value ^ 1,(MethodInfo *)0x0);
                  }
                  pPVar11 = (this->fields).subscriberXPBar;
                  if ((pPVar11 != (ProgressBarAndroid *)0x0) &&
                     (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pPVar11,(MethodInfo *)0x0),
                     pGVar12 != (GameObject *)0x0)) {
                    bVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_activeSelf(pGVar12,(MethodInfo *)0x0);
                    if (bVar13 == value) {
                      return;
                    }
                    pPVar11 = (this->fields).subscriberXPBar;
                    if ((pPVar11 != (ProgressBarAndroid *)0x0) &&
                       (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pPVar11,(MethodInfo *)0x0),
                       pGVar12 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar12,value,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
code_?:
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
    }
  }
  return;
}


/* Void UpdateBadge(Int32) */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_UpdateBadge
               (LevelBadge *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_03 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_03,(Object *)this,
             MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager,this_03,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedTextureRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Level_exceeds_defined_badges__Us);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_badges_was_loaded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Unity_2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__BadgeManager->static_fields->maxLevelBadge == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_No_badges_was_loaded;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
            TypeInfo__BadgeManager->static_fields->badgeUrls;
  if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_01,level,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar4 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Level_exceeds_defined_badges__Us,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      level = TypeInfo__BadgeManager->static_fields->maxLevelBadge;
    }
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_02 = TypeInfo__BadgeManager->static_fields->badgeUrls;
    if ((this_02 != (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) &&
       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_02,level,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                           ), pOVar5 != (Object *)0x0)) {
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                          ((String *)pOVar5[1].monitor,StringLiteral__Unity_2,(MethodInfo *)0x0);
      this_04 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedTextureRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_04,pSVar1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      *(undefined1 *)&this_04[1].klass = 0;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AsyncWWWManager,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__CachedGetRequest);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      if (TypeInfo__AsyncWWWManager->static_fields->isQuiting != 0) {
        return;
      }
      if (this_04 != (AsyncWebRequest *)0x0) {
        bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
        if ((bVar6 <= (this_04->klass->_1).naturalAligment) &&
           ((this_04->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
            (Il2CppClass *)TypeInfo__CachedGetRequest)) {
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__AsyncWWWManager);
          }
          pAVar7 = this_04->klass;
          bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
          if (((pAVar7->_1).naturalAligment < bVar6) ||
             ((pAVar7->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
              (Il2CppClass *)TypeInfo__CachedGetRequest)) {
            FUN_?(this_04,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar7,
                          unaff_RBX);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          cVar8 = (*(code *)pAVar7[1]._0.image)
                            (this_04,TypeInfo__AsyncWWWManager->static_fields->cache,
                             pAVar7[1]._0.gc_desc);
          if (cVar8 != '\0') {
            return;
          }
        }
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
      if (((this_04 != (AsyncWebRequest *)0x0) &&
          (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                              (this_04->fields).requestPriority,
                              MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                             ), pOVar5 != (Object *)0x0)) {
        if (pOVar5[1].klass != (Object__Class *)0x0) {
          if (*(int *)&pOVar5[2].klass == *(int *)&((pOVar5[1].klass)->_0).namespaze) {
            pOVar9 = pOVar5[1].klass;
            iVar10 = *(int *)&(pOVar9->_0).namespaze * 2;
            if (iVar10 < *(int *)&(pOVar9->_0).namespaze + 4) {
              iVar10 = *(int *)&(pOVar9->_0).namespaze + 4;
            }
            FUN_?(pOVar5,iVar10,
                          MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                          ->klass->rgctx_data[5].rgctxDataDummy);
          }
          if (pOVar5[1].klass != (Object__Class *)0x0) {
            FUN_?(pOVar5[1].klass,(longlong)*(int *)((longlong)&pOVar5[1].monitor + 4),
                          this_04);
            if (pOVar5[1].klass != (Object__Class *)0x0) {
              iVar11 = *(int *)((longlong)&pOVar5[1].monitor + 4) + 1;
              iVar10 = 0;
              if (iVar11 != *(int *)&((pOVar5[1].klass)->_0).namespaze) {
                iVar10 = iVar11;
              }
              *(int *)((longlong)&pOVar5[1].monitor + 4) = iVar10;
              *(int *)&pOVar5[2].klass = *(int *)&pOVar5[2].klass + 1;
              piVar12 = (int *)((longlong)&pOVar5[2].klass + 4);
              *piVar12 = *piVar12 + 1;
              return;
            }
          }
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateProgress(XPProgressData) */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_UpdateProgress
               (LevelBadge *this,XPProgressData *xpProgress,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Can_t_calculate_update_progress_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_processPercentage_invalid_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProgressPercentage__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((xpProgress != (XPProgressData *)0x0) &&
     (pXVar1 = (xpProgress->fields).xpLevelLimits, pXVar1 != (XPLevelLimits *)0x0)) {
    if ((pXVar1->fields)._NextXP_k__BackingField - (pXVar1->fields)._PrevXP_k__BackingField < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Can_t_calculate_update_progress_,(MethodInfo *)0x0);
      return;
    }
    value_00 = (float)((xpProgress->fields).playerCurrentXP -
                      (pXVar1->fields)._PrevXP_k__BackingField) /
               (float)((pXVar1->fields)._NextXP_k__BackingField -
                      (pXVar1->fields)._PrevXP_k__BackingField);
    if (value_00 < 0.0) {
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                       ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Number::Number_FormatSingle
                         (value_00,(String *)0x0,info,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_ProgressPercentage__,pSVar2,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_processPercentage_invalid_,(MethodInfo *)0x0);
    }
    fVar3 = _UNK_?;
    pPVar4 = (this->fields).xpBar;
    if (pPVar4 != (ProgressBarAndroid *)0x0) {
      if (value_00 < 0.0) {
        value = 0.0;
      }
      else {
        value = _UNK_?;
        if (value_00 <= _UNK_?) {
          value = value_00;
        }
      }
      pSVar5 = (pPVar4->fields).ProgressBar;
      (pPVar4->fields).progress = value;
      if (pSVar5 != (Scrollbar *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                  (pSVar5,value,(MethodInfo *)0x0);
        pPVar4 = (this->fields).subscriberXPBar;
        if (pPVar4 != (ProgressBarAndroid *)0x0) {
          if (value_00 < 0.0) {
            value_00 = 0.0;
          }
          else if (fVar3 < value_00) {
            value_00 = fVar3;
          }
          pSVar5 = (pPVar4->fields).ProgressBar;
          (pPVar4->fields).progress = value_00;
          if (pSVar5 != (Scrollbar *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                      (pSVar5,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

