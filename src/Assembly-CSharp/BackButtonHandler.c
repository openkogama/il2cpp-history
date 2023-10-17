
/* Void InvokeButton() */

void Assembly-CSharp.dll::BackButtonHandler::BackButtonHandler_InvokeButton
               (BackButtonHandler *this,MethodInfo *method)

{
  pBVar1 = (this->fields).invokeButton;
  if (pBVar1 != (Button *)0x0) {
    if ((pBVar1->fields)._.m_Interactable == 0) {
      return;
    }
    this_00 = (pBVar1->fields).m_OnClick;
    if (this_00 != (Button_ButtonClickedEvent *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEventBase::
                UnityEventBase_PrepareInvoke((UnityEventBase *)this_00,(MethodInfo *)0x0);
      index = 0;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        do {
          while( true ) {
            if ((this_01->fields)._size <= index) {
              return;
            }
            RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_01,index,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                              );
            if ((((RVar2 == (RegexCharClass_SingleRange)0x0) ||
                 (*(byte *)(*(int *)RVar2 + 0xb4) <
                  (TypeInfo__UnityEngine__Events__InvokableCall->_1).typeHierarchyDepth)) ||
                (*(InvokableCall__Class **)
                  (*(int *)(*(int *)RVar2 + 100) + -4 +
                  (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).typeHierarchyDepth * 4)
                 != TypeInfo__UnityEngine__Events__InvokableCall)) ||
               (RVar2 == (RegexCharClass_SingleRange)0x0)) break;
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                      ((InvokableCall *)RVar2,(MethodInfo *)0x0);
            index = index + 1;
          }
          mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                    (this_01,index,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                    );
          RVar2 = (RegexCharClass_SingleRange)func_?();
          if (RVar2 != (RegexCharClass_SingleRange)0x0) goto code_?;
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                            );
          if ((this_00->fields)._.m_InvokeArray == (Object__Array *)0x0) {
            pOVar3 = (Object__Array *)func_?();
            (this_00->fields)._.m_InvokeArray = pOVar3;
            func_?();
          }
          if (RVar2 == (RegexCharClass_SingleRange)0x0) break;
          func_?();
          index = index + 1;
        } while( true );
      }
    }
  }
  uVar4 = func_?(&stack0xffffffe8);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__BackButtonHandler__InvokeButton__,
               (MethodInfo *)0x0);
    if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BackButtonManager);
    }
    BackButtonManager::BackButtonManager_Subscribe
              (this,button,state,(UnityAction *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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

