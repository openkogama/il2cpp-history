
/* Boolean CheckAndExecuteOnClickHandler(EditorStateMachine,
   ESSelection+PickResult`1[WorldObjectClientRef]) */

bool Assembly-CSharp.dll::ESSelection::ESSelection_CheckAndExecuteOnClickHandler
               (ESSelection *this,EditorStateMachine *e,
               ESSelection_PickResult_1_WorldObjectClientRef_ *pick,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  if ((pick != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
     (pWVar1 = (pick->fields).data, pWVar1 != (WorldObjectClientRef *)0x0)) {
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar2 == (Object *)0x0) {
      return 0;
    }
    pWVar1 = (pick->fields).data;
    if (pWVar1 != (WorldObjectClientRef *)0x0) {
      pOVar2 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pOVar2 != (Object *)0x0) {
        bVar3 = (*(code *)pOVar2->klass[3]._0.klass)(pOVar2,e);
        return bVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void DeselectAll(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_DeselectAll
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (e != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
    this_00 = (this->fields).gizmoController;
    if (this_00 != (GizmoController *)0x0) {
      GizmoController::GizmoController_Hide(this_00,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Enter
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (EditorStateMachine *)((ulonglong)in_stack_2 >> 0x20);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   );
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    func_?(&TypeInfo__ISelectionController);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                   );
    func_?(&
                    MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                   );
    func_?(&TypeInfo__ESSelection__PickResult<LinkObjectBase>);
    func_?(&TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_FromTranslateState);
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClient *)0x0) {
      bVar4 = false;
    }
    else {
      pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
      bVar4 = false;
      if (((pMVar3->fields).interactionFlags & 8) != 0) {
        bVar4 = true;
      }
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_00,(Object *)StringLiteral_FromTranslateState,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar5 != 0) {
        bVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
          this_03 = (this->fields).gizmoController;
          if (this_03 != (GizmoController *)0x0) {
            GizmoController::GizmoController_Hide(this_03,(MethodInfo *)0x0);
            pOVar6 = (Object *)func_?();
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar6,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        if (bVar4) {
          pEVar1 = e;
          pMVar7 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
          if ((pMVar7 == (MVGroup *)0x0) ||
             (this_01 = (pMVar7->fields)._.gameObject, this_01 == (GameObject *)0x0))
          goto code_?;
          in_stack_8 = &UNK_?;
          t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_01,(MethodInfo *)0x0);
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          in_stack_9 = &UNK_?;
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
          EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
          in_stack_10 = (EditorStateMachine *)0x0;
          in_stack_11 = &UNK_?;
          in_stack_12 = e;
          bVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            VStack_13.z = 6.5861e-44;
            in_stack_14 = (Object *)func_?();
            in_stack_15._0_2_ = 0;
            in_stack_15._2_2_ = 0;
            in_stack_12 = (EditorStateMachine *)&UNK_?;
            in_stack_10 = e;
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,in_stack_14,(MethodInfo *)0x0);
          }
        }
      }
      ppEVar16 = &(this->fields).editorStateMachine;
      (this->fields).editorStateMachine = e;
      func_?();
      pEVar17 = (this->fields).editorStateMachine;
      if (pEVar17 != (EditorStateMachine *)0x0) {
        pSVar18 = (pEVar17->fields).selectionController;
        this_04 = (EventHandler_1_Object_ *)
                  func_?(TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
        VStack_13.z = (float)this_04;
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (this_04,(Object *)this,
                   MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,(MethodInfo *)0x0);
        if (pSVar18 != (SelectionController *)0x0) {
          func_?(0,TypeInfo__ISelectionController,pSVar18,VStack_13.z);
          bVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
          if ((bVar5 == 0) && (!bVar4)) {
            this_02 = (e->fields).weCamera;
            if (this_02 == (MainCameraManager *)0x0) goto code_?;
            MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_02,1,(MethodInfo *)0x0);
          }
          func_?(&stack0xffffff5c,0,0x48);
          bVar5 = EditModeObjectPicker::EditModeObjectPicker_Pick
                            ((VoxelHit *)&stack0xffffff5c,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                             (MethodInfo *)0x0);
          if (bVar5 != 0) {
            puVar19 = in_stack_8;
            puVar20 = in_stack_9;
            puVar21 = in_stack_11;
            pEVar17 = in_stack_12;
            pEVar22 = in_stack_10;
            pOVar6 = in_stack_14;
            uVar23 = in_stack_15;
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVInputWrapper);
              puVar19 = in_stack_8;
              puVar20 = in_stack_9;
              puVar21 = in_stack_11;
              pEVar17 = in_stack_12;
              pEVar22 = in_stack_10;
              pOVar6 = in_stack_14;
              uVar23 = in_stack_15;
            }
            pVVar24 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                                (&VStack_13,(MethodInfo *)0x0);
            VStack_25.y = pVVar24->x;
            VStack_25.z = pVVar24->y;
            fVar26 = pVVar24->z;
            VStack_13._4_8_ = iStack_27;
            in_stack_8 = puVar19;
            in_stack_9 = puVar20;
            in_stack_11 = puVar21;
            in_stack_12 = pEVar17;
            in_stack_10 = pEVar22;
            in_stack_14 = pOVar6;
            in_stack_15 = uVar23;
            pMVar28 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar28 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pWVar29 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                                (pMVar28,0xADDR,(MethodInfo *)0x0);
            pEVar30 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                      func_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
            func_?(pEVar30,VStack_25._4_8_,fVar26,pEVar1,puVar19,puVar20,puVar21,pEVar17,
                            pEVar22,pOVar6,uVar23,iStack_31,uStack_32,&UNK_?,ppEVar16,e,
                            pCStack_33,pTStack_34,uStack_35,VStack_13._4_8_,pWVar29,
                            MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                           );
            (this->fields).pickedTarget = pEVar30;
            func_?(&(this->fields).pickedTarget,pEVar30);
            pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                               (e,(MethodInfo *)0x0);
            if (pMVar3 == (MVWorldObjectClient *)0x0) {
              pWVar29 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0)
              ;
              (this->fields).selectedWorldObject = pWVar29;
              func_?(&(this->fields).selectedWorldObject,pWVar29);
            }
            else {
              pMVar28 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                 (e,(MethodInfo *)0x0);
              if ((pMVar3 == (MVWorldObjectClient *)0x0) ||
                 (pMVar28 == (MVWorldObjectClientManager *)0x0)) goto code_?;
              pWVar29 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (pMVar28,(pMVar3->fields)._.id,(MethodInfo *)0x0);
              (this->fields).selectedWorldObject = pWVar29;
              func_?(&(this->fields).selectedWorldObject,pWVar29);
            }
          }
          x = ESSelection_GetLinkHit(this,e,(VoxelHit *)&stack0xffffff5c,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            pEVar36 = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
          }
          else {
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar24 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                                (&VStack_25,(MethodInfo *)0x0);
            pEVar37 = TypeInfo__ESSelection__PickResult<LinkObjectBase>;
            VStack_13.y = pVVar24->x;
            VStack_13.z = pVVar24->y;
            fVar26 = pVVar24->z;
            VStack_25._4_8_ = iStack_27;
            pEVar36 = (ESSelection_PickResult_1_LinkObjectBase_ *)func_?();
            func_?(pEVar36,VStack_13._4_8_,fVar26,pEVar37,in_stack_8,in_stack_9
                            ,in_stack_11,in_stack_12,in_stack_10,in_stack_14
                            ,in_stack_15,iStack_31,uStack_32,&UNK_?,ppEVar16,e,
                            pCStack_33,pTStack_34,uStack_35,VStack_25._4_8_);
          }
          (this->fields).pickedLink = pEVar36;
          func_?(&(this->fields).pickedLink);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* Boolean EnterObject(EditorStateMachine, MVWorldObjectClient) */

bool Assembly-CSharp.dll::ESSelection::ESSelection_EnterObject
               (ESSelection *this,EditorStateMachine *e,MVWorldObjectClient *selectedWo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_EnterObject);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_EnterObject,(MethodInfo *)0x0);
  if (selectedWo != (MVWorldObjectClient *)0x0) {
    bVar1 = (*(code *)(selectedWo->klass->vtable).OnEnterObject.method)();
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Execute
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).contextMenuController;
  if (pCVar1 != (ContextMenuController *)0x0) {
    if ((pCVar1->fields).rightClickGizmoSelect == 0) {
      this_00 = (this->fields).gizmoController;
      if (this_00 == (GizmoController *)0x0) goto code_?;
      bVar2 = GizmoController::GizmoController_get_IgnoreSelectionOnce(this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVInputWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                          (KogamaControls__Enum_DeleteObject,KeyState__Enum_Down,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          ESSelection_HandleDeleteSelection(this,e,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                          (KogamaControls__Enum_LeaveObject,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          ESSelection_HandleEscapeSelection(this,e,(MethodInfo *)0x0);
          return;
        }
        fVar3 = 1.00893e-43;
        puVar4 = &stack0xffffffb4;
        fVar5 = 0.0;
        func_?();
        this._0_1_ = EditModeObjectPicker::EditModeObjectPicker_Pick
                               ((VoxelHit *)&stack0xffffffb4,(HashSet_1_System_Int32_ *)0x0,-0x40005
                                ,(MethodInfo *)0x0);
        if ((bool)this != 0) {
          this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
          bVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                            (this_03,iStack_6,WorldObjectType__Enum_CubeModelPrototypeTerrain,
                             (MethodInfo *)0x0);
          if ((bVar2 != 0) || (iStack_6 == -1)) {
            this._0_1_ = 0;
          }
        }
        fVar7 = 0.0;
        cVar8 = func_?();
        uVar9 = (undefined4)iStack_10;
        uVar11 = (undefined4)((ulonglong)iStack_10 >> 0x20);
        if (cVar8 == '\0') {
          if ((bool)this == 0) {
            bVar2 = 0;
          }
          else {
            bVar2 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
                              (iStack_6,(MethodInfo *)0x0);
          }
          hit.point.y = fVar5;
          hit.point.x = (float)puVar4;
          hit.point.z = fVar3;
          hit.normal.x = in_stack_12;
          hit.normal.y = in_stack_13;
          hit.normal.z = (float)in_stack_14;
          hit.cubePos._0_4_ = uStack_15;
          hit._28_4_ = iStack_16;
          hit.face = uStack_17;
          hit._36_4_ = iStack_6;
          hit.woId = (int32_t)pCStack_18;
          hit.cube = (Cube *)fStack_19;
          hit.distance = (float)pCStack_20;
          hit.collider = (Collider *)pTStack_21;
          hit.transform = (Transform *)uStack_22;
          hit._60_4_ = uVar9;
          hit.interactionFlags._0_4_ = uVar11;
          hit.interactionFlags._4_4_ = 0;
          ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
                    ((ESStateBase *)this_02,e,bVar2,hit,in_stack_23);
        }
        if ((this_02->fields).pickedTarget != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)
        {
          this_01 = (((this_02->fields).pickedTarget)->fields).data;
          if (this_01 == (WorldObjectClientRef *)0x0) goto code_?;
          pOVar24 = WorldObjectClientRef`1[System::Object]::
                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                             ((WorldObjectClientRef_1_System_Object_ *)this_01,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             );
          if (pOVar24 == (Object *)0x0) {
            (this_02->fields).pickedTarget = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
            func_?(&(this_02->fields).pickedTarget,0);
          }
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          targetHit.point.y = (float)puVar4;
          targetHit.point.x = fVar7;
          targetHit.point.z = fVar5;
          targetHit.normal.x = fVar3;
          targetHit.normal.y = in_stack_12;
          targetHit.normal.z = in_stack_13;
          targetHit.cubePos.x = (int16_t)in_stack_14;
          targetHit.cubePos.y = SUB42(in_stack_14,2);
          targetHit._28_4_ = uStack_15;
          targetHit.face = iStack_16;
          targetHit._36_4_ = uStack_17;
          targetHit.woId = iStack_6;
          targetHit.cube = pCStack_18;
          targetHit.distance = fStack_19;
          targetHit.collider = pCStack_20;
          targetHit.transform = pTStack_21;
          targetHit._60_4_ = uStack_22;
          targetHit.interactionFlags._0_4_ = uVar9;
          targetHit.interactionFlags._4_4_ = uVar11;
          ESSelection_HandleLeftClickDownSelection(this_02,e,targetHit,(bool)this,(MethodInfo *)0x0)
          ;
          return;
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          ESSelection_HandleLeftClickDragSelection(this_02,e,(bool)this,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          ESSelection_HandleLeftClickUpSelection(this_02,e,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        fVar7 = 0.0;
        fVar5 = 8.40779e-45;
        puVar25 = &UNK_?;
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                          (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          targetHit_00.point.y = fVar5;
          targetHit_00.point.x = (float)puVar25;
          targetHit_00.point.z = fVar7;
          targetHit_00.normal.x = fVar3;
          targetHit_00.normal.y = 0.0;
          targetHit_00.normal.z = in_stack_13;
          targetHit_00.cubePos.x = (int16_t)in_stack_14;
          targetHit_00.cubePos.y = SUB42(in_stack_14,2);
          targetHit_00._28_4_ = uStack_15;
          targetHit_00.face = iStack_16;
          targetHit_00._36_4_ = uStack_17;
          targetHit_00.woId = iStack_6;
          targetHit_00.cube = pCStack_18;
          targetHit_00.distance = fStack_19;
          targetHit_00.collider = pCStack_20;
          targetHit_00.transform = pTStack_21;
          targetHit_00._60_4_ = uStack_22;
          targetHit_00.interactionFlags._0_4_ = uVar9;
          targetHit_00.interactionFlags._4_4_ = uVar11;
          ESSelection_HandleRightClickDownSelection
                    (this_02,e,targetHit_00,(bool)this,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                          (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          ESSelection_HandleRightClickUpSelection(this_02,e,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Exit
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    func_?(&TypeInfo__ISelectionController);
    cRam_? = '\x01';
  }
  if (e == (EditorStateMachine *)0x0) goto code_?;
  bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
      this = (ESSelection *)0x0;
      bVar1 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (pMVar2,InteractionFlags__Enum_DirectlySelectable,(MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
    }
  }
  else {
code_?:
    this_00 = (e->fields).weCamera;
    if (this_00 == (MainCameraManager *)0x0) goto code_?;
    this = (ESSelection *)&UNK_?;
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
  }
  pEVar3 = (this->fields).editorStateMachine;
  if (pEVar3 != (EditorStateMachine *)0x0) {
    pSVar4 = (pEVar3->fields).selectionController;
    this_01 = (EventHandler_1_Object_ *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    if (pSVar4 != (SelectionController *)0x0) {
      func_?();
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* LinkObjectBase GetLinkHit(EditorStateMachine, VoxelHit ByRef) */

LinkObjectBase *
Assembly-CSharp.dll::ESSelection::ESSelection_GetLinkHit
          (ESSelection *this,EditorStateMachine *e,VoxelHit *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Physics);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa4,0,0x2c);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    if ((pMVar1->fields).isLogicRendered == 0) {
      return (LinkObjectBase *)0x0;
    }
    fStack_2 = _UNK_?;
    bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      (hit,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      fStack_2 = hit->distance;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      this_00 = (pMVar1->fields).mainCamera;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                         (&RStack_5.m_Direction,(MethodInfo *)0x0);
      if (this_00 != (Camera *)0x0) {
        pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                           (&RStack_5,this_00,*pVVar4,(MethodInfo *)0x0);
        fVar7 = (pRVar6->m_Origin).x;
        puStack_8 = (undefined *)(pRVar6->m_Origin).y;
        pPStack_9 = (Physics__Class *)(pRVar6->m_Origin).z;
        fVar10 = (pRVar6->m_Direction).x;
        RStack_5.m_Direction.y = (pRVar6->m_Direction).y;
        RStack_5.m_Direction.z = (pRVar6->m_Direction).z;
        iVar11 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
          pPStack_9 = TypeInfo__UnityEngine__Physics;
          func_?();
        }
        ray.m_Origin.y = (float)puStack_8;
        ray.m_Origin.x = fVar7;
        ray.m_Origin.z = (float)pPStack_9;
        ray.m_Direction.x = fVar10;
        ray.m_Direction.y = RStack_5.m_Direction.y;
        ray.m_Direction.z = RStack_5.m_Direction.z;
        UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                  (ray,(RaycastHit *)&stack0xffffffa4,INFINITY,1 << ((byte)iVar11 & 0x1f),
                   (MethodInfo *)0x0);
        pCVar12 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                           ((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pCVar12,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          fVar7 = RTG::SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__get_Radius
                             ((SphereTreeNode_1_System_Object_ *)&stack0xffffffa4,(MethodInfo *)0x0)
          ;
          RStack_5.m_Direction.z = fVar7;
          if (fVar7 < fStack_2) {
            pCVar12 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                               ((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
            if ((pCVar12 != (Collider *)0x0) &&
               (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pCVar12,(MethodInfo *)0x0),
               pGVar13 != (GameObject *)0x0)) {
              pSVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                  ((Object_1 *)pGVar13,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar14,(MethodInfo *)0x0);
              pRVar15 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                  ((Regex_CachedCodeEntryKey *)&RStack_5.m_Direction,
                                   (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)&stack0xffffffa4,(MethodInfo *)0x0);
              pSVar16 = pRVar15->_cultureKey;
              pSVar14 = pRVar15->_pattern;
              (hit->point).x = (float)pRVar15->_options;
              (hit->point).y = (float)pSVar16;
              (hit->point).z = (float)pSVar14;
              pCVar12 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::
                       RaycastHit_get_collider((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
              if ((pCVar12 != (Collider *)0x0) &&
                 (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pCVar12,(MethodInfo *)0x0),
                 pGVar13 != (GameObject *)0x0)) {
                pLVar17 = (LinkObjectBase *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponentInChildren_1
                                    (pGVar13,
                                     LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                                    );
                return pLVar17;
              }
            }
            goto code_?;
          }
        }
        return (LinkObjectBase *)0x0;
      }
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar17 = (LinkObjectBase *)(*pcVar18)();
  return pLVar17;
}


/* Void HandleDeleteSelection(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleDeleteSelection
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ESSelection____c___HandleDeleteSelection_b__15_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ESSelection____c__DisplayClass15_0___HandleDeleteSelection_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ESSelection____c__DisplayClass15_0);
    func_?(&TypeInfo__ESSelection____c);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ESSelection____c__DisplayClass15_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    this_00 = (this->fields).editorStateMachine;
    if (this_00 != (EditorStateMachine *)0x0) {
      EditorStateMachine::EditorStateMachine_DeSelectAll(this_00,(MethodInfo *)0x0);
      this_01 = (this->fields).gizmoController;
      if ((this_01 != (GizmoController *)0x0) &&
         (GizmoController::GizmoController_Hide(this_01,(MethodInfo *)0x0), value != (Object *)0x0))
      {
        value[1].klass = (Object__Class *)::StringLiteral__;
        func_?();
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        cVar2 = (**(code **)(_UNK_? + 0x330))();
        if (cVar2 == '\0') {
          pGVar3 = (e->fields).gameObject;
          callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__ESSelection____c__DisplayClass15_0___HandleDeleteSelection_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar3,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
        }
        pGVar3 = (e->fields).gameObject;
        if ((TypeInfo__ESSelection____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction_00 = TypeInfo__ESSelection____c->static_fields->__9__15_1;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__ESSelection____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__ESSelection____c->static_fields->__9;
          callbackFunction_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)object,
                     MethodInfo__ESSelection____c___HandleDeleteSelection_b__15_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__ESSelection____c->static_fields->__9__15_1 = callbackFunction_00;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleEscapeSelection(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleEscapeSelection
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pMVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
      if (pMVar2 != (MVGroup *)0x0) {
        t = (pMVar2->fields)._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
        EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
        bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pMVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_EnterObject,(MethodInfo *)0x0);
          if (pMVar2 != (MVGroup *)0x0) {
            (*(code *)(pMVar2->klass->vtable).OnEnterObject.method)();
            return;
          }
        }
        else {
          pMVar3 = (e->fields).weCamera;
          if (pMVar3 != (MainCameraManager *)0x0) {
            MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar3,0,(MethodInfo *)0x0);
            EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
            if (*(GizmoController **)(unaff_EDI + 0x2c) != (GizmoController *)0x0) {
              GizmoController::GizmoController_Hide
                        (*(GizmoController **)(unaff_EDI + 0x2c),(MethodInfo *)0x0);
              pOVar4 = (Object *)func_?();
              FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else {
      pMVar3 = (e->fields).weCamera;
      if (pMVar3 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar3,0,(MethodInfo *)0x0);
        EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
        this_00 = (this->fields).gizmoController;
        if (this_00 != (GizmoController *)0x0) {
          GizmoController::GizmoController_Hide(this_00,(MethodInfo *)0x0);
          pOVar4 = (Object *)func_?();
          FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleLeftClickDownSelection(EditorStateMachine, VoxelHit, Boolean) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleLeftClickDownSelection
               (ESSelection *this,EditorStateMachine *e,VoxelHit targetHit,bool woPickSuccess,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                   );
    func_?(&TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  if (woPickSuccess == 0) {
    return;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pVVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
              (this_00,targetHit.woId,(MethodInfo *)0x0);
    pEVar5 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
             func_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
    func_?(pEVar5,uVar2,uVar3,fVar4,targetHit.point.x,targetHit.point.y,targetHit.point.z,
                    targetHit.normal.x,targetHit.normal.y,targetHit.normal.z,targetHit.cubePos._0_4_
                    ,targetHit._28_4_,targetHit.face,targetHit._36_4_,targetHit.woId,targetHit.cube,
                    targetHit.distance,targetHit.collider,targetHit.transform,targetHit._60_4_,
                    targetHit.interactionFlags);
    method_00 = (MethodInfo *)((ulonglong)targetHit.interactionFlags >> 0x20);
    (this->fields).pickedTarget = pEVar5;
    func_?(&(this->fields).pickedTarget,pEVar5);
    if (e != (EditorStateMachine *)0x0) {
      this_01 = (HashSet_1_System_UInt32_ *)
                MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                          ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
      pEVar5 = (this->fields).pickedTarget;
      if ((pEVar5 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
         (this_01 != (HashSet_1_System_UInt32_ *)0x0)) {
        bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                HashSet_1_System_UInt32__Contains
                          (this_01,(pEVar5->fields).hit.woId,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        _woPickSuccess = CONCAT31(in_stack_7,bVar6);
        pEVar5 = (this->fields).pickedTarget;
        if ((pEVar5 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
           ((pWVar8 = (pEVar5->fields).data, pWVar8 != (WorldObjectClientRef *)0x0 &&
            (pOVar9 = WorldObjectClientRef`1[System::Object]::
                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                ((WorldObjectClientRef_1_System_Object_ *)pWVar8,
                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                ), pOVar9 != (Object *)0x0)))) {
          pOVar10 = pOVar9[0x17].klass;
          pEVar5 = (this->fields).pickedTarget;
          if ((pEVar5 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
             ((pWVar8 = (pEVar5->fields).data, pWVar8 != (WorldObjectClientRef *)0x0 &&
              (pOVar9 = WorldObjectClientRef`1[System::Object]::
                        WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                  ((WorldObjectClientRef_1_System_Object_ *)pWVar8,
                                   MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                  ), pOVar9 != (Object *)0x0)))) {
            if ((((uint)pOVar10 & 0x20) == 0) || (((uint)pOVar9[0x17].klass & 0x10) != 0)) {
              pEVar5 = (this->fields).pickedTarget;
              if (pEVar5 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)
              goto code_?;
              hit.interactionFlags._0_4_ =
                   (int)((ulonglong)(pEVar5->fields).hit.interactionFlags >> 0x20);
              hit._0_64_ = *(undefined1 (*) [64])&(pEVar5->fields).hit.point.y;
              hit.interactionFlags._4_4_ = _woPickSuccess;
              pWVar8 = EditorStateMachine::EditorStateMachine_Select_1(e,hit,0,method_00);
              (this->fields).selectedWorldObject = pWVar8;
              func_?(&(this->fields).selectedWorldObject);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void HandleLeftClickDragSelection(EditorStateMachine, Boolean) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleLeftClickDragSelection
               (ESSelection *this,EditorStateMachine *e,bool woPickSuccess,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__TranslateMode);
    func_?(&StringLiteral_moveWithAvatar);
    func_?(&StringLiteral_translateMode);
    func_?(&StringLiteral_Mouse_ScrollWheel);
    cRam_? = '\x01';
  }
  if ((woPickSuccess == 0) ||
     ((this->fields).pickedTarget == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) {
    return;
  }
  pEVar1 = (this->fields).pickedTarget;
  uStack_2._0_4_ = (pEVar1->fields).mousePosition.x;
  uStack_2._4_4_ = (pEVar1->fields).mousePosition.y;
  fStack_3 = (pEVar1->fields).mousePosition.z;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pVVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                     ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  uVar6 = pVVar4->y;
  fStack_7 = fStack_3 - pVVar4->z;
  uStack_8 = CONCAT44(uStack_2._4_4_ - (float)uVar6,(float)uStack_2 - (float)uVar5);
  fStack_3 = fStack_7;
  fVar9 = (float10)func_?(&uStack_8,0);
  if ((float)fVar9 <= _UNK_?) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar10 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                      (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
    if (fVar10 == _UNK_?) {
      return;
    }
  }
  if (e != (EditorStateMachine *)0x0) {
    pDVar11 = (e->fields)._.data;
    uStack_12 = 0;
    pOVar13 = (Object *)func_?(TypeInfo__TranslateMode,&uStack_12);
    if (pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar11,(Object *)StringLiteral_translateMode,pOVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pDVar11 = (e->fields)._.data;
      pOVar13 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000f);
      if (pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar11,(Object *)StringLiteral_moveWithAvatar,pOVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        FSMEntity::FSMEntity_PushState
                  ((FSMEntity *)e,EditorEvent__Enum_ESTranslate,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void HandleLeftClickUpSelection(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleLeftClickUpSelection
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  this_00 = this;
  pWVar1 = (this->fields).selectedWorldObject;
  if (pWVar1 == (WorldObjectClientRef *)0x0) goto code_?;
  pOVar2 = WorldObjectClientRef`1[System::Object]::
           WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                     ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                     );
  if ((pOVar2 != (Object *)0x0) &&
     ((this_00->fields).pickedTarget != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) {
    pWVar1 = (((this_00->fields).pickedTarget)->fields).data;
    if (pWVar1 == (WorldObjectClientRef *)0x0) goto code_?;
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar2 != (Object *)0x0) {
      pEVar3 = (this_00->fields).pickedTarget;
      if (pEVar3 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) goto code_?;
      bVar4 = ESSelection_IsMouseUpValid(this_00,(pEVar3->fields).mousePosition,(MethodInfo *)0x0);
      pEVar5 = e;
      if (bVar4 != 0) {
        method = (MethodInfo *)(this_00->fields).pickedTarget;
        this = this_00;
        bVar4 = ESSelection_CheckAndExecuteOnClickHandler
                          (this_00,e,(ESSelection_PickResult_1_WorldObjectClientRef_ *)method,
                           (MethodInfo *)0x0);
        this = (ESSelection *)CONCAT13(bVar4,this._0_3_);
        if (pEVar5 == (EditorStateMachine *)0x0) goto code_?;
        this_01 = (HashSet_1_System_UInt32_ *)
                  MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                            ((MVJetPack_LocalObjectsJetPack *)pEVar5,(MethodInfo *)0x0);
        pWVar1 = (this_00->fields).selectedWorldObject;
        if (pWVar1 == (WorldObjectClientRef *)0x0) goto code_?;
        pOVar2 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if ((pOVar2 == (Object *)0x0) || (this_01 == (HashSet_1_System_UInt32_ *)0x0))
        goto code_?;
        bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                HashSet_1_System_UInt32__Contains
                          (this_01,(uint32_t)pOVar2[1].klass,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if ((this._3_1_ == '\0') && (bVar4 != 0)) {
          pWVar1 = (this_00->fields).selectedWorldObject;
          pGVar6 = (this_00->fields).gizmoController;
          if (pWVar1 != (WorldObjectClientRef *)0x0) {
            pOVar2 = WorldObjectClientRef`1[System::Object]::
                     WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                               ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                                MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                               );
            if (((pOVar2 != (Object *)0x0) &&
                (pEVar3 = (this_00->fields).pickedTarget,
                pEVar3 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) &&
               (pGVar6 != (GizmoController *)0x0)) {
              GizmoController::GizmoController_Show
                        (pGVar6,(int32_t)pOVar2[1].klass,(pEVar3->fields).hit.point,pEVar5,
                         (MethodInfo *)0x0);
              goto code_?;
            }
          }
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  pEVar5 = e;
  if (e != (EditorStateMachine *)0x0) {
    bVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      EditorStateMachine::EditorStateMachine_ExitGroup(pEVar5,(MethodInfo *)0x0);
    }
    else {
      EditorStateMachine::EditorStateMachine_DeSelectAll(pEVar5,(MethodInfo *)0x0);
      pGVar6 = (this_00->fields).gizmoController;
      if (pGVar6 == (GizmoController *)0x0) goto code_?;
      GizmoController::GizmoController_Hide(pGVar6,(MethodInfo *)0x0);
    }
    pMVar7 = EditorStateMachine::EditorStateMachine_get_ParentGroup(pEVar5,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                         (this_02,(MethodInfo *)0x0);
      if (pMVar7 == pMVar8) {
        this = (ESSelection *)0x2f;
        pOVar2 = (Object *)func_?(TypeInfo__EditorEvent,&this);
        FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar5,pOVar2,(MethodInfo *)0x0);
      }
code_?:
      (this_00->fields).pickedTarget = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
      func_?(&(this_00->fields).pickedTarget,0);
      (this_00->fields).pickedLink = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
      func_?(&(this_00->fields).pickedLink,0);
      return;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandleRightClickDownSelection(EditorStateMachine, VoxelHit, Boolean) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleRightClickDownSelection
               (ESSelection *this,EditorStateMachine *e,VoxelHit targetHit,bool woPickSuccess,
               MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_EBX,unaff_ESI);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Contains_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                   );
    func_?(&
                    MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                   );
    func_?(&TypeInfo__ESSelection__PickResult<LinkObjectBase>);
    func_?(&TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    bVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
    uVar1 = uVar1 & 0xffffffff00000000;
    if (bVar2 == 0) {
      EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
      puVar3 = (undefined *)uVar1;
    }
    else {
      EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
      this_00 = (this->fields).gizmoController;
      if (this_00 == (GizmoController *)0x0) goto code_?;
      puVar3 = &UNK_?;
      GizmoController::GizmoController_Hide(this_00,(MethodInfo *)0x0);
    }
    puVar4 = &stack0xffffff5c;
    uVar1 = CONCAT44(&UNK_?,puVar3);
    func_?();
    x = ESSelection_GetLinkHit(this,e,(VoxelHit *)&stack0xffffff5c,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      pVVar5 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                         (&VStack_6,(MethodInfo *)0x0);
      VStack_7.y = pVVar5->x;
      VStack_7.z = pVVar5->y;
      fVar8 = pVVar5->z;
      VStack_6._4_8_ = iStack_9;
      pEVar10 = (ESSelection_PickResult_1_LinkObjectBase_ *)
               func_?(TypeInfo__ESSelection__PickResult<LinkObjectBase>);
      func_?(pEVar10,VStack_7._4_8_,fVar8,puVar4,0,0x48,fStack_11,fStack_12,fStack_13,
                      IStack_14._0_4_,stack0xffffff78,iStack_15,uStack_16,iStack_17,pCStack_18,
                      fStack_19,pCStack_20,pTStack_21,uStack_22,VStack_6.y,VStack_6.z,x,
                      MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                     );
      (this->fields).pickedLink = pEVar10;
      func_?(&(this->fields).pickedLink,pEVar10);
      return;
    }
    if (woPickSuccess == 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                (this_01,targetHit.woId,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar5 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                         (&VStack_7,(MethodInfo *)0x0);
      VStack_6.y = pVVar5->x;
      VStack_6.z = pVVar5->y;
      fVar8 = pVVar5->z;
      pEVar23 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)func_?();
      func_?(pEVar23,VStack_6.y,VStack_6.z,fVar8,targetHit.point.x,targetHit.point.y,
                      targetHit.point.z,targetHit.normal.x,targetHit.normal.y,targetHit.normal.z,
                      targetHit.cubePos._0_4_,targetHit._28_4_,targetHit.face,targetHit._36_4_,
                      targetHit.woId,targetHit.cube,targetHit.distance,targetHit.collider,
                      targetHit.transform,targetHit._60_4_,targetHit.interactionFlags);
      (this->fields).pickedTarget = pEVar23;
      func_?();
      this_02 = EditorStateMachine::EditorStateMachine_get_SelectedWOs(e,(MethodInfo *)0x0);
      pEVar23 = (this->fields).pickedTarget;
      uVar1 = targetHit.interactionFlags;
      if (((pEVar23 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
          (pWVar24 = (pEVar23->fields).data, pWVar24 != (WorldObjectClientRef *)0x0)) &&
         (item = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           ), uVar1 = targetHit.interactionFlags,
         this_02 != (HashSet_1_MVWorldObjectClient_ *)0x0)) {
        bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                HashSet_1_System_Object__Contains
                          ((HashSet_1_System_Object_ *)this_02,item,
                           MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Contains_MVWorldObjectClient_
                          );
        if (bVar2 == 0) {
          pEVar23 = (this->fields).pickedTarget;
          uVar1 = targetHit.interactionFlags;
          if (pEVar23 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)
          goto code_?;
          hit.interactionFlags._0_4_ =
               (int)((ulonglong)(pEVar23->fields).hit.interactionFlags >> 0x20);
          hit._0_64_ = *(undefined1 (*) [64])&(pEVar23->fields).hit.point.y;
          hit.interactionFlags._4_4_ = 0;
          pWVar24 = EditorStateMachine::EditorStateMachine_Select_1
                             (e,hit,0,(MethodInfo *)targetHit._60_4_);
          (this->fields).selectedWorldObject = pWVar24;
          func_?(&(this->fields).selectedWorldObject,pWVar24);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)(uVar1);
  return;
}


/* Void HandleRightClickUpSelection(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleRightClickUpSelection
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    func_?(&StringLiteral_There_should_be_selected_objects);
    cRam_? = '\x01';
  }
  if ((this->fields).pickedLink != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) {
    bVar1 = ESSelection_IsMouseUpValid
                      (this,(((this->fields).pickedLink)->fields).mousePosition,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pCVar2 = (this->fields).contextMenuController;
      if (pCVar2 == (ContextMenuController *)0x0) goto code_?;
      ContextMenuController::ContextMenuController_PopGizmos(pCVar2,(MethodInfo *)0x0);
      pEVar3 = (this->fields).pickedLink;
      if (pEVar3 == (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) goto code_?;
      (this->fields).selectedLinkObject = (pEVar3->fields).data;
      func_?();
      pLVar4 = (this->fields).selectedLinkObject;
      if (((pLVar4 == (LinkObjectBase *)0x0) ||
          (pEVar3 = (this->fields).pickedLink,
          pEVar3 == (ESSelection_PickResult_1_LinkObjectBase_ *)0x0)) ||
         (pCVar2 = (this->fields).contextMenuController, pCVar2 == (ContextMenuController *)0x0))
      goto code_?;
      ContextMenuController::ContextMenuController_ShowContextMenuLink
                (pCVar2,(pLVar4->fields).linkID,(pLVar4->fields).isObjectLink,
                 (pEVar3->fields).hit.point,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  if ((this->fields).pickedTarget != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
    bVar1 = ESSelection_IsMouseUpValid
                      (this,(((this->fields).pickedTarget)->fields).mousePosition,(MethodInfo *)0x0)
    ;
    if (bVar1 != 0) {
      pCVar2 = (this->fields).contextMenuController;
      if (pCVar2 != (ContextMenuController *)0x0) {
        ContextMenuController::ContextMenuController_PopGizmos(pCVar2,(MethodInfo *)0x0);
        bVar1 = ESSelection_CheckAndExecuteOnClickHandler
                          (this,e,(this->fields).pickedTarget,(MethodInfo *)0x0);
        if (bVar1 != 0) goto code_?;
        if (e != (EditorStateMachine *)0x0) {
          iVar5 = MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                            ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
          if (iVar5 != 0) {
            if (*(int *)(iVar5 + 0x10) != 1) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_There_should_be_selected_objects,(MethodInfo *)0x0)
              ;
              goto code_?;
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pWVar6 = (this->fields).selectedWorldObject;
            if (pWVar6 != (WorldObjectClientRef *)0x0) {
              pOVar7 = WorldObjectClientRef`1[System::Object]::
                       WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                 ((WorldObjectClientRef_1_System_Object_ *)pWVar6,
                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                 );
              if (pOVar7 == (Object *)0x0) goto code_?;
              pWVar6 = (this->fields).selectedWorldObject;
              pCVar2 = (this->fields).contextMenuController;
              if (pWVar6 != (WorldObjectClientRef *)0x0) {
                pOVar7 = WorldObjectClientRef`1[System::Object]::
                         WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                   ((WorldObjectClientRef_1_System_Object_ *)pWVar6,
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                   );
                if (((pOVar7 != (Object *)0x0) &&
                    (pEVar8 = (this->fields).pickedTarget,
                    pEVar8 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) &&
                   (pCVar2 != (ContextMenuController *)0x0)) {
                  ContextMenuController::ContextMenuController_ShowContextMenu
                            (pCVar2,(int32_t)pOVar7[1].klass,(pEVar8->fields).hit.point,
                             (MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
code_?:
  (this->fields).pickedTarget = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
  func_?(&(this->fields).pickedTarget,0);
  (this->fields).pickedLink = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
  func_?(&(this->fields).pickedLink,0);
  return;
}


/* Boolean IsMouseUpValid(Vector3) */

bool Assembly-CSharp.dll::ESSelection::ESSelection_IsMouseUpValid
               (ESSelection *this,Vector3 mousePosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pVVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                     (&VStack_2,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = mousePosition.z - pVVar1->z;
  return (mousePosition.y - (float)uVar4) * (mousePosition.y - (float)uVar4) +
         (mousePosition.x - (float)uVar3) * (mousePosition.x - (float)uVar3) + fVar5 * fVar5 <
         _UNK_?;
}


/* Void PopMenuGizmos() */

void Assembly-CSharp.dll::ESSelection::ESSelection_PopMenuGizmos
               (ESSelection *this,MethodInfo *method)

{
  this_00 = (this->fields).contextMenuController;
  if (this_00 != (ContextMenuController *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__ContextMenuController____c___PopGizmos_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&TypeInfo__ContextMenuController____c);
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__18_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__ContextMenuController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ContextMenuController____c___PopGizmos_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ContextMenuController____c->static_fields->__9__18_0 = callbackFunction;
      func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__18_0);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SelectionController_SelectedWorldObjectDeletedHandler(Object, WorldObjectDestroyedEventArgs)
    */

void Assembly-CSharp.dll::ESSelection::
     ESSelection_SelectionController_SelectedWorldObjectDeletedHandler
               (ESSelection *this,Object *sender,WorldObjectDestroyedEventArgs *e,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).selectedWorldObject;
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar2 == (Object *)0x0) {
      return;
    }
    pWVar1 = (this->fields).selectedWorldObject;
    if (((pWVar1 != (WorldObjectClientRef *)0x0) &&
        (pOVar2 = WorldObjectClientRef`1[System::Object]::
                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                            ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                            ), pOVar2 != (Object *)0x0)) &&
       (e != (WorldObjectDestroyedEventArgs *)0x0)) {
      if (pOVar2[1].klass == (Object__Class *)(e->fields).WordObjectID) {
        this_00 = (this->fields).editorStateMachine;
        if (this_00 == (EditorStateMachine *)0x0) goto code_?;
        FSMEntity::FSMEntity_PopState((FSMEntity *)this_00,(MethodInfo *)0x0);
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


/* Void ShowContextMenuGizmo() */

void Assembly-CSharp.dll::ESSelection::ESSelection_ShowContextMenuGizmo
               (ESSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).selectedWorldObject;
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar2 == (Object *)0x0) {
      return;
    }
    pWVar1 = (this->fields).selectedWorldObject;
    this_00 = (this->fields).contextMenuController;
    if ((((pWVar1 != (WorldObjectClientRef *)0x0) &&
         (pOVar2 = WorldObjectClientRef`1[System::Object]::
                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                             ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             ), pOVar2 != (Object *)0x0)) &&
        (pEVar3 = (this->fields).pickedTarget,
        pEVar3 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) &&
       (this_00 != (ContextMenuController *)0x0)) {
      ContextMenuController::ContextMenuController_ShowContextMenu
                (this_00,(int32_t)pOVar2[1].klass,(pEVar3->fields).hit.point,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowLinkMenuGizmo() */

void Assembly-CSharp.dll::ESSelection::ESSelection_ShowLinkMenuGizmo
               (ESSelection *this,MethodInfo *method)

{
  pLVar1 = (this->fields).selectedLinkObject;
  if (((pLVar1 != (LinkObjectBase *)0x0) &&
      (pEVar2 = (this->fields).pickedLink, pEVar2 != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0
      )) && (this_00 = (this->fields).contextMenuController, this_00 != (ContextMenuController *)0x0
            )) {
    ContextMenuController::ContextMenuController_ShowContextMenuLink
              (this_00,(pLVar1->fields).linkID,(pLVar1->fields).isObjectLink,
               (pEVar2->fields).hit.point,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ESSelection(ContextMenuController, GizmoController) */

void Assembly-CSharp.dll::ESSelection::ESSelection__ctor
               (ESSelection *this,ContextMenuController *contextMenuController,
               GizmoController *gizmoController,MethodInfo *method)

{
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields).selectedWorldObject = pWVar1;
  func_?(&(this->fields).selectedWorldObject,pWVar1);
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  (this->fields).contextMenuController = contextMenuController;
  func_?(&(this->fields).contextMenuController,contextMenuController);
  (this->fields).gizmoController = gizmoController;
  func_?(&(this->fields).gizmoController,gizmoController);
  return;
}

