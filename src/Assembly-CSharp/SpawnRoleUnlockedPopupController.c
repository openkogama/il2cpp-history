
/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_AwaitSpawnThenClose
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&MethodInfo__SpawnRoleUnlockedPopupController__Close_int_);
    cRam_? = '\x01';
  }
  (this->fields).awaitingSpawn = 1;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    this_00 = (pMVar1->fields)._.spawnRolesManager;
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,MethodInfo__SpawnRoleUnlockedPopupController__Close_int_,
                 (MethodInfo *)0x0);
      if (this_00 != (SpawnRolesManager *)0x0) {
        SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                  (this_00,(Action_1_Int32_ *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Close(Int32) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Close
               (SpawnRoleUnlockedPopupController *this,int32_t spawnRoleID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__SpawnRoleUnlockedPopupController____c___Close_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleUnlockedPopupController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__SpawnRoleUnlockedPopupController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SpawnRoleUnlockedPopupController____c);
  }
  callbackFunction = TypeInfo__SpawnRoleUnlockedPopupController____c->static_fields->__9__28_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__SpawnRoleUnlockedPopupController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleUnlockedPopupController____c);
    }
    object = TypeInfo__SpawnRoleUnlockedPopupController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__SpawnRoleUnlockedPopupController____c___Close_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleUnlockedPopupController____c->static_fields->__9__28_0 = callbackFunction;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    (in_stack_2->fields).maskMode = in_stack_3;
    if (in_stack_3 == 0) {
      pCVar4 = (in_stack_2->fields).mainCamera;
      if (pCVar4 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (pCVar4,(in_stack_2->fields).cullingMask,(MethodInfo *)0x0);
        (in_stack_2->fields).blueModeEnabled = 0;
        MainCameraManager::MainCameraManager_RenderLogic
                  (in_stack_2,(in_stack_2->fields).isLogicRendered,(MethodInfo *)0x0);
        return;
      }
    }
    else if (in_stack_3 == 1) {
      pCVar4 = (in_stack_2->fields).mainCamera;
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
      if (pCVar4 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (pCVar4,1 << ((byte)iVar5 & 0x1f),(MethodInfo *)0x0);
        (in_stack_2->fields).blueModeEnabled = 1;
        return;
      }
    }
    else {
      if (in_stack_3 != 2) {
        return;
      }
      if ((in_stack_2->fields).mainCamera != (Camera *)0x0) {
        uStack6 = 0;
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?();
        }
        (*pcRam_?)();
        return;
      }
    }
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Color GetColor(MVTeam) */

Color * Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
        SpawnRoleUnlockedPopupController_GetColor
                  (Color *__return_storage_ptr__,SpawnRoleUnlockedPopupController *this,
                  MVTeam__Enum spawnRoleTeam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    pLVar2 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      if (1 < (pLVar2->fields)._size) {
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar3 = Styles::Styles_GetTeamColor
                           ((Color *)&stack0xffffffec,spawnRoleTeam,0,(MethodInfo *)0x0);
        fVar4 = pCVar3->g;
        fVar5 = pCVar3->b;
        fVar6 = pCVar3->a;
        __return_storage_ptr__->r = pCVar3->r;
        __return_storage_ptr__->g = fVar4;
        __return_storage_ptr__->b = fVar5;
        __return_storage_ptr__->a = fVar6;
        return __return_storage_ptr__;
      }
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar3 = Styles::Styles_GetColor
                         ((Color *)&stack0xffffffec,ColorStyle__Enum_OffGray,(MethodInfo *)0x0);
      fVar4 = pCVar3->g;
      fVar5 = pCVar3->b;
      fVar6 = pCVar3->a;
      __return_storage_ptr__->r = pCVar3->r;
      __return_storage_ptr__->g = fVar4;
      __return_storage_ptr__->b = fVar5;
      __return_storage_ptr__->a = fVar6;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar7)();
  return pCVar3;
}


/* Void HandleTeamSwitching() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_HandleTeamSwitching
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  iVar1 = (this->fields).team;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    if (iVar1 == (pMVar3->fields)._._Team_k__BackingField) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_01,(this->fields).team,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        this_00 = (pMVar2->fields).gameStatCounterManager;
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar3 != (MVLocalPlayer *)0x0)) {
          actorNr = (pMVar3->fields)._._ActorNr_k__BackingField;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 != (MVNetworkGame *)0x0) &&
             ((pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
              pMVar3 != (MVLocalPlayer *)0x0 && (this_00 != (GameStatCounterManager *)0x0)))) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_RemoveTeamScoreOnActorLeave
                      (this_00,actorNr,(pMVar3->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar2 != (MVNetworkGame *)0x0) &&
               (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
               pMVar3 != (MVLocalPlayer *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Object]::
              Stack_1_T_Enumerator_System_Object__Dispose
                        ((Stack_1_T_Enumerator_System_Object_ *)pMVar3,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar2 != (MVNetworkGame *)0x0) &&
                 (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
                 pMVar3 != (MVLocalPlayer *)0x0)) {
                (pMVar3->fields)._._Team_k__BackingField = (this->fields).team;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(GamePassTier, Boolean, Boolean, Int32) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_Initialize
               (SpawnRoleUnlockedPopupController *this,GamePassTier__Enum unlockedTier,
               bool wasPurchased,bool wasTempUnlocked,int32_t spawnRoleWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    func_?(&MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__);
    func_?(&StringLiteral_NEW_CLASS_UNLOCKED_);
    func_?(&StringLiteral_NEW_CLASS_IS_NOW_UNLOCKED_UNTIL_);
    cRam_? = '\x01';
  }
  (this->fields).unlockedTier = (undefined1)unlockedTier;
  (this->fields).wasPurchased = wasPurchased;
  (this->fields).wasTempUnlocked = wasTempUnlocked;
  (this->fields).spawnRoleWoId = spawnRoleWoId;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).bounceEffectStartTime = fVar1;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
  }
  else {
    this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar2,(MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_02 = (MVAvatarSpawnRoleCreator *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_01,spawnRoleWoId,(MethodInfo *)0x0);
    if (this_02 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    if (((this_02->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth) ||
       ((MVAvatarSpawnRoleCreator__Class *)
        (this_02->klass->_1).typeHierarchy
        [(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator)) goto code_?;
    spawnRolePreviewObject =
         MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                   (this_02,(MethodInfo *)0x0);
    SpawnRoleUnlockedPopupController_SetupPreviewImage
              (this,spawnRolePreviewObject,(MethodInfo *)0x0);
    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(this_02,(MethodInfo *)0x0);
    pIVar3 = (this->fields).Background;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar2->fields).teamManager, this_00 == (MVTeamManager *)0x0))
    goto code_?;
    pLVar4 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar4 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
    if ((pLVar4->fields)._size < 2) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      Styles::Styles_GetColor((Color *)&stack0xffffffdc,ColorStyle__Enum_OffGray,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      Styles::Styles_GetTeamColor((Color *)&stack0xffffffec,MVTeam__Enum_Blue,0,(MethodInfo *)0x0);
    }
    if (pIVar3 == (Image *)0x0) goto code_?;
    pIVar5 = pIVar3->klass;
    pMVar6 = (pIVar5->vtable).set_color.method;
    (*(pIVar5->vtable).set_color.methodPtr)();
    TM::TM__(StringLiteral_NEW_CLASS_UNLOCKED_,(MethodInfo *)0x0);
    wasTempUnlocked = (bool)pMVar6;
    if (wasTempUnlocked != 0) {
      TM::TM__(StringLiteral_NEW_CLASS_IS_NOW_UNLOCKED_UNTIL_,(MethodInfo *)0x0);
    }
    pTVar7 = (this->fields).titleText;
    if (pTVar7 == (Text *)0x0) goto code_?;
    (*(pTVar7->klass->vtable).set_text.methodPtr)();
    MVar8 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(this_02,(MethodInfo *)0x0);
    pCVar9 = (this->fields).continueButtonHandler;
    (this->fields).team = MVar8;
    if (pCVar9 == (ContinueButtonHandler *)0x0) goto code_?;
    pNVar10 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar10 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar10,(Object *)this,MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__,
               (MethodInfo *)0x0);
    pAVar11 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)0x0,(Delegate *)pNVar10,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      (pCVar9->fields).OnClick = (Action *)0x0;
code_?:
      func_?();
      pCVar9 = (this->fields).backgroundContinueButtonHandler;
      if (pCVar9 != (ContinueButtonHandler *)0x0) {
        pNVar10 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        if (pNVar10 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar10,(Object *)this,
                     MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__,(MethodInfo *)0x0
                    );
          pAVar11 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)0x0,(Delegate *)pNVar10,(MethodInfo *)0x0);
          if (pAVar11 == (Action *)0x0) {
            (pCVar9->fields).OnClick = (Action *)0x0;
            func_?();
            return;
          }
          pAVar12 = (Action *)0x0;
          if (pAVar11->klass == TypeInfo__System__Action) {
            pAVar12 = pAVar11;
          }
          if (pAVar12 != (Action *)0x0) {
            (pCVar9->fields).OnClick = pAVar12;
            pAVar12 = (Action *)0x0;
            if (pAVar11->klass == TypeInfo__System__Action) {
              pAVar12 = pAVar11;
            }
            if (pAVar12 != (Action *)0x0) {
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    pAVar12 = (Action *)0x0;
    if (pAVar11->klass == TypeInfo__System__Action) {
      pAVar12 = pAVar11;
    }
    if (pAVar12 != (Action *)0x0) {
      (pCVar9->fields).OnClick = pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 != (Action *)0x0) goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_OnDestroy
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SpawnRoleUnlockedPopupController__Close_int_);
    func_?(&MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__);
    cRam_? = '\x01';
  }
  obj = (this->fields).spawnRolePreviewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  if ((this->fields).awaitingSpawn == 0) {
code_?:
    pCVar1 = (this->fields).continueButtonHandler;
    if (pCVar1 != (ContinueButtonHandler *)0x0) {
      pAVar2 = (pCVar1->fields).OnClick;
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)this,
                   MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__,(MethodInfo *)0x0);
        pAVar2 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
        if (pAVar2 == (Action *)0x0) {
          (pCVar1->fields).OnClick = (Action *)0x0;
        }
        else {
          pAVar4 = (Action *)0x0;
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAVar4 = pAVar2;
          }
          if (pAVar4 == (Action *)0x0) goto code_?;
          (pCVar1->fields).OnClick = pAVar4;
          pAVar4 = (Action *)0x0;
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAVar4 = pAVar2;
          }
          if (pAVar4 == (Action *)0x0) goto code_?;
        }
        func_?();
        pCVar1 = (this->fields).backgroundContinueButtonHandler;
        if (pCVar1 != (ContinueButtonHandler *)0x0) {
          pAVar2 = (pCVar1->fields).OnClick;
          pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
          if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar3,(Object *)this,
                       MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__,
                       (MethodInfo *)0x0);
            pAVar2 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
            if (pAVar2 == (Action *)0x0) {
              (pCVar1->fields).OnClick = (Action *)0x0;
              func_?();
              return;
            }
            pAVar4 = (Action *)0x0;
            if (pAVar2->klass == TypeInfo__System__Action) {
              pAVar4 = pAVar2;
            }
            if (pAVar4 != (Action *)0x0) {
              (pCVar1->fields).OnClick = pAVar4;
              pAVar4 = (Action *)0x0;
              if (pAVar2->klass == TypeInfo__System__Action) {
                pAVar4 = pAVar2;
              }
              if (pAVar4 != (Action *)0x0) {
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  else {
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar5 != (MVLocalPlayer *)0x0) {
      this_00 = (pMVar5->fields)._.spawnRolesManager;
      this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
      if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_01,(Object *)this,MethodInfo__SpawnRoleUnlockedPopupController__Close_int_,
                   (MethodInfo *)0x0);
        if (this_00 != (SpawnRolesManager *)0x0) {
          SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                    (this_00,(Action_1_Int32_ *)this_01,(MethodInfo *)0x0);
          goto code_?;
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


/* Void OnPressedPlay() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_OnPressedPlay
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0))
  goto code_?;
  iVar2 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
  if (1 < iVar2) {
    iVar3 = (this->fields).team;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
    if (iVar3 != (pMVar4->fields)._._Team_k__BackingField) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_03,(this->fields).team,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      this_01 = (pMVar1->fields).gameStatCounterManager;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
      iVar2 = (pMVar4->fields)._._ActorNr_k__BackingField;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if ((pMVar4 == (MVLocalPlayer *)0x0) || (this_01 == (GameStatCounterManager *)0x0))
      goto code_?;
      MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveTeamScoreOnActorLeave
                (this_01,iVar2,(pMVar4->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Object]::
      Stack_1_T_Enumerator_System_Object__Dispose
                ((Stack_1_T_Enumerator_System_Object_ *)pMVar4,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
      (pMVar4->fields)._._Team_k__BackingField = (this->fields).team;
    }
  }
  iVar2 = (this->fields).spawnRoleWoId;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar4 != (MVLocalPlayer *)0x0) &&
     (pSVar5 = (pMVar4->fields).spawnRoleDataMediator, pSVar5 != (SpawnRoleDataMediator *)0x0)) {
    bVar6 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Equality
                      (iVar2,(SpawnRoleVariable_1_System_Int32_ *)(pSVar5->fields).woId,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                      );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
      FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                ((MethodInfo *)0x0);
    }
    if (bVar6 == 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      (this->fields).awaitingSpawn = 1;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar4 != (MVLocalPlayer *)0x0) {
        this_02 = (pMVar4->fields)._.spawnRolesManager;
        this_04 = (UnityAction_1_System_Int32Enum_ *)func_?();
        if (this_04 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_04,(Object *)this,MethodInfo__SpawnRoleUnlockedPopupController__Close_int_
                     ,(MethodInfo *)0x0);
          if (this_02 != (SpawnRolesManager *)0x0) {
            SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                      (this_02,(Action_1_Int32_ *)this_04,(MethodInfo *)0x0);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar1 != (MVNetworkGame *)0x0) {
              pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
              if (pMVar4 != (MVLocalPlayer *)0x0) {
                MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                          (pMVar4,(this->fields).spawnRoleWoId,(MethodInfo *)0x0);
                MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&
                        MethodInfo__SpawnRoleUnlockedPopupController____c___Close_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__SpawnRoleUnlockedPopupController____c);
        cRam_? = '\x01';
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleUnlockedPopupController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__SpawnRoleUnlockedPopupController____c->static_fields->__9__28_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__SpawnRoleUnlockedPopupController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__SpawnRoleUnlockedPopupController____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__SpawnRoleUnlockedPopupController____c___Close_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleUnlockedPopupController____c->static_fields->__9__28_0 = callbackFunction
        ;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      this_05 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_05 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_CamMaskMode
                  (this_05,MaskMode__Enum_Default,(MethodInfo *)0x0);
        SpawnRoleUnlockedPopupController_StartPlaying(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SeeTierReward() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_SeeTierReward
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SpawnRoleUnlockedPopupController____c__DisplayClass22_0___SeeTierReward_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleUnlockedPopupController____c__DisplayClass22_0);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__SpawnRoleUnlockedPopupController____c__DisplayClass22_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).TierUnlockedPopupControllerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__SpawnRoleUnlockedPopupController____c__DisplayClass22_0___SeeTierReward_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (value[1].klass != (Object__Class *)0x0) {
        TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                  ((TierUnlockedPopupController *)value[1].klass,(uint)(this->fields).unlockedTier,
                   (this->fields).wasPurchased,(this->fields).wasTempUnlocked,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar3 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      if ((pLVar3->fields)._size < 2) {
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar4 = Styles::Styles_GetColor
                           ((Color *)&stack0xffffffdc,ColorStyle__Enum_OffGray,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar4 = Styles::Styles_GetTeamColor(&CStack_5,spawnRoleTeam,0,(MethodInfo *)0x0);
      }
      if (pIVar1 != (Image *)0x0) {
        (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1,pCVar4->r,pCVar4->g,pCVar4->b);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_SetupPreviewImage
               (SpawnRoleUnlockedPopupController *this,GameObject *spawnRolePreviewObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&
                    SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_Root___TierShopItem);
    func_?(&StringLiteral_SpawnRole);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  (this->fields).spawnRolePreviewer = pSVar1;
  func_?(&(this->fields).spawnRolePreviewer,pSVar1);
  this_01 = (GameObject *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)spawnRolePreviewObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
      this_02 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_02,(MethodInfo *)0x0);
        pSVar1 = (this->fields).spawnRolePreviewer;
        if (pSVar1 != (SpawnRolePreviewer *)0x0) {
          cameraOffset.z = -4.5;
          cameraOffset.x = 0.0;
          cameraOffset.y = 1.0;
          SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                    (pSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                     CameraClearFlags__Enum_Color,
                     LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,pTVar2,
                     (Vector3)ZEXT812(0x43fa000043fa0000),StringLiteral_SpawnRole,0,this_01,
                     (MethodInfo *)0x0);
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
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartEffect() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_StartEffect
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).bounceEffectStartTime = fVar1;
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_StartPlaying
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      this = (SpawnRoleUnlockedPopupController *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      if ((pGVar1->fields).gameMode == 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar1 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar1->fields).gameMode != 0) {
          return;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
            (IEditModeUI *)0x0) goto code_?;
        cVar2 = func_?();
        if (cVar2 == '\0') {
          return;
        }
      }
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar3 != (GameEventManager *)0x0) &&
         (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode,
         pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
        RewardedInterstitialAd__RegisterAdEvents_m__1
                  ((RewardedInterstitialAd *)pGVar4,(Object *)0x0,unaff_retaddr,(MethodInfo *)this);
        return;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      func_?(4);
      pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar5 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (pSVar5->fields).SpawnRoleModeTypeWrapper,
         this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
        bVar6 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          return;
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar3 != (GameEventManager *)0x0) &&
           (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode,
           pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
          RewardedInterstitialAd__RegisterAdEvents_m__2
                    ((RewardedInterstitialAd *)pGVar4,(Object *)0x0,unaff_retaddr,(MethodInfo *)this
                    );
          return;
        }
      }
    }
  }
code_?:
  uVar7 = func_?(&stack0xfffffff4);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Update
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  this_00 = (this->fields).bounceEffect;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,(fVar1 - (this->fields).bounceEffectStartTime) /
                               (this->fields).bounceEffectDuration,(MethodInfo *)0x0);
    this_01 = (Transform *)(this->fields).spawnRoleContentTransform;
    if (this_01 != (Transform *)0x0) {
      value.y = fVar1;
      value.x = fVar1;
      value.z = 1.0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

