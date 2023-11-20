
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial_Enter
               (CEEnterCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_IsNewPrototype);
    cRam_? = '\x01';
  }
  this_01 = e;
  (this->fields).esm = e;
  func_?(&(this->fields).esm,e);
  if (this_01 == (EditorStateMachine *)0x0) {
code_?:
    func_?();
  }
  else {
    while( true ) {
      bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                         (this_01,(MethodInfo *)0x0);
      if (bVar1 != 0) break;
      pMVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroup(this_01,(MethodInfo *)0x0);
      if (pMVar2 == (MVGroup *)0x0) goto code_?;
      bVar1 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                         ((MVWorldObjectClient *)pMVar2,InteractionFlags__Enum_CantAddChildren,
                          (MethodInfo *)0x0);
      if (bVar1 == 0) break;
      EditorStateMachine::EditorStateMachine_ExitGroup(this_01,(MethodInfo *)0x0);
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    pEStack_4 = (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)
                (pMVar3->fields).worldNetwork;
    if (pEStack_4 == (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)0x0)
    goto code_?;
    a = *(Delegate **)&(pEStack_4->_0).byval_arg.attrs;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Combine
                          (a,(Delegate *)this_02,(MethodInfo *)0x0);
    pEVar5 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    if (unaff_EDI == (Delegate *)0x0) {
      (pEStack_4->_0).byval_arg.attrs = 0;
      (pEStack_4->_0).byval_arg.type = 0;
      (pEStack_4->_0).byval_arg.field_0x7 = 0;
      iVar6 = 0;
      unaff_ESI = pEStack_4;
code_?:
      func_?(&(unaff_ESI->_0).byval_arg.attrs,iVar6);
      pMVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroup(this_01,(MethodInfo *)0x0);
      if (pMVar2 != (MVGroup *)0x0) {
        t = (pMVar2->fields)._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
        unaff_ESI = (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
        pEStack_7 = unaff_ESI;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)unaff_ESI,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        e = (EditorStateMachine *)CONCAT13(1,e._0_3_);
        pEStack_4 = (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)
                    func_?(TypeInfo__System__Byte,(int)&e + 3);
        fStack_8 = (this->fields).cubeSize;
        pOVar9 = (Object *)func_?(TypeInfo__System__Single,&fStack_8);
        unaff_EDI = (Delegate *)this;
        if (unaff_ESI != (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(Object *)pEStack_4,
                     pOVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          uStack_10 = 2;
          pOVar9 = (Object *)func_?(TypeInfo__System__Byte,&uStack_10);
          uStack_11 = 0x15;
          pOVar12 = (Object *)func_?(TypeInfo__System__Byte,&uStack_11);
          unaff_ESI = pEStack_7;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pEStack_7,pOVar9,pOVar12,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          uStack_13 = 3;
          pOVar9 = (Object *)func_?(TypeInfo__System__Byte,&uStack_13);
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar3 != (MVNetworkGame *)0x0) {
            pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
            if (pMVar14 != (MVLocalPlayer *)0x0) {
              iStack_15 = (pMVar14->fields)._._ProfileID_k__BackingField;
              pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&iStack_15);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,pOVar9,pOVar12,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              this_00 = (this_01->fields)._.data;
              uStack_16 = 1;
              pOVar9 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_16);
              if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          (this_00,(Object *)StringLiteral_IsNewPrototype,pOVar9,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
                this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (this_04 != (MVWorldObjectClientManager *)0x0) {
                  pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                      (this_04,(MethodInfo *)0x0);
                  if (pMVar2 != (MVGroup *)0x0) {
                    groupId = (pMVar2->fields)._._.id;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__UnityEngine__Vector3);
                      cRam_? = '\x01';
                    }
                    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
                    uVar18 = (pVVar17->upVector).x;
                    uVar19 = (pVVar17->upVector).y;
                    fVar20 = (float)uVar18 * _UNK_?;
                    fVar21 = (float)uVar19 * _UNK_?;
                    fVar22 = (pVVar17->upVector).z * _UNK_?;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__UnityEngine__Quaternion);
                      cRam_? = '\x01';
                    }
                    pQVar23 = TypeInfo__UnityEngine__Quaternion->static_fields;
                    fVar24 = (pQVar23->identityQuaternion).x;
                    fVar25 = (pQVar23->identityQuaternion).y;
                    fVar26 = (pQVar23->identityQuaternion).z;
                    fVar27 = (pQVar23->identityQuaternion).w;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__UnityEngine__Vector3);
                      cRam_? = '\x01';
                    }
                    fVar28 = (this->fields).cubeSize;
                    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
                    uVar29 = (pVVar17->oneVector).x;
                    uVar30 = (pVVar17->oneVector).y;
                    if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
                      position.y = fVar21;
                      position.x = fVar20;
                      position.z = fVar22;
                      rotation.y = fVar25;
                      rotation.x = fVar24;
                      rotation.z = fVar26;
                      rotation.w = fVar27;
                      scale.y = (float)uVar30 * fVar28;
                      scale.x = (float)uVar29 * fVar28;
                      scale.z = (pVVar17->oneVector).z * fVar28;
                      MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_RequestBuiltInItem
                                (this_03,BuiltInItem__Enum_CubeModel,groupId,
                                 (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,position,
                                 rotation,scale,1,0,(MethodInfo *)0x0);
                      return;
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
    iVar6 = func_?(unaff_EDI,
                             TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    unaff_ESI = pEStack_4;
    if (iVar6 == 0) goto code_?;
    (pEStack_4->_0).byval_arg.attrs = (short)iVar6;
    (pEStack_4->_0).byval_arg.type = (char)((uint)iVar6 >> 0x10);
    (pEStack_4->_0).byval_arg.field_0x7 = (char)((uint)iVar6 >> 0x18);
    pEStack_7 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    iVar6 = func_?(unaff_EDI,
                             TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    if (iVar6 != 0) goto code_?;
  }
  func_?(unaff_EDI,pEStack_7);
  pEVar5 = unaff_ESI;
code_?:
  func_?(unaff_EDI,pEVar5);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial_Execute
               (CEEnterCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,(ExceptionArgument__Enum)e,(MethodInfo *)0x0);
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      value = (Object *)func_?();
      FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WOCM_InitializedGameQueryData(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial_WOCM_InitializedGameQueryData
               (CEEnterCubeTutorial *this,Object *sender,InitializedGameQueryDataEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) {
    pEVar3 = (pWVar2->fields)._.InitializedGameQueryData;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pWVar2->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
      iVar5 = 0;
    }
    else {
      pEVar3 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
      if (pEVar3 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) goto code_?;
      (pWVar2->fields)._.InitializedGameQueryData = pEVar3;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
        pMVar6 != (MVLocalPlayer *)0x0)) && (iVar5 != 0)) {
      if ((pMVar6->fields)._._ActorNr_k__BackingField != *(int *)(iVar5 + 0xc)) {
        return;
      }
      if ((*(int *)(iVar5 + 8) != 0) && (_UNK_? != (EditorStateMachine *)0x0)) {
        EditorStateMachine::EditorStateMachine_SelectWO
                  (_UNK_?,*(int32_t *)(*(int *)(iVar5 + 8) + 8),0,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* CEEnterCubeTutorial() */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial__ctor
               (CEEnterCubeTutorial *this,MethodInfo *method)

{
  (this->fields).cubeSize = 1.0;
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

