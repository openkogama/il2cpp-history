
/* Void InvokeButton() */

void Assembly-CSharp.dll::BackButtonHandler::BackButtonHandler_InvokeButton
               (BackButtonHandler *this,MethodInfo *method)

{
  pBVar1 = (this->fields).invokeButton;
  if (pBVar1 != (Button *)0x0) {
    if ((pBVar1->fields)._.m_Interactable == 0) {
      return;
    }
    unityEventBase = (BackButtonHandler *)(pBVar1->fields).m_OnClick;
    if (unityEventBase != (BackButtonHandler *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?(&TypeInfo__System__Object);
        cRam_? = '\x01';
      }
      if (*(bool *)&(unityEventBase->fields).invokeButton != 0) {
        this_00 = (((UnityEvent__Fields *)&(unityEventBase->fields)._)->_).m_PersistentCalls;
        if (this_00 == (PersistentCallGroup *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::PersistentCallGroup::
        PersistentCallGroup_Initialize
                  (this_00,(((UnityEvent__Fields *)&(unityEventBase->fields)._)->_).m_Calls,
                   (UnityEventBase *)unityEventBase,(MethodInfo *)0x0);
        *(bool *)&(unityEventBase->fields).invokeButton = 0;
      }
      pIVar2 = (((UnityEvent__Fields *)&(unityEventBase->fields)._)->_).m_Calls;
      if (pIVar2 != (InvokableCallList *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        this = unityEventBase;
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
          this = (BackButtonHandler *)
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
          ;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddRange
                    (pLVar6,(IEnumerable_1_System_Object_ *)(pIVar2->fields).m_RuntimeCalls,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                    );
          (pIVar2->fields).m_NeedsUpdate = 0;
        }
        pOVar7 = (Object__Array *)(pIVar2->fields).m_ExecutingCalls;
        iVar4 = 0;
        if (pOVar7 != (Object__Array *)0x0) {
          while( true ) {
            while( true ) {
              while( true ) {
                pBVar8 = this;
                if ((int)pOVar7->max_length <= iVar4) {
                  return;
                }
                RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)pOVar7,iVar4,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                                  );
                if (((RVar9 == (RegexCharClass_SingleRange)0x0) ||
                    (*(byte *)(*(int *)RVar9 + 0xb8) <
                     (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment)) ||
                   (unityEventBase = this,
                   *(InvokableCall__Class **)
                    (*(int *)(*(int *)RVar9 + 100) + -4 +
                    (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment * 4) !=
                   TypeInfo__UnityEngine__Events__InvokableCall)) break;
                this = (BackButtonHandler *)0x0;
                UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::
                InvokableCall_Invoke_1((InvokableCall *)RVar9,(MethodInfo *)0x0);
                iVar4 = iVar4 + 1;
                unityEventBase = pBVar8;
              }
              mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         pOVar7,iVar4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                        );
              this = (BackButtonHandler *)TypeInfo__UnityEngine__Events__InvokableCall;
              this_01 = (InvokableCall *)func_?();
              if (this_01 == (InvokableCall *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                        (this_01,(MethodInfo *)0x0);
              iVar4 = iVar4 + 1;
            }
            RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               pOVar7,iVar4,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                              );
            if ((Object__Array *)(unityEventBase->fields).kogamaControl == (Object__Array *)0x0) {
              pOVar7 = (Object__Array *)func_?();
              (unityEventBase->fields).kogamaControl = (int32_t)pOVar7;
              func_?();
            }
            if (RVar9 == (RegexCharClass_SingleRange)0x0) break;
            pOVar7 = (Object__Array *)(unityEventBase->fields).kogamaControl;
            func_?();
            iVar4 = iVar4 + 1;
          }
        }
      }
    }
  }
code_?:
  uVar10 = func_?(&stack0xffffffec);
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::BackButtonHandler::BackButtonHandler_OnDisable
               (BackButtonHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BackButtonManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BackButtonManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BackButtonManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BackButtonManager);
  }
  pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
    index = (pLVar1->fields)._size;
    do {
      index = index + -1;
      if (index < 1) {
        return;
      }
      if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BackButtonManager);
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                TypeInfo__BackButtonManager->static_fields->subscribers;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                            ), RVar2 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      x = *(Object_1 **)((int)RVar2 + 8);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)this,(MethodInfo *)0x0);
    } while (bVar3 == 0);
    if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BackButtonManager);
    }
    pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index,
                 MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__RemoveAt_int_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::BackButtonHandler::BackButtonHandler_OnEnable
               (BackButtonHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__BackButtonHandler__InvokeButton__);
    func_?(&TypeInfo__BackButtonManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  state = (this->fields).onKeyState;
  button = (this->fields).kogamaControl;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__BackButtonHandler__InvokeButton__,(MethodInfo *)0x0)
  ;
  if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BackButtonManager);
  }
  BackButtonManager::BackButtonManager_Subscribe
            (this,button,state,(UnityAction *)this_00,(MethodInfo *)0x0);
  return;
}


/* BackButtonHandler() */

void Assembly-CSharp.dll::BackButtonHandler::BackButtonHandler__ctor
               (BackButtonHandler *this,MethodInfo *method)

{
  (this->fields).kogamaControl = 0x2a;
  (this->fields).onKeyState = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

