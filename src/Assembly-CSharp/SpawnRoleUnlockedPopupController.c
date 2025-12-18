
/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_AwaitSpawnThenClose
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).awaitingSpawn = 1;
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX != 0) {
    lVar1 = *(longlong *)(extraout_RAX + 0x88);
    b = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(b,this);
    if (lVar1 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<int>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      plVar2 = (longlong *)(lVar1 + 0x20);
      a = *(Delegate **)(lVar1 + 0x20);
      do {
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine(a,b,(MethodInfo *)0x0);
        pAVar4 = TypeInfo__System__Action<int>;
        if (pDVar3 == (Delegate *)0x0) {
          lVar1 = 0;
        }
        else {
          lVar1 = FUN_?(pDVar3,TypeInfo__System__Action<int>);
          if (lVar1 == 0) {
            FUN_?(pDVar3,pAVar4);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        LOCK();
        pDVar3 = (Delegate *)*plVar2;
        bVar6 = a == pDVar3;
        if (bVar6) {
          *plVar2 = lVar1;
          pDVar3 = a;
        }
        UNLOCK();
        pDVar7 = a;
        if (!bVar6) {
          pDVar7 = pDVar3;
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)plVar2 >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar10 == *puVar11;
            if (bVar6) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        bVar6 = pDVar7 != a;
        a = pDVar7;
      } while (bVar6);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Close(Int32) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Close
               (SpawnRoleUnlockedPopupController *this,int32_t spawnRoleID,MethodInfo *method)

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
                  MethodInfo__SpawnRoleUnlockedPopupController____c___Close_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleUnlockedPopupController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__SpawnRoleUnlockedPopupController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SpawnRoleUnlockedPopupController____c);
  }
  this_00 = TypeInfo__SpawnRoleUnlockedPopupController____c->static_fields->__9__28_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__SpawnRoleUnlockedPopupController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleUnlockedPopupController____c);
    }
    object = TypeInfo__SpawnRoleUnlockedPopupController____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__SpawnRoleUnlockedPopupController____c___Close_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleUnlockedPopupController____c->static_fields->__9__28_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                     &TypeInfo__SpawnRoleUnlockedPopupController____c->static_fields->__9__28_0 >>
                    0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar5 != (MainCameraManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_CamRotateTarget);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pMVar5->fields).maskMode = 0;
    pCVar6 = (pMVar5->fields).mainCamera;
    if (pCVar6 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar6,(pMVar5->fields).cullingMask,(MethodInfo *)0x0);
      bVar7 = (pMVar5->fields).isLogicRendered;
      (pMVar5->fields).blueModeEnabled = 0;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Logic);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pCVar6 = (pMVar5->fields).mainCamera;
      if (bVar7 == 0) {
        if (pCVar6 == (Camera *)0x0) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar6,(MethodInfo *)0x0);
        uVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar1 = uVar1 & ~(1 << (uVar9 & 0x1f));
      }
      else {
        if (pCVar6 == (Camera *)0x0) goto code_?;
        uVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar6,(MethodInfo *)0x0);
        uVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar1 = uVar1 | 1 << (uVar9 & 0x1f);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar6,uVar1,(MethodInfo *)0x0);
      (pMVar5->fields).isLogicRendered = bVar7;
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Color GetColor(MVTeam) */

Color * Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
        SpawnRoleUnlockedPopupController_GetColor
                  (Color *__return_storage_ptr__,SpawnRoleUnlockedPopupController *this,
                  MVTeam__Enum spawnRoleTeam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
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
        pCVar4 = Styles::Styles_GetColor(&CStack_5,ColorStyle__Enum_OffGray,(MethodInfo *)0x0);
      }
      else {
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar4 = Styles::Styles_GetTeamColor(&CStack_5,spawnRoleTeam,0,(MethodInfo *)0x0);
      }
      fVar6 = pCVar4->g;
      fVar7 = pCVar4->b;
      fVar8 = pCVar4->a;
      __return_storage_ptr__->r = pCVar4->r;
      __return_storage_ptr__->g = fVar6;
      __return_storage_ptr__->b = fVar7;
      __return_storage_ptr__->a = fVar8;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pCVar4 = (Color *)(*pcVar9)();
  return pCVar4;
}


/* Void HandleTeamSwitching() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_HandleTeamSwitching
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  iVar1 = (this->fields).team;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
     (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar5 != (MVLocalPlayer *)0x0)) {
    if (iVar1 == (pMVar5->fields)._._Team_k__BackingField) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_01,(this->fields).team,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
        this_00 = (pMVar3->fields).gameStatCounterManager;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 != (MVGameControllerBase *)0x0) &&
            (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
           ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
            (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0)
            , pMVar5 != (MVLocalPlayer *)0x0)))) {
          actorNr = (pMVar5->fields)._._ActorNr_k__BackingField;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
               (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
              (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
             ((pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar4,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0 &&
              (this_00 != (GameStatCounterManager *)0x0)))) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_RemoveTeamScoreOnActorLeave
                      (this_00,actorNr,(pMVar5->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar2 != (MVGameControllerBase *)0x0) &&
                (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
               ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
                (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (pMVar4,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0)))) {
              bVar6 = cRam_? == '\0';
              (pMVar5->fields)._.checkpointWOID = -1;
              if (bVar6) {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
                   (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
                  (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0))
                 && (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                        (pMVar4,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0))
              {
                (pMVar5->fields)._._Team_k__BackingField = (this->fields).team;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(GamePassTier, Boolean, Boolean, Int32) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_Initialize
               (SpawnRoleUnlockedPopupController *this,GamePassTier__Enum unlockedTier,
               bool wasPurchased,bool wasTempUnlocked,int32_t spawnRoleWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_NEW_CLASS_UNLOCKED_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_NEW_CLASS_IS_NOW_UNLOCKED_UNTIL_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  (this->fields).wasPurchased = wasPurchased;
  (this->fields).unlockedTier = (uint8_t)unlockedTier;
  (this->fields).wasTempUnlocked = wasTempUnlocked;
  (this->fields).spawnRoleWoId = spawnRoleWoId;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  bVar5 = cRam_? == '\0';
  (this->fields).bounceEffectStartTime = fVar4;
  if (bVar5) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
      ((pMVar7->fields).worldNetwork != (WorldNetwork *)0x0)) &&
     ((this_00 = (MVWorldObjectClientManager *)
                 (((pMVar7->fields).worldNetwork)->fields)._.worldObjectClientManager,
      this_00 != (MVWorldObjectClientManager *)0x0 &&
      (this_02 = (MVAvatarSpawnRoleCreator *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_00,spawnRoleWoId,(MethodInfo *)0x0),
      this_02 != (MVAvatarSpawnRoleCreator *)0x0)))) {
    bVar8 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if (((this_02->klass->_1).naturalAligment < bVar8) ||
       ((MVAvatarSpawnRoleCreator__Class *)(this_02->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1]
        != TypeInfo__MVAvatarSpawnRoleCreator)) {
      FUN_?(this_02);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pMVar9 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AvatarPrototype
                        (this_02,(MethodInfo *)0x0);
    if (pMVar9 != (MVPreviewAvatar *)0x0) {
      SpawnRoleUnlockedPopupController_SetupPreviewImage
                (this,(pMVar9->fields)._._.gameObject,(MethodInfo *)0x0);
      MVar10 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                         (this_02,(MethodInfo *)0x0);
      pIVar11 = (this->fields).Background;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                     );
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
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar6 != (MVGameControllerBase *)0x0) &&
          (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
         ((this_01 = (pMVar7->fields).teamManager, this_01 != (MVTeamManager *)0x0 &&
          (pLVar12 = MVTeamManager::MVTeamManager_GetTeamList(this_01,(MethodInfo *)0x0),
          pLVar12 != (List_1_MV_WorldObject_MVTeam_ *)0x0)))) {
        if ((pLVar12->fields)._size < 2) {
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          pCVar13 = Styles::Styles_GetColor(&CStack_14,ColorStyle__Enum_OffGray,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          pCVar13 = Styles::Styles_GetTeamColor(&CStack_14,MVar10,0,(MethodInfo *)0x0);
        }
        if (pIVar11 != (Image *)0x0) {
          CStack_14.r = pCVar13->r;
          CStack_14.g = pCVar13->g;
          CStack_14.b = pCVar13->b;
          CStack_14.a = pCVar13->a;
          (*(pIVar11->klass->vtable).set_color.methodPtr)
                    (pIVar11,&CStack_14,(pIVar11->klass->vtable).set_color.method);
          pSVar15 = TM::TM__(StringLiteral_NEW_CLASS_UNLOCKED_,(MethodInfo *)0x0);
          if (wasTempUnlocked != 0) {
            pSVar15 = TM::TM__(StringLiteral_NEW_CLASS_IS_NOW_UNLOCKED_UNTIL_,(MethodInfo *)0x0);
          }
          pTVar16 = (this->fields).titleText;
          if (pTVar16 != (Text *)0x0) {
            (*(pTVar16->klass->vtable).set_text.methodPtr)
                      (pTVar16,pSVar15,(pTVar16->klass->vtable).set_text.method);
            MVar10 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                               (this_02,(MethodInfo *)0x0);
            pCVar17 = (this->fields).continueButtonHandler;
            (this->fields).team = MVar10;
            if (pCVar17 != (ContinueButtonHandler *)0x0) {
              pAVar18 = (pCVar17->fields).OnClick;
              pNVar19 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar19,(Object *)this,
                         MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__,
                         (MethodInfo *)0x0);
              pAVar20 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar18,(Delegate *)pNVar19,(MethodInfo *)0x0);
              pAVar18 = (Action *)0x0;
              if (pAVar20 == (Action *)0x0) {
                (pCVar17->fields).OnClick = (Action *)0x0;
              }
              else {
                pAVar21 = pAVar18;
                if (pAVar20->klass == TypeInfo__System__Action) {
                  pAVar21 = pAVar20;
                }
                if (pAVar21 == (Action *)0x0) {
                  FUN_?();
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                (pCVar17->fields).OnClick = pAVar21;
                pAVar21 = pAVar18;
                if (pAVar20->klass == TypeInfo__System__Action) {
                  pAVar21 = pAVar20;
                }
                if (pAVar21 == (Action *)0x0) {
                  FUN_?();
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar22 = (uint)((ulonglong)&(pCVar17->fields).OnClick >> 0xc);
                uVar23 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                do {
                  uVar24 = *(ulonglong *)(uVar23 * 8 + 0xADDR);
                  puVar25 = (ulonglong *)(uVar23 * 8 + 0xADDR);
                  LOCK();
                  bVar5 = uVar24 == *puVar25;
                  if (bVar5) {
                    *puVar25 = uVar24 | 1L << (uVar22 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
              pCVar17 = (this->fields).backgroundContinueButtonHandler;
              if (pCVar17 != (ContinueButtonHandler *)0x0) {
                pAVar20 = (pCVar17->fields).OnClick;
                pNVar19 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar19,(Object *)this,
                           MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__,
                           (MethodInfo *)0x0);
                pAVar20 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar20,(Delegate *)pNVar19,(MethodInfo *)0x0);
                if (pAVar20 == (Action *)0x0) {
                  (pCVar17->fields).OnClick = (Action *)0x0;
                }
                else {
                  pAVar21 = pAVar18;
                  if (pAVar20->klass == TypeInfo__System__Action) {
                    pAVar21 = pAVar20;
                  }
                  if (pAVar21 == (Action *)0x0) {
                    FUN_?(pAVar20);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  (pCVar17->fields).OnClick = pAVar21;
                  if (pAVar20->klass == TypeInfo__System__Action) {
                    pAVar18 = pAVar20;
                  }
                  if (pAVar18 == (Action *)0x0) {
                    FUN_?(pAVar20);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar22 = (uint)((ulonglong)&(pCVar17->fields).OnClick >> 0xc);
                  uVar23 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                  do {
                    uVar24 = *(ulonglong *)(uVar23 * 8 + 0xADDR);
                    puVar25 = (ulonglong *)(uVar23 * 8 + 0xADDR);
                    LOCK();
                    bVar5 = uVar24 == *puVar25;
                    if (bVar5) {
                      *puVar25 = uVar24 | 1L << (uVar22 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_OnDestroy
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleUnlockedPopupController__Close_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields).spawnRolePreviewer;
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
  method_00 = (MethodInfo *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
  if ((this->fields).awaitingSpawn != 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,method_00);
    if (extraout_RAX == 0) goto code_?;
    this_00 = *(SpawnRolesManager **)(extraout_RAX + 0x88);
    value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(value,this);
    if (this_00 == (SpawnRolesManager *)0x0) goto code_?;
    SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
              (this_00,value,(MethodInfo *)0x0);
  }
  pCVar1 = (this->fields).continueButtonHandler;
  if (pCVar1 != (ContinueButtonHandler *)0x0) {
    pAVar2 = (pCVar1->fields).OnClick;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAVar4 == (Action *)0x0) {
      (pCVar1->fields).OnClick = (Action *)0x0;
    }
    else {
      pAVar5 = pAVar2;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pCVar1->fields).OnClick = pAVar5;
      pAVar5 = pAVar2;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pCVar1->fields).OnClick >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pCVar1 = (this->fields).backgroundContinueButtonHandler;
    if (pCVar1 != (ContinueButtonHandler *)0x0) {
      pAVar4 = (pCVar1->fields).OnClick;
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,(Object *)this,MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__
                 ,(MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)pNVar3,(MethodInfo *)0x0);
      if (pAVar4 == (Action *)0x0) {
        (pCVar1->fields).OnClick = (Action *)0x0;
      }
      else {
        pAVar5 = pAVar2;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar4;
        }
        if (pAVar5 == (Action *)0x0) {
          FUN_?(pAVar4);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pCVar1->fields).OnClick = pAVar5;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar2 = pAVar4;
        }
        if (pAVar2 == (Action *)0x0) {
          FUN_?(pAVar4);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pCVar1->fields).OnClick >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPressedPlay() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_OnPressedPlay
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                 );
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
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 == (MVTeamManager *)0x0)) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar5 = (pMVar3->fields).teams;
  if (pDVar5 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
  goto code_?;
  if (1 < (pDVar5->fields)._count - (pDVar5->fields)._freeCount) {
    method = (MethodInfo *)0x0;
    SpawnRoleUnlockedPopupController_HandleTeamSwitching(this,(MethodInfo *)0x0);
  }
  iVar6 = (this->fields).spawnRoleWoId;
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((extraout_RAX == 0) || (*(longlong *)(extraout_RAX + 200) == 0)) goto code_?;
  cVar7 = FUN_?(iVar6,*(undefined8 *)(*(longlong *)(extraout_RAX + 200) + 0x30));
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimePressPlayController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  player = (MVPlayer *)TypeInfo__FirstTimePressPlayController->static_fields;
  if (*(bool *)&player->klass == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  if (cVar7 == '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<int>);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (this->fields).awaitingSpawn = 1;
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
    if (extraout_RAX_00 != 0) {
      this_00 = *(SpawnRolesManager **)(extraout_RAX_00 + 0x88);
      value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
      FUN_?(value,this);
      if (this_00 != (SpawnRolesManager *)0x0) {
        SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                  (this_00,value,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           ((this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0 &&
            (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_01,(MethodInfo *)0x0), this_02 != (MVLocalPlayer *)0x0)))) {
          MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                    (this_02,(this->fields).spawnRoleWoId,(MethodInfo *)0x0);
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
            pMVar8 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
                                ((MethodInfo *)0x0);
            if ((pMVar8 == (MVGameControllerDesktop *)0x0) ||
               (pIVar9 = (pMVar8->fields).lockCursorManager, pIVar9 == (ILockCursorManager *)0x0))
            goto code_?;
            FUN_?(2,TypeInfo__ILockCursorManager,pIVar9,1);
          }
          return;
        }
      }
    }
    goto code_?;
  }
  SpawnRoleUnlockedPopupController_Close(this,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar10 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar10 != (IPlayModeUI *)0x0) {
      FUN_?(8,TypeInfo__IPlayModeUI,pIVar10,0,unaff_RBX);
      pSVar11 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if ((pSVar11 == (SpawnRoleDataMediator *)0x0) ||
         (pSVar12 = (pSVar11->fields).SpawnRoleModeTypeWrapper,
         pSVar12 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar13 = (pSVar12->fields).spawnRoleType;
      if ((pSVar13 == (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) ||
         (pSVar14 = (pSVar13->fields).subscribableVariable,
         pSVar14 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
      goto code_?;
      if (((pSVar14->fields)._.value & 4) == 0) {
        return;
      }
      pGVar15 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar15 == (GameEventManager *)0x0) ||
         (pGVar16 = (pGVar15->fields).AvatarCommandsPlayMode,
         pGVar16 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
      goto code_?;
      if ((pGVar16->fields).OnEnterPlaymode == (Action *)0x0) {
        return;
      }
      pAVar17 = (pGVar16->fields).OnEnterPlaymode;
      goto code_?;
    }
    goto code_?;
  }
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
    pMVar8 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if ((pMVar8 == (MVGameControllerDesktop *)0x0) ||
       (pIVar9 = (pMVar8->fields).lockCursorManager, pIVar9 == (ILockCursorManager *)0x0))
    goto code_?;
    FUN_?(1,TypeInfo__ILockCursorManager,pIVar9,1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar18 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar18 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar18->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar18 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar18 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar18->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar18 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar18 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar18->fields).gameMode != 4) {
        return;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    cVar7 = FUN_?(1,TypeInfo__IEditModeUI);
    if (cVar7 == '\0') {
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar18 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar18 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar18->fields).gameMode == 4) goto code_?;
  }
  pGVar15 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar15 != (GameEventManager *)0x0) &&
     (pGVar16 = (pGVar15->fields).AvatarCommandsPlayMode,
     pGVar16 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if ((pGVar16->fields).OnSetToSpawnPoint == (Action *)0x0) {
      return;
    }
    pAVar17 = (pGVar16->fields).OnSetToSpawnPoint;
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar17->fields)._._.invoke_impl)
              ((pAVar17->fields)._._.method_code,(pAVar17->fields)._._.method);
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SeeTierReward() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_SeeTierReward
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

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
                  MethodInfo__SpawnRoleUnlockedPopupController____c__DisplayClass22_0___SeeTierReward_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleUnlockedPopupController____c__DisplayClass22_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__SpawnRoleUnlockedPopupController____c__DisplayClass22_0);
  original = (this->fields).TierUnlockedPopupControllerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
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
               MethodInfo__SpawnRoleUnlockedPopupController____c__DisplayClass22_0___SeeTierReward_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (object[1].klass != (Object__Class *)0x0) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                ((TierUnlockedPopupController *)object[1].klass,(uint)(this->fields).unlockedTier,
                 (this->fields).wasPurchased,(this->fields).wasTempUnlocked,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupColor(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_SetupColor
               (SpawnRoleUnlockedPopupController *this,MVTeam__Enum spawnRoleTeam,MethodInfo *method
               )

{
  pIVar1 = (this->fields).Background;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
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
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar3->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    pLVar4 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar4 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      if ((pLVar4->fields)._size < 2) {
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar5 = Styles::Styles_GetColor(&CStack_6,ColorStyle__Enum_OffGray,(MethodInfo *)0x0);
      }
      else {
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar5 = Styles::Styles_GetTeamColor(&CStack_6,spawnRoleTeam,0,(MethodInfo *)0x0);
      }
      CStack_6.r = pCVar5->r;
      CStack_6.g = pCVar5->g;
      CStack_6.b = pCVar5->b;
      CStack_6.a = pCVar5->a;
      if (pIVar1 != (Image *)0x0) {
        (*(pIVar1->klass->vtable).set_color.methodPtr)
                  (pIVar1,&CStack_6,(pIVar1->klass->vtable).set_color.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_SetupPreviewImage
               (SpawnRoleUnlockedPopupController *this,GameObject *spawnRolePreviewObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___TierShopItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SpawnRole);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).spawnRolePreviewer = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).spawnRolePreviewer >> 0xc);
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
  this_01 = (GameObject *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)spawnRolePreviewObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 == (GameObject *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (this_01,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pTVar8 != (Transform *)0x0) {
    fStack_10 = (pQVar9->identityQuaternion).x;
    fStack_11 = (pQVar9->identityQuaternion).y;
    fStack_12 = (pQVar9->identityQuaternion).z;
    fStack_13 = (pQVar9->identityQuaternion).w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar8->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar14,&fStack_10);
    self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    name = StringLiteral_Preview_Root___TierShopItem;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (self,name,(MethodInfo *)0x0);
    if (self != (GameObject *)0x0) {
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (self,(MethodInfo *)0x0);
      pSVar1 = (this->fields).spawnRolePreviewer;
      if (pSVar1 != (SpawnRolePreviewer *)0x0) {
        VStack_16.y = _UNK_?;
        VStack_16.x = _UNK_?;
        VStack_16.z = 0.0;
        VStack_17.z = _UNK_?;
        VStack_17._0_8_ = (ulonglong)_UNK_? << 0x20;
        SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                  (pSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                   CameraClearFlags__Enum_Color,
                   LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,&VStack_17,pTVar8,
                   &VStack_16,StringLiteral_SpawnRole,0,this_01,(MethodInfo *)0x0);
        pSVar1 = (this->fields).spawnRolePreviewer;
        if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
           (this_00 = (this->fields).spawnRolePreviewImage, this_00 != (RawImage *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,(Texture *)(pSVar1->fields).previewTexture,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartEffect() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_StartEffect
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).bounceEffectStartTime = fVar3;
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_StartPlaying
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar1 != (IPlayModeUI *)0x0) {
      FUN_?(8,TypeInfo__IPlayModeUI,pIVar1,0);
      pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if ((pSVar2 == (SpawnRoleDataMediator *)0x0) ||
         (pSVar3 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
         pSVar3 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar4 = (pSVar3->fields).spawnRoleType;
      if ((pSVar4 == (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) ||
         (pSVar5 = (pSVar4->fields).subscribableVariable,
         pSVar5 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
      goto code_?;
      if (((pSVar5->fields)._.value & 4) == 0) {
        return;
      }
      pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar6 == (GameEventManager *)0x0) ||
         (pGVar7 = (pGVar6->fields).AvatarCommandsPlayMode,
         pGVar7 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
      goto code_?;
      if ((pGVar7->fields).OnEnterPlaymode == (Action *)0x0) {
        return;
      }
      pAVar8 = (pGVar7->fields).OnEnterPlaymode;
      goto code_?;
    }
    goto code_?;
  }
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
    pMVar9 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if ((pMVar9 == (MVGameControllerDesktop *)0x0) ||
       (pIVar10 = (pMVar9->fields).lockCursorManager, pIVar10 == (ILockCursorManager *)0x0))
    goto code_?;
    FUN_?(1,TypeInfo__ILockCursorManager,pIVar10,1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar11 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar11->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar11 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar11->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar11 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar11->fields).gameMode != 4) {
        return;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    cVar12 = FUN_?(1,TypeInfo__IEditModeUI);
    if (cVar12 == '\0') {
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar11 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar11->fields).gameMode == 4) goto code_?;
  }
  pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar6 != (GameEventManager *)0x0) &&
     (pGVar7 = (pGVar6->fields).AvatarCommandsPlayMode,
     pGVar7 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if ((pGVar7->fields).OnSetToSpawnPoint == (Action *)0x0) {
      return;
    }
    pAVar8 = (pGVar7->fields).OnSetToSpawnPoint;
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar8->fields)._._.invoke_impl)
              ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Update
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  obj = (this->fields).bounceEffect;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  if (obj != (AnimationCurve *)0x0) {
    pvVar4 = (obj->fields).m_Ptr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar5 = (this->fields).bounceEffectStartTime;
    fVar6 = (this->fields).bounceEffectDuration;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    uVar7 = (*pcRam_?)(pvVar4,(fVar3 - fVar5) / fVar6);
    obj_00 = (this->fields).spawnRoleContentTransform;
    if (obj_00 != (RectTransform *)0x0) {
      uStack_8 = CONCAT44(uVar7,uVar7);
      uStack_9 = _UNK_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (obj_00->fields)._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar4,&uStack_8);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

