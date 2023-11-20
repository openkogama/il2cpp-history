
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Enter
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?();
    func_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>
                   );
    func_?();
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_ConstrainVisualizer);
    func_?(&StringLiteral_UIItems);
    func_?(&StringLiteral_ESCubeEdit_must_not_be_entered_w);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields)._MaterialRepository_k__BackingField, e == (EditorStateMachine *)0x0
     )) {
code_?:
    targetCubeModel = unaff_ESI;
    func_?();
    pMVar2 = extraout_EDX;
  }
  else {
    pCVar3 = (e->fields).cubeModelingStateMachine;
    unaff_ESI.currentCryptoKey = 0;
    unaff_ESI.hiddenValue = 0;
    unaff_ESI.fakeValue = 0;
    unaff_ESI.inited = 0;
    if (pCVar3 == (CubeModelingStateMachine *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      cRam_? = '\x01';
    }
    unaff_ESI = (pCVar3->fields).currentMaterialId;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    materialId = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
                 ObscuredByte_op_Implicit_1(unaff_ESI,(MethodInfo *)0x0);
    if ((this_00 == (MVMaterialRepository *)0x0) ||
       (this_03 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                            (this_00,materialId,(MethodInfo *)0x0), this_03 == (MVMaterial *)0x0))
    goto code_?;
    bVar4 = MVMaterial::MVMaterial_get_IsAvailable(this_03,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
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
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_ESCubeEdit_must_not_be_entered_w,(MethodInfo *)0x0);
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      return;
    }
    pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar6 == (GameEventManager *)0x0) goto code_?;
    this_01 = (pGVar6->fields).AvatarCommandsBuildMode;
    editorEvent = (this->fields)._.stateType;
    pMVar5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar5 == (MVWorldObjectClient *)0x0) goto code_?;
    unaff_ESI = (ObscuredByte)(pMVar5->fields)._.id;
    this_04 = (SubscribableVariable_1_System_Int32Enum_ *)
              func_?(TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData);
    SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
              (this_04,(Int32Enum__Enum)unaff_ESI,(MethodInfo *)0x0);
    if (this_01 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager::
    GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
              (this_01,editorEvent,(Object *)this_04,(MethodInfo *)0x0);
    DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
    callbackFunction =
         (UnityAction_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (callbackFunction,(Object *)this,
               MethodInfo__ESCubeEdit___Enter_b__7_0_IHandleCubeModelEdit__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)callbackFunction,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IHandleCubeModelEdit>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>_
              );
    pWVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                       ((MethodInfo *)0x0);
    (this->fields)._.tintedWo = pWVar7;
    func_?();
    targetCubeModel =
         (ObscuredByte)
         EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (targetCubeModel == (ObscuredByte)0x0) {
      iVar8 = -1;
code_?:
      (this->fields).targetCubeModelId = iVar8;
      this_02 = (e->fields).selectionController;
      unaff_ESI = targetCubeModel;
      if (this_02 != (SelectionController *)0x0) {
        SelectionController::SelectionController_DeSelectAll(this_02,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVCubeModelBase);
          cRam_? = '\x01';
        }
        if (((this->fields).targetCubeModelId != -1) &&
           (pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
           pMVar9 != (MVWorldObjectClientManager *)0x0)) {
          pMVar5 = (MVWorldObjectClient *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar9,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
          if ((pMVar5 != (MVWorldObjectClient *)0x0) &&
             ((targetCubeModel = (ObscuredByte)TypeInfo__MVCubeModelBase,
              (pMVar5->klass->_1).naturalAligment < (TypeInfo__MVCubeModelBase->_1).naturalAligment
              || ((MVCubeModelBase__Class *)
                  (pMVar5->klass->_1).typeHierarchy
                  [(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] != TypeInfo__MVCubeModelBase
                 )))) goto code_?;
          unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase;
          if ((pMVar5 != (MVWorldObjectClient *)0x0) &&
             (iVar10 = pMVar5[1].fields._.id, unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase,
             iVar10 != 0)) {
            pIVar11 = (IModelingConstraint *)
                      (**(code **)(iVar10 + 0xc))
                                (*(undefined4 *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x14));
            (this->fields).constraint = pIVar11;
            func_?(&(this->fields).constraint,pIVar11);
            this_05 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                      (this_05,StringLiteral_ConstrainVisualizer,(MethodInfo *)0x0);
            unaff_ESI.currentCryptoKey = 0;
            unaff_ESI.hiddenValue = 0;
            unaff_ESI.fakeValue = 0;
            unaff_ESI.inited = 0;
            if (this_05 != (GameObject *)0x0) {
              pCVar12 = (ConstraintVisualizer *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  (this_05,
                                   ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                                  );
              (this->fields).constraintVisualizer = pCVar12;
              func_?(&(this->fields).constraintVisualizer,pCVar12);
              unaff_ESI = (ObscuredByte)(this->fields).constraintVisualizer;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__MVCubeModelBase);
                cRam_? = '\x01';
              }
              if ((this->fields).targetCubeModelId == -1) {
                targetCubeModel.currentCryptoKey = 0;
                targetCubeModel.hiddenValue = 0;
                targetCubeModel.fakeValue = 0;
                targetCubeModel.inited = 0;
              }
              else {
                pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (pMVar9 == (MVWorldObjectClientManager *)0x0) goto code_?;
                targetCubeModel =
                     (ObscuredByte)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar9,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
                if ((targetCubeModel != (ObscuredByte)0x0) &&
                   ((pMVar2 = TypeInfo__MVCubeModelBase,
                    *(byte *)(*(int *)targetCubeModel + 0xb8) <
                    (TypeInfo__MVCubeModelBase->_1).naturalAligment ||
                    (*(MVCubeModelBase__Class **)
                      (*(int *)(*(int *)targetCubeModel + 100) + -4 +
                      (uint)(TypeInfo__MVCubeModelBase->_1).naturalAligment * 4) !=
                     TypeInfo__MVCubeModelBase)))) goto code_?;
              }
              if (unaff_ESI != (ObscuredByte)0x0) {
                ConstraintVisualizer::ConstraintVisualizer_Init
                          ((ConstraintVisualizer *)unaff_ESI,(MVCubeModelBase *)targetCubeModel,
                           (this->fields).constraint,StringLiteral_UIItems,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__MVCubeModelBase);
                  cRam_? = '\x01';
                }
                if (((this->fields).targetCubeModelId != -1) &&
                   (pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
                   pMVar9 != (MVWorldObjectClientManager *)0x0)) {
                  pMVar5 = (MVWorldObjectClient *)
                           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                     (pMVar9,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
                  unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase;
                  if ((pMVar5 != (MVWorldObjectClient *)0x0) &&
                     ((targetCubeModel = (ObscuredByte)TypeInfo__MVCubeModelBase,
                      (pMVar5->klass->_1).naturalAligment <
                      (TypeInfo__MVCubeModelBase->_1).naturalAligment ||
                      ((MVCubeModelBase__Class *)
                       (pMVar5->klass->_1).typeHierarchy
                       [(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] !=
                       TypeInfo__MVCubeModelBase)))) goto code_?;
                  if (pMVar5 != (MVWorldObjectClient *)0x0) {
                    bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                                      (pMVar5,InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0);
                    if (bVar4 == 0) {
code_?:
                      bVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                                        (e,(MethodInfo *)0x0);
                      if (bVar4 == 0) {
                        unaff_ESI = (ObscuredByte)
                                    MVGameControllerBase::MVGameControllerBase_get_WOCM
                                              ((MethodInfo *)0x0);
                        iVar8 = EditorStateMachine::EditorStateMachine_get_ParentGroupID
                                           (e,(MethodInfo *)0x0);
                        if ((unaff_ESI == (ObscuredByte)0x0) ||
                           (pMVar13 = MVWorldObjectClientManager::
                                      MVWorldObjectClientManager_GetWorldObject
                                                ((MVWorldObjectClientManager *)unaff_ESI,iVar8,
                                                 (MethodInfo *)0x0), pMVar13 == (MVWorldObject *)0x0
                           )) goto code_?;
                        unaff_ESI = (ObscuredByte)pMVar13[1].fields.ownerActorNr;
                        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                  ((Transform *)unaff_ESI,0,(MethodInfo *)0x0);
                      }
                      if (cRam_? == '\0') {
                        func_?(&TypeInfo__MVCubeModelBase);
                        cRam_? = '\x01';
                      }
                      if (((this->fields).targetCubeModelId != -1) &&
                         (pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                             ((MethodInfo *)0x0),
                         pMVar9 != (MVWorldObjectClientManager *)0x0)) {
                        pMVar5 = (MVWorldObjectClient *)
                                 MVWorldObjectClientManager::
                                 MVWorldObjectClientManager_GetWorldObject
                                           (pMVar9,(this->fields).targetCubeModelId,
                                            (MethodInfo *)0x0);
                        if ((pMVar5 != (MVWorldObjectClient *)0x0) &&
                           ((targetCubeModel = (ObscuredByte)TypeInfo__MVCubeModelBase,
                            (pMVar5->klass->_1).naturalAligment <
                            (TypeInfo__MVCubeModelBase->_1).naturalAligment ||
                            ((MVCubeModelBase__Class *)
                             (pMVar5->klass->_1).typeHierarchy
                             [(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] !=
                             TypeInfo__MVCubeModelBase)))) goto code_?;
                        unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase;
                        if (pMVar5 != (MVWorldObjectClient *)0x0) {
                          unaff_ESI = (ObscuredByte)(pMVar5->fields).transform;
                          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__SharedCubeFunctions);
                          }
                          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                    ((Transform *)unaff_ESI,1,(MethodInfo *)0x0);
                          if (cRam_? == '\0') {
                            func_?(&TypeInfo__MVCubeModelBase);
                            cRam_? = '\x01';
                          }
                          if (((this->fields).targetCubeModelId != -1) &&
                             (pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                 ((MethodInfo *)0x0),
                             pMVar9 != (MVWorldObjectClientManager *)0x0)) {
                            pMVar5 = (MVWorldObjectClient *)
                                     MVWorldObjectClientManager::
                                     MVWorldObjectClientManager_GetWorldObject
                                               (pMVar9,(this->fields).targetCubeModelId,
                                                (MethodInfo *)0x0);
                            if ((pMVar5 != (MVWorldObjectClient *)0x0) &&
                               ((targetCubeModel = (ObscuredByte)TypeInfo__MVCubeModelBase,
                                (pMVar5->klass->_1).naturalAligment <
                                (TypeInfo__MVCubeModelBase->_1).naturalAligment ||
                                ((MVCubeModelBase__Class *)
                                 (pMVar5->klass->_1).typeHierarchy
                                 [(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] !=
                                 TypeInfo__MVCubeModelBase)))) goto code_?;
                            unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase;
                            if (pMVar5 != (MVWorldObjectClient *)0x0) {
                              DrawPlane::DrawPlane_DrawPlaneToModel
                                        ((pMVar5->fields).gameObject,(MethodInfo *)0x0);
                              unaff_ESI = (ObscuredByte)(e->fields).cubeModelingStateMachine;
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              if ((this->fields).targetCubeModelId == -1) {
                                targetCubeModel.currentCryptoKey = 0;
                                targetCubeModel.hiddenValue = 0;
                                targetCubeModel.fakeValue = 0;
                                targetCubeModel.inited = 0;
                              }
                              else {
                                pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                   ((MethodInfo *)0x0);
                                if (pMVar9 == (MVWorldObjectClientManager *)0x0)
                                goto code_?;
                                targetCubeModel =
                                     (ObscuredByte)
                                     MVWorldObjectClientManager::
                                     MVWorldObjectClientManager_GetWorldObject
                                               (pMVar9,(this->fields).targetCubeModelId,
                                                (MethodInfo *)0x0);
                                if ((targetCubeModel != (ObscuredByte)0x0) &&
                                   ((pMVar2 = TypeInfo__MVCubeModelBase,
                                    *(byte *)(*(int *)targetCubeModel + 0xb8) <
                                    (TypeInfo__MVCubeModelBase->_1).naturalAligment ||
                                    (*(MVCubeModelBase__Class **)
                                      (*(int *)(*(int *)targetCubeModel + 100) + -4 +
                                      (uint)(TypeInfo__MVCubeModelBase->_1).naturalAligment * 4) !=
                                     TypeInfo__MVCubeModelBase)))) goto code_?;
                              }
                              if (unaff_ESI != (ObscuredByte)0x0) {
                                CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                                          ((CubeModelingStateMachine *)unaff_ESI,
                                           (MVCubeModelBase *)targetCubeModel,
                                           (this->fields).constraint,(MethodInfo *)0x0);
                                pMVar14 = MVGameControllerBase::
                                          MVGameControllerBase_get_MainCameraManager
                                                    ((MethodInfo *)0x0);
                                if (pMVar14 != (MainCameraManager *)0x0) {
                                  unaff_ESI = (ObscuredByte)
                                              MainCameraManager::MainCameraManager_get_CurrentCamera
                                                        (pMVar14,(MethodInfo *)0x0);
                                  if (cRam_? == '\0') {
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  if ((this->fields).targetCubeModelId == -1) {
                                    targetCubeModel.currentCryptoKey = 0;
                                    targetCubeModel.hiddenValue = 0;
                                    targetCubeModel.fakeValue = 0;
                                    targetCubeModel.inited = 0;
                                  }
                                  else {
                                    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                       ((MethodInfo *)0x0);
                                    if (pMVar9 == (MVWorldObjectClientManager *)0x0)
                                    goto code_?;
                                    targetCubeModel =
                                         (ObscuredByte)
                                         MVWorldObjectClientManager::
                                         MVWorldObjectClientManager_GetWorldObject
                                                   (pMVar9,(this->fields).targetCubeModelId,
                                                    (MethodInfo *)0x0);
                                    if (targetCubeModel == (ObscuredByte)0x0) {
                                      targetCubeModel.currentCryptoKey = 0;
                                      targetCubeModel.hiddenValue = 0;
                                      targetCubeModel.fakeValue = 0;
                                      targetCubeModel.inited = 0;
                                    }
                                    else {
                                      pMVar2 = TypeInfo__MVCubeModelBase;
                                      if ((*(byte *)(*(int *)targetCubeModel + 0xb8) <
                                           (TypeInfo__MVCubeModelBase->_1).naturalAligment) ||
                                         (*(MVCubeModelBase__Class **)
                                           (*(int *)(*(int *)targetCubeModel + 100) + -4 +
                                           (uint)(TypeInfo__MVCubeModelBase->_1).naturalAligment * 4
                                           ) != TypeInfo__MVCubeModelBase)) goto code_?;
                                    }
                                  }
                                  if (unaff_ESI != (ObscuredByte)0x0) {
                                    (**(code **)(*(int *)unaff_ESI + 0x128))
                                              (unaff_ESI,targetCubeModel,0x40000000,0,0,0,0,
                                               *(undefined4 *)(*(int *)unaff_ESI + 300));
                                    pMVar14 = (e->fields).weCamera;
                                    if (pMVar14 != (MainCameraManager *)0x0) {
                                      MainCameraManager::MainCameraManager_set_BlueModeEnabled
                                                (pMVar14,1,(MethodInfo *)0x0);
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
                    else {
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if (((this->fields).targetCubeModelId != -1) &&
                         (pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                             ((MethodInfo *)0x0),
                         pMVar9 != (MVWorldObjectClientManager *)0x0)) {
                        pMVar5 = (MVWorldObjectClient *)
                                 MVWorldObjectClientManager::
                                 MVWorldObjectClientManager_GetWorldObject
                                           (pMVar9,(this->fields).targetCubeModelId,
                                            (MethodInfo *)0x0);
                        unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase;
                        if (pMVar5 == (MVWorldObjectClient *)0x0) {
                          pMVar5 = (MVWorldObjectClient *)0x0;
                        }
                        else {
                          targetCubeModel = (ObscuredByte)TypeInfo__MVCubeModelBase;
                          if (((pMVar5->klass->_1).naturalAligment <
                               (TypeInfo__MVCubeModelBase->_1).naturalAligment) ||
                             ((MVCubeModelBase__Class *)
                              (pMVar5->klass->_1).typeHierarchy
                              [(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] !=
                              TypeInfo__MVCubeModelBase)) goto code_?;
                        }
                        if (pMVar5 != (MVWorldObjectClient *)0x0) {
                          (*(code *)(pMVar5->klass->vtable).RemovePreviewBox.method)
                                    (pMVar5,(pMVar5->klass->vtable).HideConnectors.methodPtr);
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
      goto code_?;
    }
    pMVar2 = TypeInfo__MVCubeModelBase;
    if (((TypeInfo__MVCubeModelBase->_1).naturalAligment <=
         *(byte *)(*(int *)targetCubeModel + 0xb8)) &&
       (*(MVCubeModelBase__Class **)
         (*(int *)(*(int *)targetCubeModel + 100) + -4 +
         (uint)(TypeInfo__MVCubeModelBase->_1).naturalAligment * 4) == TypeInfo__MVCubeModelBase)) {
      iVar8 = *(int32_t *)((int)targetCubeModel + 8);
      goto code_?;
    }
  }
code_?:
  func_?(targetCubeModel,pMVar2);
  pMVar5 = extraout_EDX_00;
code_?:
  func_?(pMVar5,targetCubeModel);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Execute
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = e;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EditorEvent);
    func_?(&StringLiteral_Looping_up_tree);
    func_?(&StringLiteral_ParentGroup_was_null);
    func_?(&StringLiteral_This_prototype_is_empty_and_shou);
    cRam_? = '\x01';
  }
  if ((this->fields).exiting == 0) {
    pMVar1 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
    bVar2 = 1 - (pMVar1 != (MVCubeModelBase *)0x0);
  }
  else {
    bVar2 = 1;
  }
  (this->fields).exiting = bVar2;
  if (this_00 != (EditorStateMachine *)0x0) {
    if (bVar2 == 0) {
      pCVar3 = (this_00->fields).cubeModelingStateMachine;
      if (pCVar3 != (CubeModelingStateMachine *)0x0) {
        (*(code *)(pCVar3->klass->vtable).Update.method)(pCVar3,pCVar3->klass[1]._0.image);
        pMVar1 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
        if (pMVar1 != (MVCubeModelBase *)0x0) {
          bVar2 = MVCubeModelBase::MVCubeModelBase_get_ContainsCubes(pMVar1,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_This_prototype_is_empty_and_shou,(MethodInfo *)0x0);
            e = (EditorStateMachine *)0x2f;
            pOVar4 = (Object *)func_?(TypeInfo__EditorEvent,&e);
            FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,pOVar4,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
    else {
      bVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                        (this_00,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        e = (EditorStateMachine *)0x2f;
        pOVar4 = (Object *)func_?(TypeInfo__EditorEvent,&e);
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,pOVar4,(MethodInfo *)0x0);
        return;
      }
      pMVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroup(this_00,(MethodInfo *)0x0);
      if (pMVar5 == (MVGroup *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_ParentGroup_was_null,(MethodInfo *)0x0);
        EditorStateMachine::EditorStateMachine_ExitGroupToRoot(this_00,(MethodInfo *)0x0);
        return;
      }
      for (pMVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroup
                              (this_00,(MethodInfo *)0x0); pMVar5 != (MVGroup *)0x0;
          pMVar5 = (pMVar5->fields)._.group) {
        cVar6 = (*(code *)(pMVar5->klass->vtable).OnExitObject.method)
                          (pMVar5,this_00,(pMVar5->klass->vtable).OnSelectedChanged.methodPtr);
        if (cVar6 != '\0') {
          return;
        }
        if ((pMVar5->fields)._.group == (MVGroup *)0x0) {
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Looping_up_tree,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Exit
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    func_?(&TypeInfo__ModelingDynamicBoxConstraint);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__ESCubeEdit____c___Exit_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ESCubeEdit____c);
    cRam_? = '\x01';
  }
  DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
  if (e == (EditorStateMachine *)0x0) goto code_?;
  pGVar1 = (e->fields).gameObject;
  if ((TypeInfo__ESCubeEdit____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ESCubeEdit____c);
  }
  callbackFunction = TypeInfo__ESCubeEdit____c->static_fields->__9__9_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ESCubeEdit____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ESCubeEdit____c);
    }
    object = TypeInfo__ESCubeEdit____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ESCubeEdit____c___Exit_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ESCubeEdit____c->static_fields->__9__9_0 = callbackFunction;
    func_?(&TypeInfo__ESCubeEdit____c->static_fields->__9__9_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pMVar2 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if (pMVar2 != (MVCubeModelBase *)0x0) {
    pMVar2 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if (pMVar2 == (MVCubeModelBase *)0x0) goto code_?;
    bVar3 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                      ((MVWorldObjectClient *)pMVar2,InteractionFlags__Enum_IsPreview,
                       (MethodInfo *)0x0);
    if (bVar3 != 0) {
      pMVar2 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
      if (pMVar2 == (MVCubeModelBase *)0x0) goto code_?;
      (*(code *)(pMVar2->klass->vtable).AddPreviewBox.method)();
    }
    bVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      id = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
      if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,id,(MethodInfo *)0x0);
      if (pMVar4 == (MVWorldObject *)0x0) goto code_?;
      pTVar5 = (Transform *)pMVar4[1].fields.ownerActorNr;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar5,0,(MethodInfo *)0x0);
    }
    pMVar2 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if (pMVar2 == (MVCubeModelBase *)0x0) goto code_?;
    pTVar5 = (pMVar2->fields)._.transform;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar5,0,(MethodInfo *)0x0);
  }
  this_00 = (e->fields).weCamera;
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
    DrawPlane::DrawPlane_ReturnDrawPlaneToLandscape((MethodInfo *)0x0);
    pCVar6 = (this->fields).constraintVisualizer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pCVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pCVar6 = (this->fields).constraintVisualizer;
      if (pCVar6 == (ConstraintVisualizer *)0x0) goto code_?;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pCVar6,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    }
    this_01 = (ModelingDynamicBoxConstraint *)(this->fields).constraint;
    if (((this_01 != (ModelingDynamicBoxConstraint *)0x0) &&
        ((TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment <=
         (this_01->klass->_1).naturalAligment)) &&
       ((this_01->klass->_1).typeHierarchy
        [(TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_DetachFromCubeModel
                (this_01,(MethodInfo *)0x0);
    }
    (this->fields).constraint = (IModelingConstraint *)0x0;
    func_?(&(this->fields).constraint,0);
    pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar7 != (GameEventManager *)0x0) &&
        (pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
        pGVar8 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (this_02 = (pGVar8->fields).LaserCommands,
       this_02 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                (this_02,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
      pSVar9 = (e->fields).selectionController;
      if ((pSVar9 != (SelectionController *)0x0) &&
         (pHVar10 = (pSVar9->fields).selectedIDs, pHVar10 != (HashSet_1_System_Int32_ *)0x0)) {
        if ((pHVar10->fields)._count == 0) {
          ESStateBase::ESStateBase_DeTintCurrent((ESStateBase *)this,(MethodInfo *)0x0);
        }
        pCVar11 = (e->fields).cubeModelingStateMachine;
        if (pCVar11 != (CubeModelingStateMachine *)0x0) {
          CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(pCVar11,(MethodInfo *)0x0)
          ;
          pCVar11 = (e->fields).cubeModelingStateMachine;
          if ((pCVar11 != (CubeModelingStateMachine *)0x0) &&
             (pMVar2 = (pCVar11->fields)._TargetCubeModel_k__BackingField,
             pMVar2 != (MVCubeModelBase *)0x0)) {
            MVCubeModelBase::MVCubeModelBase_set_BeingEdited(pMVar2,0,(MethodInfo *)0x0);
            (pCVar11->fields)._TargetCubeModel_k__BackingField = (MVCubeModelBase *)0x0;
            func_?(&(pCVar11->fields)._TargetCubeModel_k__BackingField,0);
            pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if ((pGVar7 != (GameEventManager *)0x0) &&
               (pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
               pGVar8 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
              GameEventManager+AvatarCommandsBuildModeManager::
              GameEventManager_AvatarCommandsBuildModeManager_ExitBuildStateEvent
                        (pGVar8,(this->fields)._.stateType,(Object *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Exit() */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Exit_1(ESCubeEdit *this,MethodInfo *method)

{
  (this->fields).exiting = 1;
  return;
}


/* Void HandleUnavailableMaterial(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_HandleUnavailableMaterial
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Handle_if_default_material_is_no);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields)._MaterialRepository_k__BackingField;
    if (e != (EditorStateMachine *)0x0) {
      pCVar2 = (e->fields).cubeModelingStateMachine;
      if (pCVar2 != (CubeModelingStateMachine *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
          cRam_? = '\x01';
        }
        value = (pCVar2->fields).currentMaterialId;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
        }
        materialId = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredByte::ObscuredByte_op_Implicit_1(value,(MethodInfo *)0x0);
        if (this_00 != (MVMaterialRepository *)0x0) {
          this_01 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              (this_00,materialId,(MethodInfo *)0x0);
          if (this_01 != (MVMaterial *)0x0) {
            bVar3 = MVMaterial::MVMaterial_get_IsAvailable(this_01,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_Handle_if_default_material_is_no,(MethodInfo *)0x0)
              ;
              pCVar2 = (e->fields).cubeModelingStateMachine;
              if (pCVar2 == (CubeModelingStateMachine *)0x0) goto code_?;
              CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                        (pCVar2,0x15,(MethodInfo *)0x0);
            }
            return;
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


/* Void <Enter>b__7_0(IHandleCubeModelEdit, BaseEventData) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit__Enter_b__7_0
               (ESCubeEdit *this,IHandleCubeModelEdit *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ESCubeEdit__Exit__);
    func_?(&TypeInfo__IHandleCubeModelEdit);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__ESCubeEdit__Exit__,(MethodInfo *)0x0);
  if (handler == (IHandleCubeModelEdit *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = handler->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__IHandleCubeModelEdit) {
        ppMVar5 = &(&(handler->klass->vtable).Open)[handler->klass->interfaceOffsets[uVar3].offset].
                   method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)func_?(handler,TypeInfo__IHandleCubeModelEdit,0);
code_?:
  (*(code *)*ppMVar5)(handler,ppMVar5[1]);
  return;
}


/* ESCubeEdit() */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit__ctor(ESCubeEdit *this,MethodInfo *method)

{
  (this->fields).targetCubeModelId = -1;
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields)._.tintedWo = pWVar1;
  method_00 = (MethodInfo *)&(this->fields)._.tintedWo;
  func_?(method_00,pWVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields)._.logger = pIVar2;
    func_?();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVCubeModelBase get_TargetCubeModel() */

MVCubeModelBase *
Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_get_TargetCubeModel(ESCubeEdit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  if ((this->fields).targetCubeModelId == -1) {
    return (MVCubeModelBase *)0x0;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVCubeModelBase *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if (pMVar1 == (MVCubeModelBase *)0x0) {
      return (MVCubeModelBase *)0x0;
    }
    if (((TypeInfo__MVCubeModelBase->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVCubeModelBase__Class *)
        (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] ==
        TypeInfo__MVCubeModelBase)) {
      return pMVar1;
    }
    func_?(pMVar1);
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVCubeModelBase *)(*pcVar2)();
  return pMVar1;
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

