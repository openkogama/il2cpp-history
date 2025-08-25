
/* Void InvokeButton() */

void Assembly-CSharp.dll::BackButtonHandler::BackButtonHandler_InvokeButton
               (BackButtonHandler *this,MethodInfo *method)

{
  pBVar1 = (this->fields).invokeButton;
  if (pBVar1 != (Button *)0x0) {
    if ((pBVar1->fields)._.m_Interactable == 0) {
      return;
    }
    unityEventBase = (pBVar1->fields).m_OnClick;
    if (unityEventBase != (Button_ButtonClickedEvent *)0x0) {
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
        this = (BackButtonHandler *)RVar7;
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
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)RVar7,iVar4,
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
              this = (BackButtonHandler *)this_01;
            }
            this = (BackButtonHandler *)
                   mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
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
                                 ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)RVar7,iVar4,
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
  }
code_?:
  uVar11 = func_?(&stack0xfffffff0);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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

