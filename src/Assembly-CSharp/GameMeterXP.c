
/* Void Init() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_Init(GameMeterXP *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GameMeterXP__Init__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterXP__OnProgressUpdate_XPProgressData_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
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
    pXVar5 = (pMVar4->fields).OnXPProgressData;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,MethodInfo__GameMeterXP__OnProgressUpdate_XPProgressData_,
               (MethodInfo *)0x0);
    pXVar5 = (XPProgress_OnXPProgressDataDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pXVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pXVar5 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
      (pMVar4->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
    }
    else {
      pXVar6 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar5->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar6 = pXVar5;
      }
      if (pXVar6 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (pMVar4->fields).OnXPProgressData = pXVar6;
      pXVar6 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar5->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar6 = pXVar5;
      }
      if (pXVar6 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pMVar4->fields).OnXPProgressData >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__LevelingManager);
    }
    pUVar13 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__GameMeterXP__Init__,(MethodInfo *)0x0);
    pUVar13 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar13,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pUVar13 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
    }
    else {
      pUVar14 = (UnityAction *)0x0;
      if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar14 = pUVar13;
      }
      if (pUVar14 == (UnityAction *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar14;
      pUVar14 = (UnityAction *)0x0;
      if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar14 = pUVar13;
      }
      if (pUVar14 == (UnityAction *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
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
      pXVar16 = (pXVar15->fields).xpProgressData;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar17 = (this->fields)._.gameMeterVisualEffects;
      uVar8 = 0;
      if (pLVar17 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
        lVar18 = 0x20;
        do {
          if ((pLVar17->fields)._size <= (int)uVar8) {
            if ((pXVar16 != (XPProgressData *)0x0) &&
               (pXVar19 = (pXVar16->fields).xpLevelLimits, pXVar19 != (XPLevelLimits *)0x0)) {
              iVar20 = (pXVar16->fields).playerCurrentXP;
              iVar21 = (pXVar19->fields)._NextXP_k__BackingField;
              (this->fields).elapsedInterpolationTime = 0.0;
              (this->fields).interpolateTowardsXPProgress = (float)(iVar20 / iVar21);
              return;
            }
            break;
          }
          pLVar17 = (this->fields)._.gameMeterVisualEffects;
          if (pLVar17 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
          if ((uint)(pLVar17->fields)._size <= uVar8) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pGVar22 = (pLVar17->fields)._items;
          if (pGVar22 == (GameMeterVisualEffect__Array *)0x0) break;
          if ((uint)pGVar22->max_length <= uVar8) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar23 = *(longlong **)((longlong)pGVar22->vector + lVar18 + -0x20);
          if (plVar23 == (longlong *)0x0) break;
          (**(code **)(*plVar23 + 0x178))(plVar23,*(undefined8 *)(*plVar23 + 0x180));
          pLVar17 = (this->fields)._.gameMeterVisualEffects;
          uVar8 = uVar8 + 1;
          lVar18 = lVar18 + 8;
        } while (pLVar17 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_Initialize(GameMeterXP *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GameMeterXP__Init__);
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
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
         (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
        (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) ||
       (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
       pMVar4 == (MVLocalPlayer *)0x0)) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pMVar4->fields).xpProgress != (XPProgress *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__GameMeterXP__Init__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__GameMeterXP__OnProgressUpdate_XPProgressData_);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__LevelingManager);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
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
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
          (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
          pMVar4 != (MVLocalPlayer *)0x0)))) {
        pXVar6 = (pMVar4->fields).OnXPProgressData;
        this_00 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,(Object *)this,MethodInfo__GameMeterXP__OnProgressUpdate_XPProgressData_,
                   (MethodInfo *)0x0);
        pXVar6 = (XPProgress_OnXPProgressDataDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pXVar6,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pXVar6 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
          (pMVar4->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
        }
        else {
          pXVar7 = (XPProgress_OnXPProgressDataDelegate *)0x0;
          if (pXVar6->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
            pXVar7 = pXVar6;
          }
          if (pXVar7 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (pMVar4->fields).OnXPProgressData = pXVar7;
          pXVar7 = (XPProgress_OnXPProgressDataDelegate *)0x0;
          if (pXVar6->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
            pXVar7 = pXVar6;
          }
          if (pXVar7 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&(pMVar4->fields).OnXPProgressData >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this,1,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__LevelingManager);
        }
        pUVar13 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
        pNVar14 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar14,(Object *)this,MethodInfo__GameMeterXP__Init__,(MethodInfo *)0x0);
        pUVar13 = (UnityAction *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pUVar13,(Delegate *)pNVar14,(MethodInfo *)0x0);
        if (pUVar13 == (UnityAction *)0x0) {
          TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
        }
        else {
          pUVar15 = (UnityAction *)0x0;
          if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar15 = pUVar13;
          }
          if (pUVar15 == (UnityAction *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar15;
          pUVar15 = (UnityAction *)0x0;
          if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar15 = pUVar13;
          }
          if (pUVar15 == (UnityAction *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
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
            ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar3,(MethodInfo *)0x0), pMVar4 != (MVLocalPlayer *)0x0 &&
             (pXVar16 = (pMVar4->fields).xpProgress, pXVar16 != (XPProgress *)0x0)))))) {
          pXVar17 = (pXVar16->fields).xpProgressData;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                         );
            LOCK();
            UNLOCK();
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar18 = (this->fields)._.gameMeterVisualEffects;
          uVar8 = 0;
          if (pLVar18 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
            lVar19 = 0x20;
            do {
              if ((pLVar18->fields)._size <= (int)uVar8) {
                if ((pXVar17 != (XPProgressData *)0x0) &&
                   (pXVar20 = (pXVar17->fields).xpLevelLimits, pXVar20 != (XPLevelLimits *)0x0)) {
                  iVar21 = (pXVar17->fields).playerCurrentXP;
                  iVar22 = (pXVar20->fields)._NextXP_k__BackingField;
                  (this->fields).elapsedInterpolationTime = 0.0;
                  (this->fields).interpolateTowardsXPProgress = (float)(iVar21 / iVar22);
                  return;
                }
                break;
              }
              pLVar18 = (this->fields)._.gameMeterVisualEffects;
              if (pLVar18 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
              if ((uint)(pLVar18->fields)._size <= uVar8) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pGVar23 = (pLVar18->fields)._items;
              if (pGVar23 == (GameMeterVisualEffect__Array *)0x0) break;
              if ((uint)pGVar23->max_length <= uVar8) {
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              plVar24 = *(longlong **)((longlong)pGVar23->vector + lVar19 + -0x20);
              if (plVar24 == (longlong *)0x0) break;
              (**(code **)(*plVar24 + 0x178))(plVar24,*(undefined8 *)(*plVar24 + 0x180));
              pLVar18 = (this->fields)._.gameMeterVisualEffects;
              uVar8 = uVar8 + 1;
              lVar19 = lVar19 + 8;
            } while (pLVar18 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pUVar13 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  pNVar14 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar14,(Object *)this,MethodInfo__GameMeterXP__Init__,(MethodInfo *)0x0);
  pUVar13 = (UnityAction *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar13,(Delegate *)pNVar14,(MethodInfo *)0x0);
  if (pUVar13 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
  }
  else {
    pUVar15 = (UnityAction *)0x0;
    if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar15 = pUVar13;
    }
    if (pUVar15 == (UnityAction *)0x0) {
      FUN_?(pUVar13,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar15;
    pUVar15 = (UnityAction *)0x0;
    if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar15 = pUVar13;
    }
    if (pUVar15 == (UnityAction *)0x0) {
      FUN_?(pUVar13,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? == 0) {
    return;
  }
  uVar8 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
  puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar10 = *puVar11;
    LOCK();
    uVar9 = *puVar11;
    if (uVar10 == uVar9) {
      *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
    }
    UNLOCK();
  } while (uVar10 != uVar9);
  return;
}


/* Void OnProgressUpdate(XPProgressData) */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_OnProgressUpdate
               (GameMeterXP *this,XPProgressData *xpProgress,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._.gameMeterVisualEffects;
  uVar2 = 0;
  if (pLVar1 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        if ((xpProgress != (XPProgressData *)0x0) &&
           (pXVar4 = (xpProgress->fields).xpLevelLimits, pXVar4 != (XPLevelLimits *)0x0)) {
          iVar5 = (xpProgress->fields).playerCurrentXP;
          iVar6 = (pXVar4->fields)._NextXP_k__BackingField;
          (this->fields).elapsedInterpolationTime = 0.0;
          (this->fields).interpolateTowardsXPProgress = (float)(iVar5 / iVar6);
          return;
        }
        break;
      }
      pLVar1 = (this->fields)._.gameMeterVisualEffects;
      if (pLVar1 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pGVar8 = (pLVar1->fields)._items;
      if (pGVar8 == (GameMeterVisualEffect__Array *)0x0) break;
      if ((uint)pGVar8->max_length <= uVar2) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar9 = *(longlong **)((longlong)pGVar8->vector + lVar3 + -0x20);
      if (plVar9 == (longlong *)0x0) break;
      (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
      pLVar1 = (this->fields)._.gameMeterVisualEffects;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetShowGameMeter(Boolean) */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_SetShowGameMeter
               (GameMeterXP *this,bool show,MethodInfo *method)

{
  obj = (this->fields).XPMeter;
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,CONCAT71(in_register_00000011,show),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,show);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_Update(GameMeterXP *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).elapsedInterpolationTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (fVar4 + _UNK_? <= fVar1) {
    return;
  }
  fVar1 = (this->fields).elapsedInterpolationTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar5 = (float)(*pcRam_?)();
  fVar4 = (this->fields).previousXPProgress;
  fVar5 = fVar5 + fVar1;
  (this->fields).elapsedInterpolationTime = fVar5;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (_UNK_? < fVar5) {
    fVar5 = _UNK_?;
  }
  pLVar6 = (this->fields)._.gameMeterVisualEffects;
  uVar7 = 0;
  (this->fields).previousXPProgress =
       ((this->fields).interpolateTowardsXPProgress - fVar4) * fVar5 + fVar4;
  if (pLVar6 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
    lVar8 = 0x20;
    do {
      if ((pLVar6->fields)._size <= (int)uVar7) {
        return;
      }
      pLVar6 = (this->fields)._.gameMeterVisualEffects;
      if (pLVar6 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
      if ((uint)(pLVar6->fields)._size <= uVar7) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pGVar9 = (pLVar6->fields)._items;
      if (pGVar9 == (GameMeterVisualEffect__Array *)0x0) break;
      if ((uint)pGVar9->max_length <= uVar7) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar10 = *(longlong **)((longlong)pGVar9->vector + lVar8 + -0x20);
      if (plVar10 == (longlong *)0x0) break;
      (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
      pLVar6 = (this->fields)._.gameMeterVisualEffects;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (pLVar6 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GameMeterXP() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP__ctor(GameMeterXP *this,MethodInfo *method)

{
  (this->fields).elapsedInterpolationTime = 1.0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._.gameMeterVisualEffects = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.gameMeterVisualEffects >> 0xc);
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
  bVar1 = cRam_? == '\0';
  (this->fields)._.meterActive = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

