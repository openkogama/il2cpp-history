
/* Void Cancel() */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Cancel
               (ConfirmationPopup *this,MethodInfo *method)

{
  if ((this->fields).resultCallback != (UnityAction_2_System_Boolean_ConfirmationPopup_ *)0x0) {
    pUVar1 = (this->fields).resultCallback;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,0,this,(pUVar1->fields)._._.method);
  }
  bVar2 = iRam_? != 0;
  (this->fields).resultCallback = (UnityAction_2_System_Boolean_ConfirmationPopup_ *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).resultCallback >> 0xc);
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


/* Void Initialize(String, UnityAction`2[System.Boolean,ConfirmationPopup], String) */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Initialize
               (ConfirmationPopup *this,String *text,
               UnityAction_2_System_Boolean_ConfirmationPopup_ *resultCallback,String *header,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ConfirmationPopup__Cancel__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ConfirmationPopup__Ok__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,text,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).header;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,header,(pTVar1->klass->vtable).set_text.method);
      bVar2 = iRam_? != 0;
      (this->fields).resultCallback = resultCallback;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).resultCallback >> 0xc);
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
      pBVar7 = (this->fields).okButton;
      if (pBVar7 != (Button *)0x0) {
        this_00 = (UnityEvent *)(pBVar7->fields).m_OnClick;
        pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar8,(Object *)this,MethodInfo__ConfirmationPopup__Ok__,(MethodInfo *)0x0);
        if (this_00 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (this_00,(UnityAction *)pNVar8,(MethodInfo *)0x0);
          pBVar7 = (this->fields).cancelButton;
          if (pBVar7 != (Button *)0x0) {
            pBVar9 = (pBVar7->fields).m_OnClick;
            pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                      FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar8,(Object *)this,MethodInfo__ConfirmationPopup__Cancel__,
                       (MethodInfo *)0x0);
            if (pBVar9 != (Button_ButtonClickedEvent *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_01 = (InvokableCall *)FUN_?(TypeInfo__UnityEngine__Events__InvokableCall)
              ;
              UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::
              InvokableCall_add_Delegate(this_01,(UnityAction *)pNVar8,(MethodInfo *)0x0);
              pIVar10 = (pBVar9->fields)._._.m_Calls;
              if (pIVar10 != (InvokableCallList *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pLVar11 = (pIVar10->fields).m_RuntimeCalls;
                if (pLVar11 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                  FUN_?(pLVar11,this_01);
                  (pIVar10->fields).m_NeedsUpdate = 1;
                  return;
                }
              }
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Ok() */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Ok
               (ConfirmationPopup *this,MethodInfo *method)

{
  if ((this->fields).resultCallback != (UnityAction_2_System_Boolean_ConfirmationPopup_ *)0x0) {
    pUVar1 = (this->fields).resultCallback;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,1,this,(pUVar1->fields)._._.method);
  }
  bVar2 = iRam_? != 0;
  (this->fields).resultCallback = (UnityAction_2_System_Boolean_ConfirmationPopup_ *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).resultCallback >> 0xc);
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


/* Void Pop() */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Pop
               (ConfirmationPopup *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ConfirmationPopup____c___Pop_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ConfirmationPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ConfirmationPopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ConfirmationPopup____c);
  }
  this_01 = TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ConfirmationPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ConfirmationPopup____c);
    }
    object = TypeInfo__ConfirmationPopup____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__ConfirmationPopup____c___Pop_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0 >> 0xc);
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
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
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
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
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

