
/* Void CreateConstraint() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_CreateConstraint
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&StringLiteral_ConstrainVisualizer);
    func_?(&StringLiteral_UIItems);
    cRam_? = '\x01';
  }
  this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (this_00,StringLiteral_ConstrainVisualizer,(MethodInfo *)0x0);
    pCVar1 = (ConstraintVisualizer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (this_00,
                        ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                       );
    (this->fields).constraintVisualizer = pCVar1;
    ppCVar2 = &(this->fields).constraintVisualizer;
    func_?(ppCVar2,&stack0xfffffffc,&UNK_?,ppCVar2,pCVar1);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean DoReset() */

bool Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_DoReset
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(0xbf08);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).resettingBookkeeping;
  if (pCVar1 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
    iVar2 = WaitForTicksLocal::WaitForTicksLocal_Diff
                      ((pCVar1->fields).resettingBeginTime,(MethodInfo *)0x0);
    if (iVar2 <= (pCVar1->fields).resettingDelay) {
      return 0;
    }
    pCVar1 = (this->fields).resettingBookkeeping;
    if (pCVar1 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      (pCVar1->fields).resettingDelay = 0;
      this_00 = (this->fields).CMSM;
      if (this_00 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                  (this_00,1,(MethodInfo *)0x0);
        pEVar3 = (this->fields).cubeModelWrapper;
        if ((pEVar3 != (EditableCubeModelWrapper *)0x0) &&
           (pMVar4 = (pEVar3->fields).cubeModelBase, pMVar4 != (MVCubeModelInstance *)0x0)) {
          pCVar5 = MVCubeModelBase::MVCubeModelBase_GetCube
                             ((MVCubeModelBase *)pMVar4,(this->fields).zeroPos,(MethodInfo *)0x0);
          if ((pCVar5 != (Cube *)0x0) &&
             (pBVar6 = (pCVar5->fields)._.faceMaterials, pBVar6 != (Byte__Array *)0x0)) {
            if (pBVar6->max_length == 0) {
              func_?();
            }
            else {
              pEVar3 = (this->fields).cubeModelWrapper;
              if ((pEVar3 != (EditableCubeModelWrapper *)0x0) &&
                 (pMVar4 = (pEVar3->fields).cubeModelBase, pMVar4 != (MVCubeModelInstance *)0x0))
              {
                MVCubeModelBase::MVCubeModelBase_RemoveCube
                          ((MVCubeModelBase *)pMVar4,(this->fields).zeroPos,(MethodInfo *)0x0);
                x = -1;
                do {
                  y = -1;
                  do {
                    z = -1;
                    do {
                      pEVar3 = (this->fields).cubeModelWrapper;
                      if (pEVar3 == (EditableCubeModelWrapper *)0x0) goto code_?;
                      this_01 = (pEVar3->fields).cubeModelBase;
                      uVar7 = 0;
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                ((IntVector *)&stack0xffffffec,x,y,z,(MethodInfo *)0x0);
                      if (this_01 == (MVCubeModelInstance *)0x0) goto code_?;
                      pos_00.y = 0;
                      pos_00.z = 0;
                      pos_00.x = uVar7;
                      MVCubeModelBase::MVCubeModelBase_RemoveCube
                                ((MVCubeModelBase *)this_01,pos_00,(MethodInfo *)0x0);
                      material = (uint8_t)pMVar4;
                      z = z + 1;
                    } while (z < 2);
                    y = y + 1;
                  } while (y < 2);
                  x = x + 1;
                } while (x < 2);
                pEVar3 = (this->fields).cubeModelWrapper;
                if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
                  pMVar4 = (pEVar3->fields).cubeModelBase;
                  uVar8._0_2_ = (this->fields).zeroPos.x;
                  uVar8._2_2_ = (this->fields).zeroPos.y;
                  iVar9 = (this->fields).zeroPos.z;
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  corners = MVWorldObject.dll::MV::WorldObject::CubeBase::
                            CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
                  }
                  pBVar6 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                           CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Cube);
                  }
                  faceMaterials = Cube::Cube_CreateMaterialArray(material,(MethodInfo *)0x0);
                  pCVar5 = (Cube *)func_?(TypeInfo__Cube);
                  if (pCVar5 != (Cube *)0x0) {
                    Cube::Cube__ctor(pCVar5,pBVar6,faceMaterials,(MethodInfo *)0x0);
                    if (pMVar4 != (MVCubeModelInstance *)0x0) {
                      pos.z = iVar9;
                      pos.x = (short)uVar8;
                      pos.y = (short)((uint)uVar8 >> 0x10);
                      MVCubeModelBase::MVCubeModelBase_AddCube
                                ((MVCubeModelBase *)pMVar4,pos,(CubeBase *)pCVar5,(MethodInfo *)0x0
                                );
                      return 1;
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
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Enter
               (CEEditCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(0xf95c);
    func_?(&
                    MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(0xc);
    func_?(&TypeInfo__CubeModelTool);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData);
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleCubeEditTutorial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_ESEditCubeTutorial_must_not_be_e);
    cRam_? = '\x01';
  }
  (this->fields).exiting = 0;
  (this->fields).hasExited = 0;
  if (e == (EditorStateMachine *)0x0) goto code_?;
  pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_ESEditCubeTutorial_must_not_be_e,(MethodInfo *)0x0);
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    return;
  }
  pDVar2 = CEEditCubeTutorial_GetFirstTimeEventCheck(this,(MethodInfo *)0x0);
  (this->fields).firstTimeEventChangeCheck = pDVar2;
  func_?(&(this->fields).firstTimeEventChangeCheck,pDVar2);
  pMVar3 = (MVCubeModelInstance *)
           EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar3 == (MVCubeModelInstance *)0x0) {
    (this->fields).selectedInstance = (MVCubeModelInstance *)0x0;
  }
  else {
    if (((pMVar3->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
       ((MVCubeModelInstance__Class *)
        (pMVar3->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar5 = (MVCubeModelInstance *)0x0;
    if (bVar4) {
      pMVar5 = pMVar3;
    }
    (this->fields).selectedInstance = pMVar5;
  }
  func_?();
  pMVar6 = (MVCubeModelBase__Class *)
            EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar6 == (MVCubeModelBase__Class *)0x0) {
    pcVar7 = (char *)0xffffffff;
code_?:
    (this->fields).targetCubeModelId = (int32_t)pcVar7;
    pCVar8 = (e->fields).cubeModelingStateMachine;
    (this->fields).CMSM = pCVar8;
    func_?(&(this->fields).CMSM,pCVar8);
    pAVar9 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
    this_02 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?((short)TypeInfo__System__Action<int,_EditCubeChange>);
    unaff_EBX = (MVCubeModelBase__Class *)0x0;
    if (this_02 == (UnityAction_2_System_Int32_System_Int32_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_02,(Object *)this,
               MethodInfo__CEEditCubeTutorial__OnEditCubeChange_int__EditCubeChange_,
               (MethodInfo *)0x0);
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar9,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar10 == (Delegate *)0x0) {
      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange =
           (Action_2_Int32_EditCubeChange_ *)0x0;
    }
    else {
      pAVar9 = (Action_2_Int32_EditCubeChange_ *)func_?();
      if (pAVar9 == (Action_2_Int32_EditCubeChange_ *)0x0) goto code_?;
      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar9;
      iVar11 = func_?();
      if (iVar11 == 0) goto code_?;
    }
    func_?();
    unaff_EBX = (MVCubeModelBase__Class *)func_?();
    if (unaff_EBX == (MVCubeModelBase__Class *)0x0) goto code_?;
    mscorlib.dll::System::Action`2[Object,Int32Enum]::Action_2_Object_Int32Enum___ctor
              ((Action_2_Object_Int32Enum_ *)unaff_EBX,(Object *)this,
               MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
               ,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)unaff_EBX,(MethodInfo *)0x0);
    if ((this->fields).bordersExpanded == 0) {
      pMVar3 = (this->fields).selectedInstance;
      uVar12._0_2_ = 0;
      uVar12._2_2_ = 0;
      iVar13 = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffec,-1,-1,-1,(MethodInfo *)0x0);
      uVar14._0_2_ = 0;
      uVar14._2_2_ = 0;
      iVar15 = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xfffffff4,1,1,1,(MethodInfo *)0x0);
      unaff_EBX = (MVCubeModelBase__Class *)
                  func_?((char)TypeInfo__EditableCubeModelWrapper);
      if (unaff_EBX == (MVCubeModelBase__Class *)0x0) goto code_?;
      min.z._0_1_ = (char)iVar13;
      min.x = (int16_t)uVar12;
      min.y = SUB42(uVar12,2);
      min.z._1_1_ = (char)((ushort)iVar13 >> 8);
      max.z = iVar15;
      max.x = (int16_t)uVar14;
      max.y = SUB42(uVar14,2);
      EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                ((EditableCubeModelWrapper *)unaff_EBX,pMVar3,min,max,0x1b,(MethodInfo *)0x0);
      (this->fields).cubeModelWrapper = (EditableCubeModelWrapper *)unaff_EBX;
      func_?(&(this->fields).cubeModelWrapper,unaff_EBX);
    }
    DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
    pGVar16 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar16 == (GameEventManager *)0x0) goto code_?;
    this_00 = (pGVar16->fields).AvatarCommandsBuildMode;
    editorEvent = (this->fields)._.stateType;
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
    value = (pMVar1->fields)._.id;
    unaff_EBX = (MVCubeModelBase__Class *)
                func_?(TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData);
    if ((unaff_EBX == (MVCubeModelBase__Class *)0x0) ||
       (SubscribableVariableBase`1[System::Int32Enum]::
        SubscribableVariableBase_1_System_Int32Enum___ctor
                  ((SubscribableVariableBase_1_System_Int32Enum_ *)unaff_EBX,value,(MethodInfo *)0x0
                  ), this_00 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0))
    goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager::
    GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
              (this_00,editorEvent,(Object *)unaff_EBX,(MethodInfo *)0x0);
    root = (e->fields).gameObject;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>
                        );
    unaff_EBX = (MVCubeModelBase__Class *)0x0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__CEEditCubeTutorial___Enter_b__23_0_UnityEngine__EventSystems__IHandleCubeEditTutorial__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleCubeEditTutorial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>_
              );
    (this->fields)._.tintedWo = (WorldObjectClientRef *)0x0;
    func_?(&(this->fields)._.tintedWo);
    unaff_EBX = (MVCubeModelBase__Class *)(this->fields).constraintVisualizer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)unaff_EBX,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar17 != 0) {
      CEEditCubeTutorial_CreateConstraint(this,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelBase);
      cRam_? = '\x01';
    }
    if (((this->fields).targetCubeModelId == -1) ||
       (pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
       pMVar18 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar19 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar18,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__MVCubeModelBase;
    if (pMVar19 == (MVWorldObject *)0x0) {
      pMVar19 = (MVWorldObject *)0x0;
code_?:
      if (pMVar19 == (MVWorldObject *)0x0) goto code_?;
      (*(code *)pMVar19->klass[1].vtable.PartialUpdateWOData.method)(pMVar19);
      bVar17 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
      if (bVar17 == 0) {
        unaff_EBX = (MVCubeModelBase__Class *)
                    MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        iVar20 = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
        if ((unaff_EBX == (MVCubeModelBase__Class *)0x0) ||
           (pMVar19 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                ((MVWorldObjectClientManager *)unaff_EBX,iVar20,(MethodInfo *)0x0),
           pMVar19 == (MVWorldObject *)0x0)) goto code_?;
        unaff_EBX = (MVCubeModelBase__Class *)pMVar19[1].fields.ownerActorNr;
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
         (pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
         pMVar18 == (MVWorldObjectClientManager *)0x0)) goto code_?;
      pMVar19 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar18,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
      if ((pMVar19 != (MVWorldObject *)0x0) &&
         ((pMVar6 = TypeInfo__MVCubeModelBase,
          (pMVar19->klass->_1).typeHierarchyDepth <
          (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth ||
          ((MVCubeModelBase__Class *)
           (pMVar19->klass->_1).typeHierarchy
           [(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth - 1] != TypeInfo__MVCubeModelBase))))
      goto code_?;
      unaff_EBX = TypeInfo__MVCubeModelBase;
      if (pMVar19 == (MVWorldObject *)0x0) goto code_?;
      t = (Transform *)pMVar19[1].fields.ownerActorNr;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
      unaff_EBX = (MVCubeModelBase__Class *)(this->fields).CMSM;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVCubeModelBase);
        cRam_? = '\x01';
      }
      if ((this->fields).targetCubeModelId == -1) {
        pMVar6 = (MVCubeModelBase__Class *)0x0;
      }
      else {
        pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar18 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar6 = (MVCubeModelBase__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar18,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
        if ((pMVar6 != (MVCubeModelBase__Class *)0x0) &&
           ((*(byte *)&(pMVar6->_0).image[4].nameNoExt <
             (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth ||
            (*(MVCubeModelBase__Class **)
              (((pMVar6->_0).image[2].typeCount - 4) +
              (uint)(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth * 4) !=
             TypeInfo__MVCubeModelBase)))) goto code_?;
      }
      if (unaff_EBX == (MVCubeModelBase__Class *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                ((CubeModelingStateMachine *)unaff_EBX,(MVCubeModelBase *)pMVar6,
                 (this->fields).constraint,(MethodInfo *)0x0);
      pMVar21 = (e->fields).weCamera;
      if ((pMVar21 == (MainCameraManager *)0x0) ||
         (pCVar22 = (pMVar21->fields).mainCamera, pCVar22 == (Camera *)0x0)) goto code_?;
      iVar20 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                         (pCVar22,(MethodInfo *)0x0);
      (this->fields).mainCameraDefaultMask = iVar20;
      pMVar21 = (e->fields).weCamera;
      if ((pMVar21 == (MainCameraManager *)0x0) ||
         (pCVar22 = (pMVar21->fields).mainCamera, pCVar22 == (Camera *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar22,0,(MethodInfo *)0x0);
      pMVar21 = (e->fields).weCamera;
      if (pMVar21 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar21,1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVCubeModelBase);
        cRam_? = '\x01';
      }
      if (((this->fields).targetCubeModelId == -1) ||
         (pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
         pMVar18 == (MVWorldObjectClientManager *)0x0)) goto code_?;
      pMVar19 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar18,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
      if ((pMVar19 == (MVWorldObject *)0x0) ||
         ((unaff_EBX = (MVCubeModelBase__Class *)pMVar19->klass, pMVar6 = TypeInfo__MVCubeModelBase
          , (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth <= (unaff_EBX->_1).typeHierarchyDepth
          && ((MVCubeModelBase__Class *)
              (unaff_EBX->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth - 1]
              == TypeInfo__MVCubeModelBase)))) {
        e = (EditorStateMachine *)TypeInfo__MVCubeModelBase;
        if ((pMVar19 == (MVWorldObject *)0x0) ||
           (this_01 = pMVar19[1].fields.inputLinkRefs,
           e = (EditorStateMachine *)TypeInfo__MVCubeModelBase,
           this_01 == (List_1_MV_WorldObject_Link_ *)0x0)) goto code_?;
        pFVar23 = (FirstTimeCubeModelBlinker *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            ((GameObject *)this_01,
                             FirstTimeCubeModelBlinker_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeCubeModelBlinker>__
                            );
        (this->fields).blinker = pFVar23;
        func_?(&(this->fields).blinker);
        e = (EditorStateMachine *)(this->fields).blinker;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar24 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar24 == (PrefabPool *)0x0) goto code_?;
        source = (pPVar24->fields).blinkerDefaultMaterial;
        unaff_EBX = (MVCubeModelBase__Class *)func_?(TypeInfo__UnityEngine__Material);
        if (unaff_EBX == (MVCubeModelBase__Class *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                  ((Material *)unaff_EBX,source,(MethodInfo *)0x0);
        pMVar21 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar21 == (MainCameraManager *)0x0) goto code_?;
        pCVar22 = MainCameraManager::MainCameraManager_get_SecondaryCamera
                            (pMVar21,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVCubeModelBase);
          cRam_? = '\x01';
        }
        if ((this->fields).targetCubeModelId == -1) {
          pMVar6 = (MVCubeModelBase__Class *)0x0;
code_?:
          if ((MVCubeModelBase__Class *)e != (MVCubeModelBase__Class *)0x0) {
            FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_Initialize
                      ((FirstTimeCubeModelBlinker *)e,(Material *)unaff_EBX,pCVar22,
                       (MVCubeModelBase *)pMVar6,(MethodInfo *)0x0);
            pFVar23 = (this->fields).blinker;
            if (pFVar23 != (FirstTimeCubeModelBlinker *)0x0) {
              (pFVar23->fields)._.visible = 1;
              return;
            }
          }
          goto code_?;
        }
        pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar18 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar6 = (MVCubeModelBase__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar18,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
        if ((pMVar6 == (MVCubeModelBase__Class *)0x0) ||
           ((pMVar25 = TypeInfo__MVCubeModelBase,
            (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth <=
            *(byte *)&(pMVar6->_0).image[4].nameNoExt &&
            (*(MVCubeModelBase__Class **)
              (((pMVar6->_0).image[2].typeCount - 4) +
              (uint)(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth * 4) ==
             TypeInfo__MVCubeModelBase)))) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pMVar6 = TypeInfo__MVCubeModelBase;
    if (((TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth <=
         (pMVar19->klass->_1).typeHierarchyDepth) &&
       ((MVCubeModelBase__Class *)
        (pMVar19->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth - 1]
        == TypeInfo__MVCubeModelBase)) goto code_?;
  }
  else {
    pIVar26 = (pMVar6->_0).image;
    if (((TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth <= *(byte *)&pIVar26[4].nameNoExt) &&
       (*(MVCubeModelBase__Class **)
         ((pIVar26[2].typeCount - 4) + (uint)(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth * 4)
        == TypeInfo__MVCubeModelBase)) {
      pcVar7 = (pMVar6->_0).name;
      goto code_?;
    }
code_?:
    unaff_EBX = pMVar6;
    func_?(unaff_EBX,TypeInfo__MVCubeModelBase);
code_?:
    pMVar6 = (MVCubeModelBase__Class *)e;
    func_?();
    pMVar25 = extraout_EDX;
code_?:
    func_?(pMVar6,pMVar25);
    pMVar19 = extraout_EDX_00;
code_?:
    func_?(pMVar19,pMVar6);
    pMVar19 = extraout_EDX_01;
    pMVar6 = unaff_EBX;
  }
code_?:
  func_?(pMVar19,pMVar6);
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Execute
               (CEEditCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EditorEvent);
    func_?(&StringLiteral_Hiding_cursor);
    cRam_? = '\x01';
  }
  this_00 = e;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,(ExceptionArgument__Enum)e,(MethodInfo *)0x0);
  if ((this->fields).exiting == 0) {
    pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
    bVar2 = 1 - (pMVar1 != (MVCubeModelBase *)0x0);
  }
  else {
    bVar2 = 1;
  }
  (this->fields).exiting = bVar2;
  if (bVar2 == 0) {
    if ((this->fields).hasExited != 0) {
      return;
    }
    pCVar3 = (this->fields).resettingBookkeeping;
    if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      if ((((pCVar3->fields).doReset != 0) || ((this->fields).disableCubeModeling != 0)) &&
         (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_visible
                            ((MethodInfo *)0x0), bVar2 != 0)) {
        pCVar3 = (this->fields).resettingBookkeeping;
        if (pCVar3 == (CEEditCubeTutorial_ResettingBookkeeping *)0x0) goto code_?;
        if ((pCVar3->fields).doReset != 0) {
          (pCVar3->fields).doReset = 0;
          (pCVar3->fields).isResetting = 1;
          iVar4 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pCVar3->fields).resettingBeginTime = iVar4;
        }
        pCVar5 = (this->fields).CMSM;
        if (pCVar5 == (CubeModelingStateMachine *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                  (pCVar5,0,(MethodInfo *)0x0);
        (this->fields).disableCubeModeling = 0;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Hiding_cursor,(MethodInfo *)0x0);
      }
      pCVar3 = (this->fields).resettingBookkeeping;
      if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
        if ((pCVar3->fields).isResetting == 0) {
          if ((this->fields).enableCubemodeling == 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0)
            ;
            return;
          }
          if ((this_00 != (EditorStateMachine *)0x0) &&
             (pCVar5 = (this_00->fields).cubeModelingStateMachine,
             pCVar5 != (CubeModelingStateMachine *)0x0)) {
            (*(pCVar5->klass->vtable).Update.methodPtr)
                      (pCVar5,(pCVar5->klass->vtable).Update.method);
            return;
          }
        }
        else {
          bVar2 = CEEditCubeTutorial_DoReset(this,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            return;
          }
          pCVar3 = (this->fields).resettingBookkeeping;
          if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
            (pCVar3->fields).isResetting = 0;
            return;
          }
        }
      }
    }
  }
  else {
    e = (EditorStateMachine *)0x39;
    value = (Object *)func_?(TypeInfo__EditorEvent,&e);
    if (this_00 != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
      (this->fields).hasExited = 1;
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Exit
               (CEEditCubeTutorial *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(&MethodInfo__CEEditCubeTutorial__OnEditCubeChange_int__EditCubeChange_);
    func_?(&
                    MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&TypeInfo__CubeModelTool);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__CEEditCubeTutorial____c__DisplayClass28_0___Exit_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CEEditCubeTutorial____c__DisplayClass28_0);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  source = (Action_2_Int32_EditCubeChange___Class *)
           func_?(TypeInfo__CEEditCubeTutorial____c__DisplayClass28_0);
  if (source != (Action_2_Int32_EditCubeChange___Class *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)source,ExceptionArgument__Enum_obj,unaff_EDI);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,(ExceptionArgument__Enum)esm,(MethodInfo *)0x0);
    if (((esm != (EditorStateMachine *)0x0) &&
        (pMVar1 = (esm->fields).weCamera, pMVar1 != (MainCameraManager *)0x0)) &&
       (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (this_00,(this->fields).mainCameraDefaultMask,(MethodInfo *)0x0);
      (((Action_2_Int32_EditCubeChange___Fields *)&(source->_0).name)->_)._.method_ptr =
           ::StringLiteral__;
      func_?((Action_2_Int32_EditCubeChange___Fields *)&(source->_0).name,::StringLiteral__
                     );
      pMVar2 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar2 != (MVCubeModelBase *)0x0) {
        cVar3 = (*(pMVar2->klass->vtable).Delete.methodPtr)
                          (pMVar2,(pMVar2->klass->vtable).Delete.method,
                           (Action_2_Int32_EditCubeChange___Fields *)&(source->_0).name);
        if (cVar3 == '\0') {
          root = (esm->fields).gameObject;
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                              );
          if (callbackFunction == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)source
                     ,
                     MethodInfo__CEEditCubeTutorial____c__DisplayClass28_0___Exit_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
        }
        this_01 = (this->fields).constraintVisualizer;
        if (this_01 != (ConstraintVisualizer *)0x0) {
          source = (Action_2_Int32_EditCubeChange___Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_01,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)source,(MethodInfo *)0x0);
          pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar4 != (GameEventManager *)0x0) &&
             (this_02 = (pGVar4->fields).AvatarCommandsBuildMode,
             this_02 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
            GameEventManager+AvatarCommandsBuildModeManager::
            GameEventManager_AvatarCommandsBuildModeManager_ExitBuildStateEvent
                      (this_02,(this->fields)._.stateType,(Object *)0x0,(MethodInfo *)0x0);
            pCVar5 = (esm->fields).cubeModelingStateMachine;
            if (pCVar5 != (CubeModelingStateMachine *)0x0) {
              CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
                        (pCVar5,(MethodInfo *)0x0);
              pCVar5 = (esm->fields).cubeModelingStateMachine;
              if (pCVar5 != (CubeModelingStateMachine *)0x0) {
                CubeModelingStateMachine::CubeModelingStateMachine_EndEdit(pCVar5,(MethodInfo *)0x0)
                ;
                (this->fields).targetCubeModelId = -1;
                (this->fields).selectedInstance = (MVCubeModelInstance *)0x0;
                func_?(&(this->fields).selectedInstance,0);
                EditorStateMachine::EditorStateMachine_DeSelectAll(esm,(MethodInfo *)0x0);
                this_03 = (Action_2_Object_Int32Enum_ *)
                          func_?(
                                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                                         );
                if (this_03 != (Action_2_Object_Int32Enum_ *)0x0) {
                  mscorlib.dll::System::Action`2[Object,Int32Enum]::Action_2_Object_Int32Enum___ctor
                            (this_03,(Object *)this,
                             MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                             ,(MethodInfo *)0x0);
                  FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
                            ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                              *)this_03,(MethodInfo *)0x0);
                  source = (Action_2_Int32_EditCubeChange___Class *)
                           TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
                  this_04 = (UnityAction_2_System_Int32_System_Int32_ *)
                            func_?(TypeInfo__System__Action<int,_EditCubeChange>);
                  if (this_04 != (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Int32,System::Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                              (this_04,(Object *)this,
                               MethodInfo__CEEditCubeTutorial__OnEditCubeChange_int__EditCubeChange_
                               ,(MethodInfo *)0x0);
                    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                                       ((Delegate *)source,(Delegate *)this_04,(MethodInfo *)0x0);
                    source = TypeInfo__System__Action<int,_EditCubeChange>;
                    if (pDVar6 == (Delegate *)0x0) {
                      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange =
                           (Action_2_Int32_EditCubeChange_ *)0x0;
                      pAStack7 = (Action_2_Int32_EditCubeChange___Class *)0x0;
code_?:
                      func_?();
                      (this->fields).blinker = (FirstTimeCubeModelBlinker *)0x0;
                      func_?();
                      return;
                    }
                    pAStack7 = TypeInfo__System__Action<int,_EditCubeChange>;
                    pAVar8 = (Action_2_Int32_EditCubeChange_ *)func_?();
                    if (pAVar8 != (Action_2_Int32_EditCubeChange_ *)0x0) {
                      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar8;
                      source = TypeInfo__System__Action<int,_EditCubeChange>;
                      pAStack7 = TypeInfo__System__Action<int,_EditCubeChange>;
                      pAStack7 = (Action_2_Int32_EditCubeChange___Class *)func_?();
                      if (pAStack7 != (Action_2_Int32_EditCubeChange___Class *)0x0)
                      goto code_?;
                    }
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
code_?:
  func_?();
code_?:
  pAStack7 = source;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Dictionary`2[EditCubeChange,System.Boolean] GetFirstTimeEventCheck() */

Dictionary_2_EditCubeChange_System_Boolean_ *
Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_GetFirstTimeEventCheck
          (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>);
    cRam_? = '\x01';
  }
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryExtrudingCube,(MethodInfo *)0x0);
  bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryTiltingCube,(MethodInfo *)0x0);
  bVar3 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryTiltingCorner,(MethodInfo *)0x0);
  bVar4 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryAddingCube,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x3,(Object *)(uint)(bVar1 == 0),
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x2,(Object *)(uint)(bVar2 == 0),
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x1,(Object *)(uint)(bVar3 == 0),
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x5,(Object *)(uint)(bVar4 == 0),
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    return (Dictionary_2_EditCubeChange_System_Boolean_ *)this_00;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pDVar6 = (Dictionary_2_EditCubeChange_System_Boolean_ *)(*pcVar5)();
  return pDVar6;
}


/* Void HandleCubeModelingEnabling(FirstTimeEvent) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_HandleCubeModelingEnabling
               (CEEditCubeTutorial *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEEditCubeTutorial);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__CEEditCubeTutorial->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CEEditCubeTutorial);
  }
  pHVar1 = (HashSet_1_System_Int32Enum_ *)
           TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents;
  if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (pHVar1,firstTimeEvent,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                      );
    if (bVar2 != 0) {
      this_00 = (this->fields).CMSM;
      (this->fields).disableCubeModeling = 0;
      (this->fields).enableCubemodeling = 1;
      if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                (this_00,1,(MethodInfo *)0x0);
    }
    if ((TypeInfo__CEEditCubeTutorial->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CEEditCubeTutorial);
    }
    pHVar1 = (HashSet_1_System_Int32Enum_ *)
             TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents;
    if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (pHVar1,firstTimeEvent,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                        );
      if (bVar2 != 0) {
        (this->fields).disableCubeModeling = 1;
        (this->fields).enableCubemodeling = 0;
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEditCubeChange(Int32, EditCubeChange) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_OnEditCubeChange
               (CEEditCubeTutorial *this,int32_t cubeCount,EditCubeChange__Enum editCubeChange,
               MethodInfo *method)

{
  if ((this->fields).bordersExpanded == 0) {
    this_00 = (this->fields).resettingBookkeeping;
    if (this_00 == (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    CEEditCubeTutorial+ResettingBookkeeping::
    CEEditCubeTutorial_ResettingBookkeeping_InitializeResetting(this_00,400,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetFirstTimeEventsHappened(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetFirstTimeEventsHappened
               (CEEditCubeTutorial *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEEditCubeTutorial);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__GetEnumerator__
                   );
    func_?(0x41e4);
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(0x4fc0);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<EditCubeChange,_bool>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<EditCubeChange,_bool>__get_Value__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  auStack_6._12_4_ = (Object *)0x0;
  uStack_7._0_1_ = 0;
  uStack_7._1_3_ = 0;
  uStack_7._4_4_ = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEEditCubeTutorial);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__CEEditCubeTutorial->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CEEditCubeTutorial);
  }
  pHVar8 = (HashSet_1_System_Int32Enum_ *)
           TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents;
  if (pHVar8 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (pHVar8,firstTimeEvent,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                      );
    if (bVar9 != 0) {
      this_00 = (this->fields).CMSM;
      (this->fields).disableCubeModeling = 0;
      (this->fields).enableCubemodeling = 1;
      if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                (this_00,1,(MethodInfo *)0x0);
    }
    if ((TypeInfo__CEEditCubeTutorial->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CEEditCubeTutorial);
    }
    pHVar8 = (HashSet_1_System_Int32Enum_ *)
             TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents;
    if (pHVar8 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (pHVar8,firstTimeEvent,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                        );
      if (bVar9 != 0) {
        (this->fields).disableCubeModeling = 1;
        (this->fields).enableCubemodeling = 0;
      }
      if ((TypeInfo__CEEditCubeTutorial->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pHVar8 = (HashSet_1_System_Int32Enum_ *)
               TypeInfo__CEEditCubeTutorial->static_fields->successEvents;
      if (pHVar8 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (pHVar8,firstTimeEvent,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                          );
        if (bVar9 != 0) {
          this_01 = (this->fields).blinker;
          if (this_01 == (FirstTimeCubeModelBlinker *)0x0) goto code_?;
          BlinkerBase::BlinkerBase_StartBlinking
                    ((BlinkerBase *)this_01,BlinkType__Enum_OnBoardingCubeModelSuccess,2.0,
                     (MethodInfo *)0x0);
        }
        this_02 = (Dictionary_2_System_Object_System_Object_ *)
                  (this->fields).firstTimeEventChangeCheck;
        pDVar10 = CEEditCubeTutorial_GetFirstTimeEventCheck(this,(MethodInfo *)0x0);
        (this->fields).firstTimeEventChangeCheck = pDVar10;
        func_?(&(this->fields).firstTimeEventChangeCheck,pDVar10);
        bVar11 = true;
        if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffffa0,this_02,
                               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__GetEnumerator__
                              );
          uStack_13 = 0;
          auStack_6._0_4_ = pDVar12->_dictionary;
          auStack_6._4_4_ = pDVar12->_version;
          auStack_6._8_4_ = pDVar12->_index;
          auStack_6._12_4_ = (pDVar12->_current).key;
          uStack_7 = *(undefined8 *)&(pDVar12->_current).value;
          uStack_1 = 1;
          pOStack_14 = (Object *)auStack_6;
          while( true ) {
            bVar9 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Byte]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Byte__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Byte_ *)
                               auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__MoveNext__
                              );
            uVar15 = uStack_7;
            if (bVar9 == 0) break;
            IStack_16.x = (int16_t)uStack_7;
            IStack_16.y = uStack_7._2_2_;
            pDVar10 = (this->fields).firstTimeEventChangeCheck;
            pOStack_17 = (Object *)auStack_6._12_4_;
            uStack_7 = uVar15;
            if (pDVar10 == (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0) goto code_?;
            uVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Byte]::Dictionary_2_System_Int32Enum_System_Byte__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar10,
                               auStack_6._12_4_,
                               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__get_Item_EditCubeChange_
                              );
            if (uVar18 != (uint8_t)IStack_16.x) {
              in_stack_19 = (MethodInfo *)(this->fields).resettingBookkeeping;
              if (in_stack_19 == (MethodInfo *)0x0) goto code_?;
              CEEditCubeTutorial+ResettingBookkeeping::
              CEEditCubeTutorial_ResettingBookkeeping_InitializeResetting
                        ((CEEditCubeTutorial_ResettingBookkeeping *)in_stack_19,2000,
                         (MethodInfo *)0x0);
            }
            pDVar10 = (this->fields).firstTimeEventChangeCheck;
            if (pDVar10 == (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0) goto code_?;
            uVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Byte]::Dictionary_2_System_Int32Enum_System_Byte__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar10,
                               (Int32Enum__Enum)pOStack_17,
                               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__get_Item_EditCubeChange_
                              );
            if (uVar18 != 0) {
              bVar11 = false;
            }
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)auStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__Dispose__
                     ,in_stack_19);
          uStack_1 = 0xffffffff;
          if (bVar11) {
            if ((this->fields).bordersExpanded == 0) {
              cubeModelBase = (this->fields).selectedInstance;
              IStack_16.x = 0;
              IStack_16.y = 0;
              IStack_16.z = 0;
              (this->fields).bordersExpanded = 1;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        (&IStack_16,-0xf,-0xf,-0xf,(MethodInfo *)0x0);
              pOStack_17 = (Object *)0x0;
              iStack_20 = 0;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        ((IntVector *)&pOStack_17,0xf,0xf,0xf,(MethodInfo *)0x0);
              this_03 = (EditableCubeModelWrapper *)func_?();
              if (this_03 != (EditableCubeModelWrapper *)0x0) {
                min.z = IStack_16.z;
                min.x = IStack_16.x;
                min.y = IStack_16.y;
                max.z = iStack_20;
                max._0_4_ = pOStack_17;
                EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                          (this_03,cubeModelBase,min,max,1,(MethodInfo *)0x0);
                (this->fields).cubeModelWrapper = this_03;
                func_?(&(this->fields).cubeModelWrapper,this_03);
                CEEditCubeTutorial_SetFocus(this,(this->fields).multiCubeDistance,(MethodInfo *)0x0)
                ;
                this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (this_04 != (MainCameraManager *)0x0) {
                  MainCameraManager::MainCameraManager_StartTransitionCam
                            (this_04,1.0,0,(MethodInfo *)0x0);
                  pCVar21 = (this->fields).constraintVisualizer;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                    ((Object_1 *)pCVar21,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar9 != 0) {
                    pCVar21 = (this->fields).constraintVisualizer;
                    if (pCVar21 == (ConstraintVisualizer *)0x0) goto code_?;
                    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pCVar21,(MethodInfo *)0x0);
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                              ((Object_1 *)obj,(MethodInfo *)0x0);
                  }
                  CEEditCubeTutorial_CreateConstraint(this,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
              }
              goto code_?;
            }
          }
          else if ((this->fields).bordersExpanded == 0) {
            CEEditCubeTutorial_SetFocus(this,(this->fields).oneCubeDistance,(MethodInfo *)0x0);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
code_?:
  uVar22 = func_?();
  func_?(uVar22);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void SetFocus(Single) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetFocus
               (CEEditCubeTutorial *this,float distance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__JetPackCamera);
    cRam_? = '\x01';
  }
  pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if ((pMVar1 != (MVCubeModelBase *)0x0) &&
     (pTVar2 = (pMVar1->fields)._.transform, pTVar2 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
    pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if ((pMVar1 != (MVCubeModelBase *)0x0) &&
       (pTVar2 = (pMVar1->fields)._.transform, pTVar2 != (Transform *)0x0)) {
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
      pVVar4 = &(this->fields).focusOffset;
      fVar5 = pVVar4->y;
      fVar6 = (this->fields).focusOffset.z;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffd8,*pQVar3,*pVVar4,(MethodInfo *)0x0);
      uVar7 = pVVar4->y;
      fVar8 = pVVar4->z;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_00 != (MainCameraManager *)0x0) {
        this_01 = (JetPackCamera *)
                  MainCameraManager::MainCameraManager_get_CurrentCamera(this_00,(MethodInfo *)0x0);
        pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
        if (pMVar1 != (MVCubeModelBase *)0x0) {
          pVVar4 = (Vector3 *)(*(pMVar1->klass->vtable).get_WorldPivot.methodPtr)();
          if (this_01 != (JetPackCamera *)0x0) {
            if (((TypeInfo__JetPackCamera->_1).typeHierarchyDepth <=
                 (this_01->klass->_1).typeHierarchyDepth) &&
               ((this_01->klass->_1).typeHierarchy
                [(TypeInfo__JetPackCamera->_1).typeHierarchyDepth - 1] ==
                (Il2CppClass *)TypeInfo__JetPackCamera)) {
              auVar9._4_4_ = fVar6 + fVar8 * distance;
              auVar9._0_4_ = fVar5 + (float)uVar7 * distance;
              auVar9._8_4_ = 0;
              JetPackCamera::JetPackCamera_FocusOnPointFromAvatarPosition
                        (this_01,*pVVar4,(Vector3)(auVar9 << 0x20),(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetupBlinker() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetupBlinker
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    FirstTimeCubeModelBlinker_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeCubeModelBlinker>__
                   );
    func_?(&TypeInfo__UnityEngine__Material);
    cRam_? = '\x01';
  }
  pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if ((pMVar1 != (MVCubeModelBase *)0x0) &&
     (this_00 = (pMVar1->fields)._.gameObject, this_00 != (GameObject *)0x0)) {
    pFVar2 = (FirstTimeCubeModelBlinker *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (this_00,
                        FirstTimeCubeModelBlinker_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeCubeModelBlinker>__
                       );
    (this->fields).blinker = pFVar2;
    func_?(&(this->fields).blinker,pFVar2);
    pFVar2 = (this->fields).blinker;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      source = (pPVar3->fields).blinkerDefaultMaterial;
      this_01 = (Material *)func_?(TypeInfo__UnityEngine__Material);
      if (this_01 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                  (this_01,source,(MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_02 != (MainCameraManager *)0x0) {
          targetCamera = MainCameraManager::MainCameraManager_get_SecondaryCamera
                                   (this_02,(MethodInfo *)0x0);
          pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
          if (pFVar2 != (FirstTimeCubeModelBlinker *)0x0) {
            FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_Initialize
                      (pFVar2,this_01,targetCamera,pMVar1,(MethodInfo *)0x0);
            pFVar2 = (this->fields).blinker;
            if (pFVar2 != (FirstTimeCubeModelBlinker *)0x0) {
              (pFVar2->fields)._.visible = 1;
              return;
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


/* Void <Enter>b__23_0(IHandleCubeEditTutorial, BaseEventData) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__Enter_b__23_0
               (CEEditCubeTutorial *this,IHandleCubeEditTutorial *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__CEEditCubeTutorial__OnClosed__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IHandleCubeEditTutorial);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    pNVar1 = this_00;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__CEEditCubeTutorial__OnClosed__,(MethodInfo *)0x0);
    if (handler != (IHandleCubeEditTutorial *)0x0) {
      pIVar2 = handler->klass;
      uVar3 = 0;
      uVar4 = (pIVar2->_1).interface_offsets_count;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IHandleCubeEditTutorial) {
            pIVar5 = &handler->klass->vtable + handler->klass->interfaceOffsets[uVar3].offset;
            (*(pIVar5->PushCubeEditCubeTutorialTools).methodPtr)
                      (handler,pNVar1,(pIVar5->PushCubeEditCubeTutorialTools).method,pIVar2,0);
            return;
          }
          uVar3 = uVar3 + 1;
          this_00 = pNVar1;
        } while (uVar3 < uVar4);
      }
      puVar6 = (undefined4 *)
               func_?(handler,TypeInfo__UnityEngine__EventSystems__IHandleCubeEditTutorial,
                               0);
      (*(code *)*puVar6)(handler,this_00,puVar6[1]);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* CEEditCubeTutorial() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEEditCubeTutorial);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_UnityEngine_Vector3_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>
                          );
  if (pHVar1 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x7a,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x79,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x7d,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x78,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x8d,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x8e,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x8f,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    TypeInfo__CEEditCubeTutorial->static_fields->successEvents =
         (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
    func_?();
    pHVar1 = (HashSet_1_UnityEngine_Vector3_ *)func_?();
    if (pHVar1 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (pHVar1,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
                );
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__Add
                ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x8d,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                );
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__Add
                ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x8e,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                );
      TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents =
           (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
      func_?(&TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents,pHVar1
                     );
      pHVar1 = (HashSet_1_UnityEngine_Vector3_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>
                              );
      if (pHVar1 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3___ctor
                  (pHVar1,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
                  );
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Add
                  ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x7c,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Add
                  ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x77,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
        TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents =
             (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
        func_?(&TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents,
                        pHVar1);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CEEditCubeTutorial() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__ctor
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>);
    func_?(&TypeInfo__CEEditCubeTutorial__ResettingBookkeeping);
    cRam_? = '\x01';
  }
  (this->fields).targetCubeModelId = -1;
  (this->fields).oneCubeDistance = 4.0;
  (this->fields).multiCubeDistance = 16.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).y;
  fVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  method_00 = (pVVar3->upVector).x;
  uVar4 = (pVVar3->upVector).y;
  fStack_5 = (float)uVar4 + fVar1;
  fStack_6 = (pVVar3->upVector).z + fVar2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  puVar7 = (undefined8 *)func_?(&stack0xffffffe0,&stack0xffffffd4,0);
  uVar8 = *puVar7;
  fVar1 = *(float *)(puVar7 + 1);
  (this->fields).focusOffset.x = (float)(int)uVar8;
  (this->fields).focusOffset.y = (float)(int)((ulonglong)uVar8 >> 0x20);
  (this->fields).focusOffset.z = fVar1;
  IStack_9.x = 0;
  IStack_9.y = 0;
  IStack_9.z = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            (&IStack_9,0,0,0,(MethodInfo *)0x0);
  (this->fields).zeroPos.x = IStack_9.x;
  (this->fields).zeroPos.y = IStack_9.y;
  (this->fields).zeroPos.z = IStack_9.z;
  this_00 = (Dictionary_2_EditCubeChange_System_Boolean_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>
                           );
  if (this_00 != (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
              );
    (this->fields).firstTimeEventChangeCheck = this_00;
    func_?();
    value = (CEEditCubeTutorial_ResettingBookkeeping *)func_?();
    if (value != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      (this->fields).resettingBookkeeping = value;
      func_?();
      (this->fields).enableCubemodeling = 1;
      ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVCubeModelBase get_TargetCubeModel() */

MVCubeModelBase *
Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_get_TargetCubeModel
          (CEEditCubeTutorial *this,MethodInfo *method)

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

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_set_TargetCubeModel
               (CEEditCubeTutorial *this,MVCubeModelBase *value,MethodInfo *method)

{
  if (value == (MVCubeModelBase *)0x0) {
    (this->fields).targetCubeModelId = -1;
    return;
  }
  (this->fields).targetCubeModelId = (value->fields)._._.id;
  return;
}

