
/* Boolean CanClone() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_CanClone
               (GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).editorStateMachine;
  if (((pEVar1 == (EditorStateMachine *)0x0) ||
      (this_00 = (pEVar1->fields).selectionController, this_00 == (SelectionController *)0x0)) ||
     (pHVar2 = SelectionController::SelectionController_get_SelectedWOs(this_00,(MethodInfo *)0x0),
     pHVar2 == (HashSet_1_MVWorldObjectClient_ *)0x0)) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pHStack_8 = (HashSet_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pHVar2->fields)._version << 0x20);
    uStack_9 = 0;
    HStack_10._8_8_ = pHStack_8;
    HStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pHStack_8 = &HStack_10;
    HStack_10._set = (HashSet_1_System_Object_ *)pHVar2;
    while( true ) {
      bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Object]
              ::HashSet_1_T_Enumerator_System_Object__MoveNext
                        (&HStack_10,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar11 == 0) {
        return 1;
      }
      if (HStack_10._current == (Object *)0x0) break;
      if (((*(uint *)&HStack_10._current[0x11].monitor >> 0xd & 1) == 0) ||
         ((*(uint *)&HStack_10._current[0x11].monitor >> 0x11 & 1) != 0)) {
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Boolean CanCloneRoot() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_CanCloneRoot(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).editorStateMachine;
  if (((pEVar1 == (EditorStateMachine *)0x0) ||
      (this_00 = (pEVar1->fields).selectionController, this_00 == (SelectionController *)0x0)) ||
     (pHVar2 = SelectionController::SelectionController_get_SelectedWOs(this_00,(MethodInfo *)0x0),
     pHVar2 == (HashSet_1_MVWorldObjectClient_ *)0x0)) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pHStack_8 = (HashSet_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pHVar2->fields)._version << 0x20);
    uStack_9 = 0;
    HStack_10._8_8_ = pHStack_8;
    HStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pHStack_8 = &HStack_10;
    HStack_10._set = (HashSet_1_System_Object_ *)pHVar2;
    while( true ) {
      bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Object]
              ::HashSet_1_T_Enumerator_System_Object__MoveNext
                        (&HStack_10,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar11 == 0) {
        return 1;
      }
      if (HStack_10._current == (Object *)0x0) break;
      if (((*(uint *)&HStack_10._current[0x11].monitor >> 0x1a & 1) == 0) ||
         ((*(uint *)&HStack_10._current[0x11].monitor >> 0x11 & 1) != 0)) {
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Void Clone() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Clone
               (GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
  }
  this_01 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
            __9__31_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9
    ;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__31_0 =
         this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                       static_fields->__9__31_0 >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_02,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void CloneRoot() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_CloneRoot(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___CloneRoot_b__32_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0
                           );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
  }
  this_01 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
            __9__32_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9
    ;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___CloneRoot_b__32_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__32_0 =
         this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                       static_fields->__9__32_0 >> 0xc);
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
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
     (pOVar7 = (Object__Class *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                         (this_02,(this->fields).woID,(MethodInfo *)0x0), object_00 == (Object *)0x0
     )) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar6 = iRam_? != 0;
  object_00[1].klass = pOVar7;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
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
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_03,object_00,
             MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar3 = (longlong)(pLVar10->fields)._size;
    uVar2 = 0;
    if (0 < lVar3) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar13 = (pLVar10->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar2) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_03,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar3);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DoGizmoAction(GizmoAction) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_DoGizmoAction(GizmoMenuNg *this,GizmoAction__Enum gizmoAction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XZ_rotation_is_in_early_access_f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                           );
  if (object_00 != (Object *)0x0) {
    *(GizmoAction__Enum *)&object_00[1].klass = gizmoAction;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    this_02 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__44_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0
           = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                        static_fields->__9__44_0 >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
              );
    if (((this->fields).objectLocked == 0) || ((this->fields).isSubscriber != 0)) {
code_?:
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,object_00,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                );
      GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).subscriberActions;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,*(Int32Enum__Enum *)&object_00[1].klass,
                         MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                        );
      if (bVar6 == 0) goto code_?;
      this_01 = (this->fields).memberToRotate;
      textBubbleText = TM::TM__(StringLiteral_XZ_rotation_is_in_early_access_f,(MethodInfo *)0x0);
      if (this_01 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (this_01,textBubbleText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void FlipX() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_FlipX
               (GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>,
                  8,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XZ_rotation_is_in_early_access_f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                           );
  if (object_00 != (Object *)0x0) {
    *(undefined4 *)&object_00[1].klass = 8;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    this_02 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__44_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0
           = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                        static_fields->__9__44_0 >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
              );
    if (((this->fields).objectLocked == 0) || ((this->fields).isSubscriber != 0)) {
code_?:
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,object_00,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                );
      GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).subscriberActions;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,*(Int32Enum__Enum *)&object_00[1].klass,
                         MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                        );
      if (bVar6 == 0) goto code_?;
      this_01 = (this->fields).memberToRotate;
      textBubbleText = TM::TM__(StringLiteral_XZ_rotation_is_in_early_access_f,(MethodInfo *)0x0);
      if (this_01 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (this_01,textBubbleText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void FlipY() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_FlipY
               (GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>,
                  9,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XZ_rotation_is_in_early_access_f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                           );
  if (object_00 != (Object *)0x0) {
    *(undefined4 *)&object_00[1].klass = 9;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    this_02 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__44_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0
           = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                        static_fields->__9__44_0 >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
              );
    if (((this->fields).objectLocked == 0) || ((this->fields).isSubscriber != 0)) {
code_?:
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,object_00,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                );
      GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).subscriberActions;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,*(Int32Enum__Enum *)&object_00[1].klass,
                         MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                        );
      if (bVar6 == 0) goto code_?;
      this_01 = (this->fields).memberToRotate;
      textBubbleText = TM::TM__(StringLiteral_XZ_rotation_is_in_early_access_f,(MethodInfo *)0x0);
      if (this_01 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (this_01,textBubbleText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void FlipZ() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_FlipZ
               (GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>,
                  10,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XZ_rotation_is_in_early_access_f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                           );
  if (object_00 != (Object *)0x0) {
    *(undefined4 *)&object_00[1].klass = 10;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    this_02 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__44_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0
           = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                        static_fields->__9__44_0 >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
              );
    if (((this->fields).objectLocked == 0) || ((this->fields).isSubscriber != 0)) {
code_?:
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,object_00,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                );
      GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).subscriberActions;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,*(Int32Enum__Enum *)&object_00[1].klass,
                         MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                        );
      if (bVar6 == 0) goto code_?;
      this_01 = (this->fields).memberToRotate;
      textBubbleText = TM::TM__(StringLiteral_XZ_rotation_is_in_early_access_f,(MethodInfo *)0x0);
      if (this_01 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (this_01,textBubbleText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleCloningHotkey() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_HandleCloningHotkey(GizmoMenuNg *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)(0x71);
  if (cVar3 == '\0') {
    return;
  }
  bVar4 = GizmoMenuNg_CanClone(this,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    bVar4 = GizmoMenuNg_CanCloneRoot(this,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___CloneRoot_b__32_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    object = (Object *)
             FUN_?(
                          TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0
                          );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    pEVar6 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__32_0;
    if (pEVar6 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      pGVar7 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      pEVar6 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,(Object *)pGVar7,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___CloneRoot_b__32_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__32_0
           = pEVar6;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)
                        &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                         static_fields->__9__32_0 >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
       (pOVar13 = (Object__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                            (this_01,(this->fields).woID,(MethodInfo *)0x0), object == (Object *)0x0
       )) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar12 = iRam_? != 0;
    object[1].klass = pOVar13;
    if (bVar12) {
      uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_02,object,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    pEVar6 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__31_0;
    if (pEVar6 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      pGVar7 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      pEVar6 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,(Object *)pGVar7,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__31_0
           = pEVar6;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)
                        &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                         static_fields->__9__31_0 >> 0xc);
        puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar14 = *puVar11;
          LOCK();
          uVar10 = *puVar11;
          if (uVar14 == uVar10) {
            *puVar11 = uVar14 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar14 != uVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
  }
  pMVar15 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar15->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar15);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar5,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar16 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar9 = (longlong)(pLVar16->fields)._size;
    uVar8 = 0;
    if (0 < lVar9) {
      lVar17 = 0;
      lVar18 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar16 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar16->fields)._size <= uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar19 = (pLVar16->fields)._items;
        if (pTVar19 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar19->max_length <= uVar8) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar19->vector + lVar18 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar5,(BaseEventData *)0x0,this_02,
                           (pMVar15->field7_0x38).rgctx_data[1].method);
        if (bVar4 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar8 = uVar8 + 1;
        lVar17 = lVar17 + 1;
        lVar18 = lVar18 + 8;
      } while (lVar17 < lVar9);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(Int32, Vector3, EditorStateMachine) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_Initialize
               (GizmoMenuNg *this,int32_t id,Vector3 *wp,EditorStateMachine *esm,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).woID = id;
  (this->fields).editorStateMachine = esm;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).editorStateMachine >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  fVar6 = wp->y;
  fVar7 = wp->z;
  (this->fields).worldPosition.x = wp->x;
  (this->fields).worldPosition.y = fVar6;
  (this->fields).worldPosition.z = fVar7;
  GizmoMenuNg_Setup(this,(MethodInfo *)0x0);
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar8 == (MainCameraManager *)0x0) ||
     (obj = (pMVar8->fields).mainCamera, obj == (Camera *)0x0)) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uStack_10._0_4_ = (this->fields).worldPosition.x;
  uStack_10._4_4_ = (this->fields).worldPosition.y;
  fStack_11 = (this->fields).worldPosition.z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_12 = 0;
  uStack_13 = 0;
  pvVar14 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar14 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)(pvVar14,&uStack_10,2,&uStack_12);
  this_00 = (this->fields).rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0), obj_00 != (Transform *)0x0)) {
    uStack_10 = uStack_12;
    fStack_11 = (float)uStack_13;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (obj_00->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar14,&uStack_10);
    return;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_OnDestroy(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MVJoinState>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnJoinChanged_MVJoinState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnSpawnRoleActivated_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  woID = (this->fields).woID;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
             ,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
              (this_00,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
               (MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      pAVar2 = (pMVar1->fields).onJoinStateChanged;
      this_02 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(TypeInfo__System__Action<MVJoinState>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_02,(Object *)this,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnJoinChanged_MVJoinState_
                 ,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)this_02,(MethodInfo *)0x0);
      pAVar4 = TypeInfo__System__Action<MVJoinState>;
      pAVar2 = (Action_1_MVJoinState_ *)0x0;
      if ((pDVar3 != (Delegate *)0x0) &&
         (pAVar2 = (Action_1_MVJoinState_ *)FUN_?(pDVar3),
         pAVar2 == (Action_1_MVJoinState_ *)0x0)) {
        FUN_?(pDVar3,pAVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      player = (MVPlayer *)0x0;
      MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(pAVar2,(MethodInfo *)0x0);
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
      if (extraout_RAX != 0) {
        lVar6 = *(longlong *)(extraout_RAX + 0x88);
        pDVar3 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
        FUN_?(pDVar3,this);
        if (lVar6 != 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action<int>);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          plVar7 = (longlong *)(lVar6 + 0x20);
          source = *(Delegate **)(lVar6 + 0x20);
          do {
            pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                                (source,pDVar3,(MethodInfo *)0x0);
            pAVar9 = TypeInfo__System__Action<int>;
            if (pDVar8 == (Delegate *)0x0) {
              lVar6 = 0;
            }
            else {
              lVar6 = FUN_?(pDVar8,TypeInfo__System__Action<int>);
              if (lVar6 == 0) {
                FUN_?(pDVar8,pAVar9);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            LOCK();
            pDVar8 = (Delegate *)*plVar7;
            bVar10 = source == pDVar8;
            if (bVar10) {
              *plVar7 = lVar6;
              pDVar8 = source;
            }
            UNLOCK();
            pDVar11 = source;
            if (!bVar10) {
              pDVar11 = pDVar8;
            }
            if (iRam_? != 0) {
              uVar12 = (uint)((ulonglong)plVar7 >> 0xc);
              uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                LOCK();
                bVar10 = uVar14 == *puVar15;
                if (bVar10) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
            bVar10 = pDVar11 != source;
            source = pDVar11;
          } while (bVar10);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnJoinChanged(MVJoinState) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_OnJoinChanged(GizmoMenuNg *this,MVJoinState__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,CONCAT44(in_register_00000014,obj));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar3 != (MVLocalPlayer *)0x0) &&
       (this_01 = (pMVar3->fields)._._SubscriptionRules_k__BackingField,
       this_01 != (SubscriptionRulesWrapper *)0x0)) {
      bVar4 = true;
      bVar5 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
              SubscriptionRulesWrapper_HasBenefit
                        (this_01,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 == (MVGameControllerBase *)0x0) ||
           (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0))
        goto code_?;
        bVar4 = (pMVar2->fields)._Region_k__BackingField == 2;
      }
      if (this != (GizmoMenuNg *)0x0) {
        (this->fields).isSubscriber = bVar4;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop
               (GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Pop_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      this_00 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
                __9__28_0;
      if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
        }
        object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields
                 ->__9;
        this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                   MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Pop_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
        __9__28_0 = this_00;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)
                         &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                          static_fields->__9__28_0 >> 0xc);
          puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar4 = *puVar3;
            LOCK();
            uVar5 = *puVar3;
            if (uVar4 == uVar5) {
              *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (uVar4 != uVar5);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  return;
}


/* Void PopWoDestroyed(Object, WorldObjectDestroyedEventArgs) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_PopWoDestroyed
               (GizmoMenuNg *this,Object *obj,WorldObjectDestroyedEventArgs *args,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Pop_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      this_00 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
                __9__28_0;
      if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
        }
        object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields
                 ->__9;
        this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                   MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Pop_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
        __9__28_0 = this_00;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)
                         &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                          static_fields->__9__28_0 >> 0xc);
          puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar4 = *puVar3;
            LOCK();
            uVar5 = *puVar3;
            if (uVar4 == uVar5) {
              *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (uVar4 != uVar5);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  return;
}


/* Void ResetRotation() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_ResetRotation(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>)
    ;
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___ResetRotation_b__45_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___ResetRotation_b__45_1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._8_8_ = &UNK_?;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).field_0x1c
      == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
  }
  pEVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
            __9__45_0;
  if (pEVar3 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      auStack_1._8_8_ = &UNK_?;
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    pGVar4 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9
    ;
    auStack_1._8_8_ = &UNK_?;
    pEVar3 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                           );
    auStack_1._8_8_ = &UNK_?;
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,(Object *)pGVar4,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___ResetRotation_b__45_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__45_0 =
         pEVar3;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)
                      &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                       static_fields->__9__45_0 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
  auStack_1._8_8_ = &UNK_?;
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
            );
  auStack_1._8_8_ = &UNK_?;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).field_0x1c
      == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
  }
  pEVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
            __9__45_1;
  if (pEVar3 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      auStack_1._8_8_ = &UNK_?;
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    pGVar4 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9
    ;
    auStack_1._8_8_ = &UNK_?;
    pEVar3 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                           );
    auStack_1._8_8_ = &UNK_?;
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,(Object *)pGVar4,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___ResetRotation_b__45_1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__45_1 =
         pEVar3;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)
                      &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                       static_fields->__9__45_1 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
  auStack_1._8_8_ = &UNK_?;
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
            );
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).useRotationTexts != 0) {
    pMVar10 = (this->fields).worldObjectClient;
    if (pMVar10 != (MVWorldObjectClient *)0x0) {
      pMVar11 = pMVar10->klass;
      method_00 = (pMVar11->vtable).get_Rotation.method;
      puVar12 = (undefined8 *)(*(pMVar11->vtable).get_Rotation.methodPtr)(aQStack_13);
      aQStack_13[0]._0_8_ = *puVar12;
      aQStack_13[0]._8_8_ = puVar12[1];
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                          ((Vector3 *)auStack_1,aQStack_13,method_00);
      pTVar15 = (this->fields).xRotationText;
      auStack_1._0_4_ = pVVar14->x;
      auStack_1._4_4_ = pVVar14->y;
      fVar16 = pVVar14->z;
      iVar17 = FUN_?();
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aQStack_13[0].x = 0.0;
      aQStack_13[0].y = 0.0;
      aQStack_13[0].z = 0.0;
      aQStack_13[0].w = 0.0;
      pSVar18 = mscorlib.dll::System::Number::Number_FormatInt32
                          (iVar17,(ReadOnlySpan_1_Char_ *)aQStack_13,(IFormatProvider *)0x0,
                           (MethodInfo *)0x0);
      pSVar19 = ::StringLiteral__;
      if (pSVar18 != (String *)0x0) {
        pSVar19 = pSVar18;
      }
      if (pTVar15 != (Text *)0x0) {
        (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15,pSVar19);
        pTVar15 = (this->fields).yRotationText;
        iVar17 = FUN_?();
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aQStack_13[0].x = 0.0;
        aQStack_13[0].y = 0.0;
        aQStack_13[0].z = 0.0;
        aQStack_13[0].w = 0.0;
        pSVar18 = mscorlib.dll::System::Number::Number_FormatInt32
                            (iVar17,(ReadOnlySpan_1_Char_ *)aQStack_13,(IFormatProvider *)0x0,
                             (MethodInfo *)0x0);
        pSVar19 = ::StringLiteral__;
        if (pSVar18 != (String *)0x0) {
          pSVar19 = pSVar18;
        }
        if (pTVar15 != (Text *)0x0) {
          (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15,pSVar19);
          pTVar15 = (this->fields).zRotationText;
          iVar17 = FUN_?(fVar16);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aQStack_13[0].x = 0.0;
          aQStack_13[0].y = 0.0;
          aQStack_13[0].z = 0.0;
          aQStack_13[0].w = 0.0;
          pSVar18 = mscorlib.dll::System::Number::Number_FormatInt32
                              (iVar17,(ReadOnlySpan_1_Char_ *)aQStack_13,(IFormatProvider *)0x0,
                               (MethodInfo *)0x0);
          pSVar19 = ::StringLiteral__;
          if (pSVar18 != (String *)0x0) {
            pSVar19 = pSVar18;
          }
          if (pTVar15 != (Text *)0x0) {
            (*(pTVar15->klass->vtable).set_text.methodPtr)
                      (pTVar15,pSVar19,(pTVar15->klass->vtable).set_text.method);
            return;
          }
        }
      }
    }
    FUN_?();
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
  return;
}


/* Void RotateStepLeftX() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepLeftX(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>,
                  2,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XZ_rotation_is_in_early_access_f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                           );
  if (object_00 != (Object *)0x0) {
    *(undefined4 *)&object_00[1].klass = 2;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    this_02 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__44_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0
           = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                        static_fields->__9__44_0 >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
              );
    if (((this->fields).objectLocked == 0) || ((this->fields).isSubscriber != 0)) {
code_?:
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,object_00,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                );
      GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).subscriberActions;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,*(Int32Enum__Enum *)&object_00[1].klass,
                         MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                        );
      if (bVar6 == 0) goto code_?;
      this_01 = (this->fields).memberToRotate;
      textBubbleText = TM::TM__(StringLiteral_XZ_rotation_is_in_early_access_f,(MethodInfo *)0x0);
      if (this_01 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (this_01,textBubbleText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RotateStepLeftY() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepLeftY(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>,
                  3,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XZ_rotation_is_in_early_access_f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                           );
  if (object_00 != (Object *)0x0) {
    *(undefined4 *)&object_00[1].klass = 3;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    this_02 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__44_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0
           = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                        static_fields->__9__44_0 >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
              );
    if (((this->fields).objectLocked == 0) || ((this->fields).isSubscriber != 0)) {
code_?:
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,object_00,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                );
      GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).subscriberActions;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,*(Int32Enum__Enum *)&object_00[1].klass,
                         MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                        );
      if (bVar6 == 0) goto code_?;
      this_01 = (this->fields).memberToRotate;
      textBubbleText = TM::TM__(StringLiteral_XZ_rotation_is_in_early_access_f,(MethodInfo *)0x0);
      if (this_01 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (this_01,textBubbleText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RotateStepLeftZ() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepLeftZ(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>,
                  4,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XZ_rotation_is_in_early_access_f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                           );
  if (object_00 != (Object *)0x0) {
    *(undefined4 *)&object_00[1].klass = 4;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    this_02 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__44_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0
           = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                        static_fields->__9__44_0 >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
              );
    if (((this->fields).objectLocked == 0) || ((this->fields).isSubscriber != 0)) {
code_?:
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,object_00,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                );
      GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).subscriberActions;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,*(Int32Enum__Enum *)&object_00[1].klass,
                         MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                        );
      if (bVar6 == 0) goto code_?;
      this_01 = (this->fields).memberToRotate;
      textBubbleText = TM::TM__(StringLiteral_XZ_rotation_is_in_early_access_f,(MethodInfo *)0x0);
      if (this_01 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (this_01,textBubbleText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RotateStepRightX() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepRightX(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>,
                  0xb,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XZ_rotation_is_in_early_access_f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                           );
  if (object_00 != (Object *)0x0) {
    *(undefined4 *)&object_00[1].klass = 0xb;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    this_02 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__44_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0
           = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                        static_fields->__9__44_0 >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
              );
    if (((this->fields).objectLocked == 0) || ((this->fields).isSubscriber != 0)) {
code_?:
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,object_00,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                );
      GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).subscriberActions;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,*(Int32Enum__Enum *)&object_00[1].klass,
                         MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                        );
      if (bVar6 == 0) goto code_?;
      this_01 = (this->fields).memberToRotate;
      textBubbleText = TM::TM__(StringLiteral_XZ_rotation_is_in_early_access_f,(MethodInfo *)0x0);
      if (this_01 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (this_01,textBubbleText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RotateStepRightY() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepRightY(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>,
                  0xc,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XZ_rotation_is_in_early_access_f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                           );
  if (object_00 != (Object *)0x0) {
    *(undefined4 *)&object_00[1].klass = 0xc;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    this_02 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__44_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0
           = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                        static_fields->__9__44_0 >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
              );
    if (((this->fields).objectLocked == 0) || ((this->fields).isSubscriber != 0)) {
code_?:
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,object_00,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                );
      GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).subscriberActions;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,*(Int32Enum__Enum *)&object_00[1].klass,
                         MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                        );
      if (bVar6 == 0) goto code_?;
      this_01 = (this->fields).memberToRotate;
      textBubbleText = TM::TM__(StringLiteral_XZ_rotation_is_in_early_access_f,(MethodInfo *)0x0);
      if (this_01 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (this_01,textBubbleText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RotateStepRightZ() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepRightZ(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>,
                  0xd,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XZ_rotation_is_in_early_access_f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                           );
  if (object_00 != (Object *)0x0) {
    *(undefined4 *)&object_00[1].klass = 0xd;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    this_02 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__44_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0
           = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                        static_fields->__9__44_0 >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
              );
    if (((this->fields).objectLocked == 0) || ((this->fields).isSubscriber != 0)) {
code_?:
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,object_00,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                );
      GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).subscriberActions;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,*(Int32Enum__Enum *)&object_00[1].klass,
                         MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                        );
      if (bVar6 == 0) goto code_?;
      this_01 = (this->fields).memberToRotate;
      textBubbleText = TM::TM__(StringLiteral_XZ_rotation_is_in_early_access_f,(MethodInfo *)0x0);
      if (this_01 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (this_01,textBubbleText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetToScreenPoint() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_SetToScreenPoint(GizmoMenuNg *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 == (MainCameraManager *)0x0) ||
     (obj = (pMVar1->fields).mainCamera, obj == (Camera *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3._0_4_ = (this->fields).worldPosition.x;
  uStack_3._4_4_ = (this->fields).worldPosition.y;
  fStack_4 = (this->fields).worldPosition.z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  uStack_6 = 0;
  pvVar7 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar7,&uStack_3,2,&uStack_5);
  this_00 = (this->fields).rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0), obj_00 != (Transform *)0x0)) {
    uStack_3 = uStack_5;
    fStack_4 = (float)uStack_6;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (obj_00->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar7,&uStack_3);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Setup() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Setup
               (GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MVJoinState>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnJoinChanged_MVJoinState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnSpawnRoleActivated_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>__Contains_MV__WorldObject__WorldObjectType_
                 );
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
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar3 != (MVLocalPlayer *)0x0 &&
      (this_01 = (pMVar3->fields)._._SubscriptionRules_k__BackingField,
      this_01 != (SubscriptionRulesWrapper *)0x0)))) {
    bVar4 = true;
    bVar5 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
             SubscriptionRulesWrapper_HasBenefit
                       (this_01,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
    pAVar6 = (Action_1_MVJoinState_ *)0x0;
    if (bVar5 == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 == (MVGameControllerBase *)0x0) ||
         (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0))
      goto code_?;
      bVar4 = (pMVar2->fields)._Region_k__BackingField == 2;
    }
    if (this != (GizmoMenuNg *)0x0) {
      bVar7 = cRam_? == '\0';
      (this->fields).isSubscriber = bVar4;
      if (bVar7) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar1 != (MVGameControllerBase *)0x0) {
        pAVar8 = (pMVar1->fields).onJoinStateChanged;
        this_03 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(TypeInfo__System__Action<MVJoinState>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_03,(Object *)this,
                   MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnJoinChanged_MVJoinState_
                   ,(MethodInfo *)0x0);
        pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar8,(Delegate *)this_03,(MethodInfo *)0x0);
        pAVar10 = TypeInfo__System__Action<MVJoinState>;
        pAVar8 = pAVar6;
        if ((pDVar9 != (Delegate *)0x0) &&
           (pAVar8 = (Action_1_MVJoinState_ *)FUN_?(pDVar9),
           pAVar8 == (Action_1_MVJoinState_ *)0x0)) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(pAVar8,(MethodInfo *)0x0)
        ;
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar12 != (MVWorldObjectClientManager *)0x0) {
          pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar12,(this->fields).woID,(MethodInfo *)0x0);
          bVar4 = iRam_? != 0;
          (this->fields).worldObjectClient = pMVar13;
          if (bVar4) {
            uVar14 = (uint)((ulonglong)&(this->fields).worldObjectClient >> 0xc);
            puVar15 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar16 = *puVar15;
              LOCK();
              uVar17 = *puVar15;
              if (uVar16 == uVar17) {
                *puVar15 = uVar16 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (uVar16 != uVar17);
          }
          pMVar13 = (this->fields).worldObjectClient;
          if ((pMVar13 != (MVWorldObjectClient *)0x0) &&
             (pHVar18 = (HashSet_1_System_Int32Enum_ *)(this->fields).xyzLockedItems,
             pHVar18 != (HashSet_1_System_Int32Enum_ *)0x0)) {
            bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                     HashSet_1_System_Int32Enum__Contains
                               (pHVar18,(pMVar13->fields)._.type,
                                MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>__Contains_MV__WorldObject__WorldObjectType_
                               );
            pMVar13 = (this->fields).worldObjectClient;
            (this->fields).objectLocked = bVar5;
            if (pMVar13 != (MVWorldObjectClient *)0x0) {
              (*(pMVar13->klass->vtable).DrawTransformGizmo.methodPtr)();
              if ((this->fields).useRotationTexts != 0) {
                pTVar19 = (this->fields).xRotationText;
                if ((pTVar19 == (Text *)0x0) ||
                   (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pTVar19,(MethodInfo *)0x0),
                   pGVar20 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar20,1,(MethodInfo *)0x0);
                pTVar19 = (this->fields).yRotationText;
                if ((pTVar19 == (Text *)0x0) ||
                   (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pTVar19,(MethodInfo *)0x0),
                   pGVar20 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar20,1,(MethodInfo *)0x0);
                pTVar19 = (this->fields).zRotationText;
                if ((pTVar19 == (Text *)0x0) ||
                   (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pTVar19,(MethodInfo *)0x0),
                   pGVar20 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar20,1,(MethodInfo *)0x0);
              }
              GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
              pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              uVar14 = (this->fields).woID;
              this_04 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                                     );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (this_04,(Object *)this,
                         MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                         ,(MethodInfo *)0x0);
              if (pMVar12 != (MVWorldObjectClientManager *)0x0) {
                player = (MVPlayer *)(ulonglong)uVar14;
                MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                          (pMVar12,uVar14,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_04,
                           (MethodInfo *)0x0);
                MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)this_04);
                if (extraout_RAX != 0) {
                  this_02 = *(SpawnRolesManager **)(extraout_RAX + 0x88);
                  value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
                  FUN_?(value,this);
                  if (this_02 != (SpawnRolesManager *)0x0) {
                    SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                              (this_02,value,(MethodInfo *)0x0);
                    pMVar13 = (this->fields).worldObjectClient;
                    if ((pMVar13 != (MVWorldObjectClient *)0x0) &&
                       (canRotate_00 = (byte)(pMVar13->fields).interactionFlags >> 7,
                       pMVar13 != (MVWorldObjectClient *)0x0)) {
                      uVar17 = (pMVar13->fields).interactionFlags & 0x400000000;
                      pMVar13 = (this->fields).worldObjectClient;
                      bStackX_18 = (byte)((uint)(int)(pMVar13->fields).interactionFlags >> 8) & 1;
                      if (pMVar13 != (MVWorldObjectClient *)0x0) {
                        uVar16 = (pMVar13->fields).interactionFlags & 0x1000000000;
                        canRotate = (byte)((uint)(pMVar13->fields).interactionFlags >> 9) & 1;
                        if (pMVar13 != (MVWorldObjectClient *)0x0) {
                          pTVar21 = (this->fields).rotationMenu;
                          uVar22 = (pMVar13->fields).interactionFlags & 0x800000000;
                          if ((pTVar21 != (Transform *)0x0) &&
                             (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_gameObject
                                                  ((Component *)pTVar21,(MethodInfo *)0x0),
                             pGVar20 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive
                                      (pGVar20,canRotate | bStackX_18 | canRotate_00,
                                       (MethodInfo *)0x0);
                            pGVar23 = (this->fields).xRotationHolder;
                            if (pGVar23 != (GizmoRotationButtonHolderNg *)0x0) {
                              GizmoRotationButtonHolderNg::GizmoRotationButtonHolderNg_Setup
                                        (pGVar23,canRotate_00,
                                         (this->fields).objectLocked != 0 && uVar17 == 0,
                                         (MethodInfo *)0x0);
                              pGVar23 = (this->fields).yRotationHolder;
                              if (pGVar23 != (GizmoRotationButtonHolderNg *)0x0) {
                                GizmoRotationButtonHolderNg::GizmoRotationButtonHolderNg_Setup
                                          (pGVar23,bStackX_18,
                                           (this->fields).objectLocked & uVar16 != 0,
                                           (MethodInfo *)0x0);
                                if ((this->fields).objectLocked != 0) {
                                  pAVar6 = (Action_1_MVJoinState_ *)(ulonglong)(uVar22 == 0);
                                }
                                pGVar23 = (this->fields).zRotationHolder;
                                if (pGVar23 != (GizmoRotationButtonHolderNg *)0x0) {
                                  GizmoRotationButtonHolderNg::GizmoRotationButtonHolderNg_Setup
                                            (pGVar23,canRotate,(bool)pAVar6,(MethodInfo *)0x0);
                                  if (uVar17 == 0) {
                                    pHVar18 = (HashSet_1_System_Int32Enum_ *)
                                             (this->fields).subscriberActions;
                                    if (pHVar18 == (HashSet_1_System_Int32Enum_ *)0x0)
                                    goto code_?;
                                    System.Core.dll::System::Collections::Generic::HashSet`1[System
                                    ::Int32Enum]::HashSet_1_System_Int32Enum__AddIfNotPresent
                                              (pHVar18,2,
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  ->klass->rgctx_data[0x15].method);
                                    pHVar18 = (HashSet_1_System_Int32Enum_ *)
                                             (this->fields).subscriberActions;
                                    if (pHVar18 == (HashSet_1_System_Int32Enum_ *)0x0)
                                    goto code_?;
                                    System.Core.dll::System::Collections::Generic::HashSet`1[System
                                    ::Int32Enum]::HashSet_1_System_Int32Enum__AddIfNotPresent
                                              (pHVar18,0xb,
                                               MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                               ->klass->rgctx_data[0x15].method);
                                    pHVar18 = (HashSet_1_System_Int32Enum_ *)
                                             (this->fields).subscriberActions;
                                    if (pHVar18 == (HashSet_1_System_Int32Enum_ *)0x0)
                                    goto code_?;
                                    System.Core.dll::System::Collections::Generic::HashSet`1[System
                                    ::Int32Enum]::HashSet_1_System_Int32Enum__AddIfNotPresent
                                              (pHVar18,8,
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  ->klass->rgctx_data[0x15].method);
                                  }
                                  if (uVar22 == 0) {
                                    pHVar18 = (HashSet_1_System_Int32Enum_ *)
                                             (this->fields).subscriberActions;
                                    if (pHVar18 == (HashSet_1_System_Int32Enum_ *)0x0)
                                    goto code_?;
                                    System.Core.dll::System::Collections::Generic::HashSet`1[System
                                    ::Int32Enum]::HashSet_1_System_Int32Enum__AddIfNotPresent
                                              (pHVar18,4,
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  ->klass->rgctx_data[0x15].method);
                                    pHVar18 = (HashSet_1_System_Int32Enum_ *)
                                             (this->fields).subscriberActions;
                                    if (pHVar18 == (HashSet_1_System_Int32Enum_ *)0x0)
                                    goto code_?;
                                    System.Core.dll::System::Collections::Generic::HashSet`1[System
                                    ::Int32Enum]::HashSet_1_System_Int32Enum__AddIfNotPresent
                                              (pHVar18,0xd,
                                               MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                               ->klass->rgctx_data[0x15].method);
                                    pHVar18 = (HashSet_1_System_Int32Enum_ *)
                                             (this->fields).subscriberActions;
                                    if (pHVar18 == (HashSet_1_System_Int32Enum_ *)0x0)
                                    goto code_?;
                                    System.Core.dll::System::Collections::Generic::HashSet`1[System
                                    ::Int32Enum]::HashSet_1_System_Int32Enum__AddIfNotPresent
                                              (pHVar18,10,
                                               MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                               ->klass->rgctx_data[0x15].method);
                                  }
                                  if (uVar16 != 0) {
                                    pHVar18 = (HashSet_1_System_Int32Enum_ *)
                                             (this->fields).subscriberActions;
                                    if (pHVar18 == (HashSet_1_System_Int32Enum_ *)0x0)
                                    goto code_?;
                                    System.Core.dll::System::Collections::Generic::HashSet`1[System
                                    ::Int32Enum]::HashSet_1_System_Int32Enum__AddIfNotPresent
                                              (pHVar18,3,
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  ->klass->rgctx_data[0x15].method);
                                    pHVar18 = (HashSet_1_System_Int32Enum_ *)
                                             (this->fields).subscriberActions;
                                    if (pHVar18 == (HashSet_1_System_Int32Enum_ *)0x0)
                                    goto code_?;
                                    System.Core.dll::System::Collections::Generic::HashSet`1[System
                                    ::Int32Enum]::HashSet_1_System_Int32Enum__AddIfNotPresent
                                              (pHVar18,0xc,
                                               MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                               ->klass->rgctx_data[0x15].method);
                                    pHVar18 = (HashSet_1_System_Int32Enum_ *)
                                             (this->fields).subscriberActions;
                                    if (pHVar18 == (HashSet_1_System_Int32Enum_ *)0x0)
                                    goto code_?;
                                    System.Core.dll::System::Collections::Generic::HashSet`1[System
                                    ::Int32Enum]::HashSet_1_System_Int32Enum__AddIfNotPresent
                                              (pHVar18,9,
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  ->klass->rgctx_data[0x15].method);
                                  }
                                  pMVar13 = (this->fields).worldObjectClient;
                                  if (pMVar13 != (MVWorldObjectClient *)0x0) {
                                    pTVar21 = (this->fields).resetRotationButton;
                                    uVar17 = (pMVar13->fields).interactionFlags;
                                    if (pTVar21 != (Transform *)0x0) {
                                      pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_gameObject
                                                          ((Component *)pTVar21,(MethodInfo *)0x0);
                                      if ((uVar17 >> 0x25 & 1) == 0) {
                                        bVar5 = canRotate | bStackX_18 | canRotate_00;
                                      }
                                      else {
                                        bVar5 = 0;
                                      }
                                      if (pGVar20 != (GameObject *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar20,bVar5,(MethodInfo *)0x0);
                                        pMVar13 = (this->fields).worldObjectClient;
                                        if (pMVar13 != (MVWorldObjectClient *)0x0) {
                                          iVar24 = (pMVar13->fields).interactionFlags;
                                          pGVar25 = (this->fields).xzTranslate;
                                          if ((pGVar25 != (GizmoButton *)0x0) &&
                                             (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Component::Component_get_gameObject
                                                                  ((Component *)pGVar25,
                                                                   (MethodInfo *)0x0),
                                             pGVar20 != (GameObject *)0x0)) {
                                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_SetActive
                                                      (pGVar20,(iVar24 & 0x800) == 0,
                                                       (MethodInfo *)0x0);
                                            pMVar13 = (this->fields).worldObjectClient;
                                            if (pMVar13 != (MVWorldObjectClient *)0x0) {
                                              iVar24 = (pMVar13->fields).interactionFlags;
                                              pGVar25 = (this->fields).yTranslate;
                                              if ((pGVar25 != (GizmoButton *)0x0) &&
                                                 (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Component::Component_get_gameObject
                                                                      ((Component *)pGVar25,
                                                                       (MethodInfo *)0x0),
                                                 pGVar20 != (GameObject *)0x0)) {
                                                bVar4 = (iVar24 & 0x400) == 0;
                                                if (cRam_? == '\0') {
                                                  FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  ,bVar4,0);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                if (pGVar20 == (GameObject *)0x0) {
                                                  FUN_?();
                                                  pcVar11 = (code *)swi(3);
                                                  (*pcVar11)();
                                                  return;
                                                }
                                                pvVar26 = (pGVar20->fields)._.m_CachedPtr;
                                                if (pvVar26 == (void *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings
                                                  ::ThrowHelper::
                                                  ThrowHelper_2_ThrowNullReferenceException
                                                            ((Object *)pGVar20,(MethodInfo *)0x0);
                                                  pcVar11 = (code *)swi(3);
                                                  (*pcVar11)();
                                                  return;
                                                }
                                                pcVar11 = pcRam_?;
                                                if ((pcRam_? == (code *)0x0) &&
                                                   (pcVar11 = (code *)FUN_?(&UNK_?),
                                                   pcVar11 == (code *)0x0)) {
                                                  uVar27 = func_?(&UNK_?);
                                                  FUN_?(uVar27,0);
                                                  pcVar11 = (code *)swi(3);
                                                  (*pcVar11)();
                                                  return;
                                                }
                                                pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                (*pcRam_?)(pvVar26,bVar4);
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


/* Void Update() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Update
               (GizmoMenuNg *this,MethodInfo *method)

{
  GizmoMenuNg_SetToScreenPoint(this,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)(0x71);
  if (cVar3 == '\0') {
    return;
  }
  bVar4 = GizmoMenuNg_CanClone(this,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    bVar4 = GizmoMenuNg_CanCloneRoot(this,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___CloneRoot_b__32_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    object = (Object *)
             FUN_?(
                          TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0
                          );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    pEVar6 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__32_0;
    if (pEVar6 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      pGVar7 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      pEVar6 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,(Object *)pGVar7,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___CloneRoot_b__32_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__32_0
           = pEVar6;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)
                        &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                         static_fields->__9__32_0 >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
       (pOVar13 = (Object__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                            (this_01,(this->fields).woID,(MethodInfo *)0x0), object == (Object *)0x0
       )) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar12 = iRam_? != 0;
    object[1].klass = pOVar13;
    if (bVar12) {
      uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_02,object,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    pEVar6 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__31_0;
    if (pEVar6 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      pGVar7 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      pEVar6 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,(Object *)pGVar7,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__31_0
           = pEVar6;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)
                        &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                         static_fields->__9__31_0 >> 0xc);
        puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar14 = *puVar11;
          LOCK();
          uVar10 = *puVar11;
          if (uVar14 == uVar10) {
            *puVar11 = uVar14 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar14 != uVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
  }
  pMVar15 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar15->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar15);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar5,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar16 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar9 = (longlong)(pLVar16->fields)._size;
    uVar8 = 0;
    if (0 < lVar9) {
      lVar17 = 0;
      lVar18 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar16 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar16->fields)._size <= uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar19 = (pLVar16->fields)._items;
        if (pTVar19 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar19->max_length <= uVar8) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar19->vector + lVar18 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar5,(BaseEventData *)0x0,this_02,
                           (pMVar15->field7_0x38).rgctx_data[1].method);
        if (bVar4 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar8 = uVar8 + 1;
        lVar17 = lVar17 + 1;
        lVar18 = lVar18 + 8;
      } while (lVar17 < lVar9);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateRotationText() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_UpdateRotationText(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).useRotationTexts == 0) {
    return;
  }
  pMVar1 = (this->fields).worldObjectClient;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    pMVar2 = pMVar1->klass;
    method_00 = (pMVar2->vtable).get_Rotation.method;
    puVar3 = (undefined8 *)(*(pMVar2->vtable).get_Rotation.methodPtr)(aQStack_4);
    aQStack_4[0]._0_8_ = *puVar3;
    aQStack_4[0]._8_8_ = puVar3[1];
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_6,aQStack_4,method_00);
    pTVar7 = (this->fields).xRotationText;
    VStack_6.x = pVVar5->x;
    VStack_6.y = pVVar5->y;
    fVar8 = pVVar5->z;
    iVar9 = FUN_?();
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aQStack_4[0].x = 0.0;
    aQStack_4[0].y = 0.0;
    aQStack_4[0].z = 0.0;
    aQStack_4[0].w = 0.0;
    pSVar10 = mscorlib.dll::System::Number::Number_FormatInt32
                       (iVar9,(ReadOnlySpan_1_Char_ *)aQStack_4,(IFormatProvider *)0x0,
                        (MethodInfo *)0x0);
    pSVar11 = ::StringLiteral__;
    if (pSVar10 != (String *)0x0) {
      pSVar11 = pSVar10;
    }
    if (pTVar7 != (Text *)0x0) {
      (*(pTVar7->klass->vtable).set_text.methodPtr)(pTVar7,pSVar11);
      pTVar7 = (this->fields).yRotationText;
      iVar9 = FUN_?();
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aQStack_4[0].x = 0.0;
      aQStack_4[0].y = 0.0;
      aQStack_4[0].z = 0.0;
      aQStack_4[0].w = 0.0;
      pSVar10 = mscorlib.dll::System::Number::Number_FormatInt32
                         (iVar9,(ReadOnlySpan_1_Char_ *)aQStack_4,(IFormatProvider *)0x0,
                          (MethodInfo *)0x0);
      pSVar11 = ::StringLiteral__;
      if (pSVar10 != (String *)0x0) {
        pSVar11 = pSVar10;
      }
      if (pTVar7 != (Text *)0x0) {
        (*(pTVar7->klass->vtable).set_text.methodPtr)(pTVar7,pSVar11);
        pTVar7 = (this->fields).zRotationText;
        iVar9 = FUN_?(fVar8);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aQStack_4[0].x = 0.0;
        aQStack_4[0].y = 0.0;
        aQStack_4[0].z = 0.0;
        aQStack_4[0].w = 0.0;
        pSVar10 = mscorlib.dll::System::Number::Number_FormatInt32
                           (iVar9,(ReadOnlySpan_1_Char_ *)aQStack_4,(IFormatProvider *)0x0,
                            (MethodInfo *)0x0);
        pSVar11 = ::StringLiteral__;
        if (pSVar10 != (String *)0x0) {
          pSVar11 = pSVar10;
        }
        if (pTVar7 != (Text *)0x0) {
          (*(pTVar7->klass->vtable).set_text.methodPtr)
                    (pTVar7,pSVar11,(pTVar7->klass->vtable).set_text.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void <Clone>b__31_1(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg__Clone_b__31_1
               (GizmoMenuNg *this,ICloneHandler *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    if (handler != (ICloneHandler *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GizmoMenuNg() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg__ctor
               (GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<GizmoAction>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32Enum_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<GizmoAction>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
  HashSet_1_System_Int32Enum___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__HashSet__);
  bVar2 = iRam_? != 0;
  (this->fields).subscriberActions = (HashSet_1_GizmoAction_ *)pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).subscriberActions >> 0xc);
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
  pHVar1 = (HashSet_1_System_Int32Enum_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
  HashSet_1_System_Int32Enum___ctor
            (pHVar1,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>__HashSet__
            );
  bVar2 = iRam_? != 0;
  (this->fields).xyzLockedItems = (HashSet_1_MV_WorldObject_WorldObjectType_ *)pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).xyzLockedItems >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

