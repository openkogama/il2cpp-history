
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Enter
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESCubeEdit___Enter_b__7_0_IHandleCubeModelEdit__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IHandleCubeModelEdit>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ConstrainVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UIItems);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ESCubeEdit_must_not_be_entered_w);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Handle_if_default_material_is_no);
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
      (this_00 = (pMVar2->fields)._MaterialRepository_k__BackingField,
      e != (EditorStateMachine *)0x0)) &&
     (((pCVar3 = (e->fields).cubeModelingStateMachine, pCVar3 != (CubeModelingStateMachine *)0x0 &&
       (materialId = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (pCVar3,(MethodInfo *)0x0), this_00 != (MVMaterialRepository *)0x0))
      && (this_02 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              (this_00,materialId,(MethodInfo *)0x0), this_02 != (MVMaterial *)0x0))
     )) {
    bVar4 = MVMaterial::MVMaterial_get_IsAvailable(this_02,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Handle_if_default_material_is_no,(MethodInfo *)0x0);
      pCVar3 = (e->fields).cubeModelingStateMachine;
      if (pCVar3 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (pCVar3,0x15,(MethodInfo *)0x0);
    }
    (this->fields).exiting = 0;
    pMVar5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar5 == (MVWorldObjectClient *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_ESCubeEdit_must_not_be_entered_w,(MethodInfo *)0x0);
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      return;
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
       (pGVar6 = (pMVar2->fields).GameEventManager, pGVar6 != (GameEventManager *)0x0)) {
      pGVar7 = (pGVar6->fields).AvatarCommandsBuildMode;
      iVar8 = (this->fields)._.stateType;
      pMVar5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObjectClient *)0x0) {
        iVar9 = (pMVar5->fields)._.id;
        lVar10 = FUN_?();
        *(int32_t *)(lVar10 + 0x10) = iVar9;
        if (pGVar7 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
          if ((pGVar7->fields).OnEnterBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
            pAVar11 = (pGVar7->fields).OnEnterBuildStateEvent;
            (*(pAVar11->fields)._._.invoke_impl)((pAVar11->fields)._._.method_code,iVar8,lVar10);
          }
          DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
          pGVar12 = (e->fields).gameObject;
          this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_03,(Object *)this,
                     MethodInfo__ESCubeEdit___Enter_b__7_0_IHandleCubeModelEdit__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar12,(BaseEventData *)0x0,this_03,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IHandleCubeModelEdit>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>_
                    );
          pWVar13 = MVWorldObjectClientManager::
                    MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
          bVar14 = iRam_? != 0;
          (this->fields)._.tintedWo = pWVar13;
          if (bVar14) {
            uVar15 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
            uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
            do {
              uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
              puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
              LOCK();
              bVar14 = uVar17 == *puVar18;
              if (bVar14) {
                *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
          pMVar5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0)
          ;
          if (pMVar5 == (MVWorldObjectClient *)0x0) {
            iVar8 = -1;
          }
          else {
            bVar19 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
            if (((pMVar5->klass->_1).naturalAligment < bVar19) ||
               ((MVCubeModelBase__Class *)(pMVar5->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1]
                != TypeInfo__MVCubeModelBase)) {
              FUN_?(pMVar5);
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            iVar8 = (pMVar5->fields)._.id;
          }
          (this->fields).targetCubeModelId = iVar8;
          pSVar21 = (e->fields).selectionController;
          if (pSVar21 != (SelectionController *)0x0) {
            SelectionController::SelectionController_DeSelectAll(pSVar21,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (((this->fields).targetCubeModelId != -1) &&
               (pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
               pMVar22 != (MVWorldObjectClientManager *)0x0)) {
              pMVar23 = (MVCubeModelBase *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                  (pMVar22,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
              pMVar24 = (MVCubeModelBase *)0x0;
              pMVar25 = pMVar24;
              if (pMVar23 != (MVCubeModelBase *)0x0) {
                bVar19 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
                if (((pMVar23->klass->_1).naturalAligment < bVar19) ||
                   (pMVar25 = pMVar23,
                   (MVCubeModelBase__Class *)
                   (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1] !=
                   TypeInfo__MVCubeModelBase)) {
                  FUN_?(pMVar23);
                  pcVar20 = (code *)swi(3);
                  (*pcVar20)();
                  return;
                }
              }
              if ((pMVar25 != (MVCubeModelBase *)0x0) &&
                 (pFVar26 = (pMVar25->fields)._ModelingConstraintBuilder_k__BackingField,
                 pFVar26 != (Func_1_IModelingConstraint_ *)0x0)) {
                pIVar27 = (IModelingConstraint *)
                          (*(pFVar26->fields)._._.invoke_impl)
                                    ((pFVar26->fields)._._.method_code,(pFVar26->fields)._._.method)
                ;
                bVar14 = iRam_? != 0;
                (this->fields).constraint = pIVar27;
                if (bVar14) {
                  uVar15 = (uint)((ulonglong)&(this->fields).constraint >> 0xc);
                  uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
                  do {
                    uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
                    puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
                    LOCK();
                    bVar14 = uVar17 == *puVar18;
                    if (bVar14) {
                      *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar14);
                }
                pGVar12 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
                name = StringLiteral_ConstrainVisualizer;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_Internal_CreateGameObject(pGVar12,name,(MethodInfo *)0x0);
                if (pGVar12 != (GameObject *)0x0) {
                  pCVar28 = (ConstraintVisualizer *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (pGVar12,
                                       ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                                      );
                  bVar14 = iRam_? != 0;
                  (this->fields).constraintVisualizer = pCVar28;
                  if (bVar14) {
                    uVar15 = (uint)((ulonglong)&(this->fields).constraintVisualizer >> 0xc);
                    uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
                    do {
                      uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
                      puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
                      LOCK();
                      bVar14 = uVar17 == *puVar18;
                      if (bVar14) {
                        *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar14);
                  }
                  pCVar28 = (this->fields).constraintVisualizer;
                  if (cRam_? == '\0') {
                    FUN_?();
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar25 = pMVar24;
                  if ((this->fields).targetCubeModelId != -1) {
                    pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
                    ;
                    if (pMVar22 == (MVWorldObjectClientManager *)0x0) goto code_?;
                    pMVar23 = (MVCubeModelBase *)
                              MVWorldObjectClientManager::
                              MVWorldObjectClientManager_GetWorldObjectClient
                                        (pMVar22,(this->fields).targetCubeModelId,(MethodInfo *)0x0)
                    ;
                    if (pMVar23 != (MVCubeModelBase *)0x0) {
                      bVar19 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
                      if (((pMVar23->klass->_1).naturalAligment < bVar19) ||
                         (pMVar25 = pMVar23,
                         (MVCubeModelBase__Class *)
                         (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1] !=
                         TypeInfo__MVCubeModelBase)) {
                        FUN_?(pMVar23);
                        pcVar20 = (code *)swi(3);
                        (*pcVar20)();
                        return;
                      }
                    }
                  }
                  if (pCVar28 != (ConstraintVisualizer *)0x0) {
                    ConstraintVisualizer::ConstraintVisualizer_Init
                              (pCVar28,pMVar25,(this->fields).constraint,StringLiteral_UIItems,
                               (MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?();
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (((this->fields).targetCubeModelId != -1) &&
                       (pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                            ((MethodInfo *)0x0),
                       pMVar22 != (MVWorldObjectClientManager *)0x0)) {
                      pMVar23 = (MVCubeModelBase *)
                                MVWorldObjectClientManager::
                                MVWorldObjectClientManager_GetWorldObjectClient
                                          (pMVar22,(this->fields).targetCubeModelId,
                                           (MethodInfo *)0x0);
                      pMVar25 = pMVar24;
                      if (pMVar23 != (MVCubeModelBase *)0x0) {
                        bVar19 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
                        if (((pMVar23->klass->_1).naturalAligment < bVar19) ||
                           (pMVar25 = pMVar23,
                           (MVCubeModelBase__Class *)
                           (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1] !=
                           TypeInfo__MVCubeModelBase)) {
                          FUN_?(pMVar23);
                          pcVar20 = (code *)swi(3);
                          (*pcVar20)();
                          return;
                        }
                      }
                      if (pMVar25 != (MVCubeModelBase *)0x0) {
                        if (((uint)(pMVar25->fields)._.interactionFlags >> 0x11 & 1) != 0) {
                          if (cRam_? == '\0') {
                            FUN_?();
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (((this->fields).targetCubeModelId == -1) ||
                             (pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                  ((MethodInfo *)0x0),
                             pMVar22 == (MVWorldObjectClientManager *)0x0))
                          goto code_?;
                          pMVar23 = (MVCubeModelBase *)
                                    MVWorldObjectClientManager::
                                    MVWorldObjectClientManager_GetWorldObjectClient
                                              (pMVar22,(this->fields).targetCubeModelId,
                                               (MethodInfo *)0x0);
                          pMVar25 = pMVar24;
                          if (pMVar23 != (MVCubeModelBase *)0x0) {
                            bVar19 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
                            if (((pMVar23->klass->_1).naturalAligment < bVar19) ||
                               (pMVar25 = pMVar23,
                               (MVCubeModelBase__Class *)
                               (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1] !=
                               TypeInfo__MVCubeModelBase)) {
                              FUN_?(pMVar23,TypeInfo__MVCubeModelBase);
                              pcVar20 = (code *)swi(3);
                              (*pcVar20)();
                              return;
                            }
                          }
                          if (pMVar25 == (MVCubeModelBase *)0x0) goto code_?;
                          (*(pMVar25->klass->vtable).RemovePreviewBox.methodPtr)();
                        }
                        bVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                                           (e,(MethodInfo *)0x0);
                        if (bVar4 == 0) {
                          pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                              ((MethodInfo *)0x0);
                          pSVar21 = (e->fields).selectionController;
                          if (pSVar21 == (SelectionController *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__Stack<int>__Peek__
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if ((((pSVar21->fields).parentGroups == (Stack_1_System_Int32_ *)0x0) ||
                              (iVar8 = FUN_?(),
                              pMVar22 == (MVWorldObjectClientManager *)0x0)) ||
                             (pMVar5 = MVWorldObjectClientManager::
                                        MVWorldObjectClientManager_GetWorldObjectClient
                                                  (pMVar22,iVar8,(MethodInfo *)0x0),
                             pMVar5 == (MVWorldObjectClient *)0x0)) goto code_?;
                          pTVar29 = (pMVar5->fields).transform;
                          if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                    (pTVar29,0,(MethodInfo *)0x0);
                        }
                        if (cRam_? == '\0') {
                          FUN_?();
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (((this->fields).targetCubeModelId != -1) &&
                           (pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                ((MethodInfo *)0x0),
                           pMVar22 != (MVWorldObjectClientManager *)0x0)) {
                          pMVar23 = (MVCubeModelBase *)
                                    MVWorldObjectClientManager::
                                    MVWorldObjectClientManager_GetWorldObjectClient
                                              (pMVar22,(this->fields).targetCubeModelId,
                                               (MethodInfo *)0x0);
                          pMVar25 = pMVar24;
                          if (pMVar23 != (MVCubeModelBase *)0x0) {
                            bVar19 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
                            if (((pMVar23->klass->_1).naturalAligment < bVar19) ||
                               (pMVar25 = pMVar23,
                               (MVCubeModelBase__Class *)
                               (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1] !=
                               TypeInfo__MVCubeModelBase)) {
                              FUN_?(pMVar23);
                              pcVar20 = (code *)swi(3);
                              (*pcVar20)();
                              return;
                            }
                          }
                          if (pMVar25 != (MVCubeModelBase *)0x0) {
                            pTVar29 = (pMVar25->fields)._.transform;
                            if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                      (pTVar29,1,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?();
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            if (((this->fields).targetCubeModelId != -1) &&
                               (pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                    ((MethodInfo *)0x0),
                               pMVar22 != (MVWorldObjectClientManager *)0x0)) {
                              pMVar23 = (MVCubeModelBase *)
                                        MVWorldObjectClientManager::
                                        MVWorldObjectClientManager_GetWorldObjectClient
                                                  (pMVar22,(this->fields).targetCubeModelId,
                                                   (MethodInfo *)0x0);
                              pMVar25 = pMVar24;
                              if (pMVar23 != (MVCubeModelBase *)0x0) {
                                bVar19 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
                                if (((pMVar23->klass->_1).naturalAligment < bVar19) ||
                                   (pMVar25 = pMVar23,
                                   (MVCubeModelBase__Class *)
                                   (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1] !=
                                   TypeInfo__MVCubeModelBase)) {
                                  FUN_?(pMVar23,TypeInfo__MVCubeModelBase);
                                  pcVar20 = (code *)swi(3);
                                  (*pcVar20)();
                                  return;
                                }
                              }
                              if (pMVar25 != (MVCubeModelBase *)0x0) {
                                DrawPlane::DrawPlane_DrawPlaneToModel
                                          ((pMVar25->fields)._.gameObject,(MethodInfo *)0x0);
                                pCVar3 = (e->fields).cubeModelingStateMachine;
                                if (cRam_? == '\0') {
                                  FUN_?();
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pMVar25 = pMVar24;
                                if ((this->fields).targetCubeModelId != -1) {
                                  pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                      ((MethodInfo *)0x0);
                                  if (pMVar22 == (MVWorldObjectClientManager *)0x0)
                                  goto code_?;
                                  pMVar23 = (MVCubeModelBase *)
                                            MVWorldObjectClientManager::
                                            MVWorldObjectClientManager_GetWorldObjectClient
                                                      (pMVar22,(this->fields).targetCubeModelId,
                                                       (MethodInfo *)0x0);
                                  if (pMVar23 != (MVCubeModelBase *)0x0) {
                                    bVar19 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
                                    if (((pMVar23->klass->_1).naturalAligment < bVar19) ||
                                       (pMVar25 = pMVar23,
                                       (MVCubeModelBase__Class *)
                                       (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1] !=
                                       TypeInfo__MVCubeModelBase)) {
                                      FUN_?(pMVar23);
                                      pcVar20 = (code *)swi(3);
                                      (*pcVar20)();
                                      return;
                                    }
                                  }
                                }
                                if (pCVar3 != (CubeModelingStateMachine *)0x0) {
                                  CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                                            (pCVar3,pMVar25,(this->fields).constraint,
                                             (MethodInfo *)0x0);
                                  pMVar30 = MVGameControllerBase::
                                            MVGameControllerBase_get_MainCameraManager
                                                      ((MethodInfo *)0x0);
                                  if (((pMVar30 != (MainCameraManager *)0x0) &&
                                      (pMVar31 = (pMVar30->fields).cameraController,
                                      pMVar31 != (MVCameraController *)0x0)) &&
                                     (this_01 = (pMVar31->fields).cameraStack,
                                     this_01 != (MVCameraController_CameraStack *)0x0)) {
                                    pMVar32 = MVCameraController+CameraStack::
                                              MVCameraController_CameraStack_get_CurCamera
                                                        (this_01,(MethodInfo *)0x0);
                                    if (cRam_? == '\0') {
                                      FUN_?();
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    if ((this->fields).targetCubeModelId != -1) {
                                      pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                          ((MethodInfo *)0x0);
                                      if (pMVar22 == (MVWorldObjectClientManager *)0x0)
                                      goto code_?;
                                      pMVar25 = (MVCubeModelBase *)
                                                MVWorldObjectClientManager::
                                                MVWorldObjectClientManager_GetWorldObjectClient
                                                          (pMVar22,(this->fields).targetCubeModelId,
                                                           (MethodInfo *)0x0);
                                      if (pMVar25 != (MVCubeModelBase *)0x0) {
                                        bVar19 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
                                        if (((pMVar25->klass->_1).naturalAligment < bVar19) ||
                                           (pMVar24 = pMVar25,
                                           (MVCubeModelBase__Class *)
                                           (pMVar25->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1]
                                           != TypeInfo__MVCubeModelBase)) {
                                          FUN_?(pMVar25);
                                          pcVar20 = (code *)swi(3);
                                          (*pcVar20)();
                                          return;
                                        }
                                      }
                                    }
                                    uStack_33 = 0;
                                    if (pMVar32 != (MVCameraBase *)0x0) {
                                      uStack_34 = 0;
                                      uStack_35 = 0;
                                      uStack_36 = 0;
                                      uStack_33 = 0;
                                      (*(pMVar32->klass->vtable).FocusOnObject.methodPtr)
                                                (pMVar32,pMVar24,TypeRef__System__Activator__T._0_4_
                                                 ,&uStack_33,&uStack_36,
                                                 (pMVar32->klass->vtable).FocusOnObject.method);
                                      pMVar30 = (e->fields).weCamera;
                                      if (pMVar30 != (MainCameraManager *)0x0) {
                                        MainCameraManager::MainCameraManager_set_BlueModeEnabled
                                                  (pMVar30,1,(MethodInfo *)0x0);
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
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Execute
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Looping_up_tree);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ParentGroup_was_null);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_prototype_is_empty_and_shou);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).exiting == 0) {
    pMVar1 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
    bVar2 = pMVar1 == (MVCubeModelBase *)0x0;
  }
  else {
    bVar2 = true;
  }
  (this->fields).exiting = bVar2;
  if (e != (EditorStateMachine *)0x0) {
    if (bVar2 != false) {
      bVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pMVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
        if (pMVar4 != (MVGroup *)0x0) {
          for (pMVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
              pMVar4 != (MVGroup *)0x0; pMVar4 = (pMVar4->fields)._.group) {
            cVar5 = (*(pMVar4->klass->vtable).OnExitObject.methodPtr)
                              (pMVar4,e,(pMVar4->klass->vtable).OnExitObject.method);
            if ((cVar5 != '\0') || ((pMVar4->fields)._.group == (MVGroup *)0x0))
            goto code_?;
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Looping_up_tree,(MethodInfo *)0x0);
          }
          goto code_?;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_ParentGroup_was_null,(MethodInfo *)0x0);
        EditorStateMachine::EditorStateMachine_ExitGroupToRoot(e,(MethodInfo *)0x0);
      }
      else {
        auStackX_8[0] = 0x2f;
        pOVar6 = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_8);
        FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar6,(MethodInfo *)0x0);
      }
code_?:
      if ((e->fields)._MuzzleEditMode_k__BackingField == 0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController->static_fields
      ->InMuzzleEdit = 0;
      return;
    }
    pCVar7 = (e->fields).cubeModelingStateMachine;
    if (pCVar7 != (CubeModelingStateMachine *)0x0) {
      (*(pCVar7->klass->vtable).Update.methodPtr)();
      pMVar1 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
      if ((pMVar1 != (MVCubeModelBase *)0x0) &&
         (this_00 = (pMVar1->fields).prototypeCubeModel, this_00 != (RuntimePrototypeCubeModel *)0x0
         )) {
        iVar8 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_CubeCount
                          (this_00,(MethodInfo *)0x0);
        if (iVar8 != 0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_This_prototype_is_empty_and_shou,(MethodInfo *)0x0);
        auStackX_8[0] = 0x2f;
        pOVar6 = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_8);
        FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Exit
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

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
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModelingDynamicBoxConstraint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESCubeEdit____c___Exit_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
  if (e == (EditorStateMachine *)0x0) goto code_?;
  pGVar1 = (e->fields).gameObject;
  if (*(int *)&(TypeInfo__ESCubeEdit____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = TypeInfo__ESCubeEdit____c->static_fields->__9__9_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ESCubeEdit____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__ESCubeEdit____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__ESCubeEdit____c___Exit_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ESCubeEdit____c->static_fields->__9__9_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ESCubeEdit____c->static_fields->__9__9_0 >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pMVar7 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if (pMVar7 != (MVCubeModelBase *)0x0) {
    pMVar7 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if (pMVar7 == (MVCubeModelBase *)0x0) goto code_?;
    if (((uint)(pMVar7->fields)._.interactionFlags >> 0x11 & 1) != 0) {
      pMVar7 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
      if (pMVar7 == (MVCubeModelBase *)0x0) goto code_?;
      (*(pMVar7->klass->vtable).AddPreviewBox.methodPtr)(pMVar7);
    }
    bVar8 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pSVar9 = (e->fields).selectionController;
      if (pSVar9 == (SelectionController *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((((pSVar9->fields).parentGroups == (Stack_1_System_Int32_ *)0x0) ||
          (id = FUN_?(), this_02 == (MVWorldObjectClientManager *)0x0)) ||
         (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (this_02,id,(MethodInfo *)0x0), pMVar10 == (MVWorldObjectClient *)0x0)
         ) goto code_?;
      pTVar11 = (pMVar10->fields).transform;
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar11,0,(MethodInfo *)0x0);
    }
    pMVar7 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if (pMVar7 == (MVCubeModelBase *)0x0) goto code_?;
    pTVar11 = (pMVar7->fields)._.transform;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar11,0,(MethodInfo *)0x0);
  }
  this_00 = (e->fields).weCamera;
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
    DrawPlane::DrawPlane_ReturnDrawPlaneToLandscape((MethodInfo *)0x0);
    pCVar12 = (this->fields).constraintVisualizer;
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
    if (pCVar12 != (ConstraintVisualizer *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pCVar12->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pCVar12 = (this->fields).constraintVisualizer;
        if (pCVar12 == (ConstraintVisualizer *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pCVar12,(MethodInfo *)0x0);
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
                  ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
      }
    }
    object_00 = (Object *)(this->fields).constraint;
    if (object_00 != (Object *)0x0) {
      bVar13 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
      if ((bVar13 <= (object_00->klass->_1).naturalAligment) &&
         ((object_00->klass->_1).typeHierarchy[(ulonglong)bVar13 - 1] ==
          (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar14 = object_00[7].klass;
        if (pOVar14 == (Object__Class *)0x0) goto code_?;
        pDVar15 = (Delegate *)(pOVar14->vtable).ToString.methodPtr;
        this_03 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_03,object_00,
                   MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar15 = mscorlib.dll::System::Delegate::Delegate_Remove
                            (pDVar15,(Delegate *)this_03,(MethodInfo *)0x0);
        pAVar16 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
        if (pDVar15 == (Delegate *)0x0) {
          (pOVar14->vtable).ToString.methodPtr = (Il2CppMethodPointer)0x0;
        }
        else {
          pIVar17 = (Il2CppMethodPointer)
                    FUN_?(pDVar15,TypeInfo__System__Action<CubeModelChangedEventArgs>);
          if (pIVar17 == (Il2CppMethodPointer)0x0) {
            FUN_?(pDVar15,pAVar16);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          (pOVar14->vtable).ToString.methodPtr = pIVar17;
          pAVar16 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
          lVar19 = FUN_?();
          if (lVar19 == 0) {
            FUN_?(pDVar15,pAVar16);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(pOVar14->vtable).ToString >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
      }
    }
    bVar6 = iRam_? != 0;
    (this->fields).constraint = (IModelingConstraint *)0x0;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(this->fields).constraint >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar20 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar20 != (MVGameControllerBase *)0x0) &&
        (pMVar21 = (pMVar20->fields).game, pMVar21 != (MVNetworkGame *)0x0)) &&
       ((pGVar22 = (pMVar21->fields).GameEventManager, pGVar22 != (GameEventManager *)0x0 &&
        ((pGVar23 = (pGVar22->fields).AvatarCommandsBuildMode,
         pGVar23 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
         (pGVar24 = (pGVar23->fields).LaserCommands,
         pGVar24 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))))
       ) {
      pAVar25 = (pGVar24->fields).OnChangeState;
      if (pAVar25 != (Action_1_LaserPointerState_ *)0x0) {
        (*(pAVar25->fields)._._.invoke_impl)
                  ((pAVar25->fields)._._.method_code,0,(pAVar25->fields)._._.method);
      }
      pSVar9 = (e->fields).selectionController;
      if ((pSVar9 != (SelectionController *)0x0) &&
         (pHVar26 = (pSVar9->fields).selectedIDs, pHVar26 != (HashSet_1_System_Int32_ *)0x0)) {
        if ((pHVar26->fields)._count == 0) {
          ESStateBase::ESStateBase_DeTintCurrent((ESStateBase *)this,(MethodInfo *)0x0);
        }
        pCVar27 = (e->fields).cubeModelingStateMachine;
        if (pCVar27 != (CubeModelingStateMachine *)0x0) {
          CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
                    (pCVar27,(MethodInfo *)0x0);
          pCVar27 = (e->fields).cubeModelingStateMachine;
          if (pCVar27 != (CubeModelingStateMachine *)0x0) {
            CubeModelingStateMachine::CubeModelingStateMachine_EndEdit(pCVar27,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar20 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar20 != (MVGameControllerBase *)0x0) &&
                 (pMVar21 = (pMVar20->fields).game, pMVar21 != (MVNetworkGame *)0x0)) &&
                (pGVar22 = (pMVar21->fields).GameEventManager, pGVar22 != (GameEventManager *)0x0))
               && (pGVar23 = (pGVar22->fields).AvatarCommandsBuildMode,
                  pGVar23 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
              if ((pGVar23->fields).OnExitBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
                pAVar28 = (pGVar23->fields).OnExitBuildStateEvent;
                (*(pAVar28->fields)._._.invoke_impl)
                          ((pAVar28->fields)._._.method_code,(this->fields)._.stateType,0,
                           (pAVar28->fields)._._.method);
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void HandleUnavailableMaterial(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_HandleUnavailableMaterial
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Handle_if_default_material_is_no);
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
      (this_00 = (pMVar2->fields)._MaterialRepository_k__BackingField,
      e != (EditorStateMachine *)0x0)) &&
     (pCVar3 = (e->fields).cubeModelingStateMachine, pCVar3 != (CubeModelingStateMachine *)0x0)) {
    materialId = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                           (pCVar3,(MethodInfo *)0x0);
    if (this_00 != (MVMaterialRepository *)0x0) {
      this_01 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                          (this_00,materialId,(MethodInfo *)0x0);
      if (this_01 != (MVMaterial *)0x0) {
        bVar4 = MVMaterial::MVMaterial_get_IsAvailable(this_01,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Handle_if_default_material_is_no,(MethodInfo *)0x0);
          pCVar3 = (e->fields).cubeModelingStateMachine;
          if (pCVar3 == (CubeModelingStateMachine *)0x0) goto code_?;
          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                    (pCVar3,0x15,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Enter>b__7_0(IHandleCubeModelEdit, BaseEventData) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit__Enter_b__7_0
               (ESCubeEdit *this,IHandleCubeModelEdit *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ESCubeEdit__Exit__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IHandleCubeModelEdit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__ESCubeEdit__Exit__,(MethodInfo *)0x0);
  if (handler == (IHandleCubeModelEdit *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = handler->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  pNVar5 = this_00;
  if (uVar4 != 0) {
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)pIVar2->interfaceOffsets;
    do {
      if ((&pNVar5->klass)[(ulonglong)uVar3 * 2] ==
          (NavMesh_OnNavMeshPreUpdate__Class *)TypeInfo__IHandleCubeModelEdit) {
        pVVar6 = &(pIVar2->vtable).Open + *(int *)(&pNVar5->monitor + (ulonglong)uVar3 * 2);
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_?(handler,TypeInfo__IHandleCubeModelEdit,0,pNVar5,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(handler,this_00,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* ESCubeEdit() */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit__ctor(ESCubeEdit *this,MethodInfo *method)

{
  (this->fields).targetCubeModelId = -1;
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.tintedWo = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar8 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.logger = pIVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* MVCubeModelBase get_TargetCubeModel() */

MVCubeModelBase *
Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_get_TargetCubeModel(ESCubeEdit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).targetCubeModelId != -1) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      pMVar2 = (MVCubeModelBase *)(*pcVar1)();
      return pMVar2;
    }
    pMVar2 = (MVCubeModelBase *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if (pMVar2 != (MVCubeModelBase *)0x0) {
      bVar3 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
         ((MVCubeModelBase__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
          TypeInfo__MVCubeModelBase)) {
        return pMVar2;
      }
      FUN_?(pMVar2,TypeInfo__MVCubeModelBase);
      pcVar1 = (code *)swi(3);
      pMVar2 = (MVCubeModelBase *)(*pcVar1)();
      return pMVar2;
    }
  }
  return (MVCubeModelBase *)0x0;
}


/* Void set_TargetCubeModel(MVCubeModelBase) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_set_TargetCubeModel
               (ESCubeEdit *this,MVCubeModelBase *value,MethodInfo *method)

{
  if (value == (MVCubeModelBase *)0x0) {
    (this->fields).targetCubeModelId = -1;
    return;
  }
  (this->fields).targetCubeModelId = (value->fields)._._.id;
  return;
}

