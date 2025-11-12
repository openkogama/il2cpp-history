
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial_Enter
               (CEEnterCubeTutorial *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_IsNewPrototype);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).esm = esm;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).esm >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (esm != (EditorStateMachine *)0x0) {
    while (pSVar6 = (esm->fields).selectionController, pSVar6 != (SelectionController *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pSVar6->fields).parentGroups == (Stack_1_System_Int32_ *)0x0) break;
      iVar7 = FUN_?();
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar8 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                              (pMVar8,(MethodInfo *)0x0), pMVar9 == (MVGroup *)0x0)) break;
      if (iVar7 == (pMVar9->fields)._._.id) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar10 != (MVGameControllerBase *)0x0) &&
            (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
           (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) {
          pEVar13 = (pWVar12->fields)._.InitializedGameQueryData;
          this_03 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>)
          ;
          uVar14 = 0;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_03,(Object *)this,
                     MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pEVar13,(Delegate *)this_03,(MethodInfo *)0x0);
          pEVar16 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
          if (pDVar15 == (Delegate *)0x0) {
            (pWVar12->fields)._.InitializedGameQueryData =
                 (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
          }
          else {
            pEVar13 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                      FUN_?(pDVar15,
                                    TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>
                                   );
            if (pEVar13 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
              FUN_?(pDVar15,pEVar16);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            (pWVar12->fields)._.InitializedGameQueryData = pEVar13;
            pEVar16 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
            lVar18 = FUN_?();
            if (lVar18 == 0) {
              FUN_?(pDVar15,pEVar16);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&(pWVar12->fields)._.InitializedGameQueryData >> 0xc);
            uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
            do {
              uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
              puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          pMVar9 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
          if (pMVar9 != (MVGroup *)0x0) {
            t = (pMVar9->fields)._.transform;
            if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
              FUN_?();
            }
            SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
            this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (this_04,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            afStackX_8[0] = (float)CONCAT31(afStackX_8[0]._1_3_,1);
            pOVar19 = (Object *)FUN_?(uRam_?,afStackX_8);
            afStackX_8[0] = (this->fields).cubeSize;
            pOVar20 = (Object *)FUN_?(uRam_?,afStackX_8);
            if (this_04 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
              uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_04,pOVar19,pOVar20,
                         (InsertionBehavior__Enum)uVar14,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              afStackX_8[0]._0_1_ = 2;
              pOVar19 = (Object *)FUN_?(uRam_?,afStackX_8);
              afStackX_8[0]._0_1_ = 0x15;
              pOVar20 = (Object *)FUN_?(uRam_?,afStackX_8);
              uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_04,pOVar19,pOVar20,
                         (InsertionBehavior__Enum)uVar14,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              afStackX_8[0] = (float)CONCAT31(afStackX_8[0]._1_3_,3);
              pOVar19 = (Object *)FUN_?(uRam_?,afStackX_8);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar10 != (MVGameControllerBase *)0x0) &&
                  (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
                 ((this_00 = (pMVar11->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0
                  && (pMVar21 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                          (this_00,(MethodInfo *)0x0),
                     pMVar21 != (MVLocalPlayer *)0x0)))) {
                afStackX_8[0] = (float)(pMVar21->fields)._._ProfileID_k__BackingField;
                pOVar20 = (Object *)FUN_?(uRam_?,afStackX_8);
                uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          ((Dictionary_2_System_Object_System_Object_ *)this_04,pOVar19,pOVar20,
                           (InsertionBehavior__Enum)uVar14,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
                this_01 = (esm->fields)._.data;
                afStackX_8[0] = (float)CONCAT31(afStackX_8[0]._1_3_,1);
                pOVar19 = (Object *)FUN_?(uRam_?,afStackX_8);
                if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            (this_01,(Object *)StringLiteral_IsNewPrototype,pOVar19,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar14 >> 8),1),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((pMVar10 != (MVGameControllerBase *)0x0) &&
                     (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) {
                    this_02 = (pMVar11->fields).operationRequests;
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if ((((pMVar10 != (MVGameControllerBase *)0x0) &&
                         (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
                        ((pMVar11->fields).worldNetwork != (WorldNetwork *)0x0)) &&
                       ((pMVar8 = (MVWorldObjectClientManager *)
                                   (((pMVar11->fields).worldNetwork)->fields)._.
                                   worldObjectClientManager,
                        pMVar8 != (MVWorldObjectClientManager *)0x0 &&
                        (pMVar9 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_get_RootGroup
                                             (pMVar8,(MethodInfo *)0x0), pMVar9 != (MVGroup *)0x0)
                        ))) {
                      groupId = (pMVar9->fields)._._.id;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
                      VStack_23.x = (pVVar22->upVector).x;
                      VStack_23.y = (pVVar22->upVector).y;
                      fVar24 = VStack_23.y * _UNK_?;
                      fVar25 = VStack_23.x * _UNK_?;
                      fVar26 = (pVVar22->upVector).z * _UNK_?;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Quaternion);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pQVar27 = TypeInfo__UnityEngine__Quaternion->static_fields;
                      uVar14._0_4_ = (pQVar27->identityQuaternion).x;
                      uVar14._4_4_ = (pQVar27->identityQuaternion).y;
                      uVar28._0_4_ = (pQVar27->identityQuaternion).z;
                      uVar28._4_4_ = (pQVar27->identityQuaternion).w;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      fVar29 = (this->fields).cubeSize;
                      pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
                      VStack_23.x = (pVVar22->oneVector).x;
                      VStack_23.y = (pVVar22->oneVector).y;
                      fVar30 = fVar29 * VStack_23.x;
                      VStack_31.z = fVar29 * (pVVar22->oneVector).z;
                      fVar29 = fVar29 * VStack_23.y;
                      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
                        VStack_23.y = fVar24;
                        VStack_23.x = fVar25;
                        VStack_31.y = fVar29;
                        VStack_31.x = fVar30;
                        VStack_23.z = fVar26;
                        aQStack_32[0]._0_8_ = uVar14;
                        aQStack_32[0]._8_8_ = uVar28;
                        MVNetworkGame+OperationRequests::
                        MVNetworkGame_OperationRequests_RequestBuiltInItem
                                  (this_02,(BuiltInItem__Enum)
                                           CONCAT71((int7)((ulonglong)pQVar27 >> 8),1),groupId,
                                   (Dictionary_2_System_Object_System_Object_ *)this_04,&VStack_23,
                                   aQStack_32,&VStack_31,1,0,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      }
      pMVar9 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
      if (pMVar9 == (MVGroup *)0x0) break;
      if (((uint)(pMVar9->fields)._.interactionFlags >> 0x13 & 1) == 0) goto code_?;
      EditorStateMachine::EditorStateMachine_ExitGroup(esm,(MethodInfo *)0x0);
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial_Execute
               (CEEnterCubeTutorial *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (esm == (EditorStateMachine *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
  if (pMVar2 == (MVWorldObjectClient *)0x0) {
    return;
  }
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000010);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_State_is_locked__could_not_set_s;
  if ((esm->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  bVar5 = iRam_? != 0;
  (esm->fields)._.nextEvent = evt;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(esm->fields)._.nextEvent >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (evt == (Object *)0x0) {
    if ((esm->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar5 = iRam_? != 0;
    (esm->fields)._.currentState = (IState *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(esm->fields)._.currentState >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_00 = (esm->fields)._.transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((esm->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar3 = (String *)
               (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
      (esm->fields)._.stateName = pSVar3;
      func_?(&(esm->fields)._.stateName);
      (esm->fields)._.currentState = pIVar10;
      func_?(&(esm->fields)._.currentState);
      (esm->fields)._.nextEvent = (Object *)0x0;
      func_?(&(esm->fields)._.nextEvent);
      (esm->fields)._.prevEvent = (esm->fields)._.curEvent;
      func_?(&esm->fields);
      (esm->fields)._.curEvent = evt;
      func_?(&(esm->fields)._.curEvent);
      if ((esm->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(esm->fields)._.data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((esm->fields)._.clearStack == 0) {
      (esm->fields)._.clearStack = 1;
    }
    else {
      pSVar11 = (esm->fields)._.stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void WOCM_InitializedGameQueryData(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial_WOCM_InitializedGameQueryData
               (CEEnterCubeTutorial *this,Object *sender,InitializedGameQueryDataEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
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
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pWVar3 = (pMVar2->fields).worldNetwork, pWVar3 != (WorldNetwork *)0x0)) {
    pEVar4 = (pWVar3->fields)._.InitializedGameQueryData;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pEVar4,(Delegate *)this_02,(MethodInfo *)0x0);
    pEVar6 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    if (pDVar5 == (Delegate *)0x0) {
      (pWVar3->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                FUN_?(pDVar5,
                              TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      if (pEVar4 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
        FUN_?(pDVar5,pEVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (pWVar3->fields)._.InitializedGameQueryData = pEVar4;
      pEVar6 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
      lVar8 = FUN_?();
      if (lVar8 == 0) {
        FUN_?(pDVar5,pEVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pWVar3->fields)._.InitializedGameQueryData >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
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
       ((this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
        ((pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         pMVar13 != (MVLocalPlayer *)0x0 && (e != (InitializedGameQueryDataEventArgs *)0x0)))))) {
      if ((pMVar13->fields)._._ActorNr_k__BackingField == (e->fields).InstigatorActorNumber) {
        pMVar14 = (e->fields).RootWO;
        if (((pMVar14 == (MVWorldObjectClient *)0x0) ||
            (pEVar15 = (this->fields).esm, pEVar15 == (EditorStateMachine *)0x0)) ||
           (this_01 = (pEVar15->fields).selectionController, this_01 == (SelectionController *)0x0))
        goto code_?;
        SelectionController::SelectionController_SelectWO
                  (this_01,(pMVar14->fields)._.id,0,1,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
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

