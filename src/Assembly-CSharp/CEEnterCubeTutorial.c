
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
  ppEVar1 = &(this->fields).esm;
  *ppEVar1 = e;
  func_?(ppEVar1,e);
  if (this_01 == (EditorStateMachine *)0x0) {
code_?:
    func_?();
  }
  else {
    while( true ) {
      bVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                         (this_01,(MethodInfo *)0x0);
      if (bVar2 != 0) break;
      pMVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroup(this_01,(MethodInfo *)0x0);
      if (pMVar3 == (MVGroup *)0x0) goto code_?;
      bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                         ((MVWorldObjectClient *)pMVar3,InteractionFlags__Enum_CantAddChildren,
                          (MethodInfo *)0x0);
      if (bVar2 == 0) break;
      EditorStateMachine::EditorStateMachine_ExitGroup(this_01,(MethodInfo *)0x0);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    pWStack_5 = (pMVar4->fields).worldNetwork;
    if (pWStack_5 == (WorldNetwork *)0x0) goto code_?;
    pEVar6 = (pWStack_5->fields)._.InitializedGameQueryData;
    this_02 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    unaff_ESI = (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pEVar6,(Delegate *)this_02,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    if (unaff_ESI == (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)0x0) {
      unaff_EDI = (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)
                  &(pWStack_5->fields)._.InitializedGameQueryData;
      *(EventHandler_1_InitializedGameQueryDataEventArgs_ **)unaff_EDI =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
      iVar7 = 0;
code_?:
      func_?(unaff_EDI,iVar7);
      pMVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroup(this_01,(MethodInfo *)0x0);
      if (pMVar3 != (MVGroup *)0x0) {
        t = (pMVar3->fields)._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
        unaff_ESI = (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
        pEStack_8 = unaff_ESI;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)unaff_ESI,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        e = (EditorStateMachine *)CONCAT13(1,e._0_3_);
        pWStack_5 = (WorldNetwork *)func_?(TypeInfo__System__Byte,(int)&e + 3);
        fStack_9 = (this->fields).cubeSize;
        pOVar10 = (Object *)func_?(TypeInfo__System__Single,&fStack_9);
        unaff_EDI = (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)this;
        if (unaff_ESI != (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(Object *)pWStack_5,
                     pOVar10,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          uStack_11 = 2;
          pOVar10 = (Object *)func_?(TypeInfo__System__Byte,&uStack_11);
          uStack_12 = 0x15;
          pOVar13 = (Object *)func_?(TypeInfo__System__Byte,&uStack_12);
          unaff_ESI = pEStack_8;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pEStack_8,pOVar10,pOVar13,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          uStack_14 = 3;
          pOVar10 = (Object *)func_?(TypeInfo__System__Byte,&uStack_14);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar4 != (MVNetworkGame *)0x0) {
            pMVar15 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
            if (pMVar15 != (MVLocalPlayer *)0x0) {
              iStack_16 = (pMVar15->fields)._._ProfileID_k__BackingField;
              pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&iStack_16);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,pOVar10,pOVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              this_00 = (this_01->fields)._.data;
              uStack_17 = 1;
              pOVar10 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_17);
              if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          (this_00,(Object *)StringLiteral_IsNewPrototype,pOVar10,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
                this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (this_04 != (MVWorldObjectClientManager *)0x0) {
                  pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                      (this_04,(MethodInfo *)0x0);
                  if (pMVar3 != (MVGroup *)0x0) {
                    groupId = (pMVar3->fields)._._.id;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__UnityEngine__Vector3);
                      cRam_? = '\x01';
                    }
                    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
                    uVar19 = (pVVar18->upVector).x;
                    uVar20 = (pVVar18->upVector).y;
                    fVar21 = (float)uVar19 * _UNK_?;
                    fVar22 = (float)uVar20 * _UNK_?;
                    fVar23 = (pVVar18->upVector).z * _UNK_?;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__UnityEngine__Quaternion);
                      cRam_? = '\x01';
                    }
                    pQVar24 = TypeInfo__UnityEngine__Quaternion->static_fields;
                    fVar25 = (pQVar24->identityQuaternion).x;
                    fVar26 = (pQVar24->identityQuaternion).y;
                    fVar27 = (pQVar24->identityQuaternion).z;
                    fVar28 = (pQVar24->identityQuaternion).w;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__UnityEngine__Vector3);
                      cRam_? = '\x01';
                    }
                    fVar29 = (this->fields).cubeSize;
                    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
                    uVar30 = (pVVar18->oneVector).x;
                    uVar31 = (pVVar18->oneVector).y;
                    if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
                      position.y = fVar22;
                      position.x = fVar21;
                      position.z = fVar23;
                      rotation.y = fVar26;
                      rotation.x = fVar25;
                      rotation.z = fVar27;
                      rotation.w = fVar28;
                      scale.y = (float)uVar31 * fVar29;
                      scale.x = (float)uVar30 * fVar29;
                      scale.z = (pVVar18->oneVector).z * fVar29;
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
    pEVar6 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
              func_?(unaff_ESI,
                              TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    if (pEVar6 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) goto code_?;
    unaff_EDI = (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)
                &(pWStack_5->fields)._.InitializedGameQueryData;
    *(EventHandler_1_InitializedGameQueryDataEventArgs_ **)unaff_EDI = pEVar6;
    pEStack_8 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    iVar7 = func_?(unaff_ESI,
                             TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    if (iVar7 != 0) goto code_?;
  }
  func_?(unaff_ESI,pEStack_8);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
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
  this_00 = e;
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      e = (EditorStateMachine *)0x38;
      value = (Object *)func_?(TypeInfo__EditorEvent,&e);
      FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
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
    ppEVar4 = &(pWVar2->fields)._.InitializedGameQueryData;
    this_00 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      *ppEVar4 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
      iVar6 = 0;
    }
    else {
      pEVar3 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
      if (pEVar3 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) goto code_?;
      *ppEVar4 = pEVar3;
      iVar6 = func_?();
      if (iVar6 == 0) goto code_?;
    }
    func_?();
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
        pMVar7 != (MVLocalPlayer *)0x0)) && (iVar6 != 0)) {
      if ((pMVar7->fields)._._ActorNr_k__BackingField != *(int *)(iVar6 + 0xc)) {
        return;
      }
      if ((*(int *)(iVar6 + 8) != 0) && (_UNK_? != (EditorStateMachine *)0x0)) {
        EditorStateMachine::EditorStateMachine_SelectWO
                  (_UNK_?,*(int32_t *)(*(int *)(iVar6 + 8) + 8),0,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* CEEnterCubeTutorial() */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial__ctor
               (CEEnterCubeTutorial *this,MethodInfo *method)

{
  (this->fields).cubeSize = 1.0;
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  ppWVar2 = &(this->fields)._.tintedWo;
  *ppWVar2 = pWVar1;
  func_?(ppWVar2,&stack0xfffffffc,&UNK_?,ppWVar2,pWVar1);
  return;
}

