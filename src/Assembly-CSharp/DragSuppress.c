
/* Void OnBeginDrag(PointerEventData) */

void Assembly-CSharp.dll::DragSuppress::DragSuppress_OnBeginDrag
               (DragSuppress *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBeginDragHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBeginDragHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBeginDragHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DragSuppress____c__DisplayClass2_0___OnBeginDrag_b__0_UnityEngine__EventSystems__IBeginDragHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DragSuppress____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DragSuppress____c__DisplayClass2_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)eventData;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (((pGVar6 != (GameObject *)0x0) &&
        (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) &&
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (pTVar7,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar7,(MethodInfo *)0x0);
      eventData_00 = object[1].klass;
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBeginDragHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__DragSuppress____c__DisplayClass2_0___OnBeginDrag_b__0_UnityEngine__EventSystems__IBeginDragHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBeginDragHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBeginDragHandler>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBeginDragHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBeginDragHandler>_
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
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar6,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar10 = (longlong)(pLVar9->fields)._size;
        uVar2 = 0;
        if (0 < lVar10) {
          lVar11 = 0;
          lVar12 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pTVar14 = (pLVar9->fields)._items;
            if (pTVar14 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar14->max_length <= uVar2) {
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar6,(BaseEventData *)eventData_00,this_01,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar15 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar2 = uVar2 + 1;
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 8;
          } while (lVar11 < lVar10);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::DragSuppress::DragSuppress_OnDrag
               (DragSuppress *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IDragHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IDragHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IDragHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DragSuppress____c__DisplayClass4_0___OnDrag_b__0_UnityEngine__EventSystems__IDragHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DragSuppress____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DragSuppress____c__DisplayClass4_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)eventData;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (((pGVar6 != (GameObject *)0x0) &&
        (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) &&
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (pTVar7,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar7,(MethodInfo *)0x0);
      eventData_00 = object[1].klass;
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IDragHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__DragSuppress____c__DisplayClass4_0___OnDrag_b__0_UnityEngine__EventSystems__IDragHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IDragHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IDragHandler>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IDragHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IDragHandler>_
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
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar6,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar10 = (longlong)(pLVar9->fields)._size;
        uVar2 = 0;
        if (0 < lVar10) {
          lVar11 = 0;
          lVar12 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pTVar14 = (pLVar9->fields)._items;
            if (pTVar14 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar14->max_length <= uVar2) {
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar6,(BaseEventData *)eventData_00,this_01,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar15 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar2 = uVar2 + 1;
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 8;
          } while (lVar11 < lVar10);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnEndDrag(PointerEventData) */

void Assembly-CSharp.dll::DragSuppress::DragSuppress_OnEndDrag
               (DragSuppress *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEndDragHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEndDragHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEndDragHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DragSuppress____c__DisplayClass3_0___OnEndDrag_b__0_UnityEngine__EventSystems__IEndDragHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DragSuppress____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DragSuppress____c__DisplayClass3_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)eventData;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (((pGVar6 != (GameObject *)0x0) &&
        (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) &&
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (pTVar7,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar7,(MethodInfo *)0x0);
      eventData_00 = object[1].klass;
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEndDragHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__DragSuppress____c__DisplayClass3_0___OnEndDrag_b__0_UnityEngine__EventSystems__IEndDragHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEndDragHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEndDragHandler>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEndDragHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEndDragHandler>_
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
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar6,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar10 = (longlong)(pLVar9->fields)._size;
        uVar2 = 0;
        if (0 < lVar10) {
          lVar11 = 0;
          lVar12 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pTVar14 = (pLVar9->fields)._items;
            if (pTVar14 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar14->max_length <= uVar2) {
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar6,(BaseEventData *)eventData_00,this_01,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar15 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar2 = uVar2 + 1;
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 8;
          } while (lVar11 < lVar10);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::DragSuppress::DragSuppress_OnPointerDown
               (DragSuppress *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPointerDownHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPointerDownHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPointerDownHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DragSuppress____c__DisplayClass5_0___OnPointerDown_b__0_UnityEngine__EventSystems__IPointerDownHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DragSuppress____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DragSuppress____c__DisplayClass5_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)eventData;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (((pGVar6 != (GameObject *)0x0) &&
        (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) &&
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar7,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar7,(MethodInfo *)0x0);
      eventData_00 = object[1].klass;
      this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPointerDownHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_00,object,
                 MethodInfo__DragSuppress____c__DisplayClass5_0___OnPointerDown_b__0_UnityEngine__EventSystems__IPointerDownHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)eventData_00,this_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPointerDownHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPointerDownHandler>_
                );
      (this->fields).isDragging = 1;
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::DragSuppress::DragSuppress_OnPointerUp
               (DragSuppress *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPointerUpHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPointerUpHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPointerUpHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DragSuppress____c__DisplayClass6_0___OnPointerUp_b__0_UnityEngine__EventSystems__IPointerUpHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DragSuppress____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DragSuppress____c__DisplayClass6_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)eventData;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (((pGVar6 != (GameObject *)0x0) &&
        (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) &&
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar7,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar7,(MethodInfo *)0x0);
      eventData_00 = object[1].klass;
      this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPointerUpHandler>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_00,object,
                 MethodInfo__DragSuppress____c__DisplayClass6_0___OnPointerUp_b__0_UnityEngine__EventSystems__IPointerUpHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)eventData_00,this_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPointerUpHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPointerUpHandler>_
                );
      (this->fields).isDragging = 0;
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
        FUN_?();
      }
      pEVar8 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                         ((MethodInfo *)0x0);
      if (pEVar8 != (EventSystem *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__BaseEventData,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pEVar8->fields).m_DummyData == (BaseEventData *)0x0) {
          pBVar9 = (BaseEventData *)
                    FUN_?(TypeInfo__UnityEngine__EventSystems__BaseEventData);
          iVar10 = iRam_?;
          (pBVar9->fields).m_EventSystem = pEVar8;
          if (iVar10 != 0) {
            uVar2 = (uint)((ulonglong)&(pBVar9->fields).m_EventSystem >> 0xc);
            lVar11 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar3 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar1 = uVar5 == *puVar3;
              if (bVar1) {
                *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
              iVar10 = iRam_?;
            } while (!bVar1);
          }
          (pEVar8->fields).m_DummyData = pBVar9;
          if (iVar10 != 0) {
            uVar2 = (uint)((ulonglong)&(pEVar8->fields).m_DummyData >> 0xc);
            lVar11 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar3 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar1 = uVar5 == *puVar3;
              if (bVar1) {
                *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
        }
        pBVar9 = (pEVar8->fields).m_DummyData;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&
                        bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<UnityEngine::EventSystems::IDeselectHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IDeselectHandler>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<UnityEngine::EventSystems::ISelectHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ISelectHandler>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Attempting_to_select_);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_while_already_selecting_an_objec);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pEVar8->fields).m_SelectionGuard == 0) {
          pGVar6 = (pEVar8->fields).m_CurrentSelected;
          (pEVar8->fields).m_SelectionGuard = 1;
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
          if (pGVar6 != (GameObject *)0x0) {
            if (pGVar6 == (GameObject *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pGVar6->fields)._.m_CachedPtr != (void *)0x0) {
              pGVar6 = (pEVar8->fields).m_CurrentSelected;
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                        (pGVar6,pBVar9,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_DeselectHandler,
                         bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<UnityEngine::EventSystems::IDeselectHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IDeselectHandler>_
                        );
              bVar1 = iRam_? != 0;
              (pEVar8->fields).m_CurrentSelected = (GameObject *)0x0;
              if (bVar1) {
                uVar2 = (uint)((ulonglong)&(pEVar8->fields).m_CurrentSelected >> 0xc);
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
              pGVar6 = (pEVar8->fields).m_CurrentSelected;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                        (pGVar6,pBVar9,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_SelectHandler,
                         bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<UnityEngine::EventSystems::ISelectHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ISelectHandler>_
                        );
            }
          }
          (pEVar8->fields).m_SelectionGuard = 0;
          return;
        }
        pSVar13 = mscorlib.dll::System::String::String_Concat_5
                            (StringLiteral_Attempting_to_select_,(String *)0x0,
                             StringLiteral_while_already_selecting_an_objec,(MethodInfo *)0x0);
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
        pIVar14 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar14 != (ILogger_1 *)0x0) {
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar14,0,pSVar13);
          return;
        }
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DragSuppress::DragSuppress_Update(DragSuppress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isDragging == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  pIVar2 = (pMVar1->klass->vtable).set_IsSuppressed.methodPtr;
  (*pIVar2)(pMVar1,CONCAT71((int7)((ulonglong)method >> 8),1),
            (pMVar1->klass->vtable).set_IsSuppressed.method,pIVar2,unaff_RBX);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed = pMVar1;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed >> 0xc)
    ;
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}

