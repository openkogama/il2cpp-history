
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::ESWaitForBuildModeAvatar_Enter
               (ESWaitForBuildModeAvatar *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESWaitForBuildModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)esm,method);
  if (extraout_RAX != (longlong *)0x0) {
    bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((*(byte *)(*extraout_RAX + 0x130) < bVar1) ||
       (pMVar2 = (MVPlayer *)(ulonglong)bVar1,
       *(MVLocalPlayerBuilder__Class **)
        (*(longlong *)(*extraout_RAX + 200) + -8 + (longlong)pMVar2 * 8) !=
       TypeInfo__MVLocalPlayerBuilder)) {
      FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar4 = (undefined4)((ulonglong)extraout_RAX[0x21] >> 0x20);
    pMVar5 = TypeInfo__MVLocalPlayerBuilder;
    MVTriggerBox::MVTriggerBox_OnExit
              ((MVTriggerBox *)0x0,pMVar2,(MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
    if (((extraout_RAX_00 != 0) && (*(longlong *)(extraout_RAX_00 + 0x88) != 0)) &&
       (lVar6 = *(longlong *)(*(longlong *)(extraout_RAX_00 + 0x88) + 0x10), lVar6 != 0)) {
      uVar7 = *(undefined4 *)(lVar6 + 0x10);
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,(MethodInfo *)pMVar5);
      if (extraout_RAX_01 != 0) {
        uVar8 = *(undefined4 *)(extraout_RAX_01 + 0x84);
        uVar9 = CONCAT44(uVar4,uVar8);
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,(MethodInfo *)pMVar5);
        pMVar5 = TypeInfo__MVLocalPlayerBuilder;
        if (extraout_RAX_02 != (longlong *)0x0) {
          bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_02 + 0x130) < bVar1) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_02 + 200) + -8 + (ulonglong)bVar1 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_02,TypeInfo__MVLocalPlayerBuilder,
                          TypeInfo__MVLocalPlayerBuilder,extraout_RAX_02,uVar9);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pMVar2 = (MVPlayer *)*extraout_RAX_02;
          bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if (((byte)pMVar2[2].fields.checkpointWOID < bVar1) ||
             (*(MVLocalPlayerBuilder__Class **)
               ((longlong)pMVar2[1].fields.OnCheckpointReached + (ulonglong)bVar1 * 8 + -8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_02,TypeInfo__MVLocalPlayerBuilder,
                          TypeInfo__MVLocalPlayerBuilder,extraout_RAX_02,uVar9);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          extraout_RAX_02[0x21] = CONCAT44((int)((ulonglong)uVar9 >> 0x20),uVar8);
          *(undefined4 *)(extraout_RAX_02 + 0x22) = uVar7;
          (this->fields).defaultBuildModeSpawnRoleReady = 0;
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,(MethodInfo *)pMVar5);
          if (extraout_RAX_03 != 0) {
            pSVar10 = *(SpawnRolesManager **)(extraout_RAX_03 + 0x88);
            pMVar2 = (MVPlayer *)FUN_?(TypeInfo__System__Action<int>);
            FUN_?(pMVar2,this);
            if (pSVar10 != (SpawnRolesManager *)0x0) {
              pMVar11 = (MethodInfo *)0x0;
              SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                        (pSVar10,(Action_1_Int32_ *)pMVar2,(MethodInfo *)0x0);
              MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,pMVar11);
              if (extraout_RAX_04 != (longlong *)0x0) {
                lVar6 = *extraout_RAX_04;
                bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
                   (*(MVLocalPlayerBuilder__Class **)
                     (*(longlong *)(lVar6 + 200) + -8 + (ulonglong)bVar1 * 8) !=
                    TypeInfo__MVLocalPlayerBuilder)) {
                  FUN_?(extraout_RAX_04,TypeInfo__MVLocalPlayerBuilder);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pMVar2 = (MVPlayer *)0x0;
                pMVar5 = TypeInfo__MVLocalPlayerBuilder;
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,(MethodInfo *)pMVar5);
                if ((extraout_RAX_04[0x12] != 0) &&
                   (this_00 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                               (extraout_RAX_04[0x12] + 0x10),
                   this_00 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
                  IVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Int32Enum]::
                          Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                    (this_00,1,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                    );
                  if (this_03 != (MVLocalPlayer *)0x0) {
                    pSVar10 = (this_03->fields)._.spawnRolesManager;
                    if ((pSVar10 != (SpawnRolesManager *)0x0) &&
                       (pSVar13 = (pSVar10->fields).spawnRolesRuntimeData,
                       pSVar13 != (SpawnRolesRuntimeData *)0x0)) {
                      if (IVar12 == (pSVar13->fields).activeSpawnRole) {
                        uVar9 = func_?(&TypeInfo__System__Exception);
                        this_02 = (Exception *)func_?(uVar9);
                        message = (String *)
                                  func_?(&
                                                  StringLiteral_Trying_to_set_active_spawn_role_);
                        mscorlib.dll::System::Exception::Exception__ctor_1
                                  (this_02,message,(MethodInfo *)0x0);
                        uVar9 = func_?(&
                                                  MethodInfo__MVLocalPlayer__SetActiveSpawnRole_int_
                                                  );
                        FUN_?(this_02,uVar9);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      MVLocalPlayer::MVLocalPlayer_SuspendCurrentSpawnRole
                                (this_03,(MethodInfo *)0x0);
                      pMVar14 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                          ((MethodInfo *)0x0);
                      if (pMVar14 != (MVNetworkGame_OperationRequests *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                       );
                          LOCK();
                          UNLOCK();
                          FUN_?(&
                                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                       );
                          LOCK();
                          UNLOCK();
                          FUN_?(&
                                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
                          LOCK();
                          UNLOCK();
                          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                                  FUN_?(
                                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                               );
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                        ::Object]::Dictionary_2_System_Byte_System_Object___ctor
                                  (this_01,
                                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                  );
                        value = (Object *)FUN_?(uRam_?,&stack0x00000010);
                        if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                          pMVar11 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                    ->klass->rgctx_data[0x22].method;
                          uVar9 = CONCAT71((int7)((ulonglong)pMVar11 >> 8),0xc1);
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Byte,System::Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                    (this_01,0xc1,value,
                                     (InsertionBehavior__Enum)
                                     CONCAT71((int7)((ulonglong)lVar6 >> 8),2),pMVar11);
                          pPVar15 = (pMVar14->fields).peer;
                          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                                       field_0x1c == 0) {
                            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                          }
                          if (pPVar15 != (PhotonPeer *)0x0) {
                            (*(pPVar15->klass->vtable).SendOperation.methodPtr)
                                      (pPVar15,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x6f),this_01,
                                       TypeInfo__ExitGames__Client__Photon__SendOptions->
                                       static_fields->SendReliable,
                                       (pPVar15->klass->vtable).SendOperation.method);
                            return;
                          }
                        }
                      }
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
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::ESWaitForBuildModeAvatar_Execute
               (ESWaitForBuildModeAvatar *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).defaultBuildModeSpawnRoleReady != 0) {
    auStackX_8[0] = 0x2f;
    value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_8);
    if (e == (EditorStateMachine *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::ESWaitForBuildModeAvatar_Exit
               (ESWaitForBuildModeAvatar *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESWaitForBuildModeAvatar____c___Exit_b__4_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESWaitForBuildModeAvatar____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_coints__Probably_do_this_di);
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
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
     (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
     pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
    if ((pGVar4->fields).OnSetToEditMode != (Action *)0x0) {
      (*(((pGVar4->fields).OnSetToEditMode)->fields)._._.invoke_impl)();
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar5 != (MVWorldObjectClientManager *)0x0) &&
       (this_00 = (pMVar5->fields)._MoveableController_k__BackingField,
       this_00 != (MoveableController *)0x0)) {
      MoveableController::MoveableController_ResetMoveables(this_00,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar5 != (MVWorldObjectClientManager *)0x0) &&
         (pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                              (pMVar5,(MethodInfo *)0x0), pMVar6 != (MVGroup *)0x0)) {
        (*(pMVar6->klass->vtable).PlayModeInitialize.methodPtr)(pMVar6);
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
          pMVar7 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0)
          ;
          if ((pMVar7 == (MVGameControllerDesktop *)0x0) ||
             ((pMVar7->fields).lockCursorManager == (ILockCursorManager *)0x0)) goto DAT_?;
          FUN_?();
        }
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar8 != (MainCameraManager *)0x0) {
          if ((pMVar8->fields).maskMode != 0) {
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (pMVar8 == (MainCameraManager *)0x0) goto DAT_?;
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_CamRotateTarget);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            (pMVar8->fields).maskMode = 0;
            this_01 = (pMVar8->fields).mainCamera;
            if (this_01 == (Camera *)0x0) goto DAT_?;
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                      (this_01,(pMVar8->fields).cullingMask,(MethodInfo *)0x0);
            (pMVar8->fields).blueModeEnabled = 0;
            MainCameraManager::MainCameraManager_RenderLogic
                      (pMVar8,(pMVar8->fields).isLogicRendered,(MethodInfo *)0x0);
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
             (this_02 = (pMVar2->fields)._GameCoinManager_k__BackingField,
             this_02 != (MVGameCoinManager *)0x0)) {
            bVar9 = MVGameCoinManager::MVGameCoinManager_get_BoostEnabled
                               (this_02,(MethodInfo *)0x0);
            if (bVar9 != 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_Game_coints__Probably_do_this_di,(MethodInfo *)0x0)
              ;
            }
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar11 = func_?(&UNK_?);
              FUN_?(uVar11,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcRam_? = pcVar10;
            (*pcRam_?)(1);
            if (esm != (EditorStateMachine *)0x0) {
              pGVar12 = (esm->fields).gameObject;
              if (*(int *)&(TypeInfo__ESWaitForBuildModeAvatar____c->_1).field_0x1c == 0) {
                FUN_?();
              }
              this_04 = TypeInfo__ESWaitForBuildModeAvatar____c->static_fields->__9__4_0;
              if (this_04 == (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
                if (*(int *)&(TypeInfo__ESWaitForBuildModeAvatar____c->_1).field_0x1c == 0) {
                  FUN_?();
                }
                object = TypeInfo__ESWaitForBuildModeAvatar____c->static_fields->__9;
                this_04 = (ExecuteEvents_EventFunction_1_IEditModeController_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)object,
                           MethodInfo__ESWaitForBuildModeAvatar____c___Exit_b__4_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__ESWaitForBuildModeAvatar____c->static_fields->__9__4_0 = this_04;
                if (iRam_? != 0) {
                  uVar13 = (uint)((ulonglong)
                                  &TypeInfo__ESWaitForBuildModeAvatar____c->static_fields->__9__4_0
                                 >> 0xc);
                  puVar14 = (ulonglong *)((ulonglong)((uVar13 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar15 = *puVar14;
                    LOCK();
                    uVar16 = *puVar14;
                    if (uVar15 == uVar16) {
                      *puVar14 = uVar15 | 1L << (uVar13 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar15 != uVar16);
                }
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pMVar17 = 
              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
              ;
              if ((
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                             );
                LOCK();
                UNLOCK();
                if ((pMVar17->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  FUN_?(pMVar17);
                }
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_GetEventChain
                        (pGVar12,(IList_1_UnityEngine_Transform_ *)
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                                 s_InternalTransformList,(MethodInfo *)0x0);
              pLVar18 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar18 != (List_1_UnityEngine_Transform_ *)0x0) {
                lVar19 = (longlong)(pLVar18->fields)._size;
                uVar13 = 0;
                if (0 < lVar19) {
                  lVar20 = 0;
                  lVar21 = 0x20;
                  do {
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    pLVar18 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList;
                    if (pLVar18 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                    if ((uint)(pLVar18->fields)._size <= uVar13) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    pTVar22 = (pLVar18->fields)._items;
                    if (pTVar22 == (Transform__Array *)0x0) goto code_?;
                    if ((uint)pTVar22->max_length <= uVar13) {
                      FUN_?();
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    this_03 = *(Component **)((longlong)pTVar22->vector + lVar21 + -0x20);
                    if (this_03 == (Component *)0x0) goto code_?;
                    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject(this_03,(MethodInfo *)0x0);
                    bVar9 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                             ExecuteEvents_Execute_18
                                       (pGVar12,(BaseEventData *)0x0,
                                        (ExecuteEvents_EventFunction_1_System_Object_ *)this_04,
                                        (pMVar17->field7_0x38).rgctx_data[1].method);
                    if (bVar9 != 0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_03,(MethodInfo *)0x0);
                      return;
                    }
                    uVar13 = uVar13 + 1;
                    lVar20 = lVar20 + 1;
                    lVar21 = lVar21 + 8;
                  } while (lVar20 < lVar19);
                }
                return;
              }
code_?:
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
DAT_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SpawnRolesManagerOnOnSpawnRoleActivated(Int32) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::
     ESWaitForBuildModeAvatar_SpawnRolesManagerOnOnSpawnRoleActivated
               (ESWaitForBuildModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  pMVar1 = (MVPlayer *)CONCAT44(in_register_00000014,spawnRoleId);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESWaitForBuildModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar1,method);
  if (extraout_RAX != 0) {
    this_00 = *(SpawnRolesManager **)(extraout_RAX + 0x88);
    pMVar1 = (MVPlayer *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(pMVar1,this);
    if (this_00 != (SpawnRolesManager *)0x0) {
      method_00 = (MethodInfo *)0x0;
      SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                (this_00,(Action_1_Int32_ *)pMVar1,(MethodInfo *)0x0);
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar1,method_00);
      if (extraout_RAX_00 != (longlong *)0x0) {
        bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
        if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar2) ||
           (*(MVLocalPlayerBuilder__Class **)
             (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (ulonglong)bVar2 * 8) !=
            TypeInfo__MVLocalPlayerBuilder)) {
          FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((extraout_RAX_00[0x12] != 0) &&
           (this_01 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                       (extraout_RAX_00[0x12] + 0x10),
           this_01 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
          IVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                            (this_01,1,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                            );
          if (IVar4 == spawnRoleId) {
            (this->fields).defaultBuildModeSpawnRoleReady = 1;
            return;
          }
          uVar5 = func_?(&TypeInfo__System__Exception);
          this_02 = (Exception *)func_?(uVar5);
          message = (String *)func_?(&StringLiteral_Unexpected_spawnrole);
          mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
          uVar5 = func_?(&
                                      MethodInfo__ESWaitForBuildModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_
                                     );
          FUN_?(this_02,uVar5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

