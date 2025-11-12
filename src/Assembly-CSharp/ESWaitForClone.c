
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone_Enter
               (ESWaitForClone *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_goToInsert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((e == (EditorStateMachine *)0x0) ||
     (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(e->fields)._.data,
     this_01 ==
     (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0)
     ) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     (this_01,(Object *)StringLiteral_goToInsert,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  (this->fields).goToInsert = (byte)((uint)iVar1 >> 0x1f) ^ 1;
  pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if ((pMVar2 != (MVWorldObjectClient *)0x0) && ((this->fields).goToInsert == 0)) {
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
    puVar3 = (undefined8 *)
              (*(pMVar2->klass->vtable).get_WorldPosition_1.methodPtr)(&stack0xffffffffffffffe8);
    fVar4 = *(float *)(puVar3 + 1);
    uVar5 = *puVar3;
    (this->fields).pos.x = (float)(int)uVar5;
    (this->fields).pos.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    (this->fields).pos.z = fVar4;
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
    pQVar6 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                        ((Quaternion *)&stack0xffffffffffffffe8,pMVar2,(MethodInfo *)0x0);
    fVar4 = pQVar6->y;
    fVar7 = pQVar6->z;
    fVar8 = pQVar6->w;
    (this->fields).rot.x = pQVar6->x;
    (this->fields).rot.y = fVar4;
    (this->fields).rot.z = fVar7;
    (this->fields).rot.w = fVar8;
  }
  object = (e->fields).selectionController;
  if (object == (SelectionController *)0x0) {
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar10 = (object->fields).selectedIDs;
  if (pHVar10 != (HashSet_1_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&uStack_12 >> 0xc);
      puVar13 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar14 = *puVar13;
        LOCK();
        uVar15 = *puVar13;
        if (uVar14 == uVar15) {
          *puVar13 = uVar14 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (uVar14 != uVar15);
    }
    iStack_16 = (pHVar10->fields)._version;
    puStack_17 = (undefined *)0x0;
    uStack_12._0_4_ = SUB84(pHVar10,0);
    uStack_12._4_4_ = (undefined4)((ulonglong)pHVar10 >> 0x20);
    uStack_18 = (undefined4)uStack_12;
    uStack_19 = uStack_12._4_4_;
    uStack_20 = 0;
    uStack_21 = 0;
    uStack_12 = 0;
    puStack_22 = (undefined1 *)&uStack_18;
    while (cVar23 = FUN_?(), cVar23 != '\0') {
      iVar1 = (int32_t)uStack_21;
      pMVar24 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar24 == (MVWorldObjectClientManager *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOStackX_18 = (Object *)0x0;
      this_00 = (pMVar24->fields).worldObjects;
      if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar1,&pOStackX_18,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (pOStackX_18 == (Object *)0x0) goto code_?;
      (*(code *)pOStackX_18->klass[3].vtable.Equals.method)
                (pOStackX_18,pOStackX_18->klass[3].vtable.Finalize.methodPtr);
      pMVar24 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      this_02 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_02,(Object *)object,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar24 == (MVWorldObjectClientManager *)0x0) goto code_?;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                (pMVar24,iVar1,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
                 (MethodInfo *)0x0);
    }
    pHVar10 = (object->fields).selectedIDs;
    if (pHVar10 != (HashSet_1_System_Int32_ *)0x0) {
      if (0 < (pHVar10->fields)._lastIndex) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar10->fields)._slots,0,(pHVar10->fields)._lastIndex,(MethodInfo *)0x0)
        ;
        pIVar25 = (pHVar10->fields)._buckets;
        if (pIVar25 == (Int32__Array *)0x0) goto code_?;
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar10->fields)._buckets,0,(int32_t)pIVar25->max_length,
                   (MethodInfo *)0x0);
        (pHVar10->fields)._count = 0;
        (pHVar10->fields)._lastIndex = 0;
        (pHVar10->fields)._freeList = -1;
      }
      piVar26 = &(pHVar10->fields)._version;
      *piVar26 = *piVar26 + 1;
      return;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone_Execute
               (ESWaitForClone *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TranslateMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_moveWithAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_translateMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      QStack_2.x = (this->fields).pos.x;
      QStack_2.y = (this->fields).pos.y;
      QStack_2.z = (this->fields).pos.z;
      pIVar3 = (pMVar1->klass->vtable).set_WorldPosition.methodPtr;
      (*pIVar3)(pMVar1);
      pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        QStack_2.x = (this->fields).rot.x;
        QStack_2.y = (this->fields).rot.y;
        QStack_2.z = (this->fields).rot.z;
        QStack_2.w = (this->fields).rot.w;
        MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                  (pMVar1,&QStack_2,(MethodInfo *)0x0);
        pTVar4 = TypeInfo__TranslateMode;
        if ((this->fields).goToInsert != 0) {
          nextState = EditorEvent__Enum_ESInsert;
code_?:
          FSMEntity::FSMEntity_PushState_1
                    ((FSMEntity *)e,nextState,EditorEvent__Enum_ObjectSelected,(MethodInfo *)0x0);
          return;
        }
        pOVar5 = (Object *)0x0;
        pDVar6 = (e->fields)._.data;
        uStackX_10 = 0;
        iVar7._0_2_ = (TypeInfo__TranslateMode->_0).byval_arg.attrs;
        iVar7._2_1_ = (TypeInfo__TranslateMode->_0).byval_arg.type;
        iVar7._3_1_ = (TypeInfo__TranslateMode->_0).byval_arg.field_0xb;
        if (iVar7 < 0) {
          if (((TypeInfo__TranslateMode->_0).generic_class == (Il2CppGenericClass *)0x0) ||
             (((TypeInfo__TranslateMode->_1).field_0x6d & 8) == 0)) {
            pOVar5 = (Object *)FUN_?(TypeInfo__TranslateMode);
            FUN_?(pOVar5 + 1,&uStackX_10,(longlong)(int)(pTVar4->_1).instance_size + -0x10);
            if (iRam_? != 0) {
              uVar8 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
              puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar10 = *puVar9;
                LOCK();
                uVar11 = *puVar9;
                if (uVar10 == uVar11) {
                  *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
                }
                UNLOCK();
              } while (uVar10 != uVar11);
            }
          }
        }
        else {
          pOVar5 = (Object *)((ulonglong)uStackX_14 << 0x20);
        }
        if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uVar12 = CONCAT71((int7)((ulonglong)pIVar3 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar6,(Object *)StringLiteral_translateMode,pOVar5,
                     (InsertionBehavior__Enum)uVar12,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pDVar6 = (e->fields)._.data;
          uStackX_10 = CONCAT31(uStackX_10._1_3_,1);
          pOVar5 = (Object *)FUN_?(uRam_?,&uStackX_10);
          if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (pDVar6,(Object *)StringLiteral_moveWithAvatar,pOVar5,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar12 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            nextState = EditorEvent__Enum_ESTranslate;
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone_Exit
               (ESWaitForClone *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).pos.x = (pVVar2->zeroVector).x;
  (this->fields).pos.y = fVar3;
  (this->fields).pos.z = fVar4;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar5->identityQuaternion).y;
  fVar3 = (pQVar5->identityQuaternion).z;
  fVar6 = (pQVar5->identityQuaternion).w;
  (this->fields).rot.x = (pQVar5->identityQuaternion).x;
  (this->fields).rot.y = fVar4;
  (this->fields).rot.z = fVar3;
  (this->fields).rot.w = fVar6;
  return;
}


/* ESWaitForClone() */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone__ctor
               (ESWaitForClone *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).pos.x = (pVVar2->zeroVector).x;
  (this->fields).pos.y = fVar3;
  (this->fields).pos.z = fVar4;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar5->identityQuaternion).y;
  fVar3 = (pQVar5->identityQuaternion).z;
  fVar6 = (pQVar5->identityQuaternion).w;
  (this->fields).rot.x = (pQVar5->identityQuaternion).x;
  (this->fields).rot.y = fVar4;
  (this->fields).rot.z = fVar3;
  (this->fields).rot.w = fVar6;
  pWVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                      ((MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.tintedWo = pWVar7;
  if (bVar1) {
    uVar8 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar1 = uVar10 == *puVar11;
      if (bVar1) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pIVar13 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.logger = pIVar13;
  if (bVar1) {
    uVar8 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar1 = uVar10 == *puVar11;
      if (bVar1) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

