
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
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = (e->fields).selectionController, this_00 != (SelectionController *)0x0)) {
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).gizmoController;
    if (this_01 != (GizmoController *)0x0) {
      GizmoController::GizmoController_Hide(this_01,(MethodInfo *)0x0);
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
          pSVar6 = (e->fields).selectionController;
          if (pSVar6 != (SelectionController *)0x0) {
            SelectionController::SelectionController_DeSelectAll(pSVar6,(MethodInfo *)0x0);
            this_02 = (this->fields).gizmoController;
            if (this_02 != (GizmoController *)0x0) {
              GizmoController::GizmoController_Hide(this_02,(MethodInfo *)0x0);
              pOVar7 = (Object *)func_?();
              FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar7,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if (bVar4) {
          pEVar1 = e;
          pMVar8 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
          if ((pMVar8 == (MVGroup *)0x0) ||
             (in_stack_9 = (pMVar8->fields)._.gameObject,
             in_stack_9 == (GameObject *)0x0)) goto code_?;
          in_stack_10 = (char *)0x0;
          in_stack_11 = (MethodInfo *)&UNK_?;
          t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (in_stack_9,(MethodInfo *)0x0);
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            pSStack_12 = TypeInfo__SharedCubeFunctions;
            func_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
          EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
          bVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0)
          ;
          if (bVar5 != 0) {
            VStack_13.z = 6.5861e-44;
            pOVar7 = (Object *)func_?(TypeInfo__EditorEvent,&VStack_13.z);
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar7,(MethodInfo *)0x0);
          }
        }
      }
      ppEVar14 = &(this->fields).editorStateMachine;
      *ppEVar14 = e;
      func_?(ppEVar14,e);
      if (*ppEVar14 != (EditorStateMachine *)0x0) {
        pSVar6 = ((*ppEVar14)->fields).selectionController;
        this_03 = (EventHandler_1_Object_ *)
                  func_?(TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
        VStack_13.z = (float)this_03;
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,(MethodInfo *)0x0);
        if (pSVar6 != (SelectionController *)0x0) {
          func_?(0,TypeInfo__ISelectionController,pSVar6,VStack_13.z);
          bVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0)
          ;
          if ((bVar5 == 0) && (!bVar4)) {
            this_01 = (e->fields).weCamera;
            if (this_01 == (MainCameraManager *)0x0) goto code_?;
            MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_01,1,(MethodInfo *)0x0);
          }
          method_00 = (MethodInfo *)&stack0xffffff5c;
          func_?(method_00,0,0x48);
          bVar5 = EditModeObjectPicker::EditModeObjectPicker_Pick
                             ((VoxelHit *)&stack0xffffff5c,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                              (MethodInfo *)0x0);
          if (bVar5 != 0) {
            pMVar15 = in_stack_11;
            pGVar16 = in_stack_9;
            pcVar17 = in_stack_10;
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVInputWrapper);
              pMVar15 = in_stack_11;
              pGVar16 = in_stack_9;
              pcVar17 = in_stack_10;
            }
            pVVar18 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                      DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                                (&VStack_13,(DefaultEventSystem_Input *)0x0,method_00);
            VStack_19.y = pVVar18->x;
            VStack_19.z = pVVar18->y;
            fVar20 = pVVar18->z;
            VStack_13._4_8_ = iStack_21;
            in_stack_11 = pMVar15;
            in_stack_9 = pGVar16;
            in_stack_10 = pcVar17;
            pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar22 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pWVar23 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                                (pMVar22,iStack_24,(MethodInfo *)0x0);
            pEVar25 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                      func_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
            func_?(pEVar25,VStack_19._4_8_,fVar20,pEVar1,pMVar15,pGVar16,pcVar17,pIStack_26
                            ,pSStack_12,ppIStack_27,_Stack_88.rgctx_data,_Stack_84.genericMethod,
                            uStack_28,iStack_24,pCStack_29,fStack_30,pCStack_31,pTStack_32,uStack_33
                            ,VStack_13._4_8_,pWVar23,
                            MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                           );
            ppEVar34 = &(this->fields).pickedTarget;
            *ppEVar34 = pEVar25;
            func_?(ppEVar34,pEVar25);
            pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                (e,(MethodInfo *)0x0);
            if (pMVar3 == (MVWorldObjectClient *)0x0) {
              pWVar23 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0)
              ;
              ppWVar35 = &(this->fields).selectedWorldObject;
              *ppWVar35 = pWVar23;
              func_?(ppWVar35,pWVar23);
            }
            else {
              pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                  (e,(MethodInfo *)0x0);
              if ((pMVar3 == (MVWorldObjectClient *)0x0) ||
                 (pMVar22 == (MVWorldObjectClientManager *)0x0)) goto code_?;
              pWVar23 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (pMVar22,(pMVar3->fields)._.id,(MethodInfo *)0x0);
              ppWVar35 = &(this->fields).selectedWorldObject;
              *ppWVar35 = pWVar23;
              func_?(ppWVar35,pWVar23);
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
            pVVar18 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                      DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                                (&VStack_19,(DefaultEventSystem_Input *)0x0,in_stack_11);
            pEVar37 = TypeInfo__ESSelection__PickResult<LinkObjectBase>;
            VStack_13.y = pVVar18->x;
            VStack_13.z = pVVar18->y;
            fVar20 = pVVar18->z;
            VStack_19._4_8_ = iStack_21;
            pEVar36 = (ESSelection_PickResult_1_LinkObjectBase_ *)func_?();
            func_?(pEVar36,VStack_13._4_8_,fVar20,pEVar37,in_stack_11,in_stack_9
                            ,in_stack_10,pIStack_26,pSStack_12,ppIStack_27,
                            _Stack_88.rgctx_data,_Stack_84.genericMethod,uStack_28,iStack_24,
                            pCStack_29,fStack_30,pCStack_31,pTStack_32,uStack_33,VStack_19._4_8_);
          }
          ppEVar38 = &(this->fields).pickedLink;
          *ppEVar38 = pEVar36;
          func_?(ppEVar38);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
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
    func_?(&StringLiteral_translateMode);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Mouse_ScrollWheel);
    cRam_? = '\x01';
  }
  this_02 = e;
  this_01 = this;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,(ExceptionArgument__Enum)e,(MethodInfo *)0x0);
  pCVar1 = (this_01->fields).contextMenuController;
  if (pCVar1 == (ContextMenuController *)0x0) goto code_?;
  if ((pCVar1->fields).rightClickGizmoSelect != 0) {
    return;
  }
  pGVar2 = (this_01->fields).gizmoController;
  if (pGVar2 == (GizmoController *)0x0) goto code_?;
  pMVar3 = (MethodInfo *)&UNK_?;
  bVar4 = GizmoController::GizmoController_get_IgnoreSelectionOnce(pGVar2,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    return;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar5 = (MethodInfo *)&UNK_?;
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                     (KogamaControls__Enum_DeleteObject,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    this_04 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_04,(MethodInfo *)0x0);
    if (this_02 != (EditorStateMachine *)0x0) {
      pMVar6 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                          (this_02,(MethodInfo *)0x0);
      if (pMVar6 == (MVWorldObjectClient *)0x0) {
        return;
      }
      this = (ESSelection *)
             EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(this_02,(MethodInfo *)0x0);
      pEVar7 = (this_01->fields).editorStateMachine;
      if ((pEVar7 != (EditorStateMachine *)0x0) &&
         (pSVar8 = (pEVar7->fields).selectionController, pSVar8 != (SelectionController *)0x0)) {
        SelectionController::SelectionController_DeSelectAll(pSVar8,(MethodInfo *)0x0);
        pGVar2 = (this_01->fields).gizmoController;
        if ((pGVar2 != (GizmoController *)0x0) &&
           (GizmoController::GizmoController_Hide(pGVar2,(MethodInfo *)0x0),
           this_04 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0)) {
          pUVar9 = &this_04->fields;
          (pUVar9->_)._defaultValue_k__BackingField = (List_1_System_Object_ *)::StringLiteral__;
          func_?(pUVar9,::StringLiteral__);
          e = (EditorStateMachine *)
              MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this != (ESSelection *)0x0) {
            cVar10 = (*this->klass[3]._0.gc_desc)(this,e,pUVar9,this->klass[3]._0.name);
            if (cVar10 == '\0') {
              this = (ESSelection *)(this_02->fields).gameObject;
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                  );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)this_04,
                         MethodInfo__ESSelection____c__DisplayClass14_0___Execute_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        ((GameObject *)this,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                        );
            }
            root = (this_02->fields).gameObject;
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
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                         (Object *)object,
                         MethodInfo__ESSelection____c___Execute_b__14_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__ESSelection____c->static_fields->__9__14_1 = callbackFunction_00;
              func_?(&TypeInfo__ESSelection____c->static_fields->__9__14_1,
                              callbackFunction_00);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
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
    goto code_?;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                     (KogamaControls__Enum_LeaveObject,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    ESSelection_HandleEscape(this_01,this_02,(MethodInfo *)0x0);
    return;
  }
  fVar11 = 1.00893e-43;
  func_?();
  bVar4 = EditModeObjectPicker::EditModeObjectPicker_Pick
                     ((VoxelHit *)auStack_12,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                      (MethodInfo *)0x0);
  e = (EditorStateMachine *)CONCAT13(bVar4,e._0_3_);
  if (bVar4 != 0) {
    pMVar13 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar13 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar5 = (MethodInfo *)0x0;
    pMVar3 = pMStack_14;
    bVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                       (pMVar13,(int32_t)pMStack_14,WorldObjectType__Enum_CubeModelPrototypeTerrain,
                        (MethodInfo *)0x0);
    if ((bVar4 != 0) || (pMStack_14 == (MethodInfo *)0xffffffff)) {
      e = (EditorStateMachine *)((uint)e & 0xffffff);
    }
  }
  cVar10 = func_?();
  if (cVar10 == '\0') {
    if (e._3_1_ == '\0') {
      VStack_15.z._0_1_ = 0;
    }
    else {
      bVar4 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
                         ((int32_t)pMStack_14,(MethodInfo *)0x0);
      VStack_15.z._0_1_ = bVar4;
    }
    hit.point.y = (float)auStack_12._8_4_;
    hit.point.x = (float)auStack_12._4_4_;
    hit.point.z = (float)auStack_12._12_4_;
    hit.normal.x = (float)auStack_12._16_4_;
    hit.normal.y = (float)auStack_12._20_4_;
    hit.normal.z = (float)auStack_12._24_4_;
    hit.cubePos._0_4_ = pCStack_16;
    hit._28_4_ = fStack_17;
    hit.face = (int32_t)fStack_18;
    hit._36_4_ = pMStack_14;
    hit.woId = (int32_t)pCStack_19;
    hit.cube = (Cube *)fStack_20;
    hit.distance = (float)pCStack_21;
    hit.collider = (Collider *)pTStack_22;
    hit.transform = (Transform *)pMStack_23;
    hit._60_4_ = (int)iStack_24;
    hit.interactionFlags._0_4_ = (int)((ulonglong)iStack_24 >> 0x20);
    hit.interactionFlags._4_4_ = 0;
    ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
              ((ESStateBase *)this_01,this_02,VStack_15.z._0_1_,hit,in_stack_25);
  }
  pEVar26 = (this_01->fields).pickedTarget;
  ppEVar27 = &(this_01->fields).pickedTarget;
  VStack_15.z = (float)ppEVar27;
  if (pEVar26 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
    pWVar28 = (pEVar26->fields).data;
    if (pWVar28 == (WorldObjectClientRef *)0x0) goto code_?;
    pMVar3 = (MethodInfo *)&UNK_?;
    pMVar5 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
    pOVar29 = WorldObjectClientRef`1[System::Object]::
              WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                        ((WorldObjectClientRef_1_System_Object_ *)pWVar28,
                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        );
    if (pOVar29 == (Object *)0x0) {
      *ppEVar27 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
      pMVar5 = (MethodInfo *)&UNK_?;
      func_?(ppEVar27);
    }
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                     (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    if (e._3_1_ == '\0') {
      return;
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar30 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
              DefaultEventSystem_Input_get_mousePosition
                        (&VStack_31,(DefaultEventSystem_Input *)0x0,pMVar3);
    uVar32 = pVVar30->x;
    uVar33 = pVVar30->y;
    e = (EditorStateMachine *)pVVar30->z;
    puStack_34 = (undefined *)auStack_12._0_4_;
    pCStack_35 = (Collider *)auStack_12._4_4_;
    pMStack_36 = (MethodInfo *)auStack_12._8_4_;
    pMStack_37 = (MethodInfo *)auStack_12._12_4_;
    fStack_38 = (float)auStack_12._16_4_;
    fStack_39 = (float)auStack_12._20_4_;
    pMStack_40 = (MethodInfo *)auStack_12._24_4_;
    pCStack_41 = pCStack_16;
    fStack_42 = fStack_17;
    fStack_43 = fStack_18;
    pMStack_44 = pMStack_14;
    pCStack_45 = pCStack_19;
    fStack_46 = fStack_20;
    pCStack_47 = pCStack_21;
    pTStack_48 = pTStack_22;
    pMStack_49 = pMStack_23;
    VStack_31.y = (float)iStack_24;
    VStack_31.z = (float)((ulonglong)iStack_24 >> 0x20);
    VStack_50.y = (float)uVar32;
    VStack_50.z = (float)uVar33;
    pMVar13 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar13 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                (pMVar13,(int32_t)pMStack_14,(MethodInfo *)0x0);
      iVar51 = func_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
      fVar52 = VStack_50.y;
      pMVar3 = (MethodInfo *)VStack_50.z;
      pEVar7 = e;
      puVar53 = puStack_34;
      pCVar54 = pCStack_35;
      pMVar5 = pMStack_36;
      pMVar55 = pMStack_37;
      fVar56 = fStack_38;
      fVar57 = fStack_39;
      pMVar58 = pMStack_40;
      pCVar59 = pCStack_41;
      fVar60 = fStack_42;
      fVar61 = fStack_43;
      pMVar62 = pMStack_44;
      pCVar63 = pCStack_45;
      fVar64 = fStack_46;
      pCVar65 = pCStack_47;
      pTVar66 = pTStack_48;
      pMVar67 = pMStack_49;
      fVar68 = VStack_31.y;
      method_00 = (MethodInfo *)VStack_31.z;
      iVar69 = iVar51;
      func_?();
      fVar11 = VStack_15.z;
      *(int *)VStack_15.z = iVar51;
      func_?(VStack_15.z,iVar51,iVar69,fVar52,pMVar3,pEVar7,puVar53,pCVar54,pMVar5,
                      pMVar55,fVar56,fVar57,pMVar58,pCVar59,fVar60,fVar61,pMVar62,pCVar63,fVar64,
                      pCVar65,pTVar66,pMVar67,fVar68);
      if ((((this_02 != (EditorStateMachine *)0x0) &&
           (pSVar8 = (this_02->fields).selectionController, pSVar8 != (SelectionController *)0x0))
          && (*(int *)fVar11 != 0)) &&
         (this_00 = (HashSet_1_System_Int32Enum_ *)(pSVar8->fields).selectedIDs,
         this_00 != (HashSet_1_System_Int32Enum_ *)0x0)) {
        bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                 HashSet_1_System_Int32Enum__Contains
                           (this_00,*(Int32Enum__Enum *)(*(int *)fVar11 + 0x40),
                            MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        e = (EditorStateMachine *)CONCAT31(e._1_3_,bVar4);
        if (((*(int *)fVar11 != 0) &&
            (pWVar70 = *(WorldObjectClientRef_1_System_Object_ **)(*(int *)fVar11 + 0x60),
            pWVar70 != (WorldObjectClientRef_1_System_Object_ *)0x0)) &&
           (pOVar29 = WorldObjectClientRef`1[System::Object]::
                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                (pWVar70,
                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                ), pOVar29 != (Object *)0x0)) {
          if (((uint)pOVar29[0x17].klass & 0x20) != 0) {
            return;
          }
          iVar69 = *(int *)fVar11;
          if (iVar69 != 0) {
            hit_01.interactionFlags._0_4_ = (int)((ulonglong)*(undefined8 *)(iVar69 + 0x58) >> 0x20)
            ;
            hit_01._0_64_ = *(undefined1 (*) [64])(iVar69 + 0x1c);
            hit_01.interactionFlags._4_4_ = e;
            pWVar28 = EditorStateMachine::EditorStateMachine_Select_1(this_02,hit_01,0,method_00);
            ppWVar71 = &(this->fields).selectedWorldObject;
            *ppWVar71 = pWVar28;
            func_?(ppWVar71,pWVar28);
            return;
          }
        }
      }
    }
    goto code_?;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                     (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    if (e._3_1_ == '\0') {
      return;
    }
    pEVar26 = *ppEVar27;
    if (pEVar26 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
      return;
    }
    uVar72 = (pEVar26->fields).mousePosition.x;
    uVar73 = (pEVar26->fields).mousePosition.y;
    VStack_31.z = (pEVar26->fields).mousePosition.z;
    VStack_31.x = (float)uVar72;
    VStack_31.y = (float)uVar73;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar30 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
              DefaultEventSystem_Input_get_mousePosition
                        (&VStack_15,(DefaultEventSystem_Input *)0x0,pMVar5);
    uVar74 = pVVar30->x;
    uVar75 = pVVar30->y;
    VStack_31.x = VStack_31.x - (float)uVar74;
    VStack_31.y = VStack_31.y - (float)uVar75;
    VStack_50.z = VStack_31.z - pVVar30->z;
    VStack_50.x = (float)uVar74;
    VStack_50.y = (float)uVar75;
    VStack_31.z = VStack_50.z;
    fVar76 = (float10)func_?(&VStack_31,0);
    this = (ESSelection *)(float)fVar76;
    if ((float)this <= _UNK_?) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      this = (ESSelection *)
             MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                       (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
      if ((float)this == _UNK_?) {
        return;
      }
    }
    if (this_02 != (EditorStateMachine *)0x0) {
      pDVar77 = (this_02->fields)._.data;
      e = (EditorStateMachine *)0x0;
      pOVar29 = (Object *)func_?(TypeInfo__TranslateMode,&e);
      if (pDVar77 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar77,(Object *)StringLiteral_translateMode,pOVar29,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pDVar77 = (this_02->fields)._.data;
        this = (ESSelection *)CONCAT13(1,this._0_3_);
        pOVar29 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
        if (pDVar77 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar77,(Object *)StringLiteral_moveWithAvatar,pOVar29,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          FSMEntity::FSMEntity_PushState
                    ((FSMEntity *)this_02,EditorEvent__Enum_ESTranslate,(MethodInfo *)0x0);
          return;
        }
      }
    }
    goto code_?;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                     (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      pMVar5 = (MethodInfo *)&UNK_?;
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                       (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      fVar52 = 1.00893e-43;
      puVar78 = &stack0xffffff08;
      pMVar55 = (MethodInfo *)0x0;
      puVar53 = &UNK_?;
      func_?();
      pMVar3 = (MethodInfo *)
                ESSelection_GetLinkHit
                          (this_01,this_02,(VoxelHit *)&stack0xffffff08,(MethodInfo *)0x0);
      VStack_50.z = (float)pMVar3;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pMVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        pVVar30 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                            (&VStack_31,(DefaultEventSystem_Input *)0x0,pMVar5);
        VStack_15.y = pVVar30->x;
        VStack_15.z = pVVar30->y;
        fVar56 = pVVar30->z;
        fStack_42 = (float)iStack_79;
        fStack_43 = (float)uStack_80;
        pMStack_44 = (MethodInfo *)iStack_81;
        pCStack_45 = pCStack_82;
        fStack_46 = fStack_83;
        pCStack_47 = pCStack_84;
        pTStack_48 = pTStack_85;
        pMStack_49 = (MethodInfo *)uStack_86;
        VStack_31.y = (float)iStack_87;
        VStack_31.z = (float)((ulonglong)iStack_87 >> 0x20);
        puStack_34 = puVar53;
        pCStack_35 = (Collider *)puVar78;
        pMStack_36 = pMVar55;
        pMStack_37 = (MethodInfo *)fVar52;
        fStack_38 = fVar11;
        fStack_39 = in_stack_88;
        pMStack_40 = (MethodInfo *)in_stack_89;
        pCStack_41 = (Cube *)in_stack_90;
        pEVar91 = (ESSelection_PickResult_1_LinkObjectBase_ *)
                  func_?(TypeInfo__ESSelection__PickResult<LinkObjectBase>);
        func_?(pEVar91,VStack_15._4_8_,fVar56,puStack_34,pCStack_35,pMStack_36,pMStack_37,
                        fStack_38,fStack_39,pMStack_40,pCStack_41,fStack_42,fStack_43,pMStack_44,
                        pCStack_45,fStack_46,pCStack_47,pTStack_48,pMStack_49,VStack_31.y,
                        VStack_31.z,VStack_50.z,
                        MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                       );
        ppEVar92 = &(this->fields).pickedLink;
        *ppEVar92 = pEVar91;
        func_?(ppEVar92,pEVar91);
        return;
      }
      if (e._3_1_ == '\0') {
        return;
      }
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar13 != (MVWorldObjectClientManager *)0x0) {
        e = (EditorStateMachine *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                      (pMVar13,(int32_t)pMStack_14,(MethodInfo *)0x0);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar30 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                            (&VStack_50,(DefaultEventSystem_Input *)0x0,pMVar55);
        uVar93 = pVVar30->x;
        uVar94 = pVVar30->y;
        fVar11 = pVVar30->z;
        fStack_46 = (float)auStack_12._0_4_;
        pCStack_47 = (Collider *)auStack_12._4_4_;
        pTStack_48 = (Transform *)auStack_12._8_4_;
        pMStack_49 = (MethodInfo *)auStack_12._12_4_;
        fStack_42 = (float)auStack_12._16_4_;
        fStack_43 = (float)auStack_12._20_4_;
        pMStack_44 = (MethodInfo *)auStack_12._24_4_;
        pCStack_45 = pCStack_16;
        fStack_38 = fStack_17;
        fStack_39 = fStack_18;
        pMStack_40 = pMStack_14;
        pCStack_41 = pCStack_19;
        puStack_34 = (undefined *)fStack_20;
        pCStack_35 = pCStack_21;
        pMStack_36 = (MethodInfo *)pTStack_22;
        pMStack_37 = pMStack_23;
        VStack_50.y = (float)iStack_24;
        VStack_50.z = (float)((ulonglong)iStack_24 >> 0x20);
        VStack_31.y = (float)uVar93;
        VStack_31.z = (float)uVar94;
        iVar69 = func_?();
        pMVar3 = pMStack_37;
        func_?(iVar69,VStack_31.y,VStack_31.z,fVar11,fStack_46,pCStack_47,pTStack_48,
                        pMStack_49,fStack_42,fStack_43,pMStack_44,pCStack_45,fStack_38,fStack_39,
                        pMStack_40,pCStack_41,puStack_34,pCStack_35,pMStack_36);
        fVar11 = VStack_15.z;
        *(int *)VStack_15.z = iVar69;
        func_?();
        if ((this_02 != (EditorStateMachine *)0x0) &&
           (pSVar8 = (this_02->fields).selectionController, pSVar8 != (SelectionController *)0x0))
        {
          this_03 = SelectionController::SelectionController_get_SelectedWOs
                              (pSVar8,(MethodInfo *)0x0);
          iVar69 = *(int *)fVar11;
          if ((iVar69 != 0) &&
             ((pWVar70 = *(WorldObjectClientRef_1_System_Object_ **)(iVar69 + 0x60),
              pWVar70 != (WorldObjectClientRef_1_System_Object_ *)0x0 &&
              (pOVar29 = WorldObjectClientRef`1[System::Object]::
                         WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                   (pWVar70,
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                   ), this_03 != (HashSet_1_MVWorldObjectClient_ *)0x0)))) {
            bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                     HashSet_1_System_Object__Contains
                               ((HashSet_1_System_Object_ *)this_03,pOVar29,
                                MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Contains_MVWorldObjectClient_
                               );
            if (bVar4 != 0) {
              return;
            }
            iVar69 = *(int *)fVar11;
            if (iVar69 != 0) {
              hit_00.interactionFlags._0_4_ =
                   (int)((ulonglong)*(undefined8 *)(iVar69 + 0x58) >> 0x20);
              hit_00._0_64_ = *(undefined1 (*) [64])(iVar69 + 0x1c);
              hit_00.interactionFlags._4_4_ = 0;
              pWVar28 = EditorStateMachine::EditorStateMachine_Select_1(this_02,hit_00,0,pMVar3);
              ppWVar71 = &(this->fields).selectedWorldObject;
              *ppWVar71 = pWVar28;
              func_?(ppWVar71,pWVar28);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                       (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    pCVar1 = (this_01->fields).contextMenuController;
    if (pCVar1 == (ContextMenuController *)0x0) goto code_?;
    ContextMenuController::ContextMenuController_PopGizmos(pCVar1,(MethodInfo *)0x0);
    this = (ESSelection *)&(this_01->fields).pickedLink;
    if ((*(ESSelection_PickResult_1_LinkObjectBase_ **)this ==
         (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) ||
       (bVar4 = ESSelection_IsMouseUpValid
                           (this_01,((*(ESSelection_PickResult_1_LinkObjectBase_ **)this)->fields).
                                    mousePosition,(MethodInfo *)0x0), bVar4 == 0)) {
      pEVar95 = this;
      if ((*ppEVar27 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
         (bVar4 = ESSelection_IsMouseUpValid
                             (this_01,((*ppEVar27)->fields).mousePosition,(MethodInfo *)0x0),
         pEVar95 = this, bVar4 != 0)) {
        e = (EditorStateMachine *)*ppEVar27;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((e == (EditorStateMachine *)0x0) ||
           (pWVar70 = (WorldObjectClientRef_1_System_Object_ *)e[1].fields._.nextEvent,
           pWVar70 == (WorldObjectClientRef_1_System_Object_ *)0x0)) goto code_?;
        pOVar29 = WorldObjectClientRef`1[System::Object]::
                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                            (pWVar70,
                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                            );
        if (pOVar29 != (Object *)0x0) {
          pWVar70 = (WorldObjectClientRef_1_System_Object_ *)e[1].fields._.nextEvent;
          if (pWVar70 == (WorldObjectClientRef_1_System_Object_ *)0x0) goto code_?;
          pOVar29 = WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              (pWVar70,
                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                              );
          VStack_15.z = (float)pOVar29;
          if (pOVar29 == (Object *)0x0) goto code_?;
          cVar10 = (*(code *)pOVar29->klass[3]._0.typeMetadataHandle)(pOVar29);
          pEVar95 = this;
          if (cVar10 != '\0') goto code_?;
        }
        if (((this_02 == (EditorStateMachine *)0x0) ||
            (pSVar8 = (this_02->fields).selectionController, pSVar8 == (SelectionController *)0x0)
            ) || (pHVar96 = (pSVar8->fields).selectedIDs, pHVar96 == (HashSet_1_System_Int32_ *)0x0
                 )) goto code_?;
        if ((pHVar96->fields)._count == 1) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
            cRam_? = '\x01';
          }
          pWVar28 = (this_01->fields).selectedWorldObject;
          if (pWVar28 == (WorldObjectClientRef *)0x0) goto code_?;
          pOVar29 = WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              ((WorldObjectClientRef_1_System_Object_ *)pWVar28,
                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                              );
          pEVar95 = this;
          if (pOVar29 != (Object *)0x0) {
            pWVar28 = (this_01->fields).selectedWorldObject;
            pCVar1 = (this_01->fields).contextMenuController;
            if (((pWVar28 == (WorldObjectClientRef *)0x0) ||
                (pOVar29 = WorldObjectClientRef`1[System::Object]::
                           WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                     ((WorldObjectClientRef_1_System_Object_ *)pWVar28,
                                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                     ), pOVar29 == (Object *)0x0)) ||
               ((*ppEVar27 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0 ||
                (pCVar1 == (ContextMenuController *)0x0)))) goto code_?;
            ContextMenuController::ContextMenuController_ShowContextMenu
                      (pCVar1,(int32_t)pOVar29[1].klass,((*ppEVar27)->fields).hit.point,
                       (MethodInfo *)0x0);
            pEVar95 = this;
          }
        }
        else {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_There_should_be_selected_objects,(MethodInfo *)0x0);
          pEVar95 = this;
        }
      }
    }
    else {
      pEVar91 = (this_01->fields).pickedLink;
      pEVar95 = (ESSelection *)&(this_01->fields).pickedLink;
      if (pEVar91 == (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) goto code_?;
      ppLVar97 = &(this_01->fields).selectedLinkObject;
      *ppLVar97 = (pEVar91->fields).data;
      func_?();
      pLVar98 = *ppLVar97;
      pCVar1 = (this_01->fields).contextMenuController;
      if (((pLVar98 == (LinkObjectBase *)0x0) ||
          (pEVar91 = *(ESSelection_PickResult_1_LinkObjectBase_ **)pEVar95,
          pEVar91 == (ESSelection_PickResult_1_LinkObjectBase_ *)0x0)) ||
         (pCVar1 == (ContextMenuController *)0x0)) goto code_?;
      ContextMenuController::ContextMenuController_ShowContextMenuLink
                (pCVar1,(pLVar98->fields).linkID,(pLVar98->fields).isObjectLink,
                 (pEVar91->fields).hit.point,(MethodInfo *)0x0);
      ppEVar27 = (ESSelection_PickResult_1_WorldObjectClientRef_ **)VStack_15.z;
    }
code_?:
    pEVar95->klass = (ESSelection__Class *)0x0;
    goto code_?;
  }
  pWVar28 = (this_01->fields).selectedWorldObject;
  if (pWVar28 == (WorldObjectClientRef *)0x0) goto code_?;
  pOVar29 = WorldObjectClientRef`1[System::Object]::
            WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                      ((WorldObjectClientRef_1_System_Object_ *)pWVar28,
                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                      );
  if ((pOVar29 == (Object *)0x0) ||
     (*ppEVar27 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) {
code_?:
    if ((this_02 == (EditorStateMachine *)0x0) ||
       (pSVar8 = (this_02->fields).selectionController, pSVar8 == (SelectionController *)0x0)) {
code_?:
      func_?();
      pcVar99 = (code *)swi(3);
      (*pcVar99)();
      return;
    }
    SelectionController::SelectionController_DeSelectAll(pSVar8,(MethodInfo *)0x0);
    pGVar2 = (this_01->fields).gizmoController;
    if (pGVar2 == (GizmoController *)0x0) goto code_?;
    GizmoController::GizmoController_Hide(pGVar2,(MethodInfo *)0x0);
    this = (ESSelection *)
           EditorStateMachine::EditorStateMachine_get_ParentGroup(this_02,(MethodInfo *)0x0);
    pMVar13 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar13 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar100 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                        (pMVar13,(MethodInfo *)0x0);
    if ((MVGroup *)this == pMVar100) {
      this = (ESSelection *)0x2f;
      pOVar29 = (Object *)func_?();
      FSMEntity::FSMEntity_set_Event((FSMEntity *)this_02,pOVar29,(MethodInfo *)0x0);
    }
  }
  else {
    pWVar28 = ((*ppEVar27)->fields).data;
    if (pWVar28 == (WorldObjectClientRef *)0x0) goto code_?;
    pOVar29 = WorldObjectClientRef`1[System::Object]::
              WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                        ((WorldObjectClientRef_1_System_Object_ *)pWVar28,
                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        );
    if (pOVar29 == (Object *)0x0) goto code_?;
    if (*ppEVar27 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) goto code_?;
    bVar4 = ESSelection_IsMouseUpValid
                       (this_01,((*ppEVar27)->fields).mousePosition,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
    this = (ESSelection *)*ppEVar27;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((this == (ESSelection *)0x0) || (this[2].klass == (ESSelection__Class *)0x0))
    goto code_?;
    pOVar29 = WorldObjectClientRef`1[System::Object]::
              WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                        ((WorldObjectClientRef_1_System_Object_ *)this[2].klass,
                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        );
    if (pOVar29 == (Object *)0x0) {
      this = (ESSelection *)((uint)this & 0xffffff);
    }
    else {
      if ((this[2].klass == (ESSelection__Class *)0x0) ||
         (e = (EditorStateMachine *)
              WorldObjectClientRef`1[System::Object]::
              WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                        ((WorldObjectClientRef_1_System_Object_ *)this[2].klass,
                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        ), e == (EditorStateMachine *)0x0)) goto code_?;
      uVar101 = (**(code **)((_union_86 *)&e->klass[3]._0 + 7))(e);
      this = (ESSelection *)CONCAT13(uVar101,this._0_3_);
    }
    if ((this_02 == (EditorStateMachine *)0x0) ||
       (pSVar8 = (this_02->fields).selectionController, pSVar8 == (SelectionController *)0x0))
    goto code_?;
    e = (EditorStateMachine *)(pSVar8->fields).selectedIDs;
    pWVar28 = (this_01->fields).selectedWorldObject;
    if ((pWVar28 == (WorldObjectClientRef *)0x0) ||
       ((pOVar29 = WorldObjectClientRef`1[System::Object]::
                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                             ((WorldObjectClientRef_1_System_Object_ *)pWVar28,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             ), pOVar29 == (Object *)0x0 || (e == (EditorStateMachine *)0x0))))
    goto code_?;
    bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
             HashSet_1_System_Int32Enum__Contains
                       ((HashSet_1_System_Int32Enum_ *)e,(Int32Enum__Enum)pOVar29[1].klass,
                        MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if ((this._3_1_ == '\0') && (bVar4 != 0)) {
      this = (ESSelection *)(this_01->fields).gizmoController;
      pWVar28 = (this_01->fields).selectedWorldObject;
      if ((((pWVar28 == (WorldObjectClientRef *)0x0) ||
           (e = (EditorStateMachine *)
                WorldObjectClientRef`1[System::Object]::
                WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                          ((WorldObjectClientRef_1_System_Object_ *)pWVar28,
                           MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                          ), e == (EditorStateMachine *)0x0)) ||
          (*ppEVar27 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) ||
         (this == (ESSelection *)0x0)) goto code_?;
      GizmoController::GizmoController_Show
                ((GizmoController *)this,(int32_t)(e->fields)._.transitionTable,
                 ((*ppEVar27)->fields).hit.point,this_02,(MethodInfo *)0x0);
      (this_01->fields).pickedLink = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
      goto code_?;
    }
  }
  (this_01->fields).pickedLink = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
code_?:
  func_?();
  *ppEVar27 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
  func_?();
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
      pVVar4 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         (&RStack_5.m_Direction,(DefaultEventSystem_Input *)0x0,in_stack_6);
      if (this_00 != (Camera *)0x0) {
        pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                           (&RStack_5,this_00,*pVVar4,(MethodInfo *)0x0);
        fVar8 = (pRVar7->m_Origin).x;
        puStack_9 = (undefined *)(pRVar7->m_Origin).y;
        pPStack_10 = (Physics__Class *)(pRVar7->m_Origin).z;
        fVar11 = (pRVar7->m_Direction).x;
        RStack_5.m_Direction.y = (pRVar7->m_Direction).y;
        RStack_5.m_Direction.z = (pRVar7->m_Direction).z;
        iVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
          pPStack_10 = TypeInfo__UnityEngine__Physics;
          func_?();
        }
        ray.m_Origin.y = (float)puStack_9;
        ray.m_Origin.x = fVar8;
        ray.m_Origin.z = (float)pPStack_10;
        ray.m_Direction.x = fVar11;
        ray.m_Direction.y = RStack_5.m_Direction.y;
        ray.m_Direction.z = RStack_5.m_Direction.z;
        UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                  (ray,(RaycastHit *)&stack0xffffffa4,INFINITY,1 << ((byte)iVar12 & 0x1f),
                   (MethodInfo *)0x0);
        pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                           ((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pCVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          fVar8 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_deltaTime
                             ((Touch *)&stack0xffffffa4,(MethodInfo *)0x0);
          RStack_5.m_Direction.z = fVar8;
          if (fVar8 < fStack_2) {
            pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                               ((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
            if ((pCVar13 != (Collider *)0x0) &&
               (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pCVar13,(MethodInfo *)0x0),
               pGVar14 != (GameObject *)0x0)) {
              pSVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                  ((Object_1 *)pGVar14,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar15,(MethodInfo *)0x0);
              pRVar16 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                  ((Regex_CachedCodeEntryKey *)&RStack_5.m_Direction,
                                   (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)&stack0xffffffa4,(MethodInfo *)0x0);
              pSVar17 = pRVar16->_cultureKey;
              pSVar15 = pRVar16->_pattern;
              (hit->point).x = (float)pRVar16->_options;
              (hit->point).y = (float)pSVar17;
              (hit->point).z = (float)pSVar15;
              pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::
                       RaycastHit_get_collider((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
              if ((pCVar13 != (Collider *)0x0) &&
                 (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pCVar13,(MethodInfo *)0x0),
                 pGVar14 != (GameObject *)0x0)) {
                pLVar18 = (LinkObjectBase *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponentInChildren_1
                                    (pGVar14,
                                     LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                                    );
                return pLVar18;
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
  pcVar19 = (code *)swi(3);
  pLVar18 = (LinkObjectBase *)(*pcVar19)();
  return pLVar18;
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
            pSVar4 = (e->fields).selectionController;
            if (pSVar4 != (SelectionController *)0x0) {
              SelectionController::SelectionController_DeSelectAll(pSVar4,(MethodInfo *)0x0);
              if ((GizmoController *)pSVar4[2].monitor != (GizmoController *)0x0) {
                GizmoController::GizmoController_Hide
                          ((GizmoController *)pSVar4[2].monitor,(MethodInfo *)0x0);
                pOVar5 = (Object *)func_?();
                FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      pMVar3 = (e->fields).weCamera;
      if (pMVar3 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar3,0,(MethodInfo *)0x0);
        pSVar4 = (e->fields).selectionController;
        if (pSVar4 != (SelectionController *)0x0) {
          SelectionController::SelectionController_DeSelectAll(pSVar4,(MethodInfo *)0x0);
          if ((GizmoController *)pSVar4[2].monitor != (GizmoController *)0x0) {
            GizmoController::GizmoController_Hide
                      ((GizmoController *)pSVar4[2].monitor,(MethodInfo *)0x0);
            pOVar5 = (Object *)func_?();
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  pVVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
           DefaultEventSystem_Input_get_mousePosition
                     ((Vector3 *)&stack0xffffffe4,(DefaultEventSystem_Input *)0x0,in_stack_2)
  ;
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
  ppWVar2 = &(this->fields).selectedWorldObject;
  *ppWVar2 = pWVar1;
  func_?(ppWVar2,pWVar1);
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  ppCVar3 = &(this->fields).contextMenuController;
  *ppCVar3 = contextMenuController;
  func_?(ppCVar3,contextMenuController);
  ppGVar4 = &(this->fields).gizmoController;
  *ppGVar4 = gizmoController;
  func_?(ppGVar4,gizmoController);
  return;
}

