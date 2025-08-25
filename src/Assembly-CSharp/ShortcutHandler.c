
/* Void Callback() */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler_Callback
               (ShortcutHandler *this,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if ((pBVar1 != (Button *)0x0) &&
     (unityEventBase = (pBVar1->fields).m_OnClick,
     unityEventBase != (Button_ButtonClickedEvent *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&TypeInfo__System__Object);
      cRam_? = '\x01';
    }
    if ((unityEventBase->fields)._._.m_CallsDirty != 0) {
      this_00 = (unityEventBase->fields)._._.m_PersistentCalls;
      if (this_00 == (PersistentCallGroup *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::PersistentCallGroup::
      PersistentCallGroup_Initialize
                (this_00,(unityEventBase->fields)._._.m_Calls,(UnityEventBase *)unityEventBase,
                 (MethodInfo *)0x0);
      (unityEventBase->fields)._._.m_CallsDirty = 0;
    }
    pIVar2 = (unityEventBase->fields)._._.m_Calls;
    if (pIVar2 != (InvokableCallList *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((pIVar2->fields).m_NeedsUpdate != 0) {
        pLVar3 = (pIVar2->fields).m_ExecutingCalls;
        if (pLVar3 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) goto code_?;
        iVar4 = (pLVar3->fields)._size;
        piVar5 = &(pLVar3->fields)._version;
        *piVar5 = *piVar5 + 1;
        (pLVar3->fields)._size = 0;
        if (0 < iVar4) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar3->fields)._items,0,iVar4,(MethodInfo *)0x0);
        }
        pLVar6 = (List_1_System_Object_ *)(pIVar2->fields).m_ExecutingCalls;
        if (pLVar6 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  (pLVar6,(IEnumerable_1_System_Object_ *)(pIVar2->fields).m_PersistentCalls,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        pLVar6 = (List_1_System_Object_ *)(pIVar2->fields).m_ExecutingCalls;
        if (pLVar6 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  (pLVar6,(IEnumerable_1_System_Object_ *)(pIVar2->fields).m_RuntimeCalls,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        (pIVar2->fields).m_NeedsUpdate = 0;
      }
      RVar7 = (RegexCharClass_SingleRange)(pIVar2->fields).m_ExecutingCalls;
      iVar4 = 0;
      this = (ShortcutHandler *)RVar7;
      if (RVar7 != (RegexCharClass_SingleRange)0x0) {
code_?:
        do {
          while( true ) {
            if (*(int *)((int)RVar7 + 0xc) <= iVar4) {
              return;
            }
            RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               RVar7,iVar4,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                              );
            if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
            if ((*(byte *)(*(int *)RVar8 + 0xb8) <
                 (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment) ||
               (*(InvokableCall__Class **)
                 (*(int *)(*(int *)RVar8 + 100) + -4 +
                 (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment * 4) !=
                TypeInfo__UnityEngine__Events__InvokableCall)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            this_01.First = 0;
            this_01.Last = 0;
            if (bVar9) {
              this_01 = RVar8;
            }
            RVar7 = (RegexCharClass_SingleRange)this;
            if (this_01 == (RegexCharClass_SingleRange)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                      ((InvokableCall *)this_01,(MethodInfo *)0x0);
            iVar4 = iVar4 + 1;
            RVar7 = this_01;
            this = (ShortcutHandler *)this_01;
          }
          this = (ShortcutHandler *)
                 mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            RVar7,iVar4,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                           );
          this_02 = (InvokableCall *)func_?();
          if (this_02 == (InvokableCall *)0x0) {
            RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )RVar7,iVar4,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                               );
            if ((unityEventBase->fields)._.m_InvokeArray == (Object__Array *)0x0) {
              pOVar10 = (Object__Array *)func_?();
              (unityEventBase->fields)._.m_InvokeArray = pOVar10;
              func_?();
            }
            if (RVar7 == (RegexCharClass_SingleRange)0x0) break;
            func_?();
            iVar4 = iVar4 + 1;
            RVar7 = (RegexCharClass_SingleRange)this;
            goto code_?;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                    (this_02,(MethodInfo *)0x0);
          iVar4 = iVar4 + 1;
        } while( true );
      }
    }
  }
code_?:
  uVar11 = func_?(&stack0xfffffff0);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void RegisterShortcutKey() */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler_RegisterShortcutKey
               (ShortcutHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ShortcutHandler___RegisterShortcutKey_b__9_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__ShortcutHandler___RegisterShortcutKey_b__9_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler_Reset
               (ShortcutHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                   );
    cRam_? = '\x01';
  }
  pBVar1 = (Button *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                     );
  (this->fields).button = pBVar1;
  func_?(&(this->fields).button,pBVar1);
  return;
}


/* Void UnRegisterShortcutKey() */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler_UnRegisterShortcutKey
               (ShortcutHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyUnRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ShortcutHandler___UnRegisterShortcutKey_b__10_0_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__ShortcutHandler___UnRegisterShortcutKey_b__10_0_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyUnRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>_
            );
  return;
}


/* Void <RegisterShortcutKey>b__9_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler__RegisterShortcutKey_b__9_0
               (ShortcutHandler *this,IShortcutKeyRegister *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    func_?(&MethodInfo__ShortcutHandler__Callback__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).keyState;
  iVar2 = (this->fields).kogamaControl;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__ShortcutHandler__Callback__,(MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,x,iVar2,iVar1,
                    this_00);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <UnRegisterShortcutKey>b__10_0(IShortcutKeyUnRegister, BaseEventData) */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler__UnRegisterShortcutKey_b__10_0
               (ShortcutHandler *this,IShortcutKeyUnRegister *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IShortcutKeyUnRegister *)0x0) {
    ppIStack_1 = (IShortcutKeyUnRegister__Class **)(this->fields).keyState;
    puStack_2 = (undefined *)(this->fields).kogamaControl;
    pIStack_3 = x;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister);
    return;
  }
  ppIStack_1 = (IShortcutKeyUnRegister__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

