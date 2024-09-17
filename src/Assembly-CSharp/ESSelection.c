
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
        bVar3 = (*(code *)pOVar2->klass[3]._0.typeMetadataHandle)(pOVar2,e);
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
        this_04 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
        VStack_13.z = (float)this_04;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&TypeInfo__EditorEvent);
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
                    MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Contains_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
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
    func_?(&TypeInfo__TranslateMode);
    func_?(&
                    MethodInfo__ESSelection____c___Execute_b__14_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ESSelection____c__DisplayClass14_0___Execute_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ESSelection____c__DisplayClass14_0);
    func_?(&TypeInfo__ESSelection____c);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    func_?(&StringLiteral_moveWithAvatar);
    func_?(&StringLiteral_There_should_be_selected_objects);
    in_stack_1 = &StringLiteral_translateMode;
    func_?();
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Mouse_ScrollWheel);
    cRam_? = '\x01';
  }
  this_01 = this;
  pCVar2 = (this->fields).contextMenuController;
  if (pCVar2 != (ContextMenuController *)0x0) {
    if ((pCVar2->fields).rightClickGizmoSelect != 0) {
      return;
    }
    pGVar3 = (this->fields).gizmoController;
    if (pGVar3 != (GizmoController *)0x0) {
      bVar4 = GizmoController::GizmoController_get_IgnoreSelectionOnce(pGVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return;
      }
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
      pMVar5 = (MethodInfo *)0x1;
      bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                         (KogamaControls__Enum_DeleteObject,KeyState__Enum_Down,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                           (KogamaControls__Enum_LeaveObject,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          ESSelection_HandleEscape(this_01,e,(MethodInfo *)0x0);
          return;
        }
        fVar6 = 1.00893e-43;
        puVar7 = auStack_8;
        fVar9 = 0.0;
        func_?();
        bVar4 = EditModeObjectPicker::EditModeObjectPicker_Pick
                           ((VoxelHit *)auStack_8,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                            (MethodInfo *)0x0);
        this = (ESSelection *)CONCAT13(bVar4,this._0_3_);
        if (bVar4 != 0) {
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar10 == (MVWorldObjectClientManager *)0x0) goto code_?;
          bVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                             (pMVar10,iStack_11,WorldObjectType__Enum_CubeModelPrototypeTerrain,
                              (MethodInfo *)0x0);
          if ((bVar4 != 0) || (iStack_11 == -1)) {
            this = (ESSelection *)((uint)this & 0xffffff);
          }
        }
        fVar12 = 0.0;
        cVar13 = func_?();
        this_03 = (MVJetPack_LocalObjectsJetPack *)e;
        if (cVar13 == '\0') {
          if (this._3_1_ == '\0') {
            VStack_14.z._0_1_ = 0;
          }
          else {
            bVar4 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
                               (iStack_11,(MethodInfo *)0x0);
            VStack_14.z._0_1_ = bVar4;
          }
          this_03 = (MVJetPack_LocalObjectsJetPack *)e;
          hit_01.point.y = (float)auStack_8._8_4_;
          hit_01.point.x = (float)auStack_8._4_4_;
          hit_01.point.z = (float)auStack_8._12_4_;
          hit_01.normal.x = (float)auStack_8._16_4_;
          hit_01.normal.y = (float)auStack_8._20_4_;
          hit_01.normal.z = (float)auStack_8._24_4_;
          hit_01.cubePos._0_4_ = pMStack_15;
          hit_01._28_4_ = iStack_16;
          hit_01.face = uStack_17;
          hit_01._36_4_ = iStack_11;
          hit_01.woId = (int32_t)pCStack_18;
          hit_01.cube = (Cube *)fStack_19;
          hit_01.distance = (float)pCStack_20;
          hit_01.collider = (Collider *)pTStack_21;
          hit_01.transform = (Transform *)pMStack_22;
          hit_01._60_4_ = (int)iStack_23;
          hit_01.interactionFlags._0_4_ = (int)((ulonglong)iStack_23 >> 0x20);
          hit_01.interactionFlags._4_4_ = 0;
          ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
                    ((ESStateBase *)this_01,e,VStack_14.z._0_1_,hit_01,pMVar5);
        }
        if ((this_01->fields).pickedTarget != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)
        {
          pWVar24 = (((this_01->fields).pickedTarget)->fields).data;
          if (pWVar24 == (WorldObjectClientRef *)0x0) goto code_?;
          pOVar25 = WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                              );
          if (pOVar25 == (Object *)0x0) {
            (this_01->fields).pickedTarget = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
            func_?(&(this_01->fields).pickedTarget,0);
          }
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVInputWrapper);
          }
          bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                             (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVInputWrapper);
            }
            bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                               (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MVInputWrapper);
              }
              bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                                 (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
              if (bVar4 == 0) {
                if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MVInputWrapper);
                }
                bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                   (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
                if (bVar4 != 0) {
                  if (((this_01->fields).pickedLink !=
                       (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) &&
                     (bVar4 = ESSelection_IsMouseUpValid
                                         (this_01,(((this_01->fields).pickedLink)->fields).
                                                  mousePosition,(MethodInfo *)0x0), bVar4 != 0)) {
                    ESSelection_PopMenuGizmos(this_01,(MethodInfo *)0x0);
                    pEVar26 = (this_01->fields).pickedLink;
                    if (pEVar26 != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) {
                      (this_01->fields).selectedLinkObject = (pEVar26->fields).data;
                      func_?();
                      pLVar27 = (this_01->fields).selectedLinkObject;
                      pCVar2 = (this_01->fields).contextMenuController;
                      if (((pLVar27 != (LinkObjectBase *)0x0) &&
                          (pEVar26 = (this_01->fields).pickedLink,
                          pEVar26 != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0)) &&
                         (pCVar2 != (ContextMenuController *)0x0)) {
                        ContextMenuController::ContextMenuController_ShowContextMenuLink
                                  (pCVar2,(pLVar27->fields).linkID,(pLVar27->fields).isObjectLink,
                                   (pEVar26->fields).hit.point,(MethodInfo *)0x0);
                        goto code_?;
                      }
                    }
                    goto code_?;
                  }
                  if (((this_01->fields).pickedTarget ==
                       (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) ||
                     (bVar4 = ESSelection_IsMouseUpValid
                                         (this_01,(((this_01->fields).pickedTarget)->fields).
                                                  mousePosition,(MethodInfo *)0x0), bVar4 == 0))
                  goto code_?;
                  ESSelection_PopMenuGizmos(this_01,(MethodInfo *)0x0);
                  pEVar28 = (this_01->fields).pickedTarget;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if ((pEVar28 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) ||
                     (pWVar24 = (pEVar28->fields).data, pWVar24 == (WorldObjectClientRef *)0x0))
                  goto code_?;
                  pOVar25 = WorldObjectClientRef`1[System::Object]::
                            WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                      ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                      );
                  if (pOVar25 != (Object *)0x0) {
                    pWVar24 = (pEVar28->fields).data;
                    if ((pWVar24 == (WorldObjectClientRef *)0x0) ||
                       (pOVar25 = WorldObjectClientRef`1[System::Object]::
                                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                            ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                            ), pOVar25 == (Object *)0x0)) goto code_?;
                    cVar13 = (*(code *)pOVar25->klass[3]._0.typeMetadataHandle)
                                       (pOVar25,this_03,(pEVar28->fields).hit.collider);
                    if (cVar13 != '\0') goto code_?;
                  }
                  if ((this_03 == (MVJetPack_LocalObjectsJetPack *)0x0) ||
                     (iVar29 = MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                         (this_03,(MethodInfo *)0x0), iVar29 == 0))
                  goto code_?;
                  if (*(int *)(iVar29 + 0x10) == 1) {
                    if (cRam_? == '\0') {
                      func_?(&
                                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                     );
                      cRam_? = '\x01';
                    }
                    pWVar24 = (this_01->fields).selectedWorldObject;
                    if (pWVar24 == (WorldObjectClientRef *)0x0) goto code_?;
                    pOVar25 = WorldObjectClientRef`1[System::Object]::
                              WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                        ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                        );
                    if (pOVar25 != (Object *)0x0) {
                      pWVar24 = (this_01->fields).selectedWorldObject;
                      pCVar2 = (this_01->fields).contextMenuController;
                      if ((((pWVar24 == (WorldObjectClientRef *)0x0) ||
                           (pOVar25 = WorldObjectClientRef`1[System::Object]::
                                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                                ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                                ), pOVar25 == (Object *)0x0)) ||
                          (pEVar28 = (this_01->fields).pickedTarget,
                          pEVar28 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) ||
                         (pCVar2 == (ContextMenuController *)0x0)) goto code_?;
                      ContextMenuController::ContextMenuController_ShowContextMenu
                                (pCVar2,(int32_t)pOVar25[1].klass,(pEVar28->fields).hit.point,
                                 (MethodInfo *)0x0);
                    }
                  }
                  else {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__Debug);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                              ((Object *)StringLiteral_There_should_be_selected_objects,
                               (MethodInfo *)0x0);
                  }
code_?:
                  (this_01->fields).pickedLink = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
                  func_?();
                  (this_01->fields).pickedTarget =
                       (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
                  func_?();
                  return;
                }
              }
              else {
                func_?(&stack0xffffff04,0,0x48);
                pLVar27 = ESSelection_GetLinkHit
                                    (this_01,(EditorStateMachine *)this_03,
                                     (VoxelHit *)&stack0xffffff04,(MethodInfo *)0x0);
                VStack_14.z = (float)pLVar27;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                   ((Object_1 *)pLVar27,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar4 != 0) {
                  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__MVInputWrapper);
                  }
                  pVVar30 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::
                            Input_get_mousePosition(&VStack_31,(MethodInfo *)0x0);
                  uVar32 = pVVar30->x;
                  uVar33 = pVVar30->y;
                  fVar34 = pVVar30->z;
                  uStack_35._0_4_ = IStack_36._0_4_;
                  uStack_35._4_4_ = (Cube *)stack0xffffff20;
                  fStack_37 = (float)iStack_38;
                  pMStack_39 = (MethodInfo *)pCStack_40;
                  VStack_31.y = (float)iStack_41;
                  VStack_31.z = (float)((ulonglong)iStack_41 >> 0x20);
                  fStack_42 = fVar12;
                  pCStack_43 = (Collider *)puVar7;
                  pTStack_44 = (Transform *)fVar9;
                  pMStack_45 = (MethodInfo *)fVar6;
                  fStack_46 = in_stack_47;
                  fStack_48 = in_stack_49;
                  pCStack_50 = (Collider *)in_stack_51;
                  pTStack_52 = (Transform *)in_stack_53;
                  VStack_54.y = (float)uVar32;
                  VStack_54.z = (float)uVar33;
                  pEVar26 = (ESSelection_PickResult_1_LinkObjectBase_ *)
                            func_?(TypeInfo__ESSelection__PickResult<LinkObjectBase>);
                  func_?(pEVar26,CONCAT44(VStack_54.z,VStack_54.y),fVar34,fStack_42,
                                  pCStack_43,pTStack_44,pMStack_45,fStack_46,fStack_48,
                                  (int32_t)uStack_35,uStack_35._4_4_,fStack_37,pCStack_50,pTStack_52
                                  ,pMStack_39,fStack_55,pCStack_56,pTStack_57,uStack_58,VStack_31.y,
                                  VStack_31.z,VStack_14.z,
                                  MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                                 );
                  (this_01->fields).pickedLink = pEVar26;
                  func_?(&(this_01->fields).pickedLink,pEVar26);
                  return;
                }
                if (this._3_1_ != '\0') {
                  pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
                    this = (ESSelection *)
                           MVWorldObjectClientManager::
                           MVWorldObjectClientManager_GetWorldObjectClientRef
                                     (pMVar10,iStack_11,(MethodInfo *)0x0);
                    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__MVInputWrapper);
                    }
                    pVVar30 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::
                              Input_get_mousePosition(&VStack_54,(MethodInfo *)0x0);
                    uVar59 = pVVar30->x;
                    uVar60 = pVVar30->y;
                    fVar9 = pVVar30->z;
                    fStack_61 = (float)auStack_8._0_4_;
                    VStack_54.x = (float)auStack_8._4_4_;
                    VStack_54.y = (float)auStack_8._8_4_;
                    VStack_54.z = (float)auStack_8._12_4_;
                    fStack_37 = (float)auStack_8._16_4_;
                    pCStack_50 = (Collider *)auStack_8._20_4_;
                    pTStack_52 = (Transform *)auStack_8._24_4_;
                    pMStack_39 = pMStack_15;
                    fStack_46 = (float)iStack_16;
                    fStack_48 = (float)uStack_17;
                    uStack_35._0_4_ = iStack_11;
                    uStack_35._4_4_ = pCStack_18;
                    fStack_42 = fStack_19;
                    pCStack_43 = pCStack_20;
                    pTStack_44 = pTStack_21;
                    pMStack_45 = pMStack_22;
                    VStack_14.y = (float)(undefined4)iStack_23;
                    VStack_14.z = (float)iStack_23._4_4_;
                    VStack_31.y = (float)uVar59;
                    VStack_31.z = (float)uVar60;
                    pEVar28 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                              func_?(
                                             TypeInfo__ESSelection__PickResult<WorldObjectClientRef>
                                             );
                    pMVar5 = pMStack_45;
                    func_?(pEVar28,VStack_31.y,VStack_31.z,fVar9,fStack_61,VStack_54.x,
                                    VStack_54.y,VStack_54.z,fStack_37,pCStack_50,pTStack_52,
                                    pMStack_39,fStack_46,fStack_48,(int32_t)uStack_35,
                                    uStack_35._4_4_,fStack_42,pCStack_43,pTStack_44,pMStack_45,
                                    VStack_14.y,VStack_14.z);
                    (this_01->fields).pickedTarget = pEVar28;
                    func_?();
                    pEVar62 = e;
                    if (e != (EditorStateMachine *)0x0) {
                      this_02 = EditorStateMachine::EditorStateMachine_get_SelectedWOs
                                          (e,(MethodInfo *)0x0);
                      pEVar28 = (this_01->fields).pickedTarget;
                      if (((pEVar28 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
                          (pWVar24 = (pEVar28->fields).data, pWVar24 != (WorldObjectClientRef *)0x0)
                          ) && (pOVar25 = WorldObjectClientRef`1[System::Object]::
                                          WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                                    ((WorldObjectClientRef_1_System_Object_ *)
                                                     pWVar24,
                                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                                  ),
                               this_02 != (HashSet_1_MVWorldObjectClient_ *)0x0)) {
                        bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                                 Object]::HashSet_1_System_Object__Contains
                                           ((HashSet_1_System_Object_ *)this_02,pOVar25,
                                            MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Contains_MVWorldObjectClient_
                                           );
                        if (bVar4 != 0) {
                          return;
                        }
                        pEVar28 = (this_01->fields).pickedTarget;
                        if (pEVar28 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
                          hit.interactionFlags._0_4_ =
                               (int)((ulonglong)(pEVar28->fields).hit.interactionFlags >> 0x20);
                          hit._0_64_ = *(undefined1 (*) [64])&(pEVar28->fields).hit.point.y;
                          hit.interactionFlags._4_4_ = 0;
                          pWVar24 = EditorStateMachine::EditorStateMachine_Select_1
                                              (pEVar62,hit,0,pMVar5);
                          (this_01->fields).selectedWorldObject = pWVar24;
                          func_?(&(this_01->fields).selectedWorldObject,pWVar24);
                          return;
                        }
                      }
                    }
                  }
                  goto code_?;
                }
              }
              return;
            }
            pWVar24 = (this_01->fields).selectedWorldObject;
            if (pWVar24 == (WorldObjectClientRef *)0x0) goto code_?;
            pOVar25 = WorldObjectClientRef`1[System::Object]::
                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                );
            if ((pOVar25 != (Object *)0x0) &&
               ((this_01->fields).pickedTarget !=
                (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) {
              pWVar24 = (((this_01->fields).pickedTarget)->fields).data;
              if (pWVar24 == (WorldObjectClientRef *)0x0) goto code_?;
              pOVar25 = WorldObjectClientRef`1[System::Object]::
                        WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                  ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                   MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                  );
              if (pOVar25 != (Object *)0x0) {
                pEVar28 = (this_01->fields).pickedTarget;
                if (pEVar28 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)
                goto code_?;
                bVar4 = ESSelection_IsMouseUpValid
                                   (this_01,(pEVar28->fields).mousePosition,(MethodInfo *)0x0);
                if (bVar4 != 0) {
                  pEVar28 = (this_01->fields).pickedTarget;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if ((pEVar28 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
                     (pWVar24 = (pEVar28->fields).data, pWVar24 != (WorldObjectClientRef *)0x0)) {
                    pOVar25 = WorldObjectClientRef`1[System::Object]::
                              WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                        ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                        );
                    if (pOVar25 == (Object *)0x0) {
                      e = (EditorStateMachine *)((uint)e & 0xffffff);
                    }
                    else {
                      pWVar24 = (pEVar28->fields).data;
                      if ((pWVar24 == (WorldObjectClientRef *)0x0) ||
                         (pOVar25 = WorldObjectClientRef`1[System::Object]::
                                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                              ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                              ), pOVar25 == (Object *)0x0)) goto code_?;
                      uVar63 = (*(code *)pOVar25->klass[3]._0.typeMetadataHandle)
                                         (pOVar25,this_03,(pEVar28->fields).hit.collider);
                      e = (EditorStateMachine *)CONCAT13(uVar63,e._0_3_);
                    }
                    if (this_03 != (MVJetPack_LocalObjectsJetPack *)0x0) {
                      pHVar64 = (HashSet_1_System_UInt32_ *)
                                MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                          (this_03,(MethodInfo *)0x0);
                      pWVar24 = (this_01->fields).selectedWorldObject;
                      if (((pWVar24 != (WorldObjectClientRef *)0x0) &&
                          (pOVar25 = WorldObjectClientRef`1[System::Object]::
                                     WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                               ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                                MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                               ), pOVar25 != (Object *)0x0)) &&
                         (pHVar64 != (HashSet_1_System_UInt32_ *)0x0)) {
                        bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                                 UInt32]::HashSet_1_System_UInt32__Contains
                                           (pHVar64,(uint32_t)pOVar25[1].klass,
                                            MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                           );
                        if ((e._3_1_ == '\0') && (bVar4 != 0)) {
                          pWVar24 = (this_01->fields).selectedWorldObject;
                          pGVar3 = (this_01->fields).gizmoController;
                          if (((pWVar24 == (WorldObjectClientRef *)0x0) ||
                              ((pOVar25 = WorldObjectClientRef`1[System::Object]::
                                          WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                                    ((WorldObjectClientRef_1_System_Object_ *)
                                                     pWVar24,
                                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                                  ), pOVar25 == (Object *)0x0 ||
                               (pEVar28 = (this_01->fields).pickedTarget,
                               pEVar28 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0))))
                             || (pGVar3 == (GizmoController *)0x0)) goto code_?;
                          GizmoController::GizmoController_Show
                                    (pGVar3,(int32_t)pOVar25[1].klass,(pEVar28->fields).hit.point,
                                     (EditorStateMachine *)this_03,(MethodInfo *)0x0);
                        }
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            if (this_03 != (MVJetPack_LocalObjectsJetPack *)0x0) {
              EditorStateMachine::EditorStateMachine_DeSelectAll
                        ((EditorStateMachine *)this_03,(MethodInfo *)0x0);
              pGVar3 = (this_01->fields).gizmoController;
              if (pGVar3 != (GizmoController *)0x0) {
                GizmoController::GizmoController_Hide(pGVar3,(MethodInfo *)0x0);
                pMVar65 = EditorStateMachine::EditorStateMachine_get_ParentGroup
                                    ((EditorStateMachine *)this_03,(MethodInfo *)0x0);
                pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
                  pMVar66 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                      (pMVar10,(MethodInfo *)0x0);
                  if (pMVar65 == pMVar66) {
                    e = (EditorStateMachine *)0x2f;
                    pOVar25 = (Object *)func_?();
                    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_03,pOVar25,(MethodInfo *)0x0);
                  }
                  goto code_?;
                }
              }
            }
          }
          else {
            if (this._3_1_ == '\0') {
              return;
            }
            if ((this_01->fields).pickedTarget ==
                (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
              return;
            }
            pEVar28 = (this_01->fields).pickedTarget;
            uVar67 = (pEVar28->fields).mousePosition.x;
            uVar68 = (pEVar28->fields).mousePosition.y;
            VStack_54.z = (pEVar28->fields).mousePosition.z;
            VStack_54.x = (float)uVar67;
            VStack_54.y = (float)uVar68;
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVInputWrapper);
            }
            pVVar30 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                                (&VStack_14,(MethodInfo *)0x0);
            uVar69 = pVVar30->x;
            uVar70 = pVVar30->y;
            VStack_54.x = VStack_54.x - (float)uVar69;
            VStack_54.y = VStack_54.y - (float)uVar70;
            VStack_54.z = VStack_54.z - pVVar30->z;
            VStack_31.x = (float)uVar69;
            VStack_31.y = (float)uVar70;
            VStack_31.z = VStack_54.z;
            fVar71 = (float10)func_?(&VStack_54,0);
            e = (EditorStateMachine *)(float)fVar71;
            if ((float)e <= _UNK_?) {
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MVInputWrapper);
              }
              e = (EditorStateMachine *)
                  MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                            (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
              if ((float)e == _UNK_?) {
                return;
              }
            }
            if (this_03 != (MVJetPack_LocalObjectsJetPack *)0x0) {
              pDVar72 = (Dictionary_2_System_Object_System_Object_ *)
                        (this_03->fields).thrustTimeWarning;
              this = (ESSelection *)0x0;
              pOVar25 = (Object *)func_?(TypeInfo__TranslateMode,&this);
              if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (pDVar72,(Object *)StringLiteral_translateMode,pOVar25,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pDVar72 = (Dictionary_2_System_Object_System_Object_ *)
                          (this_03->fields).thrustTimeWarning;
                e = (EditorStateMachine *)CONCAT13(1,e._0_3_);
                pOVar25 = (Object *)func_?(TypeInfo__System__Boolean,(int)&e + 3);
                if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDVar72,(Object *)StringLiteral_moveWithAvatar,pOVar25,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  FSMEntity::FSMEntity_PushState
                            ((FSMEntity *)this_03,EditorEvent__Enum_ESTranslate,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          if (this._3_1_ == '\0') {
            return;
          }
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVInputWrapper);
          }
          pVVar30 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                              (&VStack_54,(MethodInfo *)0x0);
          uVar73 = pVVar30->x;
          uVar74 = pVVar30->y;
          this = (ESSelection *)pVVar30->z;
          fStack_42 = (float)auStack_8._16_4_;
          pCStack_43 = (Collider *)auStack_8._20_4_;
          pTStack_44 = (Transform *)auStack_8._24_4_;
          pMStack_45 = pMStack_15;
          fStack_46 = (float)iStack_16;
          fStack_48 = (float)uStack_17;
          uStack_35._0_4_ = iStack_11;
          uStack_35._4_4_ = pCStack_18;
          fStack_37 = fStack_19;
          pCStack_50 = pCStack_20;
          pTStack_52 = pTStack_21;
          pMStack_39 = pMStack_22;
          VStack_54.y = (float)iStack_23;
          VStack_54.z = (float)((ulonglong)iStack_23 >> 0x20);
          VStack_31.y = (float)uVar73;
          VStack_31.z = (float)uVar74;
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
            pWVar24 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                                (pMVar10,iStack_11,(MethodInfo *)0x0);
            pEVar75 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                      func_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
            fVar9 = VStack_31.y;
            pMVar5 = (MethodInfo *)VStack_31.z;
            pEVar76 = this;
            fVar6 = fStack_42;
            pCVar77 = pCStack_43;
            pTVar78 = pTStack_44;
            pMVar79 = pMStack_45;
            fVar12 = fStack_46;
            fVar34 = fStack_48;
            iVar29 = (int32_t)uStack_35;
            pCVar80 = uStack_35._4_4_;
            fVar81 = fStack_37;
            pCVar82 = pCStack_50;
            pTVar83 = pTStack_52;
            pMVar84 = pMStack_39;
            fVar85 = VStack_54.y;
            method_00 = (MethodInfo *)VStack_54.z;
            pMVar86 = 
            MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
            ;
            pEVar28 = pEVar75;
            func_?();
            (this_01->fields).pickedTarget = pEVar75;
            func_?(&(this_01->fields).pickedTarget,pEVar75,pEVar28,fVar9,pMVar5,pEVar76,
                            auStack_8._0_4_,auStack_8._4_4_,auStack_8._8_4_,auStack_8._12_4_,
                            fVar6,pCVar77,pTVar78,pMVar79,fVar12,fVar34,iVar29,pCVar80,fVar81,
                            pCVar82,pTVar83,pMVar84,fVar85,method_00,pWVar24,pMVar86);
            pEVar62 = e;
            if (e != (EditorStateMachine *)0x0) {
              pHVar64 = (HashSet_1_System_UInt32_ *)
                        MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                  ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
              pEVar28 = (this_01->fields).pickedTarget;
              if ((pEVar28 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
                 (pHVar64 != (HashSet_1_System_UInt32_ *)0x0)) {
                bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                         HashSet_1_System_UInt32__Contains
                                   (pHVar64,(pEVar28->fields).hit.woId,
                                    MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                   );
                e = (EditorStateMachine *)CONCAT31(e._1_3_,bVar4);
                pEVar28 = (this_01->fields).pickedTarget;
                if ((pEVar28 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
                   ((pWVar24 = (pEVar28->fields).data, pWVar24 != (WorldObjectClientRef *)0x0 &&
                    (pOVar25 = WorldObjectClientRef`1[System::Object]::
                               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                         ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                         ), pOVar25 != (Object *)0x0)))) {
                  if (((uint)pOVar25[0x17].klass & 0x20) != 0) {
                    return;
                  }
                  pEVar28 = (this_01->fields).pickedTarget;
                  if (pEVar28 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
                    hit_00.interactionFlags._0_4_ =
                         (int)((ulonglong)(pEVar28->fields).hit.interactionFlags >> 0x20);
                    hit_00._0_64_ = *(undefined1 (*) [64])&(pEVar28->fields).hit.point.y;
                    hit_00.interactionFlags._4_4_ = e;
                    pWVar24 = EditorStateMachine::EditorStateMachine_Select_1
                                        (pEVar62,hit_00,0,method_00);
                    (this_01->fields).selectedWorldObject = pWVar24;
                    func_?(&(this_01->fields).selectedWorldObject,pWVar24);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pOVar25 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar25,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
        pEVar62 = e;
        if (e != (EditorStateMachine *)0x0) {
          pMVar87 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0)
          ;
          if (pMVar87 == (MVWorldObjectClient *)0x0) {
            return;
          }
          e = (EditorStateMachine *)
              EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(pEVar62,(MethodInfo *)0x0)
          ;
          this_00 = (this_01->fields).editorStateMachine;
          if (this_00 != (EditorStateMachine *)0x0) {
            EditorStateMachine::EditorStateMachine_DeSelectAll(this_00,(MethodInfo *)0x0);
            pGVar3 = (this_01->fields).gizmoController;
            if ((pGVar3 != (GizmoController *)0x0) &&
               (GizmoController::GizmoController_Hide(pGVar3,(MethodInfo *)0x0),
               pOVar25 != (Object *)0x0)) {
              pOVar25[1].klass = (Object__Class *)::StringLiteral__;
              func_?(pOVar25 + 1,::StringLiteral__);
              this = (ESSelection *)
                     MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (e != (EditorStateMachine *)0x0) {
                cVar13 = (*(code *)e->klass[3]._1.genericContainerHandle)
                                   (e,this,pOVar25 + 1,e->klass[3]._1.instance_size);
                if (cVar13 == '\0') {
                  e = (EditorStateMachine *)(pEVar62->fields).gameObject;
                  callbackFunction =
                       (ExecuteEvents_EventFunction_1_System_Object_ *)
                       func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                      );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,pOVar25,
                             MethodInfo__ESSelection____c__DisplayClass14_0___Execute_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            ((GameObject *)e,(BaseEventData *)0x0,callbackFunction,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                            );
                }
                root = (pEVar62->fields).gameObject;
                if ((TypeInfo__ESSelection____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__ESSelection____c);
                }
                callbackFunction_00 = TypeInfo__ESSelection____c->static_fields->__9__14_1;
                if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                  if ((TypeInfo__ESSelection____c->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__ESSelection____c);
                  }
                  object = TypeInfo__ESSelection____c->static_fields->__9;
                  callbackFunction_00 =
                       (ExecuteEvents_EventFunction_1_IUIStack_ *)
                       func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                      );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                             (Object *)object,
                             MethodInfo__ESSelection____c___Execute_b__14_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  TypeInfo__ESSelection____c->static_fields->__9__14_1 = callbackFunction_00;
                  func_?(&TypeInfo__ESSelection____c->static_fields->__9__14_1,
                                  callbackFunction_00);
                }
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (root,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar88 = (code *)swi(3);
  (*pcVar88)();
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
    this_01 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
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


/* Void HandleEscape(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleEscape
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
  return (mousePosition.x - (float)uVar3) * (mousePosition.x - (float)uVar3) +
         (mousePosition.y - (float)uVar4) * (mousePosition.y - (float)uVar4) + fVar5 * fVar5 <
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
                      MethodInfo__ContextMenuController____c___PopGizmos_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&TypeInfo__ContextMenuController____c);
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__16_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__ContextMenuController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ContextMenuController____c___PopGizmos_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ContextMenuController____c->static_fields->__9__16_0 = callbackFunction;
      func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__16_0);
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

