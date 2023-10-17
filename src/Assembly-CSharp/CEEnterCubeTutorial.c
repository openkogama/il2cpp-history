
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
  this_02 = (UnityAction_2_System_Object_System_Object_ *)this;
  if (this_01 != (EditorStateMachine *)0x0) {
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
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (pWVar4 = (pMVar3->fields).worldNetwork, pWVar4 != (WorldNetwork *)0x0)) {
      pEStack_5 = (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)
                   (pWVar4->fields)._.InitializedGameQueryData;
      pUStack_6 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>)
      ;
      if (pUStack_6 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUStack_6,(Object *)this,
                   MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                   ,(MethodInfo *)0x0);
        this_02 = (UnityAction_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pEStack_5,(Delegate *)pUStack_6,(MethodInfo *)0x0);
        pEStack_5 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
        if (this_02 == (UnityAction_2_System_Object_System_Object_ *)0x0) {
          (pWVar4->fields)._.InitializedGameQueryData =
               (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
          iVar7 = 0;
        }
        else {
          pEVar8 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                    func_?(this_02,
                                    TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>
                                   );
          if (pEVar8 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)
          goto code_?;
          (pWVar4->fields)._.InitializedGameQueryData = pEVar8;
          pEStack_5 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
          iVar7 = func_?(this_02,
                                   TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>
                                  );
          if (iVar7 == 0) goto code_?;
        }
        func_?(&(pWVar4->fields)._.InitializedGameQueryData,iVar7);
        pMVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroup(this_01,(MethodInfo *)0x0);
        if (pMVar2 != (MVGroup *)0x0) {
          this_02 = (UnityAction_2_System_Object_System_Object_ *)(pMVar2->fields)._.transform;
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__SharedCubeFunctions);
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                    ((Transform *)this_02,0,(MethodInfo *)0x0);
          pUStack_6 = (UnityAction_2_System_Object_System_Object_ *)
                      func_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                     );
          if (pUStack_6 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)pUStack_6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            e = (EditorStateMachine *)CONCAT13(1,e._0_3_);
            pOVar9 = (Object *)func_?(TypeInfo__System__Byte,(int)&e + 3);
            fStack_10 = (this->fields).cubeSize;
            pOVar11 = (Object *)func_?(TypeInfo__System__Single,&fStack_10);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)pUStack_6,pOVar9,pOVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            uStack_12 = 2;
            pOVar9 = (Object *)func_?(TypeInfo__System__Byte,&uStack_12);
            uStack_13 = 0x15;
            pOVar11 = (Object *)func_?(TypeInfo__System__Byte,&uStack_13);
            this_02 = pUStack_6;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)pUStack_6,pOVar9,pOVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            uStack_14 = 3;
            pOVar9 = (Object *)func_?(TypeInfo__System__Byte,&uStack_14);
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar3 != (MVNetworkGame *)0x0) {
              pMVar15 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
              if (pMVar15 != (MVLocalPlayer *)0x0) {
                iStack_16 = (pMVar15->fields)._._ProfileID_k__BackingField;
                pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&iStack_16);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar9,pOVar11,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                this_00 = (this_01->fields)._.data;
                uStack_17 = 1;
                pOVar9 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_17);
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
                                   (Dictionary_2_System_Object_System_Object_ *)this_02,position,
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
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(this_02,pEStack_5);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
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
        if (pEVar3 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)
        goto code_?;
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

