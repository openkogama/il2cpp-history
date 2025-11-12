
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI_Enter
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
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
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CERoamUUI____c___Enter_b__4_0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CERoamUUI____c___Enter_b__4_1_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CERoamUUI____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).didExit = 0;
  if (esm != (EditorStateMachine *)0x0) {
    pGVar1 = (esm->fields).gameObject;
    if (*(int *)&(TypeInfo__CERoamUUI____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_01 = TypeInfo__CERoamUUI____c->static_fields->__9__4_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0) {
      if (*(int *)&(TypeInfo__CERoamUUI____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar2 = TypeInfo__CERoamUUI____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pCVar2,
                 MethodInfo__CERoamUUI____c___Enter_b__4_0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__CERoamUUI____c->static_fields->__9__4_0 = this_01;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__CERoamUUI____c->static_fields->__9__4_0 >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
              );
    this_00 = (esm->fields).cubeModelingStateMachine;
    if (this_00 != (CubeModelingStateMachine *)0x0) {
      CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(this_00,(MethodInfo *)0x0);
      pWVar8 = MVWorldObjectClientManager::
                MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields)._.tintedWo = pWVar8;
      if (bVar7) {
        uVar3 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pMVar9 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
      if (pMVar9 != (MVGroup *)0x0) {
        pTVar10 = (pMVar9->fields)._.transform;
        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar10,1,(MethodInfo *)0x0);
        pGVar1 = (esm->fields).gameObject;
        if (*(int *)&(TypeInfo__CERoamUUI____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_02 = TypeInfo__CERoamUUI____c->static_fields->__9__4_1;
        if (this_02 == (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)0x0) {
          if (*(int *)&(TypeInfo__CERoamUUI____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          pCVar2 = TypeInfo__CERoamUUI____c->static_fields->__9;
          this_02 = (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)pCVar2,
                     MethodInfo__CERoamUUI____c___Enter_b__4_1_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__CERoamUUI____c->static_fields->__9__4_1 = this_02;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&TypeInfo__CERoamUUI____c->static_fields->__9__4_1 >> 0xc);
            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                  );
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar11 != (MVGameControllerBase *)0x0) &&
            (pMVar12 = (pMVar11->fields).game, pMVar12 != (MVNetworkGame *)0x0)) &&
           (pGVar13 = (pMVar12->fields).GameEventManager, pGVar13 != (GameEventManager *)0x0)) {
          pGVar14 = (pGVar13->fields).AvatarCommandsBuildMode;
          iVar15 = (this->fields)._.stateType;
          uVar16 = *(undefined8 *)&(this->fields).centerPos;
          fVar17 = (this->fields).centerPos.z;
          pMVar9 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
          if ((pMVar9 != (MVGroup *)0x0) &&
             (pTVar10 = (pMVar9->fields)._.transform, pTVar10 != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_18 = 0;
            fStack_19 = 0.0;
            pvVar20 = (pTVar10->fields)._._.m_CachedPtr;
            if (pvVar20 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
              pcVar21 = (code *)swi(3);
              (*pcVar21)();
              return;
            }
            pcVar21 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar21 = (code *)swi(3);
              (*pcVar21)();
              return;
            }
            pcRam_? = pcVar21;
            (*pcRam_?)(pvVar20,&uStack_18);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar23 = (pVVar22->upVector).x;
            uVar24 = (pVVar22->upVector).y;
            fVar25 = (pVVar22->upVector).z;
            lVar26 = FUN_?(TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData);
            *(undefined8 *)(lVar26 + 0x10) = uVar16;
            *(float *)(lVar26 + 0x18) = fVar17;
            *(ulonglong *)(lVar26 + 0x1c) =
                 CONCAT44(uStack_18._4_4_ + (float)uVar24,(float)uStack_18 + (float)uVar23);
            *(float *)(lVar26 + 0x24) = fStack_19 + fVar25;
            if (pGVar14 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
              if ((pGVar14->fields).OnEnterBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
                pAVar27 = (pGVar14->fields).OnEnterBuildStateEvent;
                (*(pAVar27->fields)._._.invoke_impl)
                          ((pAVar27->fields)._._.method_code,iVar15,lVar26,
                           (pAVar27->fields)._._.method);
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Boolean EnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CERoamUUI::CERoamUUI_EnterObject
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CERoamUUI____c___EnterObject_b__9_0_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CERoamUUI____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (esm == (EditorStateMachine *)0x0) goto code_?;
  pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
         ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__MVCubeModelInstance)) {
        pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
        if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
        pSVar3 = (esm->fields).selectionController;
        iVar4 = (pMVar1->fields)._.groupId;
        if (pSVar3 == (SelectionController *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pSVar3->fields).parentGroups == (Stack_1_System_Int32_ *)0x0)
        goto code_?;
        iVar5 = FUN_?();
        if (iVar4 == iVar5) {
          root = (esm->fields).gameObject;
          if (*(int *)&(TypeInfo__CERoamUUI____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          this_01 = TypeInfo__CERoamUUI____c->static_fields->__9__9_0;
          if (this_01 == (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)0x0) {
            if (*(int *)&(TypeInfo__CERoamUUI____c->_1).field_0x1c == 0) {
              FUN_?();
            }
            object = TypeInfo__CERoamUUI____c->static_fields->__9;
            this_01 = (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                       MethodInfo__CERoamUUI____c___EnterObject_b__9_0_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__CERoamUUI____c->static_fields->__9__9_0 = this_01;
            func_?(&TypeInfo__CERoamUUI____c->static_fields->__9__9_0);
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                    );
          (this->fields).enterEditNextFrame = 1;
          return 1;
        }
      }
    }
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      bVar2 = (TypeInfo__MVGroup->_1).naturalAligment;
      if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
         ((MVGroup__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__MVGroup)) {
        pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          bVar2 = (TypeInfo__MVGroup->_1).naturalAligment;
          if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
             ((MVGroup__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
              TypeInfo__MVGroup)) {
            FUN_?(pMVar1);
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
        }
        pSVar3 = (esm->fields).selectionController;
        if (pSVar3 != (SelectionController *)0x0) {
          SelectionController::SelectionController_DeSelectAll(pSVar3,(MethodInfo *)0x0);
          SelectionController::SelectionController_PushWOParents(pSVar3,pMVar1,1,(MethodInfo *)0x0);
          if (pMVar1 != (MVWorldObjectClient *)0x0) {
            t = (pMVar1->fields).transform;
            if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
              FUN_?();
            }
            SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
            this_00 = (esm->fields).weCamera;
            if (this_00 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,1,(MethodInfo *)0x0);
              auStackX_10[0] = 0x34;
              value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_10);
              FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,value,(MethodInfo *)0x0);
              return 1;
            }
          }
        }
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
    }
  }
  return 0;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI_Execute
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).enterEditNextFrame != 0) {
    (this->fields).enterEditNextFrame = 0;
    auStackX_8[0] = 0x35;
    value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_8);
    if (esm == (EditorStateMachine *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,value,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    VStack_2.interactionFlags = 0;
    VStack_2.point.x = 0.0;
    VStack_2.point.y = 0.0;
    VStack_2.point.z = 0.0;
    VStack_2.normal.x = 0.0;
    VStack_2.normal.y = 0.0;
    VStack_2.normal.z = 0.0;
    VStack_2.cubePos.x = 0;
    VStack_2.cubePos.y = 0;
    VStack_2.cubePos.z = 0;
    VStack_2._30_2_ = 0;
    VStack_2.face = 0;
    VStack_2.isCubeHit = 0;
    VStack_2._37_3_ = 0;
    VStack_2.woId = 0;
    VStack_2._44_4_ = 0;
    VStack_2.cube = (Cube *)0x0;
    VStack_2.distance = 0.0;
    VStack_2._60_4_ = 0;
    VStack_2.collider = (Collider *)0x0;
    VStack_2.transform = (Transform *)0x0;
    bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      (&VStack_2,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
    VStack_4.point.x = VStack_2.point.x;
    VStack_4.point.y = VStack_2.point.y;
    VStack_4.point.z = VStack_2.point.z;
    VStack_4.normal.x = VStack_2.normal.x;
    VStack_4.normal.y = VStack_2.normal.y;
    VStack_4.normal.z = VStack_2.normal.z;
    VStack_4.cubePos = VStack_2.cubePos;
    VStack_4._30_2_ = VStack_2._30_2_;
    VStack_4.face = VStack_2.face;
    VStack_4.isCubeHit = VStack_2.isCubeHit;
    VStack_4._37_3_ = VStack_2._37_3_;
    VStack_4.woId = VStack_2.woId;
    VStack_4._44_4_ = VStack_2._44_4_;
    VStack_4.cube = VStack_2.cube;
    VStack_4.distance = VStack_2.distance;
    VStack_4._60_4_ = VStack_2._60_4_;
    VStack_4.collider = VStack_2.collider;
    VStack_4.transform = VStack_2.transform;
    VStack_4.interactionFlags = VStack_2.interactionFlags;
    ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
              ((ESStateBase *)this,esm,bVar3,&VStack_4,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hidden);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).didExit == 0) {
    VStack_2.point.x = 0.0;
    VStack_2.point.y = 0.0;
    VStack_2.point.z = 0.0;
    VStack_2.normal.x = 0.0;
    VStack_2.interactionFlags = 0;
    VStack_2.normal.y = 0.0;
    VStack_2.normal.z = 0.0;
    VStack_2.cubePos.x = 0;
    VStack_2.cubePos.y = 0;
    VStack_2.cubePos.z = 0;
    VStack_2._30_2_ = 0;
    VStack_2.face = 0;
    VStack_2.isCubeHit = 0;
    VStack_2._37_3_ = 0;
    VStack_2.woId = 0;
    VStack_2._44_4_ = 0;
    VStack_2.cube = (Cube *)0x0;
    VStack_2.distance = 0.0;
    VStack_2._60_4_ = 0;
    VStack_2.collider = (Collider *)0x0;
    VStack_2.transform = (Transform *)0x0;
    uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Hidden,(MethodInfo *)0x0);
    uVar5 = ~(1 << (uVar5 & 0x1f)) & 0xfffffffb;
    ignoreWoIds = (HashSet_1_System_Int32_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    FUN_?(ignoreWoIds,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      (&VStack_2,ignoreWoIds,uVar5,(MethodInfo *)0x0);
    if ((bVar3 != 0) && (VStack_2.woId != -1)) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar3 == 0) || ((this->fields).downWorldObjectID != VStack_2.woId)) {
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          (this->fields).downWorldObjectID = VStack_2.woId;
        }
      }
      else {
        (this->fields).downWorldObjectID = -1;
        if (esm == (EditorStateMachine *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pWVar6 = EditorStateMachine::EditorStateMachine_Select(esm,0,uVar5,(MethodInfo *)0x0);
        if (pWVar6 != (WorldObjectClientRef *)0x0) {
          CERoamUUI_EnterObject(this,esm,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI_Exit
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  ESStateBase::ESStateBase_DeTintCurrent((ESStateBase *)this,(MethodInfo *)0x0);
  bVar1 = cRam_? == '\0';
  (this->fields).didExit = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (pGVar4 = (pMVar3->fields).GameEventManager, pGVar4 != (GameEventManager *)0x0)) &&
     (pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
     pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
    if ((pGVar5->fields).OnExitBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
      pAVar6 = (pGVar5->fields).OnExitBuildStateEvent;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar6->fields)._._.invoke_impl)
                ((pAVar6->fields)._._.method_code,(this->fields)._.stateType,0,
                 (pAVar6->fields)._._.method);
      return;
    }
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean HandleSelect(EditorStateMachine) */

bool Assembly-CSharp.dll::CERoamUUI::CERoamUUI_HandleSelect
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hidden);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).didExit == 0) {
    VStack_1.point.x = 0.0;
    VStack_1.point.y = 0.0;
    VStack_1.point.z = 0.0;
    VStack_1.normal.x = 0.0;
    VStack_1.interactionFlags = 0;
    VStack_1.normal.y = 0.0;
    VStack_1.normal.z = 0.0;
    VStack_1.cubePos.x = 0;
    VStack_1.cubePos.y = 0;
    VStack_1.cubePos.z = 0;
    VStack_1._30_2_ = 0;
    VStack_1.face = 0;
    VStack_1.isCubeHit = 0;
    VStack_1._37_3_ = 0;
    VStack_1.woId = 0;
    VStack_1._44_4_ = 0;
    VStack_1.cube = (Cube *)0x0;
    VStack_1.distance = 0.0;
    VStack_1._60_4_ = 0;
    VStack_1.collider = (Collider *)0x0;
    VStack_1.transform = (Transform *)0x0;
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Hidden,(MethodInfo *)0x0);
    uVar2 = ~(1 << (uVar2 & 0x1f)) & 0xfffffffb;
    ignoreWoIds = (HashSet_1_System_Int32_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    FUN_?(ignoreWoIds,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      (&VStack_1,ignoreWoIds,uVar2,(MethodInfo *)0x0);
    if ((bVar3 != 0) && (VStack_1.woId != -1)) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar3 != 0) && ((this->fields).downWorldObjectID == VStack_1.woId)) {
        (this->fields).downWorldObjectID = -1;
        if (esm != (EditorStateMachine *)0x0) {
          pWVar4 = EditorStateMachine::EditorStateMachine_Select(esm,0,uVar2,(MethodInfo *)0x0);
          return pWVar4 != (WorldObjectClientRef *)0x0;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar3 = (*pcVar5)();
        return bVar3;
      }
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        (this->fields).downWorldObjectID = VStack_1.woId;
      }
    }
  }
  return 0;
}


/* CERoamUUI(Vector3) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI__ctor
               (CERoamUUI *this,Vector3 *centerPos,MethodInfo *method)

{
  (this->fields).downWorldObjectID = -1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  fVar1 = centerPos->y;
  fVar2 = centerPos->z;
  (this->fields).centerPos.x = centerPos->x;
  (this->fields).centerPos.y = fVar1;
  (this->fields).centerPos.z = fVar2;
  return;
}

