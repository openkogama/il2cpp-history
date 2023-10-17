
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
     (unaff_EBX = (MVCubeModelBase__Class *)(pMVar1->fields)._MaterialRepository_k__BackingField,
     e == (EditorStateMachine *)0x0)) {
code_?:
    func_?();
    pMVar2 = extraout_EDX;
    targetCubeModel = unaff_EBX;
    this = (ESCubeEdit *)unaff_ESI;
code_?:
    func_?(targetCubeModel,pMVar2);
    pMVar3 = extraout_EDX_00;
  }
  else {
    pCVar4 = (e->fields).cubeModelingStateMachine;
    unaff_ESI.currentCryptoKey = 0;
    unaff_ESI.hiddenValue = 0;
    unaff_ESI.fakeValue = 0;
    unaff_ESI.inited = 0;
    if (pCVar4 == (CubeModelingStateMachine *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      cRam_? = '\x01';
    }
    unaff_ESI = (pCVar4->fields).currentMaterialId;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    materialId = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
                 ObscuredByte_op_Implicit_1(unaff_ESI,(MethodInfo *)0x0);
    if ((unaff_EBX == (MVCubeModelBase__Class *)0x0) ||
       (this_01 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                            ((MVMaterialRepository *)unaff_EBX,materialId,(MethodInfo *)0x0),
       this_01 == (MVMaterial *)0x0)) goto code_?;
    bVar5 = MVMaterial::MVMaterial_get_IsAvailable(this_01,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Handle_if_default_material_is_no,(MethodInfo *)0x0);
      pCVar4 = (e->fields).cubeModelingStateMachine;
      if (pCVar4 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (pCVar4,0x15,(MethodInfo *)0x0);
    }
    (this->fields).exiting = 0;
    pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClient *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_ESCubeEdit_must_not_be_entered_w,(MethodInfo *)0x0);
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      return;
    }
    pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    unaff_ESI = (ObscuredByte)this;
    if (pGVar6 == (GameEventManager *)0x0) goto code_?;
    this_02 = (pGVar6->fields).AvatarCommandsBuildMode;
    editorEvent = (this->fields)._.stateType;
    pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
    value = (pMVar3->fields)._.id;
    unaff_EBX = (MVCubeModelBase__Class *)
                func_?(TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData);
    if ((unaff_EBX == (MVCubeModelBase__Class *)0x0) ||
       (SubscribableVariableBase`1[System::Int32Enum]::
        SubscribableVariableBase_1_System_Int32Enum___ctor
                  ((SubscribableVariableBase_1_System_Int32Enum_ *)unaff_EBX,value,(MethodInfo *)0x0
                  ), this_02 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0))
    goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager::
    GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
              (this_02,editorEvent,(Object *)unaff_EBX,(MethodInfo *)0x0);
    DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
    pGVar7 = (e->fields).gameObject;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>
                        );
    unaff_EBX = (MVCubeModelBase__Class *)0x0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__ESCubeEdit___Enter_b__7_0_IHandleCubeModelEdit__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar7,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IHandleCubeModelEdit>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>_
              );
    pWVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                        ((MethodInfo *)0x0);
    (this->fields)._.tintedWo = pWVar8;
    func_?(&(this->fields)._.tintedWo,pWVar8);
    unaff_EBX = (MVCubeModelBase__Class *)
                EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (unaff_EBX != (MVCubeModelBase__Class *)0x0) {
      pIVar9 = (unaff_EBX->_0).image;
      pMVar2 = TypeInfo__MVCubeModelBase;
      targetCubeModel = unaff_EBX;
      if (((TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth <= *(byte *)&pIVar9[4].nameNoExt) &&
         (*(MVCubeModelBase__Class **)
           ((pIVar9[2].typeCount - 4) + (uint)(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth * 4
           ) == TypeInfo__MVCubeModelBase)) {
        pcVar10 = (unaff_EBX->_0).name;
        goto code_?;
      }
      goto code_?;
    }
    pcVar10 = (char *)0xffffffff;
code_?:
    (this->fields).targetCubeModelId = (int32_t)pcVar10;
    this_00 = (e->fields).selectionController;
    if (this_00 == (SelectionController *)0x0) goto code_?;
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelBase);
      cRam_? = '\x01';
    }
    if (((this->fields).targetCubeModelId == -1) ||
       (pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
       pMVar11 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar3 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar11,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if ((pMVar3 != (MVWorldObjectClient *)0x0) &&
       ((targetCubeModel = TypeInfo__MVCubeModelBase,
        (pMVar3->klass->_1).typeHierarchyDepth < (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth
        || ((MVCubeModelBase__Class *)
            (pMVar3->klass->_1).typeHierarchy
            [(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth - 1] != TypeInfo__MVCubeModelBase)))
       ) goto code_?;
    unaff_EBX = TypeInfo__MVCubeModelBase;
    if ((pMVar3 == (MVWorldObjectClient *)0x0) || (iVar12 = pMVar3[1].fields._.id, iVar12 == 0))
    goto code_?;
    pIVar13 = (IModelingConstraint *)
              (**(code **)(iVar12 + 0xc))
                        (*(undefined4 *)(iVar12 + 0x20),*(undefined4 *)(iVar12 + 0x14));
    (this->fields).constraint = pIVar13;
    func_?(&(this->fields).constraint,pIVar13);
    pGVar7 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    unaff_EBX = (MVCubeModelBase__Class *)0x0;
    if (pGVar7 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar7,StringLiteral_ConstrainVisualizer,(MethodInfo *)0x0);
    pCVar14 = (ConstraintVisualizer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar7,
                         ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                        );
    (this->fields).constraintVisualizer = pCVar14;
    func_?(&(this->fields).constraintVisualizer,pCVar14);
    unaff_EBX = (MVCubeModelBase__Class *)(this->fields).constraintVisualizer;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelBase);
      cRam_? = '\x01';
    }
    if ((this->fields).targetCubeModelId == -1) {
      targetCubeModel = (MVCubeModelBase__Class *)0x0;
    }
    else {
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar11 == (MVWorldObjectClientManager *)0x0) goto code_?;
      targetCubeModel =
           (MVCubeModelBase__Class *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar11,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
      if ((targetCubeModel != (MVCubeModelBase__Class *)0x0) &&
         ((pMVar2 = TypeInfo__MVCubeModelBase,
          *(byte *)&(targetCubeModel->_0).image[4].nameNoExt <
          (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth ||
          (*(MVCubeModelBase__Class **)
            (((targetCubeModel->_0).image[2].typeCount - 4) +
            (uint)(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth * 4) !=
           TypeInfo__MVCubeModelBase)))) goto code_?;
    }
    if (unaff_EBX == (MVCubeModelBase__Class *)0x0) goto code_?;
    ConstraintVisualizer::ConstraintVisualizer_Init
              ((ConstraintVisualizer *)unaff_EBX,(MVCubeModelBase *)targetCubeModel,
               (this->fields).constraint,StringLiteral_UIItems,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelBase);
      cRam_? = '\x01';
    }
    if (((this->fields).targetCubeModelId == -1) ||
       (pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
       pMVar11 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar3 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar11,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__MVCubeModelBase;
    if ((pMVar3 != (MVWorldObjectClient *)0x0) &&
       ((targetCubeModel = TypeInfo__MVCubeModelBase,
        (pMVar3->klass->_1).typeHierarchyDepth < (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth
        || ((MVCubeModelBase__Class *)
            (pMVar3->klass->_1).typeHierarchy
            [(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth - 1] != TypeInfo__MVCubeModelBase)))
       ) goto code_?;
    if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
    bVar5 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                      (pMVar3,InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (((this->fields).targetCubeModelId != -1) &&
         (pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
         pMVar11 != (MVWorldObjectClientManager *)0x0)) {
        pMVar3 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar11,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
        unaff_EBX = TypeInfo__MVCubeModelBase;
        if (pMVar3 == (MVWorldObjectClient *)0x0) {
          pMVar3 = (MVWorldObjectClient *)0x0;
        }
        else {
          targetCubeModel = TypeInfo__MVCubeModelBase;
          if (((pMVar3->klass->_1).typeHierarchyDepth <
               (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth) ||
             ((MVCubeModelBase__Class *)
              (pMVar3->klass->_1).typeHierarchy
              [(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth - 1] != TypeInfo__MVCubeModelBase)
             ) goto code_?;
        }
        if (pMVar3 != (MVWorldObjectClient *)0x0) {
          (*(pMVar3->klass->vtable).RemovePreviewBox.methodPtr)
                    (pMVar3,(pMVar3->klass->vtable).RemovePreviewBox.method);
          goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    bVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      unaff_EBX = (MVCubeModelBase__Class *)
                  MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      id = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
      if ((unaff_EBX == (MVCubeModelBase__Class *)0x0) ||
         (pMVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              ((MVWorldObjectClientManager *)unaff_EBX,id,(MethodInfo *)0x0),
         pMVar15 == (MVWorldObject *)0x0)) goto code_?;
      unaff_EBX = (MVCubeModelBase__Class *)pMVar15[1].fields.ownerActorNr;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                ((Transform *)unaff_EBX,0,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelBase);
      cRam_? = '\x01';
    }
    if (((this->fields).targetCubeModelId == -1) ||
       (pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
       pMVar11 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar3 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar11,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if ((pMVar3 == (MVWorldObjectClient *)0x0) ||
       ((targetCubeModel = TypeInfo__MVCubeModelBase,
        (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth <= (pMVar3->klass->_1).typeHierarchyDepth
        && ((MVCubeModelBase__Class *)
            (pMVar3->klass->_1).typeHierarchy
            [(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth - 1] == TypeInfo__MVCubeModelBase)))
       ) {
      unaff_EBX = TypeInfo__MVCubeModelBase;
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        unaff_EBX = (MVCubeModelBase__Class *)(pMVar3->fields).transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                  ((Transform *)unaff_EBX,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVCubeModelBase);
          cRam_? = '\x01';
        }
        if (((this->fields).targetCubeModelId != -1) &&
           (pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
           pMVar11 != (MVWorldObjectClientManager *)0x0)) {
          pMVar3 = (MVWorldObjectClient *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar11,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
          if ((pMVar3 != (MVWorldObjectClient *)0x0) &&
             ((targetCubeModel = TypeInfo__MVCubeModelBase,
              (pMVar3->klass->_1).typeHierarchyDepth <
              (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth ||
              ((MVCubeModelBase__Class *)
               (pMVar3->klass->_1).typeHierarchy
               [(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth - 1] != TypeInfo__MVCubeModelBase
              )))) goto code_?;
          unaff_EBX = TypeInfo__MVCubeModelBase;
          if (pMVar3 != (MVWorldObjectClient *)0x0) {
            DrawPlane::DrawPlane_DrawPlaneToModel((pMVar3->fields).gameObject,(MethodInfo *)0x0);
            unaff_EBX = (MVCubeModelBase__Class *)(e->fields).cubeModelingStateMachine;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((this->fields).targetCubeModelId == -1) {
              targetCubeModel = (MVCubeModelBase__Class *)0x0;
            }
            else {
              pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar11 == (MVWorldObjectClientManager *)0x0) goto code_?;
              targetCubeModel =
                   (MVCubeModelBase__Class *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar11,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
              if ((targetCubeModel != (MVCubeModelBase__Class *)0x0) &&
                 ((pMVar2 = TypeInfo__MVCubeModelBase,
                  *(byte *)&(targetCubeModel->_0).image[4].nameNoExt <
                  (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth ||
                  (*(MVCubeModelBase__Class **)
                    (((targetCubeModel->_0).image[2].typeCount - 4) +
                    (uint)(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth * 4) !=
                   TypeInfo__MVCubeModelBase)))) goto code_?;
            }
            if (unaff_EBX != (MVCubeModelBase__Class *)0x0) {
              CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                        ((CubeModelingStateMachine *)unaff_EBX,(MVCubeModelBase *)targetCubeModel,
                         (this->fields).constraint,(MethodInfo *)0x0);
              pMVar16 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (pMVar16 != (MainCameraManager *)0x0) {
                unaff_EBX = (MVCubeModelBase__Class *)
                            MainCameraManager::MainCameraManager_get_CurrentCamera
                                      (pMVar16,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((this->fields).targetCubeModelId == -1) {
code_?:
                  this._0_1_ = 0;
                  this._1_1_ = 0;
                  this._2_1_ = 0;
                  this._3_1_ = 0;
                }
                else {
                  pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (pMVar11 == (MVWorldObjectClientManager *)0x0) goto code_?;
                  this = (ESCubeEdit *)
                         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                   (pMVar11,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
                  if ((ObscuredByte)this == (ObscuredByte)0x0) goto code_?;
                  pMVar2 = TypeInfo__MVCubeModelBase;
                  if ((*(byte *)(*(int *)this + 0xb4) <
                       (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth) ||
                     (*(MVCubeModelBase__Class **)
                       (*(int *)(*(int *)this + 100) + -4 +
                       (uint)(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth * 4) !=
                      TypeInfo__MVCubeModelBase)) goto code_?;
                }
                unaff_ESI.currentCryptoKey = 0;
                unaff_ESI.hiddenValue = 0;
                unaff_ESI.fakeValue = 0;
                unaff_ESI.inited = 0;
                if (unaff_EBX != (MVCubeModelBase__Class *)0x0) {
                  pCVar17 = (CubeModelingStateMachine__Class *)(unaff_EBX->_0).image;
                  (*(code *)pCVar17[1]._0.fields)
                            (unaff_EBX,this,0x40000000,0,0,0,0,pCVar17[1]._0.events);
                  pMVar16 = (e->fields).weCamera;
                  if (pMVar16 != (MainCameraManager *)0x0) {
                    MainCameraManager::MainCameraManager_set_BlueModeEnabled
                              (pMVar16,1,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(pMVar3,targetCubeModel);
  pMVar2 = extraout_EDX_01;
code_?:
  func_?(this,pMVar2);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
        (*(pCVar3->klass->vtable).Update.methodPtr)(pCVar3,(pCVar3->klass->vtable).Update.method);
        pMVar1 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
        if (pMVar1 != (MVCubeModelBase *)0x0) {
          bVar2 = MVCubeModelBase::MVCubeModelBase_get_ContainsCubes(pMVar1,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_ParentGroup_was_null,(MethodInfo *)0x0);
        EditorStateMachine::EditorStateMachine_ExitGroupToRoot(this_00,(MethodInfo *)0x0);
        return;
      }
      for (pMVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroup
                              (this_00,(MethodInfo *)0x0); pMVar5 != (MVGroup *)0x0;
          pMVar5 = (pMVar5->fields)._.group) {
        cVar6 = (*(pMVar5->klass->vtable).OnExitObject.methodPtr)
                          (pMVar5,this_00,(pMVar5->klass->vtable).OnExitObject.method);
        if (cVar6 != '\0') {
          return;
        }
        if ((pMVar5->fields)._.group == (MVGroup *)0x0) {
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
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
      (*(pMVar2->klass->vtable).AddPreviewBox.methodPtr)();
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
        ((TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth <=
         (this_01->klass->_1).typeHierarchyDepth)) &&
       ((this_01->klass->_1).typeHierarchy
        [(TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth - 1] ==
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
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
  if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    pNVar1 = this_00;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__ESCubeEdit__Exit__,(MethodInfo *)0x0);
    if (handler != (IHandleCubeModelEdit *)0x0) {
      pIVar2 = handler->klass;
      uVar3 = 0;
      uVar4 = (pIVar2->_1).interface_offsets_count;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__IHandleCubeModelEdit) {
            pVVar5 = &(handler->klass->vtable).Open + handler->klass->interfaceOffsets[uVar3].offset
            ;
            (*pVVar5->methodPtr)(handler,pNVar1,pVVar5->method,pIVar2,0);
            return;
          }
          uVar3 = uVar3 + 1;
          this_00 = pNVar1;
        } while (uVar3 < uVar4);
      }
      puVar6 = (undefined4 *)func_?(handler,TypeInfo__IHandleCubeModelEdit,0);
      (*(code *)*puVar6)(handler,this_00,puVar6[1]);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    if (((TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth <=
         (pMVar1->klass->_1).typeHierarchyDepth) &&
       ((MVCubeModelBase__Class *)
        (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth - 1] ==
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

