
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_Enter
               (CEEditBodyUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IWorldObjectWithModelingConstraint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CEEditBodyUUI____c___Enter_b__6_0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CEEditBodyUUI____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UIItems);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_constrainVisualizer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ESStateBase::ESStateBase_Enter((ESStateBase *)this,esm,(MethodInfo *)0x0);
  if (esm != (EditorStateMachine *)0x0) {
    pGVar1 = (esm->fields).gameObject;
    if (*(int *)&(TypeInfo__CEEditBodyUUI____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_01 = TypeInfo__CEEditBodyUUI____c->static_fields->__9__6_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0) {
      if (*(int *)&(TypeInfo__CEEditBodyUUI____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      object = TypeInfo__CEEditBodyUUI____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                 MethodInfo__CEEditBodyUUI____c___Enter_b__6_0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__CEEditBodyUUI____c->static_fields->__9__6_0 = this_01;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__CEEditBodyUUI____c->static_fields->__9__6_0 >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
              );
    pWVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                        ((MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields)._.tintedWo = pWVar7;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (pMVar8 == (MVWorldObjectClient *)0x0) {
      iVar9 = -1;
    }
    else {
      bVar10 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar8->klass->_1).naturalAligment < bVar10) ||
         ((MVCubeModelInstance__Class *)(pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        FUN_?(pMVar8);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar9 = (pMVar8->fields)._.id;
    }
    (this->fields).targetCubeModelId = iVar9;
    pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((this->fields).targetCubeModelId != -1) &&
       (this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
       this_02 != (MVWorldObjectClientManager *)0x0)) {
      pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_02,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
      pMVar8 = (MVWorldObjectClient *)0x0;
      pMVar14 = pMVar8;
      if (pMVar13 != (MVWorldObjectClient *)0x0) {
        bVar10 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if (((pMVar13->klass->_1).naturalAligment < bVar10) ||
           (pMVar14 = pMVar13,
           (MVCubeModelInstance__Class *)(pMVar13->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
           TypeInfo__MVCubeModelInstance)) {
          FUN_?(pMVar13);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if ((pMVar14 != (MVWorldObjectClient *)0x0) && (pMVar12 != (MVWorldObjectClientManager *)0x0))
      {
        pMVar14 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar12,(pMVar14->fields)._.groupId,(MethodInfo *)0x0);
        pIVar15 = TypeInfo__IWorldObjectWithModelingConstraint;
        if (pMVar14 == (MVWorldObjectClient *)0x0) {
          (this->fields).modelBody = (IWorldObjectWithModelingConstraint *)0x0;
        }
        else {
          pIVar16 = (IWorldObjectWithModelingConstraint *)
                    FUN_?(pMVar14,TypeInfo__IWorldObjectWithModelingConstraint);
          if (pIVar16 == (IWorldObjectWithModelingConstraint *)0x0) {
            FUN_?(pMVar14,pIVar15);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          (this->fields).modelBody = pIVar16;
          pIVar15 = TypeInfo__IWorldObjectWithModelingConstraint;
          lVar3 = FUN_?();
          if (lVar3 == 0) {
            FUN_?(pMVar14,pIVar15);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(this->fields).modelBody >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        bVar17 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0)
        ;
        if (bVar17 == 0) {
          pMVar18 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
          if (pMVar18 == (MVGroup *)0x0) goto code_?;
          pTVar19 = (pMVar18->fields)._.transform;
          if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar19,0,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (((this->fields).targetCubeModelId != -1) &&
           (pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
           pMVar12 != (MVWorldObjectClientManager *)0x0)) {
          pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar12,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
          pMVar14 = pMVar8;
          if (pMVar13 != (MVWorldObjectClient *)0x0) {
            bVar10 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
            if (((pMVar13->klass->_1).naturalAligment < bVar10) ||
               (pMVar14 = pMVar13,
               (MVCubeModelInstance__Class *)
               (pMVar13->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
               TypeInfo__MVCubeModelInstance)) {
              FUN_?(pMVar13);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if (pMVar14 != (MVWorldObjectClient *)0x0) {
            pTVar19 = (pMVar14->fields).transform;
            if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
              FUN_?();
            }
            SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar19,1,(MethodInfo *)0x0)
            ;
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (((this->fields).targetCubeModelId != -1) &&
               (pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
               pMVar12 != (MVWorldObjectClientManager *)0x0)) {
              pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                  (pMVar12,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
              pMVar14 = pMVar8;
              if (pMVar13 != (MVWorldObjectClient *)0x0) {
                bVar10 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
                if (((pMVar13->klass->_1).naturalAligment < bVar10) ||
                   (pMVar14 = pMVar13,
                   (MVCubeModelInstance__Class *)
                   (pMVar13->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
                   TypeInfo__MVCubeModelInstance)) {
                  FUN_?(pMVar13,TypeInfo__MVCubeModelInstance);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              if (pMVar14 != (MVWorldObjectClient *)0x0) {
                DrawPlane::DrawPlane_DrawPlaneToModel
                          ((pMVar14->fields).gameObject,(MethodInfo *)0x0);
                pIVar16 = (this->fields).modelBody;
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((this->fields).targetCubeModelId != -1) {
                  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (pMVar12 == (MVWorldObjectClientManager *)0x0) goto code_?;
                  pMVar14 = MVWorldObjectClientManager::
                            MVWorldObjectClientManager_GetWorldObjectClient
                                      (pMVar12,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
                  if (pMVar14 != (MVWorldObjectClient *)0x0) {
                    bVar10 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
                    if (((pMVar14->klass->_1).naturalAligment < bVar10) ||
                       (pMVar8 = pMVar14,
                       (MVCubeModelInstance__Class *)
                       (pMVar14->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
                       TypeInfo__MVCubeModelInstance)) {
                      FUN_?(pMVar14);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                  }
                }
                if (pIVar16 != (IWorldObjectWithModelingConstraint *)0x0) {
                  pIVar15 = pIVar16->klass;
                  uVar20 = 0;
                  uVar21._0_1_ = (pIVar15->_1).rank;
                  uVar21._1_1_ = (pIVar15->_1).minimumAlignment;
                  if (uVar21 != 0) {
                    do {
                      if (pIVar15->interfaceOffsets[uVar20].interfaceType ==
                          (Il2CppClass *)TypeInfo__IWorldObjectWithModelingConstraint) {
                        pVVar22 = &(&pIVar15->vtable)[pIVar15->interfaceOffsets[uVar20].offset].
                                   GetModelConstaint;
                        goto code_?;
                      }
                      uVar20 = uVar20 + 1;
                    } while (uVar20 < uVar21);
                  }
                  pVVar22 = (VirtualInvokeData *)
                            FUN_?(pIVar16,TypeInfo__IWorldObjectWithModelingConstraint,0);
code_?:
                  constraint = (IModelingConstraint *)(*pVVar22->methodPtr)(pIVar16,pMVar8);
                  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
                  name = StringLiteral_constrainVisualizer;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_Internal_CreateGameObject(pGVar1,name,(MethodInfo *)0x0);
                  if (pGVar1 != (GameObject *)0x0) {
                    pCVar23 = (ConstraintVisualizer *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_AddComponent_1
                                        (pGVar1,
                                         ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                                        );
                    bVar6 = iRam_? != 0;
                    (this->fields).constraintVisualizer = pCVar23;
                    if (bVar6) {
                      uVar2 = (uint)((ulonglong)&(this->fields).constraintVisualizer >> 0xc);
                      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                        LOCK();
                        bVar6 = uVar4 == *puVar5;
                        if (bVar6) {
                          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar6);
                    }
                    pCVar23 = (this->fields).constraintVisualizer;
                    pMVar24 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
                    if (pCVar23 != (ConstraintVisualizer *)0x0) {
                      ConstraintVisualizer::ConstraintVisualizer_Init
                                (pCVar23,(MVCubeModelBase *)pMVar24,constraint,StringLiteral_UIItems
                                 ,(MethodInfo *)0x0);
                      this_00 = (esm->fields).cubeModelingStateMachine;
                      pMVar24 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
                      if (this_00 != (CubeModelingStateMachine *)0x0) {
                        CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                                  (this_00,(MVCubeModelBase *)pMVar24,constraint,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar25 = TypeInfo__MVGameControllerBase->static_fields->instance;
                        if (((pMVar25 != (MVGameControllerBase *)0x0) &&
                            (pMVar26 = (pMVar25->fields).game, pMVar26 != (MVNetworkGame *)0x0)) &&
                           (pGVar27 = (pMVar26->fields).GameEventManager,
                           pGVar27 != (GameEventManager *)0x0)) {
                          pGVar28 = (pGVar27->fields).AvatarCommandsBuildMode;
                          iVar9 = (this->fields)._.stateType;
                          pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                              (esm,(MethodInfo *)0x0);
                          if (pMVar8 != (MVWorldObjectClient *)0x0) {
                            iVar29 = (pMVar8->fields)._.id;
                            lVar3 = FUN_?(
                                                  TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData
                                                  );
                            *(int32_t *)(lVar3 + 0x10) = iVar29;
                            if (pGVar28 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                              if ((pGVar28->fields).OnEnterBuildStateEvent !=
                                  (Action_2_EditorEvent_Object_ *)0x0) {
                                pAVar30 = (pGVar28->fields).OnEnterBuildStateEvent;
                                (*(pAVar30->fields)._._.invoke_impl)
                                          ((pAVar30->fields)._._.method_code,iVar9,lVar3,
                                           (pAVar30->fields)._._.method);
                              }
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
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_Execute
               (CEEditBodyUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    if ((esm != (EditorStateMachine *)0x0) &&
       (pCVar2 = (esm->fields).cubeModelingStateMachine, pCVar2 != (CubeModelingStateMachine *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pCVar2->klass->vtable).Update.methodPtr)(pCVar2,(pCVar2->klass->vtable).Update.method);
      return;
    }
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000010);
  if (esm == (EditorStateMachine *)0x0) goto code_?;
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
  pSVar4 = StringLiteral_State_is_locked__could_not_set_s;
  if ((esm->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_4(pSVar4,str1,(MethodInfo *)0x0);
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
    pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar5 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,2,pSVar4);
    return;
  }
  bVar6 = iRam_? != 0;
  (esm->fields)._.nextEvent = evt;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(esm->fields)._.nextEvent >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (evt == (Object *)0x0) {
    if ((esm->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar6 = iRam_? != 0;
    (esm->fields)._.currentState = (IState *)0x0;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(esm->fields)._.currentState >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  else {
    this_00 = (esm->fields)._.transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar11 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar11 != (IState *)0x0) {
      if ((esm->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar4 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (esm->fields)._.stateName = pSVar4;
      func_?(&(esm->fields)._.stateName);
      (esm->fields)._.currentState = pIVar11;
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
      pSVar12 = (esm->fields)._.stateStack;
      if (pSVar12 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      piVar13 = &(pSVar12->fields)._version;
      *piVar13 = *piVar13 + 1;
      (pSVar12->fields)._size = 0;
    }
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_Exit
               (CEEditBodyUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DrawPlane::DrawPlane_ReturnDrawPlaneToLandscape((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
    if ((pWVar2->fields).isActive != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__DrawPlane);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
      if (pDVar1 == (DrawPlaneControllerUUI *)0x0) goto code_?;
      DrawPlaneControllerUUI::DrawPlaneControllerUUI_ToggleDrawPlane(pDVar1,(MethodInfo *)0x0);
    }
    this_00 = (this->fields).constraintVisualizer;
    if (this_00 != (ConstraintVisualizer *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      if (esm != (EditorStateMachine *)0x0) {
        bVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0)
        ;
        if (bVar3 == 0) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pSVar4 = (esm->fields).selectionController;
          if (pSVar4 == (SelectionController *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((pSVar4->fields).parentGroups == (Stack_1_System_Int32_ *)0x0)
          goto code_?;
          id = FUN_?();
          if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
          pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (this_01,id,(MethodInfo *)0x0);
          if (pMVar5 == (MVWorldObjectClient *)0x0) goto code_?;
          t = (pMVar5->fields).transform;
          if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar3 = 1;
        }
        else {
          pMVar6 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
          if (pMVar6 == (MVCubeModelInstance *)0x0) goto code_?;
          t = (pMVar6->fields)._._.transform;
          if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar3 = 0;
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,bVar3,(MethodInfo *)0x0);
        pSVar4 = (esm->fields).selectionController;
        if (pSVar4 != (SelectionController *)0x0) {
          SelectionController::SelectionController_DeSelectAll(pSVar4,(MethodInfo *)0x0);
          pCVar7 = (esm->fields).cubeModelingStateMachine;
          if (pCVar7 != (CubeModelingStateMachine *)0x0) {
            CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
                      (pCVar7,(MethodInfo *)0x0);
            pCVar7 = (esm->fields).cubeModelingStateMachine;
            if (pCVar7 != (CubeModelingStateMachine *)0x0) {
              CubeModelingStateMachine::CubeModelingStateMachine_EndEdit(pCVar7,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar8 != (MVGameControllerBase *)0x0) &&
                   (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
                  (pGVar10 = (pMVar9->fields).GameEventManager, pGVar10 != (GameEventManager *)0x0))
                 && (pGVar11 = (pGVar10->fields).AvatarCommandsBuildMode,
                    pGVar11 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                if ((pGVar11->fields).OnExitBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
                  pAVar12 = (pGVar11->fields).OnExitBuildStateEvent;
                  (*(pAVar12->fields)._._.invoke_impl)
                            ((pAVar12->fields)._._.method_code,(this->fields)._.stateType,0,
                             (pAVar12->fields)._._.method);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVCubeModelInstance get_TargetCubeModel() */

MVCubeModelInstance *
Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_get_TargetCubeModel
          (CEEditBodyUUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).targetCubeModelId != -1) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      pMVar2 = (MVCubeModelInstance *)(*pcVar1)();
      return pMVar2;
    }
    pMVar2 = (MVCubeModelInstance *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if (pMVar2 != (MVCubeModelInstance *)0x0) {
      bVar3 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
         ((MVCubeModelInstance__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
          TypeInfo__MVCubeModelInstance)) {
        return pMVar2;
      }
      FUN_?(pMVar2,TypeInfo__MVCubeModelInstance);
      pcVar1 = (code *)swi(3);
      pMVar2 = (MVCubeModelInstance *)(*pcVar1)();
      return pMVar2;
    }
  }
  return (MVCubeModelInstance *)0x0;
}

