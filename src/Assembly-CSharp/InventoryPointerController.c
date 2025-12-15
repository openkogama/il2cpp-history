
/* Void ClearImmediate() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_ClearImmediate
               (InventoryPointerController *this,MethodInfo *method)

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
    FUN_?(&MethodInfo__InventoryPointerController__OpenAtSlot__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__InventoryPointerController__RemoveBubbles__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryPointerController___ClearImmediate_b__14_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__InventoryPointerController__RemoveBubbles__,
               (MethodInfo *)0x0);
    if ((pBVar2 != (Button_ButtonClickedEvent *)0x0) &&
       (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
      pOVar4 = (pNVar3->fields)._._.m_target;
      pMVar5 = (MethodInfo_1 *)
                (*(pNVar3->klass->vtable).GetMethodImpl.methodPtr)
                          (pNVar3,(pNVar3->klass->vtable).GetMethodImpl.method);
      pIVar6 = (pBVar2->fields)._._.m_Calls;
      if (pIVar6 != (InvokableCallList *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCallList::
        InvokableCallList_RemoveListener(pIVar6,pOVar4,pMVar5,(MethodInfo *)0x0);
        pBVar1 = (this->fields).open;
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
        if (pBVar1 != (Button *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pBVar1->fields)._._._._._._.m_CachedPtr != (void *)0x0) {
            pBVar1 = (this->fields).open;
            if (pBVar1 != (Button *)0x0) {
              pBVar2 = (pBVar1->fields).m_OnClick;
              pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar3,(Object *)this,MethodInfo__InventoryPointerController__OpenAtSlot__
                         ,(MethodInfo *)0x0);
              if ((pBVar2 != (Button_ButtonClickedEvent *)0x0) &&
                 (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
                pOVar4 = (pNVar3->fields)._._.m_target;
                pMVar5 = (MethodInfo_1 *)
                          (*(pNVar3->klass->vtable).GetMethodImpl.methodPtr)
                                    (pNVar3,(pNVar3->klass->vtable).GetMethodImpl.method);
                pIVar6 = (pBVar2->fields)._._.m_Calls;
                if (pIVar6 != (InvokableCallList *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCallList::
                  InvokableCallList_RemoveListener(pIVar6,pOVar4,pMVar5,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
            goto code_?;
          }
        }
code_?:
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__InventoryPointerController___ClearImmediate_b__14_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar8 = 
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
          if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar8);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar7,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar10 = (longlong)(pLVar9->fields)._size;
          uVar11 = 0;
          if (0 < lVar10) {
            lVar12 = 0;
            lVar13 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar9->fields)._size <= uVar11) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pTVar15 = (pLVar9->fields)._items;
              if (pTVar15 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar15->max_length <= uVar11) {
                FUN_?();
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar15->vector + lVar13 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar7,(BaseEventData *)0x0,this_01,
                                 (pMVar8->field7_0x38).rgctx_data[1].method);
              if (bVar16 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar11 = uVar11 + 1;
              lVar12 = lVar12 + 1;
              lVar13 = lVar13 + 8;
            } while (lVar12 < lVar10);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void CreateBubble(Int32, Int32, Boolean) */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_CreateBubble
               (InventoryPointerController *this,int32_t category,int32_t slot,bool showBubble,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
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
    FUN_?(&MethodInfo__InventoryPointerController__RemoveBubbles__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryPointerController___CreateBubble_b__11_1_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryPointerController____c___CreateBubble_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryPointerController____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (showBubble != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__InventoryPointerController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__InventoryPointerController____c);
    }
    this_01 = TypeInfo__InventoryPointerController____c->static_fields->__9__11_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__InventoryPointerController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__InventoryPointerController____c);
      }
      object = TypeInfo__InventoryPointerController____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                 MethodInfo__InventoryPointerController____c___CreateBubble_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__InventoryPointerController____c->static_fields->__9__11_0 = this_01;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__InventoryPointerController____c->static_fields->__9__11_0 >> 0xc);
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
    InventoryPointerController_ClearImmediate(this,(MethodInfo *)0x0);
    pBVar6 = (this->fields).button;
    (this->fields).slotToHighlight = slot;
    (this->fields).categoryToOpen = category;
    if (pBVar6 != (Button *)0x0) {
      this_00 = (UnityEvent *)(pBVar6->fields).m_OnClick;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__InventoryPointerController__RemoveBubbles__,
                 (MethodInfo *)0x0);
      if (this_00 != (UnityEvent *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                  (this_00,(UnityAction *)this_02,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__InventoryPointerController___CreateBubble_b__11_1_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,this_03,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        return;
      }
    }
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}


/* Void OpenAtSlot() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_OpenAtSlot
               (InventoryPointerController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryPointerController___OpenAtSlot_b__13_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar2,(Object *)this,
             MethodInfo__InventoryPointerController___OpenAtSlot_b__13_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                  ,0);
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
    FUN_?(&MethodInfo__InventoryPointerController__OpenAtSlot__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__InventoryPointerController__RemoveBubbles__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryPointerController___ClearImmediate_b__14_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar3 = (this->fields).button;
  if (pBVar3 != (Button *)0x0) {
    pBVar4 = (pBVar3->fields).m_OnClick;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__InventoryPointerController__RemoveBubbles__,
               (MethodInfo *)0x0);
    if ((pBVar4 != (Button_ButtonClickedEvent *)0x0) &&
       (pNVar5 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
      pOVar6 = (pNVar5->fields)._._.m_target;
      pMVar7 = (MethodInfo_1 *)
                (*(pNVar5->klass->vtable).GetMethodImpl.methodPtr)
                          (pNVar5,(pNVar5->klass->vtable).GetMethodImpl.method);
      pIVar8 = (pBVar4->fields)._._.m_Calls;
      if (pIVar8 != (InvokableCallList *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCallList::
        InvokableCallList_RemoveListener(pIVar8,pOVar6,pMVar7,(MethodInfo *)0x0);
        pBVar3 = (this->fields).open;
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
        if (pBVar3 != (Button *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pBVar3->fields)._._._._._._.m_CachedPtr != (void *)0x0) {
            pBVar3 = (this->fields).open;
            if (pBVar3 != (Button *)0x0) {
              pBVar4 = (pBVar3->fields).m_OnClick;
              pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar5,(Object *)this,MethodInfo__InventoryPointerController__OpenAtSlot__
                         ,(MethodInfo *)0x0);
              if ((pBVar4 != (Button_ButtonClickedEvent *)0x0) &&
                 (pNVar5 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
                pOVar6 = (pNVar5->fields)._._.m_target;
                pMVar7 = (MethodInfo_1 *)
                          (*(pNVar5->klass->vtable).GetMethodImpl.methodPtr)
                                    (pNVar5,(pNVar5->klass->vtable).GetMethodImpl.method);
                pIVar8 = (pBVar4->fields)._._.m_Calls;
                if (pIVar8 != (InvokableCallList *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCallList::
                  InvokableCallList_RemoveListener(pIVar8,pOVar6,pMVar7,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
            goto code_?;
          }
        }
code_?:
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (pEVar2,(Object *)this,
                   MethodInfo__InventoryPointerController___ClearImmediate_b__14_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar9 = 
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
          lVar11 = (longlong)(pLVar10->fields)._size;
          uVar12 = 0;
          if (0 < lVar11) {
            lVar13 = 0;
            lVar14 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar10->fields)._size <= uVar12) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pTVar16 = (pLVar10->fields)._items;
              if (pTVar16 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar16->max_length <= uVar12) {
                FUN_?();
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar16->vector + lVar14 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar1,(BaseEventData *)0x0,pEVar2,
                                 (pMVar9->field7_0x38).rgctx_data[1].method);
              if (bVar17 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar12 = uVar12 + 1;
              lVar13 = lVar13 + 1;
              lVar14 = lVar14 + 8;
            } while (lVar13 < lVar11);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void RemoveBubbles() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_RemoveBubbles
               (InventoryPointerController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                  ,0);
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
    FUN_?(&MethodInfo__InventoryPointerController__OpenAtSlot__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__InventoryPointerController__RemoveBubbles__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryPointerController___ClearImmediate_b__14_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__InventoryPointerController__RemoveBubbles__,
               (MethodInfo *)0x0);
    if ((pBVar2 != (Button_ButtonClickedEvent *)0x0) &&
       (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
      pOVar4 = (pNVar3->fields)._._.m_target;
      pMVar5 = (MethodInfo_1 *)
                (*(pNVar3->klass->vtable).GetMethodImpl.methodPtr)
                          (pNVar3,(pNVar3->klass->vtable).GetMethodImpl.method);
      pIVar6 = (pBVar2->fields)._._.m_Calls;
      if (pIVar6 != (InvokableCallList *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCallList::
        InvokableCallList_RemoveListener(pIVar6,pOVar4,pMVar5,(MethodInfo *)0x0);
        pBVar1 = (this->fields).open;
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
        if (pBVar1 != (Button *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pBVar1->fields)._._._._._._.m_CachedPtr != (void *)0x0) {
            pBVar1 = (this->fields).open;
            if (pBVar1 != (Button *)0x0) {
              pBVar2 = (pBVar1->fields).m_OnClick;
              pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar3,(Object *)this,MethodInfo__InventoryPointerController__OpenAtSlot__
                         ,(MethodInfo *)0x0);
              if ((pBVar2 != (Button_ButtonClickedEvent *)0x0) &&
                 (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
                pOVar4 = (pNVar3->fields)._._.m_target;
                pMVar5 = (MethodInfo_1 *)
                          (*(pNVar3->klass->vtable).GetMethodImpl.methodPtr)
                                    (pNVar3,(pNVar3->klass->vtable).GetMethodImpl.method);
                pIVar6 = (pBVar2->fields)._._.m_Calls;
                if (pIVar6 != (InvokableCallList *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCallList::
                  InvokableCallList_RemoveListener(pIVar6,pOVar4,pMVar5,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
            goto code_?;
          }
        }
code_?:
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__InventoryPointerController___ClearImmediate_b__14_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar8 = 
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
          if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar8);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar7,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar10 = (longlong)(pLVar9->fields)._size;
          uVar11 = 0;
          if (0 < lVar10) {
            lVar12 = 0;
            lVar13 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar9->fields)._size <= uVar11) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pTVar15 = (pLVar9->fields)._items;
              if (pTVar15 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar15->max_length <= uVar11) {
                FUN_?();
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar15->vector + lVar13 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar7,(BaseEventData *)0x0,this_01,
                                 (pMVar8->field7_0x38).rgctx_data[1].method);
              if (bVar16 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar11 = uVar11 + 1;
              lVar12 = lVar12 + 1;
              lVar13 = lVar13 + 8;
            } while (lVar12 < lVar10);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_Start
               (InventoryPointerController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__InventoryPointerController__CreateBubble_int__int__bool_);
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
  if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
       (IEditModeUI *)0x0) || (lVar1 = FUN_?(), lVar1 == 0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDVar3 = *(Delegate **)(lVar1 + 0x28);
  b = (Delegate *)FUN_?(TypeInfo__System__Action<int,_int,_bool>);
  pMVar4 = MethodInfo__InventoryPointerController__CreateBubble_int__int__bool_;
  bVar5 = iRam_? != 0;
  (b->fields).method_ptr =
       MethodInfo__InventoryPointerController__CreateBubble_int__int__bool_->virtualMethodPointer;
  (b->fields).method = pMVar4;
  (b->fields).m_target = (Object *)this;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
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
  uVar10 = pMVar4->parameters_count;
  (b->fields).method_code = b;
  if ((pMVar4->flags & 0x10) == 0) {
    if (this == (InventoryPointerController *)0x0) {
      uVar11 = func_?();
      FUN_?(uVar11,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (uVar10 == 3) {
    pcVar2 = FUN_?;
    goto code_?;
  }
  (b->fields).method_code = (b->fields).m_target;
  pcVar2 = (b->fields).method_ptr;
code_?:
  (b->fields).invoke_impl = pcVar2;
  (b->fields).extra_arg = FUN_?;
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar3,b,(MethodInfo *)0x0);
  pAVar12 = TypeInfo__System__Action<int,_int,_bool>;
  if (pDVar3 == (Delegate *)0x0) {
    *(undefined8 *)(lVar1 + 0x28) = 0;
  }
  else {
    lVar7 = FUN_?(pDVar3,TypeInfo__System__Action<int,_int,_bool>);
    if (lVar7 == 0) {
      FUN_?(pDVar3,pAVar12);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(longlong *)(lVar1 + 0x28) = lVar7;
    pAVar12 = TypeInfo__System__Action<int,_int,_bool>;
    lVar7 = FUN_?(pDVar3,TypeInfo__System__Action<int,_int,_bool>);
    if (lVar7 == 0) {
      FUN_?(pDVar3,pAVar12);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)(lVar1 + 0x28U >> 0xc);
    lVar1 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar1 + 0xADDR);
      puVar9 = (ulonglong *)(lVar1 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* Void <ClearImmediate>b__14_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::InventoryPointerController::
     InventoryPointerController__ClearImmediate_b__14_0
               (InventoryPointerController *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (x == (TextBubbleController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  key = (this->fields).bubbleId;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                  ,key,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(x->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return;
    }
    pDVar3 = (x->fields).textBubbles;
    if ((pDVar3 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
       (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pOVar4 != (Object *)0x0)) {
      pDVar3 = (x->fields).textBubbles;
      *(undefined4 *)&pOVar4[1].klass = 0;
      if (pDVar3 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
        pTVar5 = (TextBubbleController_BubbleTracker *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           );
        TextBubbleController::TextBubbleController_UpdateBubble(x,pTVar5,(MethodInfo *)0x0);
        pDVar3 = (x->fields).textBubbles;
        if (((pDVar3 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
            (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pOVar4 != (Object *)0x0)) &&
           ((TextBubble *)pOVar4[1].monitor != (TextBubble *)0x0)) {
          TextBubble::TextBubble_OnRemoved((TextBubble *)pOVar4[1].monitor,(MethodInfo *)0x0);
          pDVar3 = (x->fields).textBubbles;
          if ((pDVar3 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
             (pTVar5 = (TextBubbleController_BubbleTracker *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                 ), pTVar5 != (TextBubbleController_BubbleTracker *)0x0)) {
            TextBubbleController+BubbleTracker::TextBubbleController_BubbleTracker_Clear
                      (pTVar5,(MethodInfo *)0x0);
            pDVar3 = (x->fields).textBubbles;
            if (pDVar3 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Remove
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                        );
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <CreateBubble>b__11_1(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::InventoryPointerController::
     InventoryPointerController__CreateBubble_b__11_1
               (InventoryPointerController *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__InventoryPointerController__OpenAtSlot__);
    LOCK();
    UNLOCK();
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
    fVar5 = (this->fields).pointerBodyDirectionOffset.x + 0.0;
    fVar6 = (this->fields).pointerBodyDirectionOffset.y + 0.0;
    lifeTime = (this->fields).bubbleLifetimeWhileShown;
    content = (this->fields).bubbleContent;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (x != (TextBubbleController *)0x0) {
      this_05 = (Transform *)0x0;
      targetCenterPoint.y = fVar6 + fVar6;
      targetCenterPoint.x = fVar5 + fVar5;
      iVar8 = TextBubbleController::TextBubbleController_ShowBubble2D
                        (x,(Vector2)0x0,targetCenterPoint,lifeTime,content,pTVar7,(MethodInfo *)0x0
                        );
      pBVar9 = (this->fields).openButton;
      (this->fields).bubbleId = iVar8;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pBVar9 = (Button *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pBVar9,
                           UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                          );
      bVar10 = iRam_? != 0;
      (this->fields).open = pBVar9;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)&(this->fields).open >> 0xc);
        uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar13 == *puVar14;
          if (bVar10) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pBVar9 = (this->fields).open;
      if (pBVar9 != (Button *)0x0) {
        this_03 = (UnityEvent *)(pBVar9->fields).m_OnClick;
        this_04 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_04,(Object *)this,MethodInfo__InventoryPointerController__OpenAtSlot__,
                   (MethodInfo *)0x0);
        if (this_03 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (this_03,(UnityAction *)this_04,(MethodInfo *)0x0);
          pBVar9 = (this->fields).open;
          iVar8 = (this->fields).bubbleId;
          if (pBVar9 != (Button *)0x0) {
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pBVar9,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              if (pTVar7->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                this_05 = pTVar7;
              }
              if (this_05 == (Transform *)0x0) {
                FUN_?(pTVar7);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                            ,iVar8,this_05,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_01 = (x->fields).textBubbles;
            if (((this_01 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0)
                || (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,System::Object]::
                             Dictionary_2_System_Int32_System_Object__get_Item
                                       ((Dictionary_2_System_Int32_System_Object_ *)this_01,iVar8,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                       ), pOVar15 == (Object *)0x0)) ||
               (this_02 = (TextBubble *)pOVar15[1].monitor, this_02 == (TextBubble *)0x0)) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                            ,this_05,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_00 = (this_02->fields).content;
            if ((this_05 != (Transform *)0x0) &&
               (item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_05,(MethodInfo *)0x0),
               pMVar16 = 
               MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
               , this_00 != (List_1_UnityEngine_Object_ *)0x0)) {
              piVar17 = &(this_00->fields)._version;
              *piVar17 = *piVar17 + 1;
              pOVar18 = (this_00->fields)._items;
              if (pOVar18 != (Object_1__Array *)0x0) {
                uVar11 = (this_00->fields)._size;
                if (uVar11 < (uint)pOVar18->max_length) {
                  (this_00->fields)._size = uVar11 + 1;
                  FUN_?(pOVar18,(longlong)(int)uVar11,item);
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__AddWithResize
                            ((List_1_System_Object_ *)this_00,(Object *)item,
                             pMVar16->klass->rgctx_data[0xe].method);
                }
                pRVar1 = TextBubble::TextBubble_get_BubbleTransform(this_02,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                ,pRVar1,0,0);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (this_05 == (Transform *)0x0) {
                  FUN_?();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pvVar2 = (this_05->fields)._._.m_CachedPtr;
                if (pvVar2 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)this_05,(MethodInfo *)0x0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if ((
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  FUN_?();
                }
                if (pRVar1 == (RectTransform *)0x0) {
                  pvVar19 = (void *)0x0;
                }
                else {
                  pvVar19 = (pRVar1->fields)._._._.m_CachedPtr;
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam_?)(pvVar2,pvVar19,0);
                return;
              }
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
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


/* Void <OpenAtSlot>b__13_0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController__OpenAtSlot_b__13_0
               (InventoryPointerController *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    FUN_?(1,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* InventoryPointerController() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController__ctor
               (InventoryPointerController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).bubbleLifetimeWhileShown = 3.4028235e+38;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

