
/* Void Awake() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_Awake
               (DeathUIController *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_01,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__EndDeathBriefing__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__OnFadeFinished__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__OnLocalAvatarSuicide__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  value = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
          FUN_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  FUN_?(value,this);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_add_OnKilled(pSVar2,value,(MethodInfo *)0x0);
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
      this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
      this_02 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_02,(Object *)this,
                 MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
                 (MethodInfo *)0x0);
      if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
        SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                  (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_02,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar3 != (MVGameControllerBase *)0x0) &&
           (pFVar4 = (pMVar3->fields).flagDebriefingControl, pFVar4 != (FlagDebriefingControl *)0x0)
           ) {
          pAVar5 = (pFVar4->fields).OnFlagDebriefingEnd;
          pNVar6 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar6,(Object *)this,MethodInfo__DeathUIController__EndDeathBriefing__,
                     (MethodInfo *)0x0);
          pAVar7 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
          pAVar5 = (Action *)0x0;
          if (pAVar7 == (Action *)0x0) {
            (pFVar4->fields).OnFlagDebriefingEnd = (Action *)0x0;
          }
          else {
            pAVar8 = pAVar5;
            if (pAVar7->klass == TypeInfo__System__Action) {
              pAVar8 = pAVar7;
            }
            if (pAVar8 == (Action *)0x0) {
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            (pFVar4->fields).OnFlagDebriefingEnd = pAVar8;
            pAVar8 = pAVar5;
            if (pAVar7->klass == TypeInfo__System__Action) {
              pAVar8 = pAVar7;
            }
            if (pAVar8 == (Action *)0x0) {
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)&(pFVar4->fields).OnFlagDebriefingEnd >> 0xc);
            lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
              puVar12 = (ulonglong *)(lVar10 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar3 != (MVGameControllerBase *)0x0) &&
             (pMVar14 = (pMVar3->fields).game, pMVar14 != (MVNetworkGame *)0x0)) {
            pAVar15 = (pMVar14->fields).OnWinningConditionFulfilled;
            this_03 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__System__Action<IWinningCondition>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_03,(Object *)this,
                       MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_,
                       (MethodInfo *)0x0);
            pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar15,(Delegate *)this_03,(MethodInfo *)0x0);
            pAVar17 = TypeInfo__System__Action<IWinningCondition>;
            if (pDVar16 == (Delegate *)0x0) {
              (pMVar14->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
            }
            else {
              pAVar15 = (Action_1_IWinningCondition_ *)
                        FUN_?(pDVar16,TypeInfo__System__Action<IWinningCondition>);
              if (pAVar15 == (Action_1_IWinningCondition_ *)0x0) {
                FUN_?(pDVar16,pAVar17);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              (pMVar14->fields).OnWinningConditionFulfilled = pAVar15;
              pAVar17 = TypeInfo__System__Action<IWinningCondition>;
              lVar10 = FUN_?(pDVar16,TypeInfo__System__Action<IWinningCondition>);
              if (lVar10 == 0) {
                FUN_?(pDVar16,pAVar17);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar9 = (uint)((ulonglong)&(pMVar14->fields).OnWinningConditionFulfilled >> 0xc);
              lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
              do {
                uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                LOCK();
                bVar13 = uVar11 == *puVar12;
                if (bVar13) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar13);
            }
            pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                ((MethodInfo *)0x0);
            pNVar6 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar6,(Object *)this,MethodInfo__DeathUIController__OnLocalAvatarSuicide__,
                       (MethodInfo *)0x0);
            if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              ppAVar18 = &(pSVar2->fields).OnSuicide;
              pAVar7 = (pSVar2->fields).OnSuicide;
              do {
                pAVar19 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar7,(Delegate *)pNVar6,(MethodInfo *)0x0);
                pAVar8 = pAVar5;
                if (pAVar19 != (Action *)0x0) {
                  if (pAVar19->klass == TypeInfo__System__Action) {
                    pAVar8 = pAVar19;
                  }
                  if (pAVar8 == (Action *)0x0) {
                    FUN_?(pAVar19);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                }
                LOCK();
                pAVar19 = *ppAVar18;
                bVar13 = pAVar7 == pAVar19;
                if (bVar13) {
                  *ppAVar18 = pAVar8;
                  pAVar19 = pAVar7;
                }
                UNLOCK();
                pAVar8 = pAVar7;
                if (!bVar13) {
                  pAVar8 = pAVar19;
                }
                if (iRam_? != 0) {
                  uVar9 = (uint)((ulonglong)ppAVar18 >> 0xc);
                  lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                    puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                    LOCK();
                    bVar13 = uVar11 == *puVar12;
                    if (bVar13) {
                      *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
                bVar13 = pAVar8 != pAVar7;
                pAVar7 = pAVar8;
              } while (bVar13);
              pNVar20 = (this->fields).fader;
              if (pNVar20 != (NotificationFade *)0x0) {
                pAVar7 = (pNVar20->fields).OnFinished;
                pNVar6 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar6,(Object *)this,MethodInfo__DeathUIController__OnFadeFinished__,
                           (MethodInfo *)0x0);
                pAVar7 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar7,(Delegate *)pNVar6,(MethodInfo *)0x0);
                if (pAVar7 == (Action *)0x0) {
                  (pNVar20->fields).OnFinished = (Action *)0x0;
                }
                else {
                  pAVar8 = pAVar5;
                  if (pAVar7->klass == TypeInfo__System__Action) {
                    pAVar8 = pAVar7;
                  }
                  if (pAVar8 == (Action *)0x0) {
                    FUN_?(pAVar7);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  (pNVar20->fields).OnFinished = pAVar8;
                  if (pAVar7->klass == TypeInfo__System__Action) {
                    pAVar5 = pAVar7;
                  }
                  if (pAVar5 == (Action *)0x0) {
                    FUN_?(pAVar7);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar9 = (uint)((ulonglong)&(pNVar20->fields).OnFinished >> 0xc);
                  lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                    puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                    LOCK();
                    bVar13 = uVar11 == *puVar12;
                    if (bVar13) {
                      *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void EndDeathBriefing() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_EndDeathBriefing
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
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
  if (pNVar1 != (NotificationFade *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pNVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pNVar1 = (this->fields).fader;
      if (pNVar1 == (NotificationFade *)0x0) goto code_?;
      NotificationFade::NotificationFade_OnDisable(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (this->fields).fader;
      if (pNVar1 == (NotificationFade *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pNVar1,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
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
  if (pGVar2 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar2->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
  }
  (this->fields).isDeathBriefActive = 0;
  return;
}


/* String ExtractWeaponName(Int32, PlayerKilledByType) */

String * Assembly-CSharp.dll::DeathUIController::DeathUIController_ExtractWeaponName
                   (DeathUIController *this,int32_t dmgDealerActorNr,
                   PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemEditable);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((char)damageType - 7U & 0xef) != 0) {
    return ::StringLiteral__;
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
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                       (this_00,dmgDealerActorNr,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((pMVar3 != (MVPlayer *)0x0) &&
        (pSVar4 = (pMVar3->fields).spawnRolesManager, pSVar4 != (SpawnRolesManager *)0x0)) &&
       ((pSVar5 = (pSVar4->fields).spawnRolesRuntimeData, pSVar5 != (SpawnRolesRuntimeData *)0x0 &&
        ((this_01 != (MVWorldObjectClientManager *)0x0 &&
         (pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (this_01,(pSVar5->fields).activeSpawnRole,(MethodInfo *)0x0),
         pMVar6 != (MVWorldObjectClient *)0x0)))))) {
      bVar7 = (TypeInfo__MVAvatar->_1).naturalAligment;
      if (((pMVar6->klass->_1).naturalAligment < bVar7) ||
         ((MVAvatar__Class *)(pMVar6->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
          TypeInfo__MVAvatar)) {
        FUN_?(pMVar6,TypeInfo__MVAvatar);
        pcVar8 = (code *)swi(3);
        pSVar9 = (String *)(*pcVar8)();
        return pSVar9;
      }
      lVar10 = *(longlong *)&pMVar6[1].fields._.type;
      if (lVar10 != 0) {
        plVar11 = *(longlong **)(lVar10 + 0x50);
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
        if (plVar11 == (longlong *)0x0) {
          return ::StringLiteral__;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (plVar11[2] == 0) {
          return ::StringLiteral__;
        }
        lVar10 = *plVar11;
        bVar7 = (TypeInfo__PickupItemEditable->_1).naturalAligment;
        if (*(byte *)(lVar10 + 0x130) < bVar7) {
          return ::StringLiteral__;
        }
        if (*(PickupItemEditable__Class **)(*(longlong *)(lVar10 + 200) + -8 + (ulonglong)bVar7 * 8)
            != TypeInfo__PickupItemEditable) {
          return ::StringLiteral__;
        }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar9 = (String *)(**(code **)(lVar10 + 0x368))(plVar11,*(undefined8 *)(lVar10 + 0x370));
        return pSVar9;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar8)();
  return pSVar9;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_Initialize
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__EndDeathBriefing__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__OnFadeFinished__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__OnLocalAvatarSuicide__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  value = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
          FUN_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  FUN_?(value,this);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_add_OnKilled(pSVar1,value,(MethodInfo *)0x0);
    pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
      this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,
                 MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
                 (MethodInfo *)0x0);
      if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
        SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                  (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 != (MVGameControllerBase *)0x0) &&
           (pFVar3 = (pMVar2->fields).flagDebriefingControl, pFVar3 != (FlagDebriefingControl *)0x0)
           ) {
          pAVar4 = (pFVar3->fields).OnFlagDebriefingEnd;
          pNVar5 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar5,(Object *)this,MethodInfo__DeathUIController__EndDeathBriefing__,
                     (MethodInfo *)0x0);
          pAVar6 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
          pAVar4 = (Action *)0x0;
          if (pAVar6 == (Action *)0x0) {
            (pFVar3->fields).OnFlagDebriefingEnd = (Action *)0x0;
          }
          else {
            pAVar7 = pAVar4;
            if (pAVar6->klass == TypeInfo__System__Action) {
              pAVar7 = pAVar6;
            }
            if (pAVar7 == (Action *)0x0) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            (pFVar3->fields).OnFlagDebriefingEnd = pAVar7;
            pAVar7 = pAVar4;
            if (pAVar6->klass == TypeInfo__System__Action) {
              pAVar7 = pAVar6;
            }
            if (pAVar7 == (Action *)0x0) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)&(pFVar3->fields).OnFlagDebriefingEnd >> 0xc);
            lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
              puVar12 = (ulonglong *)(lVar10 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar2 != (MVGameControllerBase *)0x0) &&
             (pMVar14 = (pMVar2->fields).game, pMVar14 != (MVNetworkGame *)0x0)) {
            pAVar15 = (pMVar14->fields).OnWinningConditionFulfilled;
            this_02 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__System__Action<IWinningCondition>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_02,(Object *)this,
                       MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_,
                       (MethodInfo *)0x0);
            pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar15,(Delegate *)this_02,(MethodInfo *)0x0);
            pAVar17 = TypeInfo__System__Action<IWinningCondition>;
            if (pDVar16 == (Delegate *)0x0) {
              (pMVar14->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
            }
            else {
              pAVar15 = (Action_1_IWinningCondition_ *)
                        FUN_?(pDVar16,TypeInfo__System__Action<IWinningCondition>);
              if (pAVar15 == (Action_1_IWinningCondition_ *)0x0) {
                FUN_?(pDVar16,pAVar17);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              (pMVar14->fields).OnWinningConditionFulfilled = pAVar15;
              pAVar17 = TypeInfo__System__Action<IWinningCondition>;
              lVar10 = FUN_?(pDVar16,TypeInfo__System__Action<IWinningCondition>);
              if (lVar10 == 0) {
                FUN_?(pDVar16,pAVar17);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar9 = (uint)((ulonglong)&(pMVar14->fields).OnWinningConditionFulfilled >> 0xc);
              lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
              do {
                uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                LOCK();
                bVar13 = uVar11 == *puVar12;
                if (bVar13) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar13);
            }
            pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                ((MethodInfo *)0x0);
            pNVar5 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar5,(Object *)this,MethodInfo__DeathUIController__OnLocalAvatarSuicide__,
                       (MethodInfo *)0x0);
            if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              ppAVar18 = &(pSVar1->fields).OnSuicide;
              pAVar6 = (pSVar1->fields).OnSuicide;
              do {
                pAVar19 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar6,(Delegate *)pNVar5,(MethodInfo *)0x0);
                pAVar7 = pAVar4;
                if (pAVar19 != (Action *)0x0) {
                  if (pAVar19->klass == TypeInfo__System__Action) {
                    pAVar7 = pAVar19;
                  }
                  if (pAVar7 == (Action *)0x0) {
                    FUN_?(pAVar19);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                LOCK();
                pAVar19 = *ppAVar18;
                bVar13 = pAVar6 == pAVar19;
                if (bVar13) {
                  *ppAVar18 = pAVar7;
                  pAVar19 = pAVar6;
                }
                UNLOCK();
                pAVar7 = pAVar6;
                if (!bVar13) {
                  pAVar7 = pAVar19;
                }
                if (iRam_? != 0) {
                  uVar9 = (uint)((ulonglong)ppAVar18 >> 0xc);
                  lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                    puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                    LOCK();
                    bVar13 = uVar11 == *puVar12;
                    if (bVar13) {
                      *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
                bVar13 = pAVar7 != pAVar6;
                pAVar6 = pAVar7;
              } while (bVar13);
              pNVar20 = (this->fields).fader;
              if (pNVar20 != (NotificationFade *)0x0) {
                pAVar6 = (pNVar20->fields).OnFinished;
                pNVar5 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar5,(Object *)this,MethodInfo__DeathUIController__OnFadeFinished__,
                           (MethodInfo *)0x0);
                pAVar6 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar6,(Delegate *)pNVar5,(MethodInfo *)0x0);
                if (pAVar6 == (Action *)0x0) {
                  (pNVar20->fields).OnFinished = (Action *)0x0;
                }
                else {
                  pAVar7 = pAVar4;
                  if (pAVar6->klass == TypeInfo__System__Action) {
                    pAVar7 = pAVar6;
                  }
                  if (pAVar7 == (Action *)0x0) {
                    FUN_?(pAVar6);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  (pNVar20->fields).OnFinished = pAVar7;
                  if (pAVar6->klass == TypeInfo__System__Action) {
                    pAVar4 = pAVar6;
                  }
                  if (pAVar4 == (Action *)0x0) {
                    FUN_?(pAVar6);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar9 = (uint)((ulonglong)&(pNVar20->fields).OnFinished >> 0xc);
                  lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                    puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                    LOCK();
                    bVar13 = uVar11 == *puVar12;
                    if (bVar13) {
                      *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void NotReviving() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_NotReviving
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
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
     ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar3 != (MVLocalPlayer *)0x0 &&
      (this_01 = (pMVar3->fields).boostController, this_01 != (BoostController *)0x0)))) {
    BoostController::BoostController_RemoveAllBoosts(this_01,(MethodInfo *)0x0);
    this_02 = (this->fields).tierHandler;
    pAVar4 = (Action_1_Boolean_ *)FUN_?(TypeInfo__System__Action<bool>);
    FUN_?(pAVar4,this,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
    if (this_02 != (TierBoostStateHandler *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action,pAVar4,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__TierBoostStateHandler____c);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      bVar5 = iRam_? != 0;
      (this_02->fields).onFinished = pAVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this_02->fields).onFinished >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) ||
         ((bVar10 = TierBoostStateHandler::TierBoostStateHandler_IsInTempClass
                             (this_02,(MethodInfo *)0x0), bVar10 == 0 &&
          (bVar10 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier
                             (this_02,(MethodInfo *)0x0), bVar10 == 0)))) {
        if (pAVar4 == (Action_1_Boolean_ *)0x0) goto code_?;
        (*(pAVar4->fields)._._.invoke_impl)
                  ((pAVar4->fields)._._.method_code,1,(pAVar4->fields)._._.method);
      }
      else {
        pAVar11 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
        this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_03,(Object *)this_02,
                   MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
        ;
        pAVar11 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar11,(Delegate *)this_03,(MethodInfo *)0x0);
        if (pAVar11 == (Action *)0x0) {
          TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
        }
        else {
          pAVar12 = (Action *)0x0;
          if (pAVar11->klass == TypeInfo__System__Action) {
            pAVar12 = pAVar11;
          }
          if (pAVar12 == (Action *)0x0) {
            FUN_?(pAVar11,TypeInfo__System__Action);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar12;
          pAVar12 = (Action *)0x0;
          if (pAVar11->klass == TypeInfo__System__Action) {
            pAVar12 = pAVar11;
          }
          if (pAVar12 == (Action *)0x0) {
            FUN_?(pAVar11,TypeInfo__System__Action);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)
                          &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >>
                         0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_02,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__TierBoostStateHandler____c);
        }
        this_04 = TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0;
        if (this_04 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__TierBoostStateHandler____c);
          }
          object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
          this_04 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)object,
                     MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 = this_04;
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)
                            &TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar5 = uVar8 == *puVar9;
              if (bVar5) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar5);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_04
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_05 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
          FUN_?();
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                  (this_05,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnAvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnAvatarStateChanged
               (DeathUIController *this,SpawnRoleModeType__Enum mode,MethodInfo *method)

{
  if (((this->fields).isDeathBriefActive == 0) ||
     ((mode - SpawnRoleModeType__Enum_Dead & 0xfffffffd) == 0)) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
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
  if (pNVar1 != (NotificationFade *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pNVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pNVar1 = (this->fields).fader;
      if (pNVar1 == (NotificationFade *)0x0) goto code_?;
      NotificationFade::NotificationFade_OnDisable(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (this->fields).fader;
      if (pNVar1 == (NotificationFade *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pNVar1,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
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
  if (pGVar2 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar2->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
  }
  (this->fields).isDeathBriefActive = 0;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnDestroy
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__EndDeathBriefing__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__OnFadeFinished__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__OnLocalAvatarSuicide__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  pNVar3 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar3,(Object *)this,MethodInfo__DeathUIController__OnLocalAvatarSuicide__,
             (MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar4 = (Action *)0x0;
    pAVar5 = (pSVar2->fields).OnSuicide;
    do {
      pAVar6 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar5,(Delegate *)pNVar3,(MethodInfo *)0x0);
      pAVar7 = pAVar4;
      if (pAVar6 != (Action *)0x0) {
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action *)0x0) {
          FUN_?(pAVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      ppAVar9 = &(pSVar2->fields).OnSuicide;
      LOCK();
      pAVar6 = *ppAVar9;
      bVar10 = pAVar5 == pAVar6;
      if (bVar10) {
        *ppAVar9 = pAVar7;
        pAVar6 = pAVar5;
      }
      UNLOCK();
      pAVar7 = pAVar5;
      if (!bVar10) {
        pAVar7 = pAVar6;
      }
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)&(pSVar2->fields).OnSuicide >> 0xc);
        lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
        do {
          uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
          puVar14 = (ulonglong *)(lVar12 + 0xADDR);
          LOCK();
          bVar10 = uVar13 == *puVar14;
          if (bVar10) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      bVar10 = pAVar7 != pAVar5;
      pAVar5 = pAVar7;
    } while (bVar10);
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    value = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
            FUN_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    FUN_?(value,this);
    if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
      SpawnRoleDataMediator_remove_OnKilled(pSVar2,value,(MethodInfo *)0x0);
      pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
        this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
        this_01 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_01,(Object *)this,
                   MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   ,(MethodInfo *)0x0);
        if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
          SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                    (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar15 != (MVGameControllerBase *)0x0) &&
             (pFVar16 = (pMVar15->fields).flagDebriefingControl,
             pFVar16 != (FlagDebriefingControl *)0x0)) {
            pAVar5 = (pFVar16->fields).OnFlagDebriefingEnd;
            pNVar3 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar3,(Object *)this,MethodInfo__DeathUIController__EndDeathBriefing__,
                       (MethodInfo *)0x0);
            pAVar5 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)pAVar5,(Delegate *)pNVar3,(MethodInfo *)0x0);
            if (pAVar5 == (Action *)0x0) {
              (pFVar16->fields).OnFlagDebriefingEnd = (Action *)0x0;
            }
            else {
              pAVar7 = pAVar4;
              if (pAVar5->klass == TypeInfo__System__Action) {
                pAVar7 = pAVar5;
              }
              if (pAVar7 == (Action *)0x0) {
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              (pFVar16->fields).OnFlagDebriefingEnd = pAVar7;
              pAVar7 = pAVar4;
              if (pAVar5->klass == TypeInfo__System__Action) {
                pAVar7 = pAVar5;
              }
              if (pAVar7 == (Action *)0x0) {
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar11 = (uint)((ulonglong)&(pFVar16->fields).OnFlagDebriefingEnd >> 0xc);
              lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
              do {
                uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                LOCK();
                bVar10 = uVar13 == *puVar14;
                if (bVar10) {
                  *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar15 != (MVGameControllerBase *)0x0) &&
               (pMVar17 = (pMVar15->fields).game, pMVar17 != (MVNetworkGame *)0x0)) {
              pAVar18 = (pMVar17->fields).OnWinningConditionFulfilled;
              this_02 = (UnityAction_1_System_Object_ *)
                        FUN_?(TypeInfo__System__Action<IWinningCondition>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_02,(Object *)this,
                         MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_,
                         (MethodInfo *)0x0);
              pDVar19 = mscorlib.dll::System::Delegate::Delegate_Remove
                                  ((Delegate *)pAVar18,(Delegate *)this_02,(MethodInfo *)0x0);
              pAVar20 = TypeInfo__System__Action<IWinningCondition>;
              if (pDVar19 == (Delegate *)0x0) {
                (pMVar17->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
              }
              else {
                pAVar18 = (Action_1_IWinningCondition_ *)
                          FUN_?(pDVar19,TypeInfo__System__Action<IWinningCondition>);
                if (pAVar18 == (Action_1_IWinningCondition_ *)0x0) {
                  FUN_?(pDVar19,pAVar20);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                (pMVar17->fields).OnWinningConditionFulfilled = pAVar18;
                pAVar20 = TypeInfo__System__Action<IWinningCondition>;
                lVar12 = FUN_?(pDVar19,TypeInfo__System__Action<IWinningCondition>);
                if (lVar12 == 0) {
                  FUN_?(pDVar19,pAVar20);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar11 = (uint)((ulonglong)&(pMVar17->fields).OnWinningConditionFulfilled >> 0xc);
                lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                do {
                  uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                  puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar10 = uVar13 == *puVar14;
                  if (bVar10) {
                    *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              pNVar21 = (this->fields).fader;
              if (pNVar21 != (NotificationFade *)0x0) {
                pAVar5 = (pNVar21->fields).OnFinished;
                pNVar3 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar3,(Object *)this,MethodInfo__DeathUIController__OnFadeFinished__,
                           (MethodInfo *)0x0);
                pAVar5 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Remove
                                    ((Delegate *)pAVar5,(Delegate *)pNVar3,(MethodInfo *)0x0);
                if (pAVar5 == (Action *)0x0) {
                  (pNVar21->fields).OnFinished = (Action *)0x0;
                }
                else {
                  pAVar7 = pAVar4;
                  if (pAVar5->klass == TypeInfo__System__Action) {
                    pAVar7 = pAVar5;
                  }
                  if (pAVar7 == (Action *)0x0) {
                    FUN_?(pAVar5);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  (pNVar21->fields).OnFinished = pAVar7;
                  if (pAVar5->klass == TypeInfo__System__Action) {
                    pAVar4 = pAVar5;
                  }
                  if (pAVar4 == (Action *)0x0) {
                    FUN_?(pAVar5);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                if (iRam_? == 0) {
                  return;
                }
                uVar11 = (uint)((ulonglong)&(pNVar21->fields).OnFinished >> 0xc);
                lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                do {
                  uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                  puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar10 = uVar13 == *puVar14;
                  if (bVar10) {
                    *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnDisable
               (DeathUIController *this,MethodInfo *method)

{
  pNVar1 = (this->fields).fader;
  if (pNVar1 != (NotificationFade *)0x0) {
    (pNVar1->fields).pauseAt = 0.0;
    pNVar1 = (this->fields).fader;
    if (pNVar1 != (NotificationFade *)0x0) {
      if ((pNVar1->fields).playing != 0) {
        (pNVar1->fields).playing = 0;
        if ((pNVar1->fields).shouldHideWhenDone != 0) {
          this_00 = (pNVar1->fields).group;
          if (this_00 == (CanvasGroup *)0x0) goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
        }
        (pNVar1->fields).currentTime = 0.0;
        if ((pNVar1->fields).OnFinished != (Action *)0x0) {
          pAVar2 = (pNVar1->fields).OnFinished;
          (*(pAVar2->fields)._._.invoke_impl)((pAVar2->fields)._._.method_code);
        }
      }
      pNVar1 = (this->fields).fader;
      if (pNVar1 != (NotificationFade *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pNVar1,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
          (this->fields).isDeathBriefActive = 0;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnFadeFinished() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnFadeFinished
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
  if ((pNVar1 != (NotificationFade *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pNVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pGVar2->fields)._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    UNRECOVERED_JUMPTABLE = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (UNRECOVERED_JUMPTABLE = (code *)FUN_?(&UNK_?),
       UNRECOVERED_JUMPTABLE == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    pcRam_? = UNRECOVERED_JUMPTABLE;
    cVar5 = (*pcRam_?)(pvVar3);
    if (cVar5 == '\0') {
      return;
    }
    pNVar1 = (this->fields).fader;
    if ((pNVar1 != (NotificationFade *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pNVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      (this->fields).isDeathBriefActive = 0;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
            (IPlayModeUI *)0x0) {
          cVar5 = FUN_?(7);
          if (cVar5 == '\0') {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GamePassesManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0)
            {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__GamePassesManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
              if (pPVar6 == (PlayerPlanetData *)0x0) goto code_?;
              bVar7 = (pPVar6->fields).gamePassTier;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__TierUnlockedPopupController);
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
              pGVar8 = TypeInfo__MVGameControllerBase->static_fields->
                        _GameSessionData_k__BackingField;
              if (pGVar8 == (GameSessionData *)0x0) goto code_?;
              if ((pGVar8->fields).gameMode != 0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar8 = TypeInfo__MVGameControllerBase->static_fields->
                          _GameSessionData_k__BackingField;
                if (pGVar8 == (GameSessionData *)0x0) goto code_?;
                if ((pGVar8->fields).gameMode != 4) {
                  bVar9 = TypeInfo__TierUnlockedPopupController->static_fields->
                          HighestTierRewardShown;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__GamePassesManager);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                  if (pPVar6 == (PlayerPlanetData *)0x0) goto code_?;
                  if ((bVar9 < (pPVar6->fields).gamePassTier) &&
                     (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown <
                      bVar7)) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__GamePassesManager);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                    if (pPVar6 == (PlayerPlanetData *)0x0) goto code_?;
                    if (bVar7 <= (pPVar6->fields).gamePassTier) {
                      DeathUIController_ShowTierUnlockedPopup(this,0,0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
          bVar10 = DeathUIController_ShowingClaimGold(this,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__DeathUIController____c___ShowDeadmodeUI_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__DeathUIController____c);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__DeathUIController____c);
          }
          this_06 = TypeInfo__DeathUIController____c->static_fields->__9__30_0;
          if (this_06 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__DeathUIController____c);
            }
            object_00 = TypeInfo__DeathUIController____c->static_fields->__9;
            this_06 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_06,(Object *)object_00,
                       MethodInfo__DeathUIController____c___ShowDeadmodeUI_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__DeathUIController____c->static_fields->__9__30_0 = this_06;
            if (iRam_? != 0) {
              uVar11 = (uint)((ulonglong)&TypeInfo__DeathUIController____c->static_fields->__9__30_0
                             >> 0xc);
              puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar13 = *puVar12;
                LOCK();
                uVar14 = *puVar12;
                if (uVar13 == uVar14) {
                  *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
                }
                UNLOCK();
              } while (uVar13 != uVar14);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar2,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_06,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pSVar15 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                              ((MethodInfo *)0x0);
          if ((((pSVar15 != (SpawnRoleDataMediator *)0x0) &&
               (pSVar16 = (pSVar15->fields).reviveState,
               pSVar16 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)0x0)) &&
              (pSVar17 = (pSVar16->fields)._.subscribableVariable,
              pSVar17 != (SubscribableVariable_1_ReviveState_ *)0x0)) &&
             (pRVar18 = (pSVar17->fields)._.value, pRVar18 != (ReviveState *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar19 = (pRVar18->fields).safePositions;
            if (pLVar19 != (List_1_SafeSpotData_ *)0x0) {
              iVar20 = (pLVar19->fields)._size;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVClientSettings);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((((TypeInfo__MVClientSettings->static_fields->flags & 0x4000000U) != 0) &&
                  (bVar10 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0),
                  bVar10 == 0)) ||
                 (bVar10 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0),
                 bVar10 != 0)) {
                bVar21 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
                bVar10 = 0;
                if (0 < iVar20) {
                  bVar10 = bVar21;
                }
                if (bVar10 != 0) {
                  if (cRam_? == '\0') {
                    FUN_?(&MethodInfo__DeathUIController__ReviveNotClicked__,0);
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  ReviveUIHandler_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandler>_ReviveUIHandler_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__DeathUIController____c__DisplayClass19_0___ShowReviveMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__DeathUIController____c__DisplayClass19_0);
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  object_01 = (Object *)
                              FUN_?(TypeInfo__DeathUIController____c__DisplayClass19_0);
                  original = (this->fields).reviveHandler;
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pOVar22 = (Object__Class *)
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                      ((Object *)original,
                                       ReviveUIHandler_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandler>_ReviveUIHandler_
                                      );
                  if (object_01 != (Object *)0x0) {
                    bVar23 = iRam_? != 0;
                    object_01[1].klass = pOVar22;
                    if (bVar23) {
                      uVar11 = (uint)((ulonglong)(object_01 + 1) >> 0xc);
                      puVar12 = (ulonglong *)
                               ((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
                      do {
                        uVar13 = *puVar12;
                        LOCK();
                        uVar14 = *puVar12;
                        if (uVar13 == uVar14) {
                          *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
                        }
                        UNLOCK();
                      } while (uVar13 != uVar14);
                    }
                    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    this_05 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              (this_05,object_01,
                               MethodInfo__DeathUIController____c__DisplayClass19_0___ShowReviveMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar2,(BaseEventData *)0x0,this_05,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                              );
                    pOVar22 = object_01[1].klass;
                    pNVar24 = (NavMesh_OnNavMeshPreUpdate *)
                              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar24,(Object *)this,
                               MethodInfo__DeathUIController__ReviveNotClicked__,(MethodInfo *)0x0);
                    if (pOVar22 != (Object__Class *)0x0) {
                      pIVar25 = (pOVar22->_0).image;
                      UNRECOVERED_JUMPTABLE = *(code **)&pIVar25[5].token;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*UNRECOVERED_JUMPTABLE)(pOVar22,pNVar24,pIVar25[6].name,UNRECOVERED_JUMPTABLE)
                      ;
                      return;
                    }
                  }
                  FUN_?();
                  UNRECOVERED_JUMPTABLE = (code *)swi(3);
                  (*UNRECOVERED_JUMPTABLE)();
                  return;
                }
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action<bool>);
                LOCK();
                UNLOCK();
                FUN_?(&MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
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
              pMVar26 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar26 != (MVGameControllerBase *)0x0) &&
                  (pMVar27 = (pMVar26->fields).game, pMVar27 != (MVNetworkGame *)0x0)) &&
                 ((this_00 = (pMVar27->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0
                  && ((pMVar28 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                           (this_00,(MethodInfo *)0x0),
                      pMVar28 != (MVLocalPlayer *)0x0 &&
                      (this_01 = (pMVar28->fields).boostController,
                      this_01 != (BoostController *)0x0)))))) {
                BoostController::BoostController_RemoveAllBoosts(this_01,(MethodInfo *)0x0);
                this_02 = (this->fields).tierHandler;
                pAVar29 = (Action_1_Boolean_ *)FUN_?(TypeInfo__System__Action<bool>);
                FUN_?(pAVar29,this,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_)
                ;
                if (this_02 != (TierBoostStateHandler *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__Action,pAVar29,0);
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__GamePassesManager);
                    LOCK();
                    UNLOCK();
                    FUN_?(&MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__);
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__TierBoostStateHandler____c);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  bVar23 = iRam_? != 0;
                  (this_02->fields).onFinished = pAVar29;
                  if (bVar23) {
                    uVar11 = (uint)((ulonglong)&(this_02->fields).onFinished >> 0xc);
                    lVar30 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar14 = *(ulonglong *)(lVar30 + 0xADDR);
                      puVar12 = (ulonglong *)(lVar30 + 0xADDR);
                      LOCK();
                      bVar23 = uVar14 == *puVar12;
                      if (bVar23) {
                        *puVar12 = uVar14 | 1L << (uVar11 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar23);
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__GamePassesManager);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if ((TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField
                       == 0) ||
                     ((bVar10 = TierBoostStateHandler::TierBoostStateHandler_IsInTempClass
                                          (this_02,(MethodInfo *)0x0), bVar10 == 0 &&
                      (bVar10 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier
                                          (this_02,(MethodInfo *)0x0), bVar10 == 0)))) {
                    if (pAVar29 == (Action_1_Boolean_ *)0x0) goto code_?;
                    (*(pAVar29->fields)._._.invoke_impl)
                              ((pAVar29->fields)._._.method_code,1,(pAVar29->fields)._._.method);
                  }
                  else {
                    pAVar31 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
                    pNVar24 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar24,(Object *)this_02,
                               MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__,
                               (MethodInfo *)0x0);
                    pAVar31 = (Action *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar31,(Delegate *)pNVar24,(MethodInfo *)0x0);
                    if (pAVar31 == (Action *)0x0) {
                      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated =
                           (Action *)0x0;
                    }
                    else {
                      pAVar32 = (Action *)0x0;
                      if (pAVar31->klass == TypeInfo__System__Action) {
                        pAVar32 = pAVar31;
                      }
                      if (pAVar32 == (Action *)0x0) {
                        FUN_?(pAVar31,TypeInfo__System__Action);
                        UNRECOVERED_JUMPTABLE = (code *)swi(3);
                        (*UNRECOVERED_JUMPTABLE)();
                        return;
                      }
                      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated =
                           pAVar32;
                      pAVar32 = (Action *)0x0;
                      if (pAVar31->klass == TypeInfo__System__Action) {
                        pAVar32 = pAVar31;
                      }
                      if (pAVar32 == (Action *)0x0) {
                        FUN_?(pAVar31,TypeInfo__System__Action);
                        UNRECOVERED_JUMPTABLE = (code *)swi(3);
                        (*UNRECOVERED_JUMPTABLE)();
                        return;
                      }
                    }
                    if (iRam_? != 0) {
                      uVar11 = (uint)((ulonglong)
                                      &TypeInfo__GamePassesManager->static_fields->
                                       OnPlayerPlanetDataUpdated >> 0xc);
                      lVar30 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar14 = *(ulonglong *)(lVar30 + 0xADDR);
                        puVar12 = (ulonglong *)(lVar30 + 0xADDR);
                        LOCK();
                        bVar23 = uVar14 == *puVar12;
                        if (bVar23) {
                          *puVar12 = uVar14 | 1L << (uVar11 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar23);
                    }
                    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this_02,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__TierBoostStateHandler____c);
                    }
                    this_03 = TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0;
                    if (this_03 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
                      if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
                        FUN_?(TypeInfo__TierBoostStateHandler____c);
                      }
                      object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
                      this_03 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                                FUN_?(
                                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                             );
                      UnityEngine.UI.dll::UnityEngine::EventSystems::
                      ExecuteEvents+EventFunction`1[System::Object]::
                      ExecuteEvents_EventFunction_1_System_Object___ctor
                                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                                 (Object *)object,
                                 MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                                 ,(MethodInfo *)0x0);
                      TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 = this_03;
                      if (iRam_? != 0) {
                        uVar11 = (uint)((ulonglong)
                                        &TypeInfo__TierBoostStateHandler____c->static_fields->
                                         __9__3_0 >> 0xc);
                        lVar30 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar14 = *(ulonglong *)(lVar30 + 0xADDR);
                          puVar12 = (ulonglong *)(lVar30 + 0xADDR);
                          LOCK();
                          bVar23 = uVar14 == *puVar12;
                          if (bVar23) {
                            *puVar12 = uVar14 | 1L << (uVar11 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar23);
                      }
                    }
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar2,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                              );
                    this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                        ((MethodInfo *)0x0);
                    if (this_04 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
                      FUN_?();
                      UNRECOVERED_JUMPTABLE = (code *)swi(3);
                      (*UNRECOVERED_JUMPTABLE)();
                      return;
                    }
                    MVNetworkGame+OperationRequests::
                    MVNetworkGame_OperationRequests_TogglePreviewTier(this_04,(MethodInfo *)0x0);
                  }
                  return;
                }
              }
            }
          }
          FUN_?();
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void OnFinishPreviewTier(Boolean) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnFinishPreviewTier
               (DeathUIController *this,bool openBoostMenu,MethodInfo *method)

{
  if (openBoostMenu == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DeathUIBoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<DeathUIBoostMenuController>_DeathUIBoostMenuController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController____c__DisplayClass25_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIController____c__DisplayClass25_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DeathUIController____c__DisplayClass25_0);
  original = (this->fields).boostMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       DeathUIBoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<DeathUIBoostMenuController>_DeathUIBoostMenuController_
                      );
  if (object == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  object[1].klass = pOVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_08 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_08,object,
             MethodInfo__DeathUIController____c__DisplayClass25_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar8,(BaseEventData *)0x0,this_08,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pOVar1 = object[1].klass;
  if (pOVar1 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIBoostMenuController__OnRespawn__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Respawning_at_start___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Respawning_at_checkpoint___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(float *)((longlong)&(pOVar1->_0).properties + 4) <= 0.0) {
    pIVar9 = (pOVar1->_0).declaringType;
    if ((pIVar9 == (Il2CppClass *)0x0) ||
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar9,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if ((pSVar10 == (SpawnRoleDataMediator *)0x0) ||
       ((pSVar11 = (pSVar10->fields).spawnRoleMode,
        pSVar11 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0 ||
        (pSVar12 = (pSVar11->fields)._.subscribableVariable,
        pSVar12 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))))
    goto code_?;
    if ((pSVar12->fields)._.value != 4) {
      pGVar13 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar13 == (GameEventManager *)0x0) ||
         (pGVar14 = (pGVar13->fields).AvatarCommandsPlayMode,
         pGVar14 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
      goto code_?;
      if ((pGVar14->fields).OnSpawnAsGhost != (Action *)0x0) {
        pAVar15 = (pGVar14->fields).OnSpawnAsGhost;
        (*(pAVar15->fields)._._.invoke_impl)((pAVar15->fields)._._.method_code);
      }
    }
    *(undefined1 *)((longlong)&(pOVar1->_0).methods + 2) = 1;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  uVar17 = (*pcRam_?)();
  lVar18 = *(longlong *)&(pOVar1->_0).byval_arg.attrs;
  *(undefined4 *)&(pOVar1->_0).properties = uVar17;
  if (lVar18 != 0) {
    *(undefined1 *)(lVar18 + 0x34) = 1;
    *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)(lVar18 + 0x30);
    if (*(CanvasGroup **)(lVar18 + 0x20) != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (*(CanvasGroup **)(lVar18 + 0x20),0.0,(MethodInfo *)0x0);
      *(undefined4 *)(lVar18 + 0x38) = 0;
      lVar18 = *(longlong *)&(pOVar1->_0).byval_arg.attrs;
      if (lVar18 != 0) {
        *(undefined1 *)(lVar18 + 0x40) = 0;
        pEVar19 = (pOVar1->_0).events;
        if (pEVar19 != (EventInfo *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(char *)&pEVar19[1].add == '\0') {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
            auVar20._0_8_ = pEVar19->remove;
            auVar20._8_8_ = pEVar19->raise;
            uVar16 = *(undefined8 *)&pEVar19->token;
          }
          else {
            auVar20._0_8_ = pEVar19[1].remove;
            auVar20._8_8_ = pEVar19[1].raise;
            uVar16 = *(undefined8 *)&pEVar19[1].token;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar21 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar21 != (MVGameControllerBase *)0x0) &&
             (lVar18 = (*(pMVar21->klass->vtable).__unknown.methodPtr)
                                 (pMVar21,(pMVar21->klass->vtable).__unknown.method), lVar18 != 0)) {
            bVar22 = FUN_?();
            bVar23 = 0;
            if (auVar20[0xc] == '\0') {
              bVar23 = bVar22;
            }
            bVar23 = bVar23 & (byte)((ulonglong)uVar16 >> 0x10);
            this_00 = (pOVar1->_0).fields;
            if (this_00 != (FieldInfo *)0x0) {
              pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_00,(MethodInfo *)0x0);
              if (pGVar8 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar8,bVar23 != 0 && (char)((ulonglong)uVar16 >> 0x38) == '\0',
                           (MethodInfo *)0x0);
                pIVar9 = (pOVar1->_0).declaringType;
                if ((pIVar9 != (Il2CppClass *)0x0) &&
                   (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pIVar9,(MethodInfo *)0x0),
                   pGVar8 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar8,bVar23 ^ 1,(MethodInfo *)0x0);
                  pIVar9 = (pOVar1->_0).parent;
                  pNVar24 = (NavMesh_OnNavMeshPreUpdate *)
                            FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar24,(Object *)pOVar1,
                             MethodInfo__DeathUIBoostMenuController__OnRespawn__,(MethodInfo *)0x0);
                  if (pIVar9 != (Il2CppClass *)0x0) {
                    bVar3 = iRam_? != 0;
                    *(NavMesh_OnNavMeshPreUpdate **)&(pIVar9->byval_arg).attrs = pNVar24;
                    if (bVar3) {
                      uVar4 = (uint)((ulonglong)&(pIVar9->byval_arg).attrs >> 0xc);
                      uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                      do {
                        uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                        puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                        LOCK();
                        bVar3 = uVar6 == *puVar5;
                        if (bVar3) {
                          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar3);
                    }
                    *(undefined1 *)&(pIVar9->byval_arg).data = 1;
                    pIVar25 = (pOVar1->_0).generic_class;
                    pNVar24 = (NavMesh_OnNavMeshPreUpdate *)
                              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar24,(Object *)pOVar1,
                               MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__,
                               (MethodInfo *)0x0);
                    if (pIVar25 != (Il2CppGenericClass *)0x0) {
                      bVar3 = iRam_? != 0;
                      pIVar25[1].context.class_inst = (Il2CppGenericInst *)pNVar24;
                      if (bVar3) {
                        uVar4 = (uint)((ulonglong)&pIVar25[1].context >> 0xc);
                        uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                        do {
                          uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                          puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                          LOCK();
                          bVar3 = uVar6 == *puVar5;
                          if (bVar3) {
                            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar3);
                      }
                      *(undefined1 *)&pIVar25[1].type = 1;
                      pSVar10 = MVGameControllerBase::
                                MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                          ((MethodInfo *)0x0);
                      if (pSVar10 != (SpawnRoleDataMediator *)0x0) {
                        this_01 = (pSVar10->fields).SpawnRoleModeTypeWrapper;
                        this_06 = (UnityAction_1_System_Int32Enum_ *)
                                  FUN_?(
                                               TypeInfo__System__Action<MV::Common::SpawnRoleModeType>
                                               );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                  (this_06,(Object *)pOVar1,
                                   MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                                   ,(MethodInfo *)0x0);
                        if (this_01 != (SpawnRoleModeTypeWrapper *)0x0) {
                          SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                                    (this_01,(Action_1_MV_Common_SpawnRoleModeType_ *)this_06,
                                     (MethodInfo *)0x0);
                          this_02 = (BoostMenuController *)(pOVar1->_0).typeMetadataHandle;
                          if (this_02 != (BoostMenuController *)0x0) {
                            BoostMenuController::BoostMenuController_Initialize
                                      (this_02,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__MVGameControllerBase);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar21 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if ((((pMVar21 != (MVGameControllerBase *)0x0) &&
                                 (pMVar26 = (pMVar21->fields).game, pMVar26 != (MVNetworkGame *)0x0))
                                && (this_03 = (pMVar26->fields).playerContainer,
                                   this_03 != (MVPlayerContainer *)0x0)) &&
                               (this_07 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                    (this_03,(MethodInfo *)0x0),
                               this_07 != (MVLocalPlayer *)0x0)) {
                              pMVar27 = MVPlayer::MVPlayer_GetCheckpoint
                                                  ((MVPlayer *)this_07,(MethodInfo *)0x0);
                              pIVar28 = (pOVar1->_0).this_arg.data.type;
                              if (pIVar28 != (Il2CppType *)0x0) {
                                *(TypeDefinitionIndex *)&pIVar28[3].field_0xc =
                                     pIVar28[3].data.__klassIndex;
                                this_04 = (CanvasGroup *)pIVar28[2].data.typeHandle;
                                *(undefined1 *)((longlong)&pIVar28[3].data + 4) = 1;
                                if (this_04 != (CanvasGroup *)0x0) {
                                  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                                  CanvasGroup_set_alpha(this_04,0.0,(MethodInfo *)0x0);
                                  pIVar28[3].attrs = 0;
                                  pIVar28[3].type = 0;
                                  pIVar28[3].field_0xb = 0;
                                  pIVar28 = (pOVar1->_0).this_arg.data.type;
                                  if (pIVar28 != (Il2CppType *)0x0) {
                                    *(undefined4 *)&pIVar28[3].field_0xc = 0;
                                    if (pMVar27 == (MVCheckpoint *)0x0) {
                                      this_05 = *(Component **)&(pOVar1->_0).this_arg.attrs;
                                      if ((this_05 == (Component *)0x0) ||
                                         (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_gameObject
                                                              (this_05,(MethodInfo *)0x0),
                                         pGVar8 == (GameObject *)0x0)) goto code_?;
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar8,0,(MethodInfo *)0x0);
                                      pIVar29 = (pOVar1->_0).byval_arg.data.array;
                                      pSVar30 = StringLiteral_Respawning_at_start___;
                                    }
                                    else {
                                      pIVar29 = (pOVar1->_0).byval_arg.data.array;
                                      pSVar30 = StringLiteral_Respawning_at_checkpoint___;
                                    }
                                    if (pIVar29 != (Il2CppArrayType *)0x0) {
                                      (**(code **)&pIVar29->etype[0x5e].attrs)
                                                (pIVar29,pSVar30,pIVar29->etype[0x5f].data.dummy);
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__GamePointGainEffectManager);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
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
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnLocalAvatarSuicide() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnLocalAvatarSuicide
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Respawning__);
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
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pFVar2 = (pMVar1->fields).flagDebriefingControl, pFVar2 != (FlagDebriefingControl *)0x0)) {
    if ((pFVar2->fields).IsInFlagDebriefing != 0) {
      return;
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      deathText = TM::TM__(StringLiteral_Respawning__,(MethodInfo *)0x0);
      pGVar3 = (this->fields).deathMessageBar;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        DeathUIController_StartDeathBriefing(this,deathText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnLocalPlayerKilled(Int32, Int32, PlayerKilledByType) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnLocalPlayerKilled
               (DeathUIController *this,int32_t localPlayerActorNr,int32_t dmgDealerActorNr,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
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
     (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar3 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      if ((pLVar3->fields)._size < 2) {
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar4 = Styles::Styles_GetColor
                            ((Color *)auStack_5,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
        fVar6 = pCVar4->r;
        fVar7 = pCVar4->g;
        fVar8 = pCVar4->b;
        fVar9 = pCVar4->a;
        pCVar4 = Styles::Styles_GetColor
                            ((Color *)auStack_5,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 == (MVGameControllerBase *)0x0) ||
            (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
           (pMVar10 = (pMVar2->fields).playerContainer, pMVar10 == (MVPlayerContainer *)0x0))
        goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar11 = (pMVar10->fields).players;
        if (pDVar11 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,localPlayerActorNr,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                            );
        if (pOVar12 == (Object *)0x0) goto code_?;
        team = *(MVTeam__Enum *)((longlong)&pOVar12[8].klass + 4);
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar4 = Styles::Styles_GetTeamColor((Color *)auStack_5,team,0,(MethodInfo *)0x0);
        fVar6 = pCVar4->r;
        fVar7 = pCVar4->g;
        fVar8 = pCVar4->b;
        fVar9 = pCVar4->a;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 == (MVGameControllerBase *)0x0) ||
            (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
           (pMVar10 = (pMVar2->fields).playerContainer, pMVar10 == (MVPlayerContainer *)0x0))
        goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar11 = (pMVar10->fields).players;
        if (pDVar11 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,dmgDealerActorNr,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                            );
        if (pOVar12 == (Object *)0x0) goto code_?;
        pCVar4 = Styles::Styles_GetTeamColor
                            ((Color *)auStack_5,*(MVTeam__Enum *)((longlong)&pOVar12[8].klass + 4),
                             0,(MethodInfo *)0x0);
      }
      pOVar12 = *(Object **)pCVar4;
      pOVar13 = *(Object **)&pCVar4->b;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pMVar10 = (pMVar2->fields).playerContainer, pMVar10 != (MVPlayerContainer *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar11 = (pMVar10->fields).players;
        if (pDVar11 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,localPlayerActorNr
                               ,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                              );
          if ((pOVar14 != (Object *)0x0) && (pOVar14[7].klass != (Object__Class *)0x0)) {
            pcVar15 = ((pOVar14[7].klass)->_0).namespaze;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
               (pMVar10 = (pMVar2->fields).playerContainer, pMVar10 != (MVPlayerContainer *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pDVar11 = (pMVar10->fields).players;
              if (pDVar11 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
                pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,
                                     dmgDealerActorNr,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                                    );
                if ((pOVar14 != (Object *)0x0) && (pOVar14[7].klass != (Object__Class *)0x0)) {
                  pcVar16 = ((pOVar14[7].klass)->_0).namespaze;
                  pSVar17 = DeathUIController_ExtractWeaponName
                                      (this,dmgDealerActorNr,damageType & 0xff,(MethodInfo *)0x0);
                  pSVar17 = KillNotification::KillNotification_GetKillText_1
                                      (damageType & 0xff,localPlayerActorNr == dmgDealerActorNr,
                                       pSVar17,(MethodInfo *)0x0);
                  args = (Object__Array *)FUN_?(TypeInfo__System__Object);
                  auStack_5._4_4_ = fVar7;
                  auStack_5._0_4_ = fVar6;
                  uStack_18 = (Object *)CONCAT44(fVar9,fVar8);
                  uVar19 = FUN_?(auStack_5);
                  color_00.r = 0;
                  color_00.g = 0;
                  color_00.b = 0;
                  color_00.a = 0;
                  color_00.rgba = uVar19;
                  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pSVar20 = Styles::Styles_ColorToHex(color_00,(MethodInfo *)0x0);
                  if (args != (Object__Array *)0x0) {
                    if (pSVar20 != (String *)0x0) {
                      lVar21 = FUN_?(pSVar20,(args->klass->_0).element_class);
                      if (lVar21 == 0) {
                        uVar22 = FUN_?();
                        FUN_?(uVar22,0);
                        pcVar23 = (code *)swi(3);
                        (*pcVar23)();
                        return;
                      }
                    }
                    FUN_?(args,0,pSVar20);
                    if (pcVar15 != (char *)0x0) {
                      lVar21 = FUN_?(pcVar15,(args->klass->_0).element_class);
                      if (lVar21 == 0) {
                        uVar22 = FUN_?();
                        FUN_?(uVar22,0);
                        pcVar23 = (code *)swi(3);
                        (*pcVar23)();
                        return;
                      }
                    }
                    FUN_?(args,1,pcVar15);
                    auStack_5 = (undefined1  [8])pOVar12;
                    uStack_18 = pOVar13;
                    uVar19 = FUN_?(auStack_5);
                    color.r = 0;
                    color.g = 0;
                    color.b = 0;
                    color.a = 0;
                    color.rgba = uVar19;
                    pSVar20 = Styles::Styles_ColorToHex(color,(MethodInfo *)0x0);
                    if (pSVar20 != (String *)0x0) {
                      lVar21 = FUN_?(pSVar20,(args->klass->_0).element_class);
                      if (lVar21 == 0) {
                        uVar22 = FUN_?();
                        FUN_?(uVar22,0);
                        pcVar23 = (code *)swi(3);
                        (*pcVar23)();
                        return;
                      }
                    }
                    FUN_?(args,2,pSVar20);
                    if (pcVar16 != (char *)0x0) {
                      lVar21 = FUN_?(pcVar16,(args->klass->_0).element_class);
                      if (lVar21 == 0) {
                        uVar22 = FUN_?();
                        FUN_?(uVar22,0);
                        pcVar23 = (code *)swi(3);
                        (*pcVar23)();
                        return;
                      }
                    }
                    FUN_?(args,3);
                    auStack_5 = (undefined1  [8])0x0;
                    uStack_18 = (Object *)0x0;
                    pOStack_24 = (Object *)0x0;
                    pOStack_25 = (Object__Array *)0x0;
                    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3
                              ((ParamsArray *)auStack_5,args,(MethodInfo *)0x0);
                    aPStack_26[0]._arg0 = (Object *)auStack_5;
                    aPStack_26[0]._arg1 = uStack_18;
                    aPStack_26[0]._arg2 = pOStack_24;
                    aPStack_26[0]._args = pOStack_25;
                    pSVar17 = mscorlib.dll::System::String::String_FormatHelper
                                        ((IFormatProvider *)0x0,pSVar17,aPStack_26,(MethodInfo *)0x0
                                        );
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
                       (pFVar27 = (pMVar1->fields).flagDebriefingControl,
                       pFVar27 != (FlagDebriefingControl *)0x0)) {
                      if ((pFVar27->fields).IsInFlagDebriefing == 0) {
                        this_01 = (this->fields).deathMessageBar;
                        if (this_01 == (GameObject *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (this_01,1,(MethodInfo *)0x0);
                        DeathUIController_StartDeathBriefing(this,pSVar17,(MethodInfo *)0x0);
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
    }
  }
code_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void OnPressPlay() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnPressPlay
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILockCursorManager);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pMVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if ((pMVar1 == (MVGameControllerDesktop *)0x0) ||
       (pIVar2 = (pMVar1->fields).lockCursorManager, pIVar2 == (ILockCursorManager *)0x0))
    goto code_?;
    FUN_?(1,TypeInfo__ILockCursorManager,pIVar2,1);
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
      (pGVar5 = (pMVar4->fields).GameEventManager, pGVar5 != (GameEventManager *)0x0)) &&
     (pGVar6 = (pGVar5->fields).AvatarCommandsPlayMode,
     pGVar6 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if ((pGVar6->fields).OnSetRespawnWhenPossible != (Action *)0x0) {
      pAVar7 = (pGVar6->fields).OnSetRespawnWhenPossible;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar7->fields)._._.invoke_impl)
                ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
      return;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnRoundEnd(IWinningCondition) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnRoundEnd
               (DeathUIController *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
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
  if (pNVar1 != (NotificationFade *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pNVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pNVar1 = (this->fields).fader;
      if (pNVar1 == (NotificationFade *)0x0) goto code_?;
      NotificationFade::NotificationFade_OnDisable(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (this->fields).fader;
      if (pNVar1 == (NotificationFade *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pNVar1,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
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
  if (pGVar2 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar2->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
  }
  (this->fields).isDeathBriefActive = 0;
  return;
}


/* Void OnTierUnlockedPop() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnTierUnlockedPop
               (DeathUIController *this,MethodInfo *method)

{
  bVar1 = DeathUIController_ShowingClaimGold(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController____c___ShowDeadmodeUI_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__DeathUIController____c);
  }
  this_06 = TypeInfo__DeathUIController____c->static_fields->__9__30_0;
  if (this_06 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DeathUIController____c);
    }
    object_00 = TypeInfo__DeathUIController____c->static_fields->__9;
    this_06 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_06,(Object *)object_00,
               MethodInfo__DeathUIController____c___ShowDeadmodeUI_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeathUIController____c->static_fields->__9__30_0 = this_06;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__DeathUIController____c->static_fields->__9__30_0 >> 0xc)
      ;
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_06,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if ((((pSVar7 != (SpawnRoleDataMediator *)0x0) &&
       (pSVar8 = (pSVar7->fields).reviveState,
       pSVar8 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)0x0)) &&
      (pSVar9 = (pSVar8->fields)._.subscribableVariable,
      pSVar9 != (SubscribableVariable_1_ReviveState_ *)0x0)) &&
     (pRVar10 = (pSVar9->fields)._.value, pRVar10 != (ReviveState *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar11 = (pRVar10->fields).safePositions;
    if (pLVar11 != (List_1_SafeSpotData_ *)0x0) {
      iVar12 = (pLVar11->fields)._size;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((((TypeInfo__MVClientSettings->static_fields->flags & 0x4000000U) != 0) &&
          (bVar1 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0),
          bVar1 == 0)) ||
         (bVar1 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0),
         bVar1 != 0)) {
        bVar13 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
        bVar1 = 0;
        if (0 < iVar12) {
          bVar1 = bVar13;
        }
        if (bVar1 != 0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__DeathUIController__ReviveNotClicked__,0);
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            LOCK();
            UNLOCK();
            FUN_?(&
                          ReviveUIHandler_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandler>_ReviveUIHandler_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__DeathUIController____c__DisplayClass19_0___ShowReviveMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__DeathUIController____c__DisplayClass19_0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          object_01 = (Object *)FUN_?(TypeInfo__DeathUIController____c__DisplayClass19_0);
          original = (this->fields).reviveHandler;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar14 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original,
                               ReviveUIHandler_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandler>_ReviveUIHandler_
                              );
          if (object_01 != (Object *)0x0) {
            bVar15 = iRam_? != 0;
            object_01[1].klass = pOVar14;
            if (bVar15) {
              uVar3 = (uint)((ulonglong)(object_01 + 1) >> 0xc);
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
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_05 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_05,object_01,
                       MethodInfo__DeathUIController____c__DisplayClass19_0___ShowReviveMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar2,(BaseEventData *)0x0,this_05,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pOVar14 = object_01[1].klass;
            pNVar16 = (NavMesh_OnNavMeshPreUpdate *)
                      FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar16,(Object *)this,MethodInfo__DeathUIController__ReviveNotClicked__,
                       (MethodInfo *)0x0);
            if (pOVar14 != (Object__Class *)0x0) {
              pIVar17 = (pOVar14->_0).image;
              UNRECOVERED_JUMPTABLE = *(code **)&pIVar17[5].token;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(pOVar14,pNVar16,pIVar17[6].name,UNRECOVERED_JUMPTABLE);
              return;
            }
          }
          FUN_?();
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<bool>);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
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
      pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar18 != (MVGameControllerBase *)0x0) &&
          (pMVar19 = (pMVar18->fields).game, pMVar19 != (MVNetworkGame *)0x0)) &&
         ((this_00 = (pMVar19->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
          ((pMVar20 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0), pMVar20 != (MVLocalPlayer *)0x0 &&
           (this_01 = (pMVar20->fields).boostController, this_01 != (BoostController *)0x0)))))) {
        BoostController::BoostController_RemoveAllBoosts(this_01,(MethodInfo *)0x0);
        this_02 = (this->fields).tierHandler;
        pAVar21 = (Action_1_Boolean_ *)FUN_?(TypeInfo__System__Action<bool>);
        FUN_?(pAVar21,this,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
        if (this_02 != (TierBoostStateHandler *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action,pAVar21,0);
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__TierBoostStateHandler____c);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          bVar15 = iRam_? != 0;
          (this_02->fields).onFinished = pAVar21;
          if (bVar15) {
            uVar3 = (uint)((ulonglong)&(this_02->fields).onFinished >> 0xc);
            lVar22 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar22 + 0xADDR);
              puVar4 = (ulonglong *)(lVar22 + 0xADDR);
              LOCK();
              bVar15 = uVar6 == *puVar4;
              if (bVar15) {
                *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0)
             || ((bVar1 = TierBoostStateHandler::TierBoostStateHandler_IsInTempClass
                                     (this_02,(MethodInfo *)0x0), bVar1 == 0 &&
                 (bVar1 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier
                                     (this_02,(MethodInfo *)0x0), bVar1 == 0)))) {
            if (pAVar21 == (Action_1_Boolean_ *)0x0) goto code_?;
            (*(pAVar21->fields)._._.invoke_impl)
                      ((pAVar21->fields)._._.method_code,1,(pAVar21->fields)._._.method);
          }
          else {
            pAVar23 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
            pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar16,(Object *)this_02,
                       MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__,
                       (MethodInfo *)0x0);
            pAVar23 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar23,(Delegate *)pNVar16,(MethodInfo *)0x0);
            if (pAVar23 == (Action *)0x0) {
              TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
            }
            else {
              pAVar24 = (Action *)0x0;
              if (pAVar23->klass == TypeInfo__System__Action) {
                pAVar24 = pAVar23;
              }
              if (pAVar24 == (Action *)0x0) {
                FUN_?(pAVar23,TypeInfo__System__Action);
                UNRECOVERED_JUMPTABLE = (code *)swi(3);
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
              TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar24;
              pAVar24 = (Action *)0x0;
              if (pAVar23->klass == TypeInfo__System__Action) {
                pAVar24 = pAVar23;
              }
              if (pAVar24 == (Action *)0x0) {
                FUN_?(pAVar23,TypeInfo__System__Action);
                UNRECOVERED_JUMPTABLE = (code *)swi(3);
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)
                              &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
                             >> 0xc);
              lVar22 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar6 = *(ulonglong *)(lVar22 + 0xADDR);
                puVar4 = (ulonglong *)(lVar22 + 0xADDR);
                LOCK();
                bVar15 = uVar6 == *puVar4;
                if (bVar15) {
                  *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar15);
            }
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_02,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__TierBoostStateHandler____c);
            }
            this_03 = TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0;
            if (this_03 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
              if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__TierBoostStateHandler____c);
              }
              object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
              this_03 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
                         MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 = this_03;
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)
                                &TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 >>
                               0xc);
                lVar22 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar6 = *(ulonglong *)(lVar22 + 0xADDR);
                  puVar4 = (ulonglong *)(lVar22 + 0xADDR);
                  LOCK();
                  bVar15 = uVar6 == *puVar4;
                  if (bVar15) {
                    *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar15);
              }
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar2,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_04 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
              FUN_?();
              UNRECOVERED_JUMPTABLE = (code *)swi(3);
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                      (this_04,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void ReboostNotClicked() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ReboostNotClicked
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController____c___ReboostNotClicked_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (((pSVar1 == (SpawnRoleDataMediator *)0x0) ||
      (pSVar2 = (pSVar1->fields).spawnRoleMode,
      pSVar2 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                0x0)) ||
     (pSVar3 = (pSVar2->fields)._.subscribableVariable,
     pSVar3 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pSVar3->fields)._.value == 2) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar5 == (MVGameControllerBase *)0x0) ||
        (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
       ((pGVar7 = (pMVar6->fields).GameEventManager, pGVar7 == (GameEventManager *)0x0 ||
        (pGVar8 = (pGVar7->fields).AvatarCommandsPlayMode,
        pGVar8 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))))
    goto code_?;
    if ((pGVar8->fields).OnSetToDeadMode != (Action *)0x0) {
      pAVar9 = (pGVar8->fields).OnSetToDeadMode;
      (*(pAVar9->fields)._._.invoke_impl)((pAVar9->fields)._._.method_code);
    }
  }
  pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__DeathUIController____c);
  }
  this_09 = TypeInfo__DeathUIController____c->static_fields->__9__20_0;
  if (this_09 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DeathUIController____c);
    }
    object_00 = TypeInfo__DeathUIController____c->static_fields->__9;
    this_09 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_09,(Object *)object_00,
               MethodInfo__DeathUIController____c___ReboostNotClicked_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeathUIController____c->static_fields->__9__20_0 = this_09;
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&TypeInfo__DeathUIController____c->static_fields->__9__20_0 >> 0xc)
      ;
      puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar13 = *puVar12;
        LOCK();
        uVar14 = *puVar12;
        if (uVar13 == uVar14) {
          *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (uVar13 != uVar14);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar10,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_09,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     ((pMVar15 = (pMVar6->fields).playerContainer, pMVar15 == (MVPlayerContainer *)0x0 ||
      ((pMVar16 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar15,(MethodInfo *)0x0),
       pMVar16 == (MVLocalPlayer *)0x0 ||
       (this_05 = (pMVar16->fields).boostController, this_05 == (BoostController *)0x0))))))
  goto code_?;
  BoostController::BoostController_RemoveAllBoosts(this_05,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    pTVar17 = (this->fields).tierHandler;
    if (pTVar17 == (TierBoostStateHandler *)0x0) goto code_?;
    bVar18 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier(pTVar17,(MethodInfo *)0x0);
    if (bVar18 != 0) {
      pTVar17 = (this->fields).tierHandler;
      pAVar19 = (Action_1_Boolean_ *)FUN_?(TypeInfo__System__Action<bool>);
      FUN_?(pAVar19,this,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
      if (pTVar17 != (TierBoostStateHandler *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action,pAVar19,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__TierBoostStateHandler____c);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        bVar20 = iRam_? != 0;
        (pTVar17->fields).onFinished = pAVar19;
        if (bVar20) {
          uVar11 = (uint)((ulonglong)&(pTVar17->fields).onFinished >> 0xc);
          lVar21 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
          do {
            uVar14 = *(ulonglong *)(lVar21 + 0xADDR);
            puVar12 = (ulonglong *)(lVar21 + 0xADDR);
            LOCK();
            bVar20 = uVar14 == *puVar12;
            if (bVar20) {
              *puVar12 = uVar14 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar20);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) ||
           ((bVar18 = TierBoostStateHandler::TierBoostStateHandler_IsInTempClass
                                (pTVar17,(MethodInfo *)0x0), bVar18 == 0 &&
            (bVar18 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier
                                (pTVar17,(MethodInfo *)0x0), bVar18 == 0)))) {
          if (pAVar19 == (Action_1_Boolean_ *)0x0) goto code_?;
          (*(pAVar19->fields)._._.invoke_impl)
                    ((pAVar19->fields)._._.method_code,1,(pAVar19->fields)._._.method);
        }
        else {
          pAVar9 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
          pNVar22 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar22,(Object *)pTVar17,
                     MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__,
                     (MethodInfo *)0x0);
          pAVar9 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar9,(Delegate *)pNVar22,(MethodInfo *)0x0);
          if (pAVar9 == (Action *)0x0) {
            TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
          }
          else {
            pAVar23 = (Action *)0x0;
            if (pAVar9->klass == TypeInfo__System__Action) {
              pAVar23 = pAVar9;
            }
            if (pAVar23 == (Action *)0x0) {
              FUN_?(pAVar9,TypeInfo__System__Action);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar23;
            pAVar23 = (Action *)0x0;
            if (pAVar9->klass == TypeInfo__System__Action) {
              pAVar23 = pAVar9;
            }
            if (pAVar23 == (Action *)0x0) {
              FUN_?(pAVar9,TypeInfo__System__Action);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar11 = (uint)((ulonglong)
                            &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
                           >> 0xc);
            lVar21 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
            do {
              uVar14 = *(ulonglong *)(lVar21 + 0xADDR);
              puVar12 = (ulonglong *)(lVar21 + 0xADDR);
              LOCK();
              bVar20 = uVar14 == *puVar12;
              if (bVar20) {
                *puVar12 = uVar14 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar20);
          }
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar17,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__TierBoostStateHandler____c);
          }
          this_07 = TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0;
          if (this_07 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
            if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__TierBoostStateHandler____c);
            }
            object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
            this_07 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_07,(Object *)object,
                       MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 = this_07;
            if (iRam_? != 0) {
              uVar11 = (uint)((ulonglong)
                              &TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 >> 0xc)
              ;
              lVar21 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar21 + 0xADDR);
                puVar12 = (ulonglong *)(lVar21 + 0xADDR);
                LOCK();
                bVar20 = uVar14 == *puVar12;
                if (bVar20) {
                  *puVar12 = uVar14 | 1L << (uVar11 & 0x3f);
                }
                UNLOCK();
              } while (!bVar20);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar10,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_07,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          this_08 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_08 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                    (this_08,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DeathUIBoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<DeathUIBoostMenuController>_DeathUIBoostMenuController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController____c__DisplayClass25_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIController____c__DisplayClass25_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_01 = (Object *)FUN_?(TypeInfo__DeathUIController____c__DisplayClass25_0);
  original = (this->fields).boostMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar24 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       DeathUIBoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<DeathUIBoostMenuController>_DeathUIBoostMenuController_
                      );
  if (object_01 == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar20 = iRam_? != 0;
  object_01[1].klass = pOVar24;
  if (bVar20) {
    uVar11 = (uint)((ulonglong)(object_01 + 1) >> 0xc);
    puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar13 = *puVar12;
      LOCK();
      uVar14 = *puVar12;
      if (uVar13 == uVar14) {
        *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (uVar13 != uVar14);
  }
  pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_10 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_10,object_01,
             MethodInfo__DeathUIController____c__DisplayClass25_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar10,(BaseEventData *)0x0,this_10,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pOVar24 = object_01[1].klass;
  if (pOVar24 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIBoostMenuController__OnRespawn__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Respawning_at_start___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Respawning_at_checkpoint___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(float *)((longlong)&(pOVar24->_0).properties + 4) <= 0.0) {
    pIVar25 = (pOVar24->_0).declaringType;
    if ((pIVar25 == (Il2CppClass *)0x0) ||
       (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar25,(MethodInfo *)0x0), pGVar10 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
    pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if ((pSVar1 == (SpawnRoleDataMediator *)0x0) ||
       ((pSVar2 = (pSVar1->fields).spawnRoleMode,
        pSVar2 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0 ||
        (pSVar3 = (pSVar2->fields)._.subscribableVariable,
        pSVar3 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))))
    goto code_?;
    if ((pSVar3->fields)._.value != 4) {
      pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar7 == (GameEventManager *)0x0) ||
         (pGVar8 = (pGVar7->fields).AvatarCommandsPlayMode,
         pGVar8 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
      goto code_?;
      if ((pGVar8->fields).OnSpawnAsGhost != (Action *)0x0) {
        pAVar9 = (pGVar8->fields).OnSpawnAsGhost;
        (*(pAVar9->fields)._._.invoke_impl)((pAVar9->fields)._._.method_code);
      }
    }
    *(undefined1 *)((longlong)&(pOVar24->_0).methods + 2) = 1;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar26 = func_?(&UNK_?);
    FUN_?(uVar26,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  uVar27 = (*pcRam_?)();
  lVar21 = *(longlong *)&(pOVar24->_0).byval_arg.attrs;
  *(undefined4 *)&(pOVar24->_0).properties = uVar27;
  if (lVar21 != 0) {
    *(undefined1 *)(lVar21 + 0x34) = 1;
    *(undefined4 *)(lVar21 + 0x3c) = *(undefined4 *)(lVar21 + 0x30);
    if (*(CanvasGroup **)(lVar21 + 0x20) != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (*(CanvasGroup **)(lVar21 + 0x20),0.0,(MethodInfo *)0x0);
      *(undefined4 *)(lVar21 + 0x38) = 0;
      lVar21 = *(longlong *)&(pOVar24->_0).byval_arg.attrs;
      if (lVar21 != 0) {
        *(undefined1 *)(lVar21 + 0x40) = 0;
        pEVar28 = (pOVar24->_0).events;
        if (pEVar28 != (EventInfo *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(char *)&pEVar28[1].add == '\0') {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
            auVar29._0_8_ = pEVar28->remove;
            auVar29._8_8_ = pEVar28->raise;
            uVar26 = *(undefined8 *)&pEVar28->token;
          }
          else {
            auVar29._0_8_ = pEVar28[1].remove;
            auVar29._8_8_ = pEVar28[1].raise;
            uVar26 = *(undefined8 *)&pEVar28[1].token;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar5 != (MVGameControllerBase *)0x0) &&
             (lVar21 = (*(pMVar5->klass->vtable).__unknown.methodPtr)
                                 (pMVar5,(pMVar5->klass->vtable).__unknown.method), lVar21 != 0)) {
            bVar30 = FUN_?();
            bVar31 = 0;
            if (auVar29[0xc] == '\0') {
              bVar31 = bVar30;
            }
            bVar31 = bVar31 & (byte)((ulonglong)uVar26 >> 0x10);
            this_00 = (pOVar24->_0).fields;
            if (this_00 != (FieldInfo *)0x0) {
              pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_00,(MethodInfo *)0x0);
              if (pGVar10 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar10,bVar31 != 0 && (char)((ulonglong)uVar26 >> 0x38) == '\0',
                           (MethodInfo *)0x0);
                pIVar25 = (pOVar24->_0).declaringType;
                if ((pIVar25 != (Il2CppClass *)0x0) &&
                   (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pIVar25,(MethodInfo *)0x0),
                   pGVar10 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar10,bVar31 ^ 1,(MethodInfo *)0x0);
                  pIVar25 = (pOVar24->_0).parent;
                  pNVar22 = (NavMesh_OnNavMeshPreUpdate *)
                            FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar22,(Object *)pOVar24,
                             MethodInfo__DeathUIBoostMenuController__OnRespawn__,(MethodInfo *)0x0);
                  if (pIVar25 != (Il2CppClass *)0x0) {
                    bVar20 = iRam_? != 0;
                    *(NavMesh_OnNavMeshPreUpdate **)&(pIVar25->byval_arg).attrs = pNVar22;
                    if (bVar20) {
                      uVar11 = (uint)((ulonglong)&(pIVar25->byval_arg).attrs >> 0xc);
                      uVar14 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                      do {
                        uVar13 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
                        puVar12 = (ulonglong *)(uVar14 * 8 + 0xADDR);
                        LOCK();
                        bVar20 = uVar13 == *puVar12;
                        if (bVar20) {
                          *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar20);
                    }
                    *(undefined1 *)&(pIVar25->byval_arg).data = 1;
                    pIVar32 = (pOVar24->_0).generic_class;
                    pNVar22 = (NavMesh_OnNavMeshPreUpdate *)
                              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar22,(Object *)pOVar24,
                               MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__,
                               (MethodInfo *)0x0);
                    if (pIVar32 != (Il2CppGenericClass *)0x0) {
                      bVar20 = iRam_? != 0;
                      pIVar32[1].context.class_inst = (Il2CppGenericInst *)pNVar22;
                      if (bVar20) {
                        uVar11 = (uint)((ulonglong)&pIVar32[1].context >> 0xc);
                        uVar14 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                        do {
                          uVar13 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
                          puVar12 = (ulonglong *)(uVar14 * 8 + 0xADDR);
                          LOCK();
                          bVar20 = uVar13 == *puVar12;
                          if (bVar20) {
                            *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar20);
                      }
                      *(undefined1 *)&pIVar32[1].type = 1;
                      pSVar1 = MVGameControllerBase::
                                MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                          ((MethodInfo *)0x0);
                      if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
                        this_01 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
                        this_06 = (UnityAction_1_System_Int32Enum_ *)
                                  FUN_?(
                                               TypeInfo__System__Action<MV::Common::SpawnRoleModeType>
                                               );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                  (this_06,(Object *)pOVar24,
                                   MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                                   ,(MethodInfo *)0x0);
                        if (this_01 != (SpawnRoleModeTypeWrapper *)0x0) {
                          SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                                    (this_01,(Action_1_MV_Common_SpawnRoleModeType_ *)this_06,
                                     (MethodInfo *)0x0);
                          this_02 = (BoostMenuController *)(pOVar24->_0).typeMetadataHandle;
                          if (this_02 != (BoostMenuController *)0x0) {
                            BoostMenuController::BoostMenuController_Initialize
                                      (this_02,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__MVGameControllerBase);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
                                 (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0))
                                && (pMVar15 = (pMVar6->fields).playerContainer,
                                   pMVar15 != (MVPlayerContainer *)0x0)) &&
                               (pMVar16 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                    (pMVar15,(MethodInfo *)0x0),
                               pMVar16 != (MVLocalPlayer *)0x0)) {
                              pMVar33 = MVPlayer::MVPlayer_GetCheckpoint
                                                  ((MVPlayer *)pMVar16,(MethodInfo *)0x0);
                              pIVar34 = (pOVar24->_0).this_arg.data.type;
                              if (pIVar34 != (Il2CppType *)0x0) {
                                *(TypeDefinitionIndex *)&pIVar34[3].field_0xc =
                                     pIVar34[3].data.__klassIndex;
                                this_03 = (CanvasGroup *)pIVar34[2].data.typeHandle;
                                *(undefined1 *)((longlong)&pIVar34[3].data + 4) = 1;
                                if (this_03 != (CanvasGroup *)0x0) {
                                  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                                  CanvasGroup_set_alpha(this_03,0.0,(MethodInfo *)0x0);
                                  pIVar34[3].attrs = 0;
                                  pIVar34[3].type = 0;
                                  pIVar34[3].field_0xb = 0;
                                  pIVar34 = (pOVar24->_0).this_arg.data.type;
                                  if (pIVar34 != (Il2CppType *)0x0) {
                                    *(undefined4 *)&pIVar34[3].field_0xc = 0;
                                    if (pMVar33 == (MVCheckpoint *)0x0) {
                                      this_04 = *(Component **)&(pOVar24->_0).this_arg.attrs;
                                      if ((this_04 == (Component *)0x0) ||
                                         (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_gameObject
                                                              (this_04,(MethodInfo *)0x0),
                                         pGVar10 == (GameObject *)0x0)) goto code_?;
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar10,0,(MethodInfo *)0x0);
                                      pIVar35 = (pOVar24->_0).byval_arg.data.array;
                                      pSVar36 = StringLiteral_Respawning_at_start___;
                                    }
                                    else {
                                      pIVar35 = (pOVar24->_0).byval_arg.data.array;
                                      pSVar36 = StringLiteral_Respawning_at_checkpoint___;
                                    }
                                    if (pIVar35 != (Il2CppArrayType *)0x0) {
                                      (**(code **)&pIVar35->etype[0x5e].attrs)
                                                (pIVar35,pSVar36,pIVar35->etype[0x5f].data.dummy);
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__GamePointGainEffectManager);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
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
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ReviveNotClicked() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ReviveNotClicked
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController____c___ReviveNotClicked_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar1 != 0) {
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (((pSVar2 == (SpawnRoleDataMediator *)0x0) ||
        (pSVar3 = (pSVar2->fields).spawnRoleMode,
        pSVar3 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0)) ||
       (pSVar4 = (pSVar3->fields)._.subscribableVariable,
       pSVar4 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
    goto code_?;
    if ((pSVar4->fields)._.value == 2) {
      pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar5 == (GameEventManager *)0x0) ||
         (pGVar6 = (pGVar5->fields).AvatarCommandsPlayMode,
         pGVar6 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
      goto code_?;
      if ((pGVar6->fields).OnSetToDeadMode != (Action *)0x0) {
        pAVar7 = (pGVar6->fields).OnSetToDeadMode;
        (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code);
      }
    }
  }
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__DeathUIController____c);
  }
  this_06 = TypeInfo__DeathUIController____c->static_fields->__9__21_0;
  if (this_06 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DeathUIController____c);
    }
    object_00 = TypeInfo__DeathUIController____c->static_fields->__9;
    this_06 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_06,(Object *)object_00,
               MethodInfo__DeathUIController____c___ReviveNotClicked_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeathUIController____c->static_fields->__9__21_0 = this_06;
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&TypeInfo__DeathUIController____c->static_fields->__9__21_0 >> 0xc)
      ;
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar8,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_06,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar13 != (MVGameControllerBase *)0x0) &&
      (pMVar14 = (pMVar13->fields).game, pMVar14 != (MVNetworkGame *)0x0)) &&
     ((this_00 = (pMVar14->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
      ((pMVar15 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar15 != (MVLocalPlayer *)0x0 &&
       (this_01 = (pMVar15->fields).boostController, this_01 != (BoostController *)0x0)))))) {
    BoostController::BoostController_RemoveAllBoosts(this_01,(MethodInfo *)0x0);
    this_02 = (this->fields).tierHandler;
    pAVar16 = (Action_1_Boolean_ *)FUN_?(TypeInfo__System__Action<bool>);
    FUN_?(pAVar16,this,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
    if (this_02 != (TierBoostStateHandler *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action,pAVar16,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__TierBoostStateHandler____c);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      bVar17 = iRam_? != 0;
      (this_02->fields).onFinished = pAVar16;
      if (bVar17) {
        uVar9 = (uint)((ulonglong)&(this_02->fields).onFinished >> 0xc);
        lVar18 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar18 + 0xADDR);
          puVar10 = (ulonglong *)(lVar18 + 0xADDR);
          LOCK();
          bVar17 = uVar12 == *puVar10;
          if (bVar17) {
            *puVar10 = uVar12 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar17);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) ||
         ((bVar1 = TierBoostStateHandler::TierBoostStateHandler_IsInTempClass
                              (this_02,(MethodInfo *)0x0), bVar1 == 0 &&
          (bVar1 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier
                              (this_02,(MethodInfo *)0x0), bVar1 == 0)))) {
        if (pAVar16 == (Action_1_Boolean_ *)0x0) goto code_?;
        (*(pAVar16->fields)._._.invoke_impl)
                  ((pAVar16->fields)._._.method_code,1,(pAVar16->fields)._._.method);
      }
      else {
        pAVar7 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
        this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_03,(Object *)this_02,
                   MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
        ;
        pAVar7 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar7,(Delegate *)this_03,(MethodInfo *)0x0);
        if (pAVar7 == (Action *)0x0) {
          TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
        }
        else {
          pAVar19 = (Action *)0x0;
          if (pAVar7->klass == TypeInfo__System__Action) {
            pAVar19 = pAVar7;
          }
          if (pAVar19 == (Action *)0x0) {
            FUN_?(pAVar7,TypeInfo__System__Action);
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar19;
          pAVar19 = (Action *)0x0;
          if (pAVar7->klass == TypeInfo__System__Action) {
            pAVar19 = pAVar7;
          }
          if (pAVar19 == (Action *)0x0) {
            FUN_?(pAVar7,TypeInfo__System__Action);
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)
                          &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >>
                         0xc);
          lVar18 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar18 + 0xADDR);
            puVar10 = (ulonglong *)(lVar18 + 0xADDR);
            LOCK();
            bVar17 = uVar12 == *puVar10;
            if (bVar17) {
              *puVar10 = uVar12 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar17);
        }
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_02,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__TierBoostStateHandler____c);
        }
        this_04 = TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0;
        if (this_04 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__TierBoostStateHandler____c);
          }
          object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
          this_04 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)object,
                     MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 = this_04;
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)
                            &TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 >> 0xc);
            lVar18 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar18 + 0xADDR);
              puVar10 = (ulonglong *)(lVar18 + 0xADDR);
              LOCK();
              bVar17 = uVar12 == *puVar10;
              if (bVar17) {
                *puVar10 = uVar12 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar17);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar8,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)this_04,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_05 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
          FUN_?();
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                  (this_05,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void SendCurrentProgressNotification() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_SendCurrentProgressNotification
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aGStackX_18[0] = aGStackX_18[0] & 0xffffff00;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            (aGStackX_18,(MethodInfo *)0x0);
  if ((undefined1)aGStackX_18[0] == GameStatCounterType__Enum_None) {
    return;
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_01,8,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aGStackX_18[0] = CONCAT31(aGStackX_18[0]._1_3_,2);
  key = (Object *)FUN_?(uRam_?,aGStackX_18);
  aGStackX_18[0] = GameStatCounterType__Enum_TimeAttackFlag;
  value = (Object *)FUN_?(TypeInfo__NotificationLifetime,aGStackX_18);
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,key,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
      if (this_00 == (NotificationsManager *)0x0) goto code_?;
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this_00,NotificationType__Enum_CurrentProgress,
                 (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ShouldShowTierReward(GamePassTier) */

bool Assembly-CSharp.dll::DeathUIController::DeathUIController_ShouldShowTierReward
               (DeathUIController *this,GamePassTier__Enum tierToShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TierUnlockedPopupController);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      if ((pGVar1->fields).gameMode == 4) {
        return 0;
      }
      bVar2 = TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        if ((pPVar3->fields).gamePassTier <= bVar2) {
          return 0;
        }
        if ((byte)tierToShow <=
            TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown) {
          return 0;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar3 != (PlayerPlanetData *)0x0) {
          return (byte)tierToShow <= (pPVar3->fields).gamePassTier;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void ShowBoostMenu() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowBoostMenu
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DeathUIBoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<DeathUIBoostMenuController>_DeathUIBoostMenuController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController____c__DisplayClass25_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIController____c__DisplayClass25_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DeathUIController____c__DisplayClass25_0);
  original = (this->fields).boostMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       DeathUIBoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<DeathUIBoostMenuController>_DeathUIBoostMenuController_
                      );
  if (object == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  object[1].klass = pOVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_08 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_08,object,
             MethodInfo__DeathUIController____c__DisplayClass25_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar8,(BaseEventData *)0x0,this_08,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pOVar1 = object[1].klass;
  if (pOVar1 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIBoostMenuController__OnRespawn__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Respawning_at_start___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Respawning_at_checkpoint___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(float *)((longlong)&(pOVar1->_0).properties + 4) <= 0.0) {
    pIVar9 = (pOVar1->_0).declaringType;
    if ((pIVar9 == (Il2CppClass *)0x0) ||
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar9,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if ((pSVar10 == (SpawnRoleDataMediator *)0x0) ||
       ((pSVar11 = (pSVar10->fields).spawnRoleMode,
        pSVar11 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0 ||
        (pSVar12 = (pSVar11->fields)._.subscribableVariable,
        pSVar12 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))))
    goto code_?;
    if ((pSVar12->fields)._.value != 4) {
      pGVar13 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar13 == (GameEventManager *)0x0) ||
         (pGVar14 = (pGVar13->fields).AvatarCommandsPlayMode,
         pGVar14 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
      goto code_?;
      if ((pGVar14->fields).OnSpawnAsGhost != (Action *)0x0) {
        pAVar15 = (pGVar14->fields).OnSpawnAsGhost;
        (*(pAVar15->fields)._._.invoke_impl)((pAVar15->fields)._._.method_code);
      }
    }
    *(undefined1 *)((longlong)&(pOVar1->_0).methods + 2) = 1;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  uVar17 = (*pcRam_?)();
  lVar18 = *(longlong *)&(pOVar1->_0).byval_arg.attrs;
  *(undefined4 *)&(pOVar1->_0).properties = uVar17;
  if (lVar18 != 0) {
    *(undefined1 *)(lVar18 + 0x34) = 1;
    *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)(lVar18 + 0x30);
    if (*(CanvasGroup **)(lVar18 + 0x20) != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (*(CanvasGroup **)(lVar18 + 0x20),0.0,(MethodInfo *)0x0);
      *(undefined4 *)(lVar18 + 0x38) = 0;
      lVar18 = *(longlong *)&(pOVar1->_0).byval_arg.attrs;
      if (lVar18 != 0) {
        *(undefined1 *)(lVar18 + 0x40) = 0;
        pEVar19 = (pOVar1->_0).events;
        if (pEVar19 != (EventInfo *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(char *)&pEVar19[1].add == '\0') {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
            auVar20._0_8_ = pEVar19->remove;
            auVar20._8_8_ = pEVar19->raise;
            uVar16 = *(undefined8 *)&pEVar19->token;
          }
          else {
            auVar20._0_8_ = pEVar19[1].remove;
            auVar20._8_8_ = pEVar19[1].raise;
            uVar16 = *(undefined8 *)&pEVar19[1].token;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar21 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar21 != (MVGameControllerBase *)0x0) &&
             (lVar18 = (*(pMVar21->klass->vtable).__unknown.methodPtr)
                                 (pMVar21,(pMVar21->klass->vtable).__unknown.method), lVar18 != 0)) {
            bVar22 = FUN_?();
            bVar23 = 0;
            if (auVar20[0xc] == '\0') {
              bVar23 = bVar22;
            }
            bVar23 = bVar23 & (byte)((ulonglong)uVar16 >> 0x10);
            this_00 = (pOVar1->_0).fields;
            if (this_00 != (FieldInfo *)0x0) {
              pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_00,(MethodInfo *)0x0);
              if (pGVar8 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar8,bVar23 != 0 && (char)((ulonglong)uVar16 >> 0x38) == '\0',
                           (MethodInfo *)0x0);
                pIVar9 = (pOVar1->_0).declaringType;
                if ((pIVar9 != (Il2CppClass *)0x0) &&
                   (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pIVar9,(MethodInfo *)0x0),
                   pGVar8 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar8,bVar23 ^ 1,(MethodInfo *)0x0);
                  pIVar9 = (pOVar1->_0).parent;
                  pNVar24 = (NavMesh_OnNavMeshPreUpdate *)
                            FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar24,(Object *)pOVar1,
                             MethodInfo__DeathUIBoostMenuController__OnRespawn__,(MethodInfo *)0x0);
                  if (pIVar9 != (Il2CppClass *)0x0) {
                    bVar3 = iRam_? != 0;
                    *(NavMesh_OnNavMeshPreUpdate **)&(pIVar9->byval_arg).attrs = pNVar24;
                    if (bVar3) {
                      uVar4 = (uint)((ulonglong)&(pIVar9->byval_arg).attrs >> 0xc);
                      uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                      do {
                        uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                        puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                        LOCK();
                        bVar3 = uVar6 == *puVar5;
                        if (bVar3) {
                          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar3);
                    }
                    *(undefined1 *)&(pIVar9->byval_arg).data = 1;
                    pIVar25 = (pOVar1->_0).generic_class;
                    pNVar24 = (NavMesh_OnNavMeshPreUpdate *)
                              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar24,(Object *)pOVar1,
                               MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__,
                               (MethodInfo *)0x0);
                    if (pIVar25 != (Il2CppGenericClass *)0x0) {
                      bVar3 = iRam_? != 0;
                      pIVar25[1].context.class_inst = (Il2CppGenericInst *)pNVar24;
                      if (bVar3) {
                        uVar4 = (uint)((ulonglong)&pIVar25[1].context >> 0xc);
                        uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                        do {
                          uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                          puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                          LOCK();
                          bVar3 = uVar6 == *puVar5;
                          if (bVar3) {
                            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar3);
                      }
                      *(undefined1 *)&pIVar25[1].type = 1;
                      pSVar10 = MVGameControllerBase::
                                MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                          ((MethodInfo *)0x0);
                      if (pSVar10 != (SpawnRoleDataMediator *)0x0) {
                        this_01 = (pSVar10->fields).SpawnRoleModeTypeWrapper;
                        this_06 = (UnityAction_1_System_Int32Enum_ *)
                                  FUN_?(
                                               TypeInfo__System__Action<MV::Common::SpawnRoleModeType>
                                               );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                  (this_06,(Object *)pOVar1,
                                   MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                                   ,(MethodInfo *)0x0);
                        if (this_01 != (SpawnRoleModeTypeWrapper *)0x0) {
                          SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                                    (this_01,(Action_1_MV_Common_SpawnRoleModeType_ *)this_06,
                                     (MethodInfo *)0x0);
                          this_02 = (BoostMenuController *)(pOVar1->_0).typeMetadataHandle;
                          if (this_02 != (BoostMenuController *)0x0) {
                            BoostMenuController::BoostMenuController_Initialize
                                      (this_02,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__MVGameControllerBase);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar21 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if ((((pMVar21 != (MVGameControllerBase *)0x0) &&
                                 (pMVar26 = (pMVar21->fields).game, pMVar26 != (MVNetworkGame *)0x0))
                                && (this_03 = (pMVar26->fields).playerContainer,
                                   this_03 != (MVPlayerContainer *)0x0)) &&
                               (this_07 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                    (this_03,(MethodInfo *)0x0),
                               this_07 != (MVLocalPlayer *)0x0)) {
                              pMVar27 = MVPlayer::MVPlayer_GetCheckpoint
                                                  ((MVPlayer *)this_07,(MethodInfo *)0x0);
                              pIVar28 = (pOVar1->_0).this_arg.data.type;
                              if (pIVar28 != (Il2CppType *)0x0) {
                                *(TypeDefinitionIndex *)&pIVar28[3].field_0xc =
                                     pIVar28[3].data.__klassIndex;
                                this_04 = (CanvasGroup *)pIVar28[2].data.typeHandle;
                                *(undefined1 *)((longlong)&pIVar28[3].data + 4) = 1;
                                if (this_04 != (CanvasGroup *)0x0) {
                                  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                                  CanvasGroup_set_alpha(this_04,0.0,(MethodInfo *)0x0);
                                  pIVar28[3].attrs = 0;
                                  pIVar28[3].type = 0;
                                  pIVar28[3].field_0xb = 0;
                                  pIVar28 = (pOVar1->_0).this_arg.data.type;
                                  if (pIVar28 != (Il2CppType *)0x0) {
                                    *(undefined4 *)&pIVar28[3].field_0xc = 0;
                                    if (pMVar27 == (MVCheckpoint *)0x0) {
                                      this_05 = *(Component **)&(pOVar1->_0).this_arg.attrs;
                                      if ((this_05 == (Component *)0x0) ||
                                         (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_gameObject
                                                              (this_05,(MethodInfo *)0x0),
                                         pGVar8 == (GameObject *)0x0)) goto code_?;
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar8,0,(MethodInfo *)0x0);
                                      pIVar29 = (pOVar1->_0).byval_arg.data.array;
                                      pSVar30 = StringLiteral_Respawning_at_start___;
                                    }
                                    else {
                                      pIVar29 = (pOVar1->_0).byval_arg.data.array;
                                      pSVar30 = StringLiteral_Respawning_at_checkpoint___;
                                    }
                                    if (pIVar29 != (Il2CppArrayType *)0x0) {
                                      (**(code **)&pIVar29->etype[0x5e].attrs)
                                                (pIVar29,pSVar30,pIVar29->etype[0x5f].data.dummy);
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__GamePointGainEffectManager);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
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
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowDeadmodeUI() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowDeadmodeUI
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController____c___ShowDeadmodeUI_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__DeathUIController____c);
  }
  this_06 = TypeInfo__DeathUIController____c->static_fields->__9__30_0;
  if (this_06 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DeathUIController____c);
    }
    object_00 = TypeInfo__DeathUIController____c->static_fields->__9;
    this_06 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_06,(Object *)object_00,
               MethodInfo__DeathUIController____c___ShowDeadmodeUI_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeathUIController____c->static_fields->__9__30_0 = this_06;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__DeathUIController____c->static_fields->__9__30_0 >> 0xc)
      ;
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_06,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if ((((pSVar6 != (SpawnRoleDataMediator *)0x0) &&
       (pSVar7 = (pSVar6->fields).reviveState,
       pSVar7 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)0x0)) &&
      (pSVar8 = (pSVar7->fields)._.subscribableVariable,
      pSVar8 != (SubscribableVariable_1_ReviveState_ *)0x0)) &&
     (pRVar9 = (pSVar8->fields)._.value, pRVar9 != (ReviveState *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar10 = (pRVar9->fields).safePositions;
    if (pLVar10 != (List_1_SafeSpotData_ *)0x0) {
      iVar11 = (pLVar10->fields)._size;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((((TypeInfo__MVClientSettings->static_fields->flags & 0x4000000U) != 0) &&
          (bVar12 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0),
          bVar12 == 0)) ||
         (bVar12 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0),
         bVar12 != 0)) {
        bVar13 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
        bVar12 = 0;
        if (0 < iVar11) {
          bVar12 = bVar13;
        }
        if (bVar12 != 0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__DeathUIController__ReviveNotClicked__,0);
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            LOCK();
            UNLOCK();
            FUN_?(&
                          ReviveUIHandler_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandler>_ReviveUIHandler_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__DeathUIController____c__DisplayClass19_0___ShowReviveMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__DeathUIController____c__DisplayClass19_0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          object_01 = (Object *)FUN_?(TypeInfo__DeathUIController____c__DisplayClass19_0);
          original = (this->fields).reviveHandler;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar14 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original,
                               ReviveUIHandler_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandler>_ReviveUIHandler_
                              );
          if (object_01 != (Object *)0x0) {
            bVar15 = iRam_? != 0;
            object_01[1].klass = pOVar14;
            if (bVar15) {
              uVar2 = (uint)((ulonglong)(object_01 + 1) >> 0xc);
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
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_05 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_05,object_01,
                       MethodInfo__DeathUIController____c__DisplayClass19_0___ShowReviveMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar1,(BaseEventData *)0x0,this_05,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pOVar14 = object_01[1].klass;
            pNVar16 = (NavMesh_OnNavMeshPreUpdate *)
                      FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar16,(Object *)this,MethodInfo__DeathUIController__ReviveNotClicked__,
                       (MethodInfo *)0x0);
            if (pOVar14 != (Object__Class *)0x0) {
              pIVar17 = (pOVar14->_0).image;
              UNRECOVERED_JUMPTABLE = *(code **)&pIVar17[5].token;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(pOVar14,pNVar16,pIVar17[6].name,UNRECOVERED_JUMPTABLE);
              return;
            }
          }
          FUN_?();
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<bool>);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
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
      pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar18 != (MVGameControllerBase *)0x0) &&
          (pMVar19 = (pMVar18->fields).game, pMVar19 != (MVNetworkGame *)0x0)) &&
         ((this_00 = (pMVar19->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
          ((pMVar20 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0), pMVar20 != (MVLocalPlayer *)0x0 &&
           (this_01 = (pMVar20->fields).boostController, this_01 != (BoostController *)0x0)))))) {
        BoostController::BoostController_RemoveAllBoosts(this_01,(MethodInfo *)0x0);
        this_02 = (this->fields).tierHandler;
        pAVar21 = (Action_1_Boolean_ *)FUN_?(TypeInfo__System__Action<bool>);
        FUN_?(pAVar21,this,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
        if (this_02 != (TierBoostStateHandler *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action,pAVar21,0);
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__TierBoostStateHandler____c);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          bVar15 = iRam_? != 0;
          (this_02->fields).onFinished = pAVar21;
          if (bVar15) {
            uVar2 = (uint)((ulonglong)&(this_02->fields).onFinished >> 0xc);
            lVar22 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar22 + 0xADDR);
              puVar3 = (ulonglong *)(lVar22 + 0xADDR);
              LOCK();
              bVar15 = uVar5 == *puVar3;
              if (bVar15) {
                *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0)
             || ((bVar12 = TierBoostStateHandler::TierBoostStateHandler_IsInTempClass
                                     (this_02,(MethodInfo *)0x0), bVar12 == 0 &&
                 (bVar12 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier
                                     (this_02,(MethodInfo *)0x0), bVar12 == 0)))) {
            if (pAVar21 == (Action_1_Boolean_ *)0x0) goto code_?;
            (*(pAVar21->fields)._._.invoke_impl)
                      ((pAVar21->fields)._._.method_code,1,(pAVar21->fields)._._.method);
          }
          else {
            pAVar23 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
            pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar16,(Object *)this_02,
                       MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__,
                       (MethodInfo *)0x0);
            pAVar23 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar23,(Delegate *)pNVar16,(MethodInfo *)0x0);
            if (pAVar23 == (Action *)0x0) {
              TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
            }
            else {
              pAVar24 = (Action *)0x0;
              if (pAVar23->klass == TypeInfo__System__Action) {
                pAVar24 = pAVar23;
              }
              if (pAVar24 == (Action *)0x0) {
                FUN_?(pAVar23,TypeInfo__System__Action);
                UNRECOVERED_JUMPTABLE = (code *)swi(3);
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
              TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar24;
              pAVar24 = (Action *)0x0;
              if (pAVar23->klass == TypeInfo__System__Action) {
                pAVar24 = pAVar23;
              }
              if (pAVar24 == (Action *)0x0) {
                FUN_?(pAVar23,TypeInfo__System__Action);
                UNRECOVERED_JUMPTABLE = (code *)swi(3);
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)
                              &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
                             >> 0xc);
              lVar22 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar22 + 0xADDR);
                puVar3 = (ulonglong *)(lVar22 + 0xADDR);
                LOCK();
                bVar15 = uVar5 == *puVar3;
                if (bVar15) {
                  *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar15);
            }
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_02,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__TierBoostStateHandler____c);
            }
            this_03 = TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0;
            if (this_03 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
              if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__TierBoostStateHandler____c);
              }
              object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
              this_03 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
                         MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 = this_03;
              if (iRam_? != 0) {
                uVar2 = (uint)((ulonglong)
                                &TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 >>
                               0xc);
                lVar22 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar22 + 0xADDR);
                  puVar3 = (ulonglong *)(lVar22 + 0xADDR);
                  LOCK();
                  bVar15 = uVar5 == *puVar3;
                  if (bVar15) {
                    *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar15);
              }
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar1,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_04 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
              FUN_?();
              UNRECOVERED_JUMPTABLE = (code *)swi(3);
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                      (this_04,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void ShowReviveMenu() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowReviveMenu
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__DeathUIController__ReviveNotClicked__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ReviveUIHandler_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandler>_ReviveUIHandler_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController____c__DisplayClass19_0___ShowReviveMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIController____c__DisplayClass19_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DeathUIController____c__DisplayClass19_0);
  original = (this->fields).reviveHandler;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      ReviveUIHandler_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandler>_ReviveUIHandler_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__DeathUIController____c__DisplayClass19_0___ShowReviveMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = object[1].klass;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__DeathUIController__ReviveNotClicked__,
               (MethodInfo *)0x0);
    if (pOVar1 != (Object__Class *)0x0) {
      pIVar7 = (pOVar1->_0).image;
      UNRECOVERED_JUMPTABLE = *(code **)&pIVar7[5].token;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(pOVar1,this_01,pIVar7[6].name,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void ShowTierUnlockedPopup(Boolean, Boolean) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowTierUnlockedPopup
               (DeathUIController *this,bool wasPurchased,bool wasTempUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController____c__DisplayClass27_0___ShowTierUnlockedPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIController____c__DisplayClass27_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DeathUIController____c__DisplayClass27_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    original = (this->fields).tierUnlockedPopupControllerPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar6 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                       );
    bVar1 = iRam_? != 0;
    object[1].klass = pOVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__DeathUIController____c__DisplayClass27_0___ShowTierUnlockedPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar6 = object[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar7 != (PlayerPlanetData *)0x0) && (pOVar6 != (Object__Class *)0x0)) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                ((TierUnlockedPopupController *)pOVar6,(uint)(pPVar7->fields).gamePassTier,
                 wasPurchased,wasTempUnlocked,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean ShowingClaimGold() */

bool Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowingClaimGold
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIController____c__DisplayClass29_0___ShowingClaimGold_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIController____c__DisplayClass29_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DeathUIController____c__DisplayClass29_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pGVar7 = (pMVar6->fields).goldRewardManager, pGVar7 != (GoldRewardManager *)0x0)) {
      bVar8 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar7,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar6 == (MVGameControllerBase *)0x0) ||
           (pGVar7 = (pMVar6->fields).goldRewardManager, pGVar7 == (GoldRewardManager *)0x0))
        goto code_?;
        fVar9 = GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft
                           (pGVar7,(MethodInfo *)0x0);
        if (fVar9 <= 0.0) {
          pGVar10 = (this->fields).claimGoldRewardPopupPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)pGVar10,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
          bVar1 = iRam_? != 0;
          object[1].monitor = (MonitorData *)pOVar11;
          if (bVar1) {
            uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
            uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
            do {
              uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
              puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_00,object,
                     MethodInfo__DeathUIController____c__DisplayClass29_0___ShowingClaimGold_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar10,(BaseEventData *)0x0,this_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return 1;
        }
      }
      return 0;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar8 = (*pcVar12)();
  return bVar8;
}


/* Void StartDeathBriefing(String) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_StartDeathBriefing
               (DeathUIController *this,String *deathText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DeathUIController___StartDeathBriefing_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__DeathUIController___StartDeathBriefing_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    cVar2 = FUN_?(7);
    if (cVar2 != '\0') {
      DeathUIController_ShowDeadmodeUI(this,(MethodInfo *)0x0);
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar5 = (float)(*pcRam_?)();
    (this->fields).waitTime = fVar5;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pTVar6 = (this->fields).deathReason;
      if (pTVar6 != (Text *)0x0) {
        (*(pTVar6->klass->vtable).set_text.methodPtr)
                  (pTVar6,deathText,(pTVar6->klass->vtable).set_text.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TierProgress() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_TierProgress
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockedPopupController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    pTVar1 = (this->fields).tierOnDeathProgress;
    if ((pTVar1 != (TierOnDeathProgress *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
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
      (*pcRam_?)(pvVar4,0);
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar6 != (PlayerPlanetData *)0x0) {
      uVar7 = (pPVar6->fields).gamePassTier;
      if ((TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown == uVar7) &&
         (uVar7 == 3)) {
        bVar8 = 0;
      }
      else {
        pPVar9 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if (pPVar9 == (PlayerTierStateCalculator *)0x0) goto code_?;
        bVar8 = (pPVar9->fields).gamePassRewardsActivated;
      }
      pTVar1 = (this->fields).tierOnDeathProgress;
      if ((pTVar1 != (TierOnDeathProgress *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,bVar8 != 0,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          pTVar1 = (this->fields).tierOnDeathProgress;
          if (pTVar1 == (TierOnDeathProgress *)0x0) goto code_?;
          TierOnDeathProgress::TierOnDeathProgress_Initialize(pTVar1,(MethodInfo *)0x0);
        }
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


/* Void Update() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_Update
               (DeathUIController *this,MethodInfo *method)

{
  fVar1 = (this->fields).waitTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (fVar4 <= fVar1) {
    return;
  }
  if ((this->fields).isDeathBriefActive == 0) {
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 == (MVNetworkGame *)0x0) ||
       (pMVar6 = (pMVar5->fields)._NetworkGameStateListener_k__BackingField,
       pMVar6 == (MVNetworkGameStateListener *)0x0)) goto DAT_?;
    if ((pMVar6->fields).currentGameState != 2) {
      bVar7 = cRam_? == '\0';
      (this->fields).isDeathBriefActive = 1;
      if (bVar7) {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__TierUnlockedPopupController);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
        pTVar8 = (this->fields).tierOnDeathProgress;
        if ((pTVar8 == (TierOnDeathProgress *)0x0) ||
           (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar8,(MethodInfo *)0x0),
           pGVar9 == (GameObject *)0x0)) goto DAT_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar9,0,(MethodInfo *)0x0);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar10 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar10 == (PlayerPlanetData *)0x0) goto DAT_?;
        uVar11 = (pPVar10->fields).gamePassTier;
        if ((TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown == uVar11)
           && (uVar11 == 3)) {
          bVar12 = 0;
        }
        else {
          pPVar13 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
          if (pPVar13 == (PlayerTierStateCalculator *)0x0) goto DAT_?;
          bVar12 = (pPVar13->fields).gamePassRewardsActivated;
        }
        pTVar8 = (this->fields).tierOnDeathProgress;
        if ((pTVar8 == (TierOnDeathProgress *)0x0) ||
           (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar8,(MethodInfo *)0x0),
           pGVar9 == (GameObject *)0x0)) goto DAT_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar9,bVar12 != 0,(MethodInfo *)0x0);
        if (bVar12 != 0) {
          pTVar8 = (this->fields).tierOnDeathProgress;
          if (pTVar8 == (TierOnDeathProgress *)0x0) goto DAT_?;
          TierOnDeathProgress::TierOnDeathProgress_Initialize(pTVar8,(MethodInfo *)0x0);
        }
      }
      pNVar14 = (this->fields).fader;
      if ((pNVar14 == (NotificationFade *)0x0) ||
         (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pNVar14,(MethodInfo *)0x0), pGVar9 == (GameObject *)0x0)
         ) goto DAT_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,1,(MethodInfo *)0x0);
      pNVar14 = (this->fields).fader;
      if (pNVar14 == (NotificationFade *)0x0) goto DAT_?;
      this_00 = (pNVar14->fields).group;
      (pNVar14->fields).playing = 1;
      (pNVar14->fields).pauseAt = (pNVar14->fields).duration;
      if (this_00 == (CanvasGroup *)0x0) goto DAT_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pNVar14->fields).currentTime = 0.0;
    }
  }
  pTVar8 = (this->fields).tierOnDeathProgress;
  if ((pTVar8 != (TierOnDeathProgress *)0x0) &&
     (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar8,(MethodInfo *)0x0), pGVar9 != (GameObject *)0x0)) {
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar9,(MethodInfo *)0x0);
    if (bVar12 == 0) {
      return;
    }
    pTVar8 = (this->fields).tierOnDeathProgress;
    if (pTVar8 != (TierOnDeathProgress *)0x0) {
      pNVar14 = (this->fields).fader;
      if ((pTVar8->fields)._IsShowingTierProgress_k__BackingField == 0) {
        if (pNVar14 != (NotificationFade *)0x0) {
          fVar1 = (pNVar14->fields).pauseAt;
          if (fVar1 == (pNVar14->fields).duration) {
            return;
          }
          if (fVar1 == (pNVar14->fields).duration) {
            return;
          }
          (pNVar14->fields).currentTime = (pNVar14->fields).pauseAt;
          (pNVar14->fields).pauseAt = (pNVar14->fields).duration;
          return;
        }
      }
      else if (pNVar14 != (NotificationFade *)0x0) {
        (pNVar14->fields).pauseAt = 0.99;
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <StartDeathBriefing>b__36_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController__StartDeathBriefing_b__36_0
               (DeathUIController *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    FUN_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,4);
    FUN_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x20);
    original = (this->fields).invisibleBlocker;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
              ((Object *)original,
               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
              );
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

