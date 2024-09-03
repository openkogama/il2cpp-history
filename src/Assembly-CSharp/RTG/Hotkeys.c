
/* Void AddPotentialOverlap(Hotkeys) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_AddPotentialOverlap
               (Hotkeys *this,Hotkeys *hotkeys,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__Add_RTG__Hotkeys_
                   );
    cRam_? = '\x01';
  }
  if ((hotkeys != (Hotkeys *)0x0) && (hotkeys != this)) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__Contains_RTG__Hotkeys_
                     );
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields)._potentialOverlaps;
    if (pLVar1 == (List_1_RTG_Hotkeys_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar1,(Object *)hotkeys,
                       MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__Contains_RTG__Hotkeys_
                      );
    if (bVar3 == 0) {
      pLVar1 = (this->fields)._potentialOverlaps;
      if (pLVar1 == (List_1_RTG_Hotkeys_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)hotkeys,
                 MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__Add_RTG__Hotkeys_);
    }
  }
  return;
}


/* Boolean ContainsPotentialOverlap(Hotkeys) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_ContainsPotentialOverlap
               (Hotkeys *this,Hotkeys *hotkeys,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._potentialOverlaps;
  if (this_00 != (List_1_RTG_Hotkeys_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)this_00,(Object *)hotkeys,
                       MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__Contains_RTG__Hotkeys_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void EstablishPotentialOverlaps(List`1[RTG.Hotkeys]) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_EstablishPotentialOverlaps
               (List_1_RTG_Hotkeys_ *hotkeysCollection,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  if (hotkeysCollection != (List_1_RTG_Hotkeys_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        hotkeysCollection,
                        MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__GetEnumerator__
                       );
    uStack_10 = 0;
    LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_6._index = pLVar8->_index;
    LStack_6._version = pLVar8->_version;
    LStack_6._current = *(Object **)&pLVar8->_current;
    pLStack_11 = &LStack_6;
    uStack_1 = 0;
    do {
      uStack_1._0_1_ = 1;
      bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                        );
      this = LStack_6._current;
      if (bVar12 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pLStack_11,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
                   ,in_stack_13);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      method_00 = (MethodInfo *)&UNK_?;
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffff9c,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          hotkeysCollection,
                          MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__GetEnumerator__
                         );
      LStack_9._version = 0;
      LStack_7._list = (List_1_System_Object_ *)pLVar8->_list;
      LStack_7._index = pLVar8->_index;
      LStack_7._version = pLVar8->_version;
      LStack_7._current = *(Object **)&pLVar8->_current;
      uStack_1._0_1_ = 3;
      LStack_9._current = (RegexCharClass_SingleRange)&LStack_7;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                          );
        if (bVar12 == 0) break;
        if ((RegexCharClass_SingleRange)this == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        Hotkeys_AddPotentialOverlap((Hotkeys *)this,(Hotkeys *)LStack_7._current,(MethodInfo *)0x0)
        ;
      }
      uStack_1 = CONCAT31(uStack_1._1_3_,1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
                 ,method_00);
    } while( true );
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* List`1[UnityEngine.KeyCode] GetAllUsedModifiers() */

List_1_UnityEngine_KeyCode_ *
Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_GetAllUsedModifiers(Hotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields)._lMouseBtn != 0;
  cVar2 = bVar1 + '\x01';
  if ((this->fields)._rMouseBtn == 0) {
    cVar2 = bVar1;
  }
  cVar3 = cVar2 + '\x01';
  if ((this->fields)._mMouseBtn == 0) {
    cVar3 = cVar2;
  }
  if (cVar3 == '\0') {
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>)
    ;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List__);
  }
  else {
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>)
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this_00,3,
               MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List_int_);
    if ((this->fields)._lAlt != 0) {
      if (this_00 ==
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) goto code_?;
      func_?(this_00,0x134,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                     );
    }
    if ((this->fields)._lShift != 0) {
      if (this_00 ==
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) goto code_?;
      func_?(this_00,0x130,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                     );
    }
    if ((this->fields)._lCtrl != 0) {
      if (this_00 !=
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) {
        func_?(this_00,0x132,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                       );
        return (List_1_UnityEngine_KeyCode_ *)this_00;
      }
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      pLVar5 = (List_1_UnityEngine_KeyCode_ *)(*pcVar4)();
      return pLVar5;
    }
  }
  return (List_1_UnityEngine_KeyCode_ *)this_00;
}


/* List`1[RTG.MouseButton] GetAllUsedMouseButtons() */

List_1_RTG_MouseButton_ *
Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_GetAllUsedMouseButtons(Hotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__Add_RTG__MouseButton_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__List_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::MouseButton>);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields)._lMouseBtn != 0;
  cVar2 = bVar1 + '\x01';
  if ((this->fields)._rMouseBtn == 0) {
    cVar2 = bVar1;
  }
  cVar3 = cVar2 + '\x01';
  if ((this->fields)._mMouseBtn == 0) {
    cVar3 = cVar2;
  }
  if (cVar3 == '\0') {
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?(TypeInfo__System__Collections__Generic__List<RTG::MouseButton>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__List__);
  }
  else {
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?(TypeInfo__System__Collections__Generic__List<RTG::MouseButton>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this_00,3,MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__List_int_
              );
    if ((this->fields)._lMouseBtn != 0) {
      if (this_00 ==
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) goto code_?;
      func_?(this_00,0,
                      MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__Add_RTG__MouseButton_
                     );
    }
    if ((this->fields)._rMouseBtn != 0) {
      if (this_00 ==
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) goto code_?;
      func_?(this_00,1,
                      MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__Add_RTG__MouseButton_
                     );
    }
    if ((this->fields)._mMouseBtn != 0) {
      if (this_00 !=
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) {
        func_?(this_00,2,
                        MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__Add_RTG__MouseButton_
                       );
        return (List_1_RTG_MouseButton_ *)this_00;
      }
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      pLVar5 = (List_1_RTG_MouseButton_ *)(*pcVar4)();
      return pLVar5;
    }
  }
  return (List_1_RTG_MouseButton_ *)this_00;
}


/* Int32 GetNumModifiers() */

int32_t Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_GetNumModifiers(Hotkeys *this,MethodInfo *method)

{
  uVar1 = (uint)((this->fields)._lAlt != 0);
  uVar2 = uVar1 + 1;
  if ((this->fields)._lCtrl == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 1;
  if ((this->fields)._lShift == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}


/* Int32 GetNumMouseButtons() */

int32_t Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_GetNumMouseButtons
                  (Hotkeys *this,MethodInfo *method)

{
  uVar1 = (uint)((this->fields)._lMouseBtn != 0);
  uVar2 = uVar1 + 1;
  if ((this->fields)._rMouseBtn == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 1;
  if ((this->fields)._mMouseBtn == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}


/* Boolean HasNoModifiers() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_HasNoModifiers(Hotkeys *this,MethodInfo *method)

{
  if ((((this->fields)._lAlt == 0) && ((this->fields)._lCmd == 0)) && ((this->fields)._lCtrl == 0))
  {
    return (this->fields)._lShift == 0;
  }
  return 0;
}


/* Boolean HasNoMouseButtons() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_HasNoMouseButtons(Hotkeys *this,MethodInfo *method)

{
  if (((this->fields)._lMouseBtn == 0) && ((this->fields)._rMouseBtn == 0)) {
    return (this->fields)._mMouseBtn == 0;
  }
  return 0;
}


/* Boolean IsActive(Boolean) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsActive
               (Hotkeys *this,bool checkForOverlaps,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object__Class *)0x0;
  if ((this->fields)._isEnabled == 0) goto code_?;
  if ((this->fields)._key == 0) {
    if (((((this->fields)._lAlt == 0) && ((this->fields)._lCmd == 0)) &&
        ((this->fields)._lCtrl == 0)) && ((this->fields)._lShift == 0)) {
      if (((this->fields)._lMouseBtn == 0) && ((this->fields)._rMouseBtn == 0)) {
        if ((this->fields)._mMouseBtn == 0) goto code_?;
        goto code_?;
      }
    }
    else {
code_?:
      if ((this->fields)._key != 0) goto code_?;
    }
  }
  else {
code_?:
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      ((this->fields)._key,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((((this->fields)._useStrictModifierCheck != 0) && ((this->fields)._lAlt == 0)) &&
     (((this->fields)._lCmd == 0 && (((this->fields)._lCtrl == 0 && ((this->fields)._lShift == 0))))
     )) {
    bVar7 = Hotkeys_IsAnyModifierKeyPressed(this,(MethodInfo *)0x0);
    if (bVar7 != 0) goto code_?;
  }
  if ((this->fields)._lCtrl != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      (KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._lCmd != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      (KeyCode__Enum_LeftApple,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._lAlt != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      (KeyCode__Enum_LeftAlt,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._lShift != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      (KeyCode__Enum_LeftShift,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._useStrictMouseCheck != 0) {
    bVar7 = Hotkeys_HasNoMouseButtons(this,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      unaff_EDI = (MethodInfo *)this;
      bVar7 = Hotkeys_IsAnyMouseButtonPressed(this,(MethodInfo *)0x0);
      if (bVar7 != 0) goto code_?;
    }
  }
  if ((this->fields)._lMouseBtn != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButton
                      (0,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._rMouseBtn != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButton
                      (1,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._mMouseBtn != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButton
                      (2,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if (checkForOverlaps == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return 1;
  }
  pLVar8 = (this->fields)._potentialOverlaps;
  if (pLVar8 == (List_1_RTG_Hotkeys_ *)0x0) {
code_?:
    func_?();
    pcVar9 = (code *)swi(3);
    bVar7 = (*pcVar9)();
    return bVar7;
  }
  puVar10 = (undefined4 *)
           func_?(auStack_11,pLVar8,
                           MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__GetEnumerator__
                          );
  pOStack_6 = (Object__Class *)*puVar10;
  uStack_12 = 0;
  uStack_1 = 1;
  method_00 = (MethodInfo *)puVar10[3];
  pOStack_13 = (Object *)&pOStack_6;
  do {
    do {
      this_00 = method_00;
      bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pOStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                        );
      if (bVar7 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&pOStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
                   ,unaff_EDI);
        goto code_?;
      }
      if (this_00 == (MethodInfo *)0x0) goto code_?;
      method_00 = this_00;
      bVar7 = Hotkeys_IsActive((Hotkeys *)this_00,0,(MethodInfo *)0x0);
    } while (bVar7 == 0);
    unaff_EDI = (MethodInfo *)this;
    bVar7 = Hotkeys_IsOverlappedBy(this,(Hotkeys *)this_00,(MethodInfo *)0x0);
  } while (bVar7 == 0);
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&pOStack_6,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
             ,method_00);
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return 0;
}


/* Boolean IsActiveInFrame(Boolean) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsActiveInFrame
               (Hotkeys *this,bool checkForOverlaps,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object__Class *)0x0;
  if ((this->fields)._isEnabled == 0) goto code_?;
  if ((this->fields)._key == 0) {
    if (((((this->fields)._lAlt == 0) && ((this->fields)._lCmd == 0)) &&
        ((this->fields)._lCtrl == 0)) && ((this->fields)._lShift == 0)) {
      if (((this->fields)._lMouseBtn == 0) && ((this->fields)._rMouseBtn == 0)) {
        if ((this->fields)._mMouseBtn == 0) goto code_?;
        goto code_?;
      }
    }
    else {
code_?:
      if ((this->fields)._key != 0) goto code_?;
    }
  }
  else {
code_?:
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                      ((this->fields)._key,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((((this->fields)._useStrictModifierCheck != 0) && ((this->fields)._lAlt == 0)) &&
     (((this->fields)._lCmd == 0 && (((this->fields)._lCtrl == 0 && ((this->fields)._lShift == 0))))
     )) {
    bVar7 = Hotkeys_IsAnyModifierKeyPressed(this,(MethodInfo *)0x0);
    if (bVar7 != 0) goto code_?;
  }
  if ((this->fields)._lCtrl != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      (KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._lCmd != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      (KeyCode__Enum_LeftApple,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._lAlt != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      (KeyCode__Enum_LeftAlt,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._lShift != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      (KeyCode__Enum_LeftShift,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._useStrictMouseCheck != 0) {
    bVar7 = Hotkeys_HasNoMouseButtons(this,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      unaff_EDI = (MethodInfo *)this;
      bVar7 = Hotkeys_IsAnyMouseButtonPressed(this,(MethodInfo *)0x0);
      if (bVar7 != 0) goto code_?;
    }
  }
  if ((this->fields)._lMouseBtn != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButtonDown
                      (0,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._rMouseBtn != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButtonDown
                      (1,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if ((this->fields)._mMouseBtn != 0) {
    bVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButtonDown
                      (2,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
  }
  if (checkForOverlaps == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return 1;
  }
  pLVar8 = (this->fields)._potentialOverlaps;
  if (pLVar8 == (List_1_RTG_Hotkeys_ *)0x0) {
code_?:
    func_?();
    pcVar9 = (code *)swi(3);
    bVar7 = (*pcVar9)();
    return bVar7;
  }
  puVar10 = (undefined4 *)
           func_?(auStack_11,pLVar8,
                           MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__GetEnumerator__
                          );
  pOStack_6 = (Object__Class *)*puVar10;
  uStack_12 = 0;
  uStack_1 = 1;
  method_00 = (MethodInfo *)puVar10[3];
  pOStack_13 = (Object *)&pOStack_6;
  do {
    do {
      this_00 = method_00;
      bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pOStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                        );
      if (bVar7 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&pOStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
                   ,unaff_EDI);
        goto code_?;
      }
      if (this_00 == (MethodInfo *)0x0) goto code_?;
      method_00 = this_00;
      bVar7 = Hotkeys_IsActiveInFrame((Hotkeys *)this_00,0,(MethodInfo *)0x0);
    } while (bVar7 == 0);
    unaff_EDI = (MethodInfo *)this;
    bVar7 = Hotkeys_IsOverlappedBy(this,(Hotkeys *)this_00,(MethodInfo *)0x0);
  } while (bVar7 == 0);
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&pOStack_6,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
             ,method_00);
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return 0;
}


/* Boolean IsAnyModifierKeyPressed() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsAnyModifierKeyPressed
               (Hotkeys *this,MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                    (KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      (KeyCode__Enum_LeftApple,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                        (KeyCode__Enum_LeftAlt,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                          (KeyCode__Enum_LeftShift,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}


/* Boolean IsAnyMouseButtonPressed() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsAnyMouseButtonPressed
               (Hotkeys *this,MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButton
                    (0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButton
                      (1,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButton
                        (2,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


/* Boolean IsEmpty() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsEmpty(Hotkeys *this,MethodInfo *method)

{
  if (((((this->fields)._key == 0) && ((this->fields)._lAlt == 0)) && ((this->fields)._lCmd == 0))
     && ((((this->fields)._lCtrl == 0 && ((this->fields)._lShift == 0)) &&
         (((this->fields)._lMouseBtn == 0 && ((this->fields)._rMouseBtn == 0)))))) {
    return (this->fields)._mMouseBtn == 0;
  }
  return 0;
}


/* Boolean IsOverlappedBy(Hotkeys) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsOverlappedBy
               (Hotkeys *this,Hotkeys *hotkeys,MethodInfo *method)

{
  if ((hotkeys != (Hotkeys *)0x0) && (hotkeys != this)) {
    bVar1 = (this->fields)._lAlt != 0;
    bVar2 = bVar1 + 1;
    if ((this->fields)._lCtrl == 0) {
      bVar2 = bVar1;
    }
    bVar1 = (hotkeys->fields)._lAlt != 0;
    bVar3 = bVar1 + 1;
    if ((hotkeys->fields)._lCtrl == 0) {
      bVar3 = bVar1;
    }
    bVar4 = bVar2 + 1;
    if ((this->fields)._lShift == 0) {
      bVar4 = bVar2;
    }
    bVar2 = bVar3 + 1;
    if ((hotkeys->fields)._lShift == 0) {
      bVar2 = bVar3;
    }
    if (bVar4 <= bVar2) {
      bVar1 = (this->fields)._lMouseBtn != 0;
      bVar2 = bVar1 + 1;
      if ((this->fields)._rMouseBtn == 0) {
        bVar2 = bVar1;
      }
      bVar1 = (hotkeys->fields)._lMouseBtn != 0;
      bVar3 = bVar1 + 1;
      if ((hotkeys->fields)._rMouseBtn == 0) {
        bVar3 = bVar1;
      }
      bVar4 = bVar3 + 1;
      if ((hotkeys->fields)._mMouseBtn == 0) {
        bVar4 = bVar3;
      }
      bVar3 = bVar2 + 1;
      if ((this->fields)._mMouseBtn == 0) {
        bVar3 = bVar2;
      }
      if ((bVar3 <= bVar4) && ((hotkeys->fields)._key == (this->fields)._key)) {
        modifiers = Hotkeys_GetAllUsedModifiers(this,(MethodInfo *)0x0);
        bVar5 = Hotkeys_UsesModifiers(hotkeys,modifiers,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          buttons = Hotkeys_GetAllUsedMouseButtons(this,(MethodInfo *)0x0);
          bVar5 = Hotkeys_UsesMouseButtons(hotkeys,buttons,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


/* Boolean UsesModifiers(List`1[UnityEngine.KeyCode]) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_UsesModifiers
               (Hotkeys *this,List_1_UnityEngine_KeyCode_ *modifiers,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::KeyCode>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::KeyCode>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::KeyCode>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Contains_UnityEngine__KeyCode_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Int32Enum_ *)Hotkeys_GetAllUsedModifiers(this,(MethodInfo *)0x0);
  if (modifiers != (List_1_UnityEngine_KeyCode_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffd8,
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)modifiers,
               MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__GetEnumerator__
              );
    uStack_1 = 1;
    method_00 = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::KeyCode>__MoveNext__
                        );
      if (bVar4 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::KeyCode>__Dispose__
                   ,in_stack_5);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      if (this_00 == (List_1_System_Int32Enum_ *)0x0) break;
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
              List_1_System_Int32Enum__Contains
                        (this_00,(Int32Enum__Enum)
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Contains_UnityEngine__KeyCode_
                         ,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Contains_UnityEngine__KeyCode_
                        );
      if (bVar4 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::KeyCode>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Boolean UsesMouseButtons(List`1[RTG.MouseButton]) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_UsesMouseButtons
               (Hotkeys *this,List_1_RTG_MouseButton_ *buttons,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MouseButton>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MouseButton>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MouseButton>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__Contains_RTG__MouseButton_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Int32Enum_ *)Hotkeys_GetAllUsedMouseButtons(this,(MethodInfo *)0x0);
  if (buttons != (List_1_RTG_MouseButton_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffd8,
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)buttons,
               MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__GetEnumerator__);
    uStack_1 = 1;
    method_00 = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MouseButton>__MoveNext__
                        );
      if (bVar4 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MouseButton>__Dispose__
                   ,in_stack_5);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      if (this_00 == (List_1_System_Int32Enum_ *)0x0) break;
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
              List_1_System_Int32Enum__Contains
                        (this_00,(Int32Enum__Enum)
                                 MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__Contains_RTG__MouseButton_
                         ,
                         MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__Contains_RTG__MouseButton_
                        );
      if (bVar4 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MouseButton>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Hotkeys() */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Hotkeys);
    func_?(&TypeInfo__UnityEngine__KeyCode);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_KeyCode_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List__);
  TypeInfo__RTG__Hotkeys->static_fields->_availableKeys = pLVar1;
  func_?(TypeInfo__RTG__Hotkeys->static_fields,pLVar1);
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_;
  pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
  if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    piVar4 = &(pLVar3->fields)._version;
    *piVar4 = *piVar4 + 1;
    pRVar5 = (pLVar3->fields)._items;
    if (pRVar5 != (RegexCharClass_SingleRange__Array *)0x0) {
      uVar6 = (pLVar3->fields)._size;
      if (uVar6 < pRVar5->max_length) {
        (pLVar3->fields)._size = uVar6 + 1;
        if (pRVar5->max_length <= uVar6) goto code_?;
        pRVar5->vector[uVar6].First = 0x20;
        pRVar5->vector[uVar6].Last = 0;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                  (pLVar3,(RegexCharClass_SingleRange)0x20,pMVar2->klass->rgctx_data[0xe].method);
      }
      pMVar2 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
      ;
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
      if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        piVar4 = &(pLVar3->fields)._version;
        *piVar4 = *piVar4 + 1;
        pRVar5 = (pLVar3->fields)._items;
        if (pRVar5 != (RegexCharClass_SingleRange__Array *)0x0) {
          uVar6 = (pLVar3->fields)._size;
          if (uVar6 < pRVar5->max_length) {
            (pLVar3->fields)._size = uVar6 + 1;
            if (pRVar5->max_length <= uVar6) goto code_?;
            pRVar5->vector[uVar6].First = 8;
            pRVar5->vector[uVar6].Last = 0;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                      (pLVar3,(RegexCharClass_SingleRange)0x8,pMVar2->klass->rgctx_data[0xe].method)
            ;
          }
          pMVar2 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
          ;
          pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
          if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            piVar4 = &(pLVar3->fields)._version;
            *piVar4 = *piVar4 + 1;
            pRVar5 = (pLVar3->fields)._items;
            if (pRVar5 != (RegexCharClass_SingleRange__Array *)0x0) {
              uVar6 = (pLVar3->fields)._size;
              if (uVar6 < pRVar5->max_length) {
                (pLVar3->fields)._size = uVar6 + 1;
                if (pRVar5->max_length <= uVar6) goto code_?;
                pRVar5->vector[uVar6].First = 0xd;
                pRVar5->vector[uVar6].Last = 0;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                          (pLVar3,(RegexCharClass_SingleRange)0xd,
                           pMVar2->klass->rgctx_data[0xe].method);
              }
              pMVar2 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
              ;
              pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
              if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) {
                piVar4 = &(pLVar3->fields)._version;
                *piVar4 = *piVar4 + 1;
                pRVar5 = (pLVar3->fields)._items;
                if (pRVar5 != (RegexCharClass_SingleRange__Array *)0x0) {
                  uVar6 = (pLVar3->fields)._size;
                  if (uVar6 < pRVar5->max_length) {
                    (pLVar3->fields)._size = uVar6 + 1;
                    if (pRVar5->max_length <= uVar6) goto code_?;
                    pRVar5->vector[uVar6].First = 9;
                    pRVar5->vector[uVar6].Last = 0;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                              (pLVar3,(RegexCharClass_SingleRange)0x9,
                               pMVar2->klass->rgctx_data[0xe].method);
                  }
                  pMVar2 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                  ;
                  pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
                  if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) {
                    piVar4 = &(pLVar3->fields)._version;
                    *piVar4 = *piVar4 + 1;
                    pRVar5 = (pLVar3->fields)._items;
                    if (pRVar5 != (RegexCharClass_SingleRange__Array *)0x0) {
                      uVar6 = (pLVar3->fields)._size;
                      if (uVar6 < pRVar5->max_length) {
                        (pLVar3->fields)._size = uVar6 + 1;
                        if (pRVar5->max_length <= uVar6) goto code_?;
                        pRVar5->vector[uVar6].First = 0x7f;
                        pRVar5->vector[uVar6].Last = 0;
                      }
                      else {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                  (pLVar3,(RegexCharClass_SingleRange)0x7f,
                                   pMVar2->klass->rgctx_data[0xe].method);
                      }
                      pMVar2 = 
                      MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                      ;
                      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
                      if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)0x0) {
                        piVar4 = &(pLVar3->fields)._version;
                        *piVar4 = *piVar4 + 1;
                        pRVar5 = (pLVar3->fields)._items;
                        if (pRVar5 != (RegexCharClass_SingleRange__Array *)0x0) {
                          uVar6 = (pLVar3->fields)._size;
                          if (uVar6 < pRVar5->max_length) {
                            (pLVar3->fields)._size = uVar6 + 1;
                            if (pRVar5->max_length <= uVar6) goto code_?;
                            pRVar5->vector[uVar6].First = 0x5b;
                            pRVar5->vector[uVar6].Last = 0;
                          }
                          else {
                            mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                      (pLVar3,(RegexCharClass_SingleRange)0x5b,
                                       pMVar2->klass->rgctx_data[0xe].method);
                          }
                          pMVar2 = 
                          MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                          ;
                          pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
                          if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                         *)0x0) {
                            piVar4 = &(pLVar3->fields)._version;
                            *piVar4 = *piVar4 + 1;
                            pRVar5 = (pLVar3->fields)._items;
                            if (pRVar5 != (RegexCharClass_SingleRange__Array *)0x0) {
                              uVar6 = (pLVar3->fields)._size;
                              if (uVar6 < pRVar5->max_length) {
                                (pLVar3->fields)._size = uVar6 + 1;
                                if (pRVar5->max_length <= uVar6) goto code_?;
                                pRVar5->vector[uVar6].First = 0x5d;
                                pRVar5->vector[uVar6].Last = 0;
                              }
                              else {
                                mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                          (pLVar3,(RegexCharClass_SingleRange)0x5d,
                                           pMVar2->klass->rgctx_data[0xe].method);
                              }
                              item_00.First = 0x61;
                              item_00.Last = 0;
                              do {
                                pMVar2 = 
                                MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                                ;
                                pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
                                if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                               *)0x0) goto code_?;
                                piVar4 = &(pLVar3->fields)._version;
                                *piVar4 = *piVar4 + 1;
                                pRVar5 = (pLVar3->fields)._items;
                                if (pRVar5 == (RegexCharClass_SingleRange__Array *)0x0)
                                goto code_?;
                                uVar6 = (pLVar3->fields)._size;
                                if (uVar6 < pRVar5->max_length) {
                                  (pLVar3->fields)._size = uVar6 + 1;
                                  if (pRVar5->max_length <= uVar6) goto code_?;
                                  pRVar5->vector[uVar6] = item_00;
                                }
                                else {
                                  mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                  RegularExpressions::RegexCharClass+SingleRange]::
                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                            (pLVar3,item_00,pMVar2->klass->rgctx_data[0xe].method);
                                }
                                item_00 = (RegexCharClass_SingleRange)((int)item_00 + 1);
                              } while ((int)item_00 < 0x7b);
                              item_01.First = 0x30;
                              item_01.Last = 0;
                              do {
                                pMVar2 = 
                                MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                                ;
                                pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
                                if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                               *)0x0) goto code_?;
                                piVar4 = &(pLVar3->fields)._version;
                                *piVar4 = *piVar4 + 1;
                                pRVar5 = (pLVar3->fields)._items;
                                if (pRVar5 == (RegexCharClass_SingleRange__Array *)0x0)
                                goto code_?;
                                uVar6 = (pLVar3->fields)._size;
                                if (uVar6 < pRVar5->max_length) {
                                  (pLVar3->fields)._size = uVar6 + 1;
                                  if (pRVar5->max_length <= uVar6) goto code_?;
                                  pRVar5->vector[uVar6] = item_01;
                                }
                                else {
                                  mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                  RegularExpressions::RegexCharClass+SingleRange]::
                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                            (pLVar3,item_01,pMVar2->klass->rgctx_data[0xe].method);
                                }
                                pMVar2 = 
                                MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                                ;
                                item_01 = (RegexCharClass_SingleRange)((int)item_01 + 1);
                              } while ((int)item_01 < 0x3a);
                              pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
                              if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                             *)0x0) {
                                piVar4 = &(pLVar3->fields)._version;
                                *piVar4 = *piVar4 + 1;
                                pRVar5 = (pLVar3->fields)._items;
                                if (pRVar5 != (RegexCharClass_SingleRange__Array *)0x0) {
                                  uVar6 = (pLVar3->fields)._size;
                                  if (uVar6 < pRVar5->max_length) {
                                    (pLVar3->fields)._size = uVar6 + 1;
                                    if (pRVar5->max_length <= uVar6) goto code_?;
                                    pRVar5->vector[uVar6].First = 0;
                                    pRVar5->vector[uVar6].Last = 0;
                                  }
                                  else {
                                    mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                    ::RegularExpressions::RegexCharClass+SingleRange]::
                                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                              (pLVar3,(RegexCharClass_SingleRange)0x0,
                                               pMVar2->klass->rgctx_data[0xe].method);
                                  }
                                  pLVar7 = (List_1_System_String_ *)func_?();
                                  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::
                                  IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
                                  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                              *)pLVar7,
                                             MethodInfo__System__Collections__Generic__List<System::String>__List__
                                            );
                                  TypeInfo__RTG__Hotkeys->static_fields->_availableKeyNames = pLVar7
                                  ;
                                  func_?();
                                  index = 0;
                                  pLVar1 = TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
                                  while (pLVar1 != (List_1_UnityEngine_KeyCode_ *)0x0) {
                                    if ((pLVar1->fields)._size <= index) {
                                      return;
                                    }
                                    pLVar7 = TypeInfo__RTG__Hotkeys->static_fields->
                                             _availableKeyNames;
                                    pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                              *)TypeInfo__RTG__Hotkeys->static_fields->
                                                _availableKeys;
                                    if (pLVar3 == (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)0x0) break;
                                    mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                    ::RegularExpressions::RegexCharClass+SingleRange]::
                                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                              (pLVar3,index,
                                               MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__get_Item_int_
                                              );
                                    pKStack_8 = TypeInfo__UnityEngine__KeyCode;
                                    item = mscorlib.dll::System::Enum::Enum_ToString
                                                     ((Enum *)&pKStack_8,(MethodInfo *)0x0);
                                    if (pLVar7 == (List_1_System_String_ *)0x0) break;
                                    mscorlib.dll::System::Collections::Generic::List`1[System::
                                    Object]::List_1_System_Object__Add
                                              ((List_1_System_Object_ *)pLVar7,(Object *)item,
                                               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                                              );
                                    index = index + 1;
                                    pLVar1 = TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
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
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Hotkeys(String) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys__ctor(Hotkeys *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::Hotkeys>);
    func_?(&StringLiteral_Hotkeys);
    cRam_? = '\x01';
  }
  (this->fields)._isEnabled = 1;
  (this->fields)._useStrictModifierCheck = 1;
  (this->fields)._name = StringLiteral_Hotkeys;
  func_?(&(this->fields)._name,StringLiteral_Hotkeys);
  this_00 = (List_1_RTG_Hotkeys_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::Hotkeys>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__List__);
  method_00 = (MethodInfo *)&(this->fields)._potentialOverlaps;
  (this->fields)._potentialOverlaps = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._name = name;
  func_?(&(this->fields)._name,name);
  (this->fields)._key = 0;
  (this->fields)._staticData.CanHaveMouseButtons = 1;
  return;
}


/* Hotkeys(String, HotkeysStaticData) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys__ctor_1
               (Hotkeys *this,String *name,HotkeysStaticData staticData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::Hotkeys>);
    func_?(&StringLiteral_Hotkeys);
    cRam_? = '\x01';
  }
  (this->fields)._isEnabled = 1;
  (this->fields)._useStrictModifierCheck = 1;
  (this->fields)._name = StringLiteral_Hotkeys;
  func_?(&(this->fields)._name,StringLiteral_Hotkeys);
  this_00 = (List_1_RTG_Hotkeys_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::Hotkeys>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__List__);
  method_00 = (MethodInfo *)&(this->fields)._potentialOverlaps;
  (this->fields)._potentialOverlaps = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._name = name;
  func_?(&(this->fields)._name,name);
  (this->fields)._key = 0;
  (this->fields)._staticData.CanHaveMouseButtons = staticData.CanHaveMouseButtons;
  return;
}


/* List`1[System.String] get_AvailableKeyNames() */

List_1_System_String_ *
Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_get_AvailableKeyNames(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Hotkeys);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Hotkeys->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Hotkeys);
  }
  collection = TypeInfo__RTG__Hotkeys->static_fields->_availableKeyNames;
  this = (List_1_System_String_ *)
         func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this,(IEnumerable_1_System_Object_ *)collection,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  return this;
}


/* List`1[UnityEngine.KeyCode] get_AvailableKeys() */

List_1_UnityEngine_KeyCode_ *
Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_get_AvailableKeys(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Hotkeys);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List_System__Collections__Generic__IEnumerable<UnityEngine::KeyCode>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Hotkeys->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Hotkeys);
  }
  collection = TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
  this = (List_1_System_Int32Enum_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
  List_1_System_Int32Enum___ctor_1
            (this,(IEnumerable_1_System_Int32Enum_ *)collection,
             MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List_System__Collections__Generic__IEnumerable<UnityEngine::KeyCode>_
            );
  return (List_1_UnityEngine_KeyCode_ *)this;
}


/* Boolean get_LShift() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_get_LShift(Hotkeys *this,MethodInfo *method)

{
  return (this->fields)._lShift;
}


/* Void set_Key(KeyCode) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_set_Key
               (Hotkeys *this,KeyCode__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Hotkeys);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Contains_UnityEngine__KeyCode_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Hotkeys->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Hotkeys);
  }
  this_00 = (List_1_System_Int32Enum_ *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
  if (this_00 != (List_1_System_Int32Enum_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
            List_1_System_Int32Enum__Contains
                      (this_00,value,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Contains_UnityEngine__KeyCode_
                      );
    if (bVar1 != 0) {
      (this->fields)._key = value;
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_LAlt(Boolean) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_set_LAlt
               (Hotkeys *this,bool value,MethodInfo *method)

{
  (this->fields)._lAlt = value;
  return;
}


/* Void set_LShift(Boolean) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_set_LShift
               (Hotkeys *this,bool value,MethodInfo *method)

{
  (this->fields)._lShift = value;
  return;
}


/* Void set_MMouseButton(Boolean) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_set_MMouseButton
               (Hotkeys *this,bool value,MethodInfo *method)

{
  (this->fields)._mMouseBtn = value;
  return;
}

