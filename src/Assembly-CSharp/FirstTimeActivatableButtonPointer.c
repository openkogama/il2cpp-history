
/* Void Clear() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointer::FirstTimeActivatableButtonPointer_Clear
               (FirstTimeActivatableButtonPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableButtonPointer___Clear_b__13_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    pBVar2 = (pBVar1->fields).m_OnClick;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,(this->klass->vtable).OnShown.method,(MethodInfo *)0x0);
    if ((pBVar2 != (Button_ButtonClickedEvent *)0x0) &&
       (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
      targetObj = (this_02->fields)._._.m_target;
      method_1 = (MethodInfo_1 *)
                 (*(this_02->klass->vtable).GetMethodImpl.methodPtr)
                           (this_02,(this_02->klass->vtable).GetMethodImpl.method);
      this_00 = (pBVar2->fields)._._.m_Calls;
      if (this_00 != (InvokableCallList *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCallList::
        InvokableCallList_RemoveListener(this_00,targetObj,method_1,(MethodInfo *)0x0);
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__FirstTimeActivatableButtonPointer___Clear_b__13_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar4 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
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
          if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar4);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar3,(IList_1_UnityEngine_Transform_ *)
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                          s_InternalTransformList,(MethodInfo *)0x0);
        pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar5 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar6 = (longlong)(pLVar5->fields)._size;
          uVar7 = 0;
          if (0 < lVar6) {
            lVar8 = 0;
            lVar9 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar5 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar5->fields)._size <= uVar7) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pTVar11 = (pLVar5->fields)._items;
              if (pTVar11 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar11->max_length <= uVar7) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar11->vector + lVar9 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 (this_01,(MethodInfo *)0x0);
              bVar12 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar3,(BaseEventData *)0x0,this_03,
                                 (pMVar4->field7_0x38).rgctx_data[1].method);
              if (bVar12 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar7 = uVar7 + 1;
              lVar8 = lVar8 + 1;
              lVar9 = lVar9 + 8;
            } while (lVar8 < lVar6);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void CreateBubble() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointer::
     FirstTimeActivatableButtonPointer_CreateBubble
               (FirstTimeActivatableButtonPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableButtonPointer___CreateBubble_b__11_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeActivatableButtonPointer___CreateBubble_b__11_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
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
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar9 = (pLVar3->fields)._items;
        if (pTVar9 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar9->max_length <= uVar5) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar9->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar10 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointer::
     FirstTimeActivatableButtonPointer_OnShow
               (FirstTimeActivatableButtonPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                     (pTVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).field_0x1c == 0) {
    FUN_?();
  }
  layoutRoot = (Transform *)0x0;
  if (pTVar1 != (Transform *)0x0) {
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      layoutRoot = pTVar1;
    }
    if (layoutRoot == (Transform *)0x0) {
      FUN_?(pTVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::LayoutRebuilder_ForceRebuildLayoutImmediate
            ((RectTransform *)layoutRoot,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar3 = (this->fields).button;
  if (pBVar3 != (Button *)0x0) {
    this_00 = (UnityEvent *)(pBVar3->fields).m_OnClick;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,(this->klass->vtable).OnShown.method,(MethodInfo *)0x0);
    if (this_00 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_00,(UnityAction *)this_02,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__FirstTimeActivatableButtonPointer___CreateBubble_b__11_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,(Object *)this,
                 MethodInfo__FirstTimeActivatableButtonPointer___CreateBubble_b__11_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar5 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
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
        if ((pMVar5->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar5);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar4,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar6 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar6 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar7 = (longlong)(pLVar6->fields)._size;
        uVar8 = 0;
        if (0 < lVar7) {
          lVar9 = 0;
          lVar10 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar6 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar6 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar6->fields)._size <= uVar8) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pTVar11 = (pLVar6->fields)._items;
            if (pTVar11 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar11->max_length <= uVar8) {
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            this_01 = *(Component **)((longlong)pTVar11->vector + lVar10 + -0x20);
            if (this_01 == (Component *)0x0) goto code_?;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_01,(MethodInfo *)0x0);
            bVar12 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar4,(BaseEventData *)0x0,this_03,
                               (pMVar5->field7_0x38).rgctx_data[1].method);
            if (bVar12 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_01,(MethodInfo *)0x0);
              return;
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + 8;
          } while (lVar9 < lVar7);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointer::
     FirstTimeActivatableButtonPointer_OnShown
               (FirstTimeActivatableButtonPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableButtonPointer___Clear_b__13_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    pBVar2 = (pBVar1->fields).m_OnClick;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,(this->klass->vtable).OnShown.method,(MethodInfo *)0x0);
    if ((pBVar2 != (Button_ButtonClickedEvent *)0x0) &&
       (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
      targetObj = (this_01->fields)._._.m_target;
      method_1 = (MethodInfo_1 *)
                 (*(this_01->klass->vtable).GetMethodImpl.methodPtr)
                           (this_01,(this_01->klass->vtable).GetMethodImpl.method);
      this_00 = (pBVar2->fields)._._.m_Calls;
      if (this_00 != (InvokableCallList *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCallList::
        InvokableCallList_RemoveListener(this_00,targetObj,method_1,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__FirstTimeActivatableButtonPointer___Clear_b__13_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,this_02,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                  ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
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
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                        ,0,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        OVar3.m_CachedPtr = (void *)0x0;
        if (this != (FirstTimeActivatableButtonPointer *)0x0) {
          OVar3.m_CachedPtr = (this->fields)._._._._._._.m_CachedPtr;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(OVar3.m_CachedPtr,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowBubble() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointer::
     FirstTimeActivatableButtonPointer_ShowBubble
               (FirstTimeActivatableButtonPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    this_00 = (UnityEvent *)(pBVar1->fields).m_OnClick;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,(this->klass->vtable).OnShown.method,(MethodInfo *)0x0);
    if (this_00 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_00,(UnityAction *)this_02,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__FirstTimeActivatableButtonPointer___CreateBubble_b__11_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,(Object *)this,
                 MethodInfo__FirstTimeActivatableButtonPointer___CreateBubble_b__11_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar3 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
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
        if ((pMVar3->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar3);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar2,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar4 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar4 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar5 = (longlong)(pLVar4->fields)._size;
        uVar6 = 0;
        if (0 < lVar5) {
          lVar7 = 0;
          lVar8 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar4 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar4 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar4->fields)._size <= uVar6) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar10 = (pLVar4->fields)._items;
            if (pTVar10 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar10->max_length <= uVar6) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            this_01 = *(Component **)((longlong)pTVar10->vector + lVar8 + -0x20);
            if (this_01 == (Component *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_01,(MethodInfo *)0x0);
            bVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar2,(BaseEventData *)0x0,this_03,
                               (pMVar3->field7_0x38).rgctx_data[1].method);
            if (bVar11 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_01,(MethodInfo *)0x0);
              return;
            }
            uVar6 = uVar6 + 1;
            lVar7 = lVar7 + 1;
            lVar8 = lVar8 + 8;
          } while (lVar7 < lVar5);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <CreateBubble>b__11_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointer::
     FirstTimeActivatableButtonPointer__CreateBubble_b__11_0
               (FirstTimeActivatableButtonPointer *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).pointToTransform;
  if (pRVar1 != (RectTransform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pRVar1->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2);
    pRVar1 = (this->fields).pointToTransform;
    if (pRVar1 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (pRVar1->fields)._._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar2);
      fVar5 = (this->fields).pointerBodyDirectionOffset.x + 0.0;
      fVar6 = (this->fields).pointerBodyDirectionOffset.y + 0.0;
      lifeTime = (this->fields).bubbleLifetimeWhileShown;
      content = (this->fields).bubbleContent;
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (x != (TextBubbleController *)0x0) {
        element = (Transform *)0x0;
        targetCenterPoint.y = fVar6 + fVar6;
        targetCenterPoint.x = fVar5 + fVar5;
        iVar8 = TextBubbleController::TextBubbleController_ShowBubble2D
                          (x,(Vector2)0x0,targetCenterPoint,lifeTime,content,pTVar7,
                           (MethodInfo *)0x0);
        (this->fields).bubbleId = iVar8;
        if ((this->fields).skipAllowed == 0) {
          return;
        }
        original = (this->fields).skipElement;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_01 = (Component *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                            );
        if (this_01 != (Component *)0x0) {
          this_00 = this_01[10].fields._.m_CachedPtr;
          this_02 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,(this->klass->vtable).SkipEvent.method,(MethodInfo *)0x0
                    );
          if (this_00 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (this_00,(UnityAction *)this_02,(MethodInfo *)0x0);
            iVar8 = (this->fields).bubbleId;
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_01,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              if (pTVar7->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                element = pTVar7;
              }
              if (element == (Transform *)0x0) {
                FUN_?(pTVar7);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            TextBubbleController::TextBubbleController_AddFirstElement
                      (x,iVar8,(RectTransform *)element,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

