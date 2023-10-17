
/* Void FindStackParent(Transform, Int32 ByRef) */

void Assembly-CSharp.dll::UIStack::UIStack_FindStackParent
               (UIStack *this,Transform *uiElement,int32_t *index,MethodInfo *method)

{
  while( true ) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    index_00 = 0;
    while( true ) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).stackableUiElements;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      if ((this_00->fields)._size <= index_00) break;
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index_00,
                         MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                        );
      if ((RVar1 == (RegexCharClass_SingleRange)0x0) ||
         (*(GameObject **)((int)RVar1 + 8) == (GameObject *)0x0)) goto code_?;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (*(GameObject **)((int)RVar1 + 8),(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pTVar2,(Object_1 *)uiElement,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        *index = index_00;
        return;
      }
      index_00 = index_00 + 1;
    }
    if (uiElement == (Transform *)0x0) break;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)uiElement,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) break;
    uiElement = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                          (pTVar2,(MethodInfo *)0x0);
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HideAll() */

void Assembly-CSharp.dll::UIStack::UIStack_HideAll(UIStack *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).stackableUiElements;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) ||
         (*(GameObject **)((int)LStack_6._current + 8) == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)((int)LStack_6._current + 8),0,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void HideAllExceptStackBottom() */

void Assembly-CSharp.dll::UIStack::UIStack_HideAllExceptStackBottom
               (UIStack *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).stackableUiElements;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
      } while (*(int *)((int)LStack_6._current + 0x18) == 0x100);
      if (*(GameObject **)((int)LStack_6._current + 8) == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)((int)LStack_6._current + 8),0,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean IsStackEmpty() */

bool Assembly-CSharp.dll::UIStack::UIStack_IsStackEmpty(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).stackableUiElements;
  if (pLVar2 != (List_1_UIStack_StackElement_ *)0x0) {
    return (pLVar2->fields)._size < 3;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsUIElementBlocked(GameObject) */

bool Assembly-CSharp.dll::UIStack::UIStack_IsUIElementBlocked
               (UIStack *this,GameObject *uiElement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
    func_?(&StringLiteral_IsUIElementBlocked_index____);
    cRam_? = '\x01';
  }
  IVar1.m_value = -1;
  if (uiElement != (GameObject *)0x0) {
    uiElement_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (uiElement,(MethodInfo *)0x0);
    UIStack_FindStackParent(this,uiElement_00,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (IVar1.m_value == -1) {
      pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)uiElement,(MethodInfo *)0x0);
      str2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar2,StringLiteral_IsUIElementBlocked_index____,str2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return 0;
    }
    pLVar3 = (this->fields).stackableUiElements;
    index = IVar1.m_value + 1;
    if (pLVar3 != (List_1_UIStack_StackElement_ *)0x0) {
      if ((pLVar3->fields)._size <= index) {
        return 0;
      }
      do {
        if ((pLVar3->fields)._size <= index) {
          return 0;
        }
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).stackableUiElements;
        if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,index,
                               MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                              ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
        if (*(char *)((int)RVar4 + 0xc) != '\0') {
          return 1;
        }
        pLVar3 = (this->fields).stackableUiElements;
        index = index + 1;
      } while (pLVar3 != (List_1_UIStack_StackElement_ *)0x0);
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::UIStack::UIStack_LateUpdate(UIStack *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).stackableUiElements;
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     (&LStack_9,this_00,
                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                     );
  LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
  LStack_6._index = pLVar8->_index;
  LStack_6._version = pLVar8->_version;
  LStack_6._current = *(Object **)&pLVar8->_current;
  LStack_9._version = 0;
  uStack_1 = 1;
  LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
  do {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_6,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                      );
    if (bVar10 == 0) goto code_?;
    if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
    goto code_?;
  } while (*(char *)((int)LStack_6._current + 0xc) == '\0');
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
code_?:
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&LStack_6,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
             ,unaff_EDI);
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* GameObject Peak() */

GameObject * Assembly-CSharp.dll::UIStack::UIStack_Peak(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).stackableUiElements,(pLVar1->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                      );
    if (RVar2 != (RegexCharClass_SingleRange)0x0) {
      return *(GameObject **)((int)RVar2 + 8);
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pGVar5 = (GameObject *)(*pcVar4)();
  return pGVar5;
}


/* Void Pop() */

void Assembly-CSharp.dll::UIStack::UIStack_Pop(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    UIStack_RemoveElement(this,(pLVar1->fields)._size + -1,(MethodInfo *)0x0);
    UIStack_UpdateStack(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PopGroups(UIGroupFlags) */

void Assembly-CSharp.dll::UIStack::UIStack_PopGroups
               (UIStack *this,UIGroupFlags__Enum popGroups,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    iVar2 = (pLVar1->fields)._size;
    index = iVar2;
    while( true ) {
      if (iVar2 < 1) {
        UIStack_UpdateStack(this,(MethodInfo *)0x0);
        return;
      }
      index = index + -1;
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).stackableUiElements;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      if (0 < (int)(*(UIGroupFlags__Enum *)((int)RVar3 + 0x18) & popGroups)) {
        UIStack_RemoveElement(this,index,(MethodInfo *)0x0);
      }
      iVar2 = iVar2 + -1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PopToGroup(UIGroupFlags) */

void Assembly-CSharp.dll::UIStack::UIStack_PopToGroup
               (UIStack *this,UIGroupFlags__Enum group,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__StackTraceUtility);
    func_?(&StringLiteral_PopToGroup__Element_not_found_ab);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  uStack_7 = 0;
  method_00 = (MethodInfo *)(this->fields).stackableUiElements;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_6._index = pLVar8->_index;
    LStack_6._version = pLVar8->_version;
    LStack_6._current = *(Object **)&pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
    do {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                   ,method_00);
        uStack_1 = 0xffffffff;
        if ((TypeInfo__UnityEngine__StackTraceUtility->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__StackTraceUtility);
        }
        message = UnityEngine.CoreModule.dll::UnityEngine::StackTraceUtility::
                  StackTraceUtility_ExtractStackTrace((MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_PopToGroup__Element_not_found_ab,(MethodInfo *)0x0);
        goto code_?;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
    } while (*(UIGroupFlags__Enum *)((int)LStack_6._current + 0x18) != group);
    uStack_7 = 1;
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&LStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).stackableUiElements;
    while ((this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0 &&
           (RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,(this_00->fields)._size + -1,
                               MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                              ), RVar11 != (RegexCharClass_SingleRange)0x0))) {
      if (*(UIGroupFlags__Enum *)((int)RVar11 + 0x18) == group) {
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar12 = (this->fields).stackableUiElements;
      if (pLVar12 == (List_1_UIStack_StackElement_ *)0x0) break;
      UIStack_RemoveElement(this,(pLVar12->fields)._size + -1,(MethodInfo *)0x0);
      UIStack_UpdateStack(this,(MethodInfo *)0x0);
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).stackableUiElements;
    }
  }
code_?:
  uVar13 = func_?();
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean PopToStackElement(GameObject) */

bool Assembly-CSharp.dll::UIStack::UIStack_PopToStackElement
               (UIStack *this,GameObject *gameObject,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__StackTraceUtility);
    func_?(&StringLiteral_PopToStackElement__Element_not_f);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).stackableUiElements;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd0,this_00,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                       );
    method_00 = (Object__Class *)pLVar4->_list;
    method_01 = (MethodInfo *)pLVar4->_version;
    RVar5 = pLVar4->_current;
    uStack_1 = 1;
    do {
      bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                        );
      if (bVar6 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                   ,method_01);
        uStack_1 = 0xffffffff;
        if ((TypeInfo__UnityEngine__StackTraceUtility->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        message = UnityEngine.CoreModule.dll::UnityEngine::StackTraceUtility::
                  StackTraceUtility_ExtractStackTrace((MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_PopToStackElement__Element_not_f,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
      pOVar7 = *(Object_1 **)((int)RVar5 + 8);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        method_00 = (Object__Class *)&UNK_?;
        func_?();
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (pOVar7,(Object_1 *)gameObject,(MethodInfo *)0x0);
    } while (bVar6 == 0);
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffffc0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
               ,(MethodInfo *)method_00);
    uStack_1 = 0xffffffff;
    while( true ) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pLVar8 = (this->fields).stackableUiElements;
      if (pLVar8 == (List_1_UIStack_StackElement_ *)0x0) break;
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields).stackableUiElements,(pLVar8->fields)._size + -1,
                         MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                        );
      if ((RVar5 == (RegexCharClass_SingleRange)0x0) || (*(Void **)((int)RVar5 + 8) == (Void *)0x0))
      break;
      pOVar7 = (Object_1 *)
               mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                         (*(Void **)((int)RVar5 + 8),(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (pOVar7,(Object_1 *)gameObject,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
        cRam_? = '\x01';
      }
      pLVar8 = (this->fields).stackableUiElements;
      if (pLVar8 == (List_1_UIStack_StackElement_ *)0x0) break;
      UIStack_RemoveElement(this,(pLVar8->fields)._size + -1,(MethodInfo *)0x0);
      UIStack_UpdateStack(this,(MethodInfo *)0x0);
    }
  }
code_?:
  uVar9 = func_?();
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  bVar6 = (*pcVar10)();
  return bVar6;
}


/* Void Push(GameObject, UIPushOption, UnityAction, UIGroupFlags) */

void Assembly-CSharp.dll::UIStack::UIStack_Push
               (UIStack *this,GameObject *gameObject,UIPushOption__Enum pushOption,
               UnityAction *onPop,UIGroupFlags__Enum group,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UIStackDebugElement_MethodInfo__UnityEngine__GameObject__AddComponent<UIStackDebugElement>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__Add_UIStack__StackElement_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
    func_?(&TypeInfo__UIStack__StackElement);
    func_?(&StringLiteral_You_cannot_push_an_object_to_the);
    func_?(&StringLiteral_Group_cannot_be_none_as_this_mak);
    cRam_? = '\x01';
  }
  if (group == UIGroupFlags__Enum_None) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Group_cannot_be_none_as_this_mak,(MethodInfo *)0x0);
    return;
  }
  bVar1 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[System::
          Single,System::Object]::
          SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__System_Collections_ICollection_get_IsSynchronized
                    ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)0x0,
                     unaff_EDI);
  if (bVar1 != 0) {
    if ((gameObject == (GameObject *)0x0) ||
       (this_02 = (UIStackDebugElement *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (gameObject,
                             UIStackDebugElement_MethodInfo__UnityEngine__GameObject__AddComponent<UIStackDebugElement>__
                            ), this_02 == (UIStackDebugElement *)0x0)) goto code_?;
    UIStackDebugElement::UIStackDebugElement_Initialize(this_02,pushOption,group,(MethodInfo *)0x0);
  }
  index = 0;
  pLVar2 = (this->fields).stackableUiElements;
  if (pLVar2 != (List_1_UIStack_StackElement_ *)0x0) {
    while (index < (pLVar2->fields)._size) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).stackableUiElements;
      if (((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (this_00,index,
                              MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                             ), RVar3 == (RegexCharClass_SingleRange)0x0)) ||
         (onPop = *(UnityAction **)((int)RVar3 + 8), onPop == (UnityAction *)0x0))
      goto code_?;
      pushOption = (UIPushOption__Enum)&UNK_?;
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                        ((Object_1 *)onPop,(MethodInfo *)0x0);
      if (gameObject == (GameObject *)0x0) goto code_?;
      group = (UIGroupFlags__Enum)&UNK_?;
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                        ((Object_1 *)gameObject,(MethodInfo *)0x0);
      if (iVar4 == iVar5) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_You_cannot_push_an_object_to_the,(MethodInfo *)0x0);
        return;
      }
      pLVar2 = (this->fields).stackableUiElements;
      index = index + 1;
      if (pLVar2 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
    }
    this_03 = (UIStack_StackElement *)func_?();
    if (this_03 != (UIStack_StackElement *)0x0) {
      UIStack+StackElement::UIStack_StackElement__ctor
                (this_03,gameObject,pushOption,onPop,group,(MethodInfo *)0x0);
      if ((this_03->fields).hideAll != 0) {
        UIStack_HideAll(this,(MethodInfo *)0x0);
      }
      if ((this_03->fields).hideAllExceptStackbottom != 0) {
        UIStack_HideAllExceptStackBottom(this,(MethodInfo *)0x0);
      }
      if ((this_03->fields).blockingObject != 0) {
        pGVar6 = (this->fields).blockingObject;
        if ((pGVar6 == (GameObject *)0x0) ||
           (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                  (pTVar7,(MethodInfo *)0x0);
        this_01 = (this->fields).inputBlocker;
        if (this_01 == (DisableInput *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_01,(this_03->fields).suppressInput,(MethodInfo *)0x0);
        pGVar6 = (this->fields).blockingObject;
        if ((pGVar6 == (GameObject *)0x0) ||
           (pGVar6 = (GameObject *)
                     mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                               ((Void *)pGVar6,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,1,(MethodInfo *)0x0);
      }
      pGVar6 = (this_03->fields).gameObject;
      if (pGVar6 != (GameObject *)0x0) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar6,(MethodInfo *)0x0);
        pGVar6 = (this->fields).root;
        if ((pGVar6 != (GameObject *)0x0) &&
           (parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar7,parent,0,(MethodInfo *)0x0);
          pGVar6 = (this_03->fields).gameObject;
          if (pGVar6 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,1,(MethodInfo *)0x0);
            pLVar2 = (this->fields).stackableUiElements;
            if (pLVar2 != (List_1_UIStack_StackElement_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pLVar2,(Object *)this_03,
                         MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__Add_UIStack__StackElement_
                        );
              if ((this->fields).stackReady == 0) {
                UIStack_HideAll(this,(MethodInfo *)0x0);
              }
              UIStack_UpdateBlocking(this,(MethodInfo *)0x0);
              if ((this->fields).uiStackChangedPublisher == (Action *)0x0) {
                return;
              }
              pAVar8 = (this->fields).uiStackChangedPublisher;
              pvStack9 = (pAVar8->fields)._._.method;
              pvStack10 = (pAVar8->fields)._._.method_code;
              (*(pAVar8->fields)._._.invoke_impl)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void RemoveElement(Int32) */

void Assembly-CSharp.dll::UIStack::UIStack_RemoveElement
               (UIStack *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).stackableUiElements;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                      );
    this_01 = (this->fields).stackableUiElements;
    if (this_01 != (List_1_UIStack_StackElement_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)this_01,index,
                 MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__RemoveAt_int_
                );
      if (RVar1 != (RegexCharClass_SingleRange)0x0) {
        if (*(int *)((int)RVar1 + 0x14) != 0) {
          (**(code **)(*(int *)((int)RVar1 + 0x14) + 0xc))();
        }
        obj = *(Object_1 **)((int)RVar1 + 8);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetStackReady() */

void Assembly-CSharp.dll::UIStack::UIStack_SetStackReady(UIStack *this,MethodInfo *method)

{
  (this->fields).stackReady = 1;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).stackableUiElements,(pLVar1->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                      );
    if ((RVar2 != (RegexCharClass_SingleRange)0x0) &&
       (*(GameObject **)((int)RVar2 + 8) != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)((int)RVar2 + 8),1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields).stackableUiElements;
      if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
        if (1 < (pLVar1->fields)._size) {
          index = (pLVar1->fields)._size;
          index_00 = index + -2;
          do {
            index = index + -1;
            pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).stackableUiElements;
            if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar3,index,
                                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                     ), RVar2 == (RegexCharClass_SingleRange)0x0))
            goto code_?;
            if (*(char *)((int)RVar2 + 0xd) != '\0') break;
            pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).stackableUiElements;
            if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar3,index,
                                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                     ), RVar2 == (RegexCharClass_SingleRange)0x0))
            goto code_?;
            if (*(char *)((int)RVar2 + 0xf) != '\0') break;
            pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).stackableUiElements;
            if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) || (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                               RegularExpressions::RegexCharClass+SingleRange]::
                               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                         (pLVar3,index_00,
                                          MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                         ), RVar2 == (RegexCharClass_SingleRange)0x0)) ||
               (*(GameObject **)((int)RVar2 + 8) == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (*(GameObject **)((int)RVar2 + 8),1,(MethodInfo *)0x0);
            index_00 = index_00 + -1;
          } while (-1 < index_00);
        }
        UIStack_UpdateBlocking(this,(MethodInfo *)0x0);
        if ((this->fields).uiStackChangedPublisher == (Action *)0x0) {
          return;
        }
        (*(((this->fields).uiStackChangedPublisher)->fields)._._.invoke_impl)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetStackVisible() */

void Assembly-CSharp.dll::UIStack::UIStack_SetStackVisible(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    if (1 < (pLVar1->fields)._size) {
      index = (pLVar1->fields)._size;
      index_00 = index + -2;
      do {
        index = index + -1;
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).stackableUiElements;
        if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                              ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        if (*(char *)((int)RVar3 + 0xd) != '\0') {
          return;
        }
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).stackableUiElements;
        if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                              ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        if (*(char *)((int)RVar3 + 0xf) != '\0') {
          return;
        }
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).stackableUiElements;
        if (((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar2,index_00,
                                MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                               ), RVar3 == (RegexCharClass_SingleRange)0x0)) ||
           (*(GameObject **)((int)RVar3 + 8) == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)((int)RVar3 + 8),1,(MethodInfo *)0x0);
        index_00 = index_00 + -1;
      } while (-1 < index_00);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UIStack::UIStack_Start(UIStack *this,MethodInfo *method)

{
  pIVar1 = (this->fields).blockingObjectImage;
  if (pIVar1 != (Image *)0x0) {
    iVar2 = (*(pIVar1->klass->vtable).get_color.methodPtr)
                      (auStack_3,pIVar1,(pIVar1->klass->vtable).get_color.method);
    (this->fields).origBlockerAlpha = *(float *)(iVar2 + 0xc);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SubscribeToStackChanges(Action) */

void Assembly-CSharp.dll::UIStack::UIStack_SubscribeToStackChanges
               (UIStack *this,Action *onStackChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)(this->fields).uiStackChangedPublisher,(Delegate *)onStackChanged,
                      (MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    (this->fields).uiStackChangedPublisher = (Action *)0x0;
    func_?(&(this->fields).uiStackChangedPublisher);
    return;
  }
  pAVar2 = (Action *)0x0;
  if (pAVar1->klass == TypeInfo__System__Action) {
    pAVar2 = pAVar1;
  }
  if (pAVar2 != (Action *)0x0) {
    (this->fields).uiStackChangedPublisher = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 != (Action *)0x0) {
      func_?(&(this->fields).uiStackChangedPublisher);
      return;
    }
  }
  func_?(pAVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnSubscribeToStackChanges(Action) */

void Assembly-CSharp.dll::UIStack::UIStack_UnSubscribeToStackChanges
               (UIStack *this,Action *onStackChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)(this->fields).uiStackChangedPublisher,(Delegate *)onStackChanged,
                      (MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    (this->fields).uiStackChangedPublisher = (Action *)0x0;
    func_?(&(this->fields).uiStackChangedPublisher);
    return;
  }
  pAVar2 = (Action *)0x0;
  if (pAVar1->klass == TypeInfo__System__Action) {
    pAVar2 = pAVar1;
  }
  if (pAVar2 != (Action *)0x0) {
    (this->fields).uiStackChangedPublisher = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 != (Action *)0x0) {
      func_?(&(this->fields).uiStackChangedPublisher);
      return;
    }
  }
  func_?(pAVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateBlocking() */

void Assembly-CSharp.dll::UIStack::UIStack_UpdateBlocking(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    index = (pLVar1->fields)._size;
    do {
      index = index + -1;
      if (index < 0) {
        pGVar2 = (this->fields).blockingObject;
        if ((pGVar2 != (GameObject *)0x0) &&
           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                    (pTVar3,(MethodInfo *)0x0);
          pGVar2 = (this->fields).blockingObject;
          if ((pGVar2 != (GameObject *)0x0) &&
             (pGVar2 = (GameObject *)
                       mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                                 ((Void *)pGVar2,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).stackableUiElements;
      if ((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar4,index,
                             MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                            ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    } while (*(char *)((int)RVar5 + 0xc) == '\0');
    pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).stackableUiElements;
    if ((pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar4,index,
                           MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                          ), RVar5 != (RegexCharClass_SingleRange)0x0)) {
      pIVar6 = (this->fields).blockingObjectImage;
      if (*(char *)((int)RVar5 + 0xe) == '\0') {
        if (pIVar6 == (Image *)0x0) goto code_?;
        puVar7 = (undefined4 *)func_?();
        pIVar6 = (this->fields).blockingObjectImage;
        uVar8 = *puVar7;
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        fVar11 = (this->fields).origBlockerAlpha;
        if (pIVar6 == (Image *)0x0) goto code_?;
      }
      else {
        if (pIVar6 == (Image *)0x0) goto code_?;
        puVar7 = (undefined4 *)func_?();
        pIVar6 = (this->fields).blockingObjectImage;
        uVar8 = *puVar7;
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        if (pIVar6 == (Image *)0x0) goto code_?;
        fVar11 = 0.0;
      }
      func_?(0x17,pIVar6,uVar8,uVar9,uVar10,fVar11);
      pGVar2 = (this->fields).blockingObject;
      if ((pGVar2 != (GameObject *)0x0) &&
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                  (pTVar3,(MethodInfo *)0x0);
        pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).stackableUiElements;
        if ((pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
           (((RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (pLVar4,index,
                                 MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                ), RVar5 != (RegexCharClass_SingleRange)0x0 &&
             (*(GameObject **)((int)RVar5 + 8) != (GameObject *)0x0)) &&
            (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (*(GameObject **)((int)RVar5 + 8),(MethodInfo *)0x0),
            pTVar3 != (Transform *)0x0)))) {
          index_00 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetSiblingIndex
                               (pTVar3,(MethodInfo *)0x0);
          pGVar2 = (this->fields).blockingObject;
          if ((pGVar2 != (GameObject *)0x0) &&
             (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetSiblingIndex
                      (pTVar3,index_00,(MethodInfo *)0x0);
            pGVar2 = (this->fields).blockingObject;
            if ((pGVar2 != (GameObject *)0x0) &&
               (pGVar2 = (GameObject *)
                         mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                                   ((Void *)pGVar2,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
            {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateStack() */

void Assembly-CSharp.dll::UIStack::UIStack_UpdateStack(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).stackableUiElements,(pLVar1->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                      );
    if ((RVar2 != (RegexCharClass_SingleRange)0x0) &&
       (*(GameObject **)((int)RVar2 + 8) != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)((int)RVar2 + 8),1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields).stackableUiElements;
      if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
        if (1 < (pLVar1->fields)._size) {
          index = (pLVar1->fields)._size;
          index_00 = index + -2;
          do {
            index = index + -1;
            pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).stackableUiElements;
            if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar3,index,
                                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                     ), RVar2 == (RegexCharClass_SingleRange)0x0))
            goto code_?;
            if (*(char *)((int)RVar2 + 0xd) != '\0') break;
            pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).stackableUiElements;
            if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar3,index,
                                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                     ), RVar2 == (RegexCharClass_SingleRange)0x0))
            goto code_?;
            if (*(char *)((int)RVar2 + 0xf) != '\0') break;
            pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).stackableUiElements;
            if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) || (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                               RegularExpressions::RegexCharClass+SingleRange]::
                               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                         (pLVar3,index_00,
                                          MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                         ), RVar2 == (RegexCharClass_SingleRange)0x0)) ||
               (*(GameObject **)((int)RVar2 + 8) == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (*(GameObject **)((int)RVar2 + 8),1,(MethodInfo *)0x0);
            index_00 = index_00 + -1;
          } while (-1 < index_00);
        }
        UIStack_UpdateBlocking(this,(MethodInfo *)0x0);
        if ((this->fields).uiStackChangedPublisher == (Action *)0x0) {
          return;
        }
        (*(((this->fields).uiStackChangedPublisher)->fields)._._.invoke_impl)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* UIStack() */

void Assembly-CSharp.dll::UIStack::UIStack__ctor(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UIStack::StackElement>);
    cRam_? = '\x01';
  }
  (this->fields).origBlockerAlpha = 0.5;
  this_00 = (List_1_UIStack_StackElement_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UIStack::StackElement>);
  if (this_00 != (List_1_UIStack_StackElement_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__List__);
    (this->fields).stackableUiElements = this_00;
    func_?(&(this->fields).stackableUiElements,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

