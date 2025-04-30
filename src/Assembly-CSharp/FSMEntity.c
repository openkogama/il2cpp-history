
/* Void ClearStateStack() */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_ClearStateStack(FSMEntity *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
    func_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__get_Count__);
    cRam_? = '\x01';
  }
  this_01 = this;
  this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).stateStack;
  if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    if (0 < (this_00->fields)._size) {
      this = (FSMEntity *)
             mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]
             ::Stack_1_UnityEngine_UIElements_TextureId__Pop
                       (this_00,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__)
      ;
      (this_01->fields).clearStack = 1;
      value = (Object *)func_?(TypeInfo__EditorEvent,&this);
      FSMEntity_set_Event(this_01,value,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean PopState() */

bool Assembly-CSharp.dll::FSMEntity::FSMEntity_PopState(FSMEntity *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
    func_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__get_Count__);
    cRam_? = '\x01';
  }
  this_01 = this;
  if ((this->fields).lockState == 0) {
    this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).stateStack;
    if (this_00 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    if (0 < (this_00->fields)._size) {
      this = (FSMEntity *)
             mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]
             ::Stack_1_UnityEngine_UIElements_TextureId__Pop
                       (this_00,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__)
      ;
      (this_01->fields).clearStack = 0;
      value = (Object *)func_?(TypeInfo__EditorEvent,&this);
      FSMEntity_set_Event(this_01,value,(MethodInfo *)0x0);
      return 1;
    }
  }
  return 0;
}


/* Void PushState(EditorEvent) */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_PushState
               (FSMEntity *this,EditorEvent__Enum nextState,MethodInfo *method)

{
  this_01 = this;
  if ((this->fields).lockState != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_
                   );
    cRam_? = '\x01';
  }
  method_00 = MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_;
  if ((this_01->fields).lockState == 0) {
    this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this_01->fields).stateStack;
    pOVar1 = (this_01->fields).curEvent;
    if ((this_00 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) || (pOVar1 == (Object *)0x0))
    {
      func_?();
      pOVar1 = extraout_ECX;
      pEVar2 = extraout_EDX;
    }
    else {
      pEVar2 = TypeInfo__EditorEvent;
      if ((pOVar1->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
        piVar3 = (int32_t *)func_?(pOVar1);
        mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
        Stack_1_UnityEngine_UIElements_TextureId__Push(this_00,(TextureId)*piVar3,method_00);
        this = (FSMEntity *)nextState;
        (this_01->fields).clearStack = 0;
        pOVar1 = (Object *)func_?(TypeInfo__EditorEvent,&this);
        FSMEntity_set_Event(this_01,pOVar1,(MethodInfo *)0x0);
        return;
      }
    }
    func_?(pOVar1,pEVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}


/* Void PushState(EditorEvent, EditorEvent) */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_PushState_1
               (FSMEntity *this,EditorEvent__Enum nextState,EditorEvent__Enum overridePushState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_
                   );
    cRam_? = '\x01';
  }
  this_01 = this;
  method_00 = MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_;
  if ((this->fields).lockState != 0) {
    return;
  }
  this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).stateStack;
  if (overridePushState == EditorEvent__Enum_UndefinedState) {
    pOVar1 = (this->fields).curEvent;
    if ((this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) && (pOVar1 != (Object *)0x0))
    {
      pEVar2 = TypeInfo__EditorEvent;
      if ((pOVar1->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
        piVar3 = (int32_t *)func_?(pOVar1);
        mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
        Stack_1_UnityEngine_UIElements_TextureId__Push(this_00,(TextureId)*piVar3,method_00);
        goto code_?;
      }
      goto code_?;
    }
  }
  else if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
    Stack_1_UnityEngine_UIElements_TextureId__Push
              (this_00,(TextureId)overridePushState,
               MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_);
code_?:
    this = (FSMEntity *)nextState;
    (this_01->fields).clearStack = 0;
    pOVar1 = (Object *)func_?(TypeInfo__EditorEvent,&this);
    FSMEntity_set_Event(this_01,pOVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pOVar1 = extraout_ECX;
  pEVar2 = extraout_EDX;
code_?:
  func_?(pOVar1,pEVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_Update(FSMEntity *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IState);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).currentState;
  if (pIVar1 != (IState *)0x0) {
    func_?(1,TypeInfo__IState,pIVar1,this);
  }
  return;
}


/* FSMEntity() */

void Assembly-CSharp.dll::FSMEntity::FSMEntity__ctor(FSMEntity *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Stack__);
    func_?(&TypeInfo__System__Collections__Generic__Stack<EditorEvent>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  ppDVar1 = &(this->fields).data;
  *ppDVar1 = (Dictionary_2_System_Object_System_Object_ *)this_00;
  func_?(ppDVar1,this_00);
  (this->fields).clearStack = 1;
  this_01 = (Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)
            func_?(TypeInfo__System__Collections__Generic__Stack<EditorEvent>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Dynamic::
  BindingRestrictions+TestBuilder+AndNode]::
  Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___ctor
            (this_01,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Stack__);
  method_00 = (MethodInfo *)&(this->fields).stateStack;
  *(Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ **)method_00 = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void set_Event(Object) */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_set_Event
               (FSMEntity *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                   );
    func_?(&TypeInfo__IState);
    func_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    func_?(&StringLiteral_State_is_locked__could_not_set_s);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_State_is_locked__could_not_set_s;
  if ((this->fields).lockState != 0) {
    if (value == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(code *)(value->klass->vtable).ToString.method)(value,value->klass[1]._0.image);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
    return;
  }
  ppOVar2 = &(this->fields).nextEvent;
  *ppOVar2 = value;
  func_?(ppOVar2,value);
  if (value == (Object *)0x0) {
    pIVar3 = (this->fields).currentState;
    ppIVar4 = &(this->fields).currentState;
    if (pIVar3 != (IState *)0x0) {
      func_?(2,TypeInfo__IState,pIVar3,this);
      *ppIVar4 = (IState *)0x0;
      func_?(ppIVar4,0);
      return;
    }
  }
  else {
    this_00 = (this->fields).transitionTable;
    if (this_00 != (StateTransitionTable *)0x0) {
      pIVar3 = StateTransitionTable::StateTransitionTable_GetState(this_00,value,(MethodInfo *)0x0);
      if (pIVar3 != (IState *)0x0) {
        pIVar5 = (this->fields).currentState;
        if (pIVar5 != (IState *)0x0) {
          func_?(2,TypeInfo__IState,pIVar5,this);
        }
        pSVar1 = (String *)
                 (*(code *)(value->klass->vtable).ToString.method)(value,value->klass[1]._0.image);
        ppSVar6 = &(this->fields).stateName;
        *ppSVar6 = pSVar1;
        func_?(ppSVar6,pSVar1);
        ppIVar4 = &(this->fields).currentState;
        *ppIVar4 = pIVar3;
        func_?(ppIVar4,pIVar3);
        *ppOVar2 = (Object *)0x0;
        func_?(ppOVar2,0);
        pOVar7 = (this->fields).curEvent;
        ppOVar2 = &(this->fields).curEvent;
        (this->fields).prevEvent = pOVar7;
        func_?(&this->fields,pOVar7);
        *ppOVar2 = value;
        func_?(ppOVar2,value);
        pIVar3 = (this->fields).currentState;
        if (pIVar3 == (IState *)0x0) goto code_?;
        func_?(0,TypeInfo__IState,pIVar3,this);
        this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(this->fields).data;
        if (this_01 ==
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                  );
      }
      if ((this->fields).clearStack == 0) {
        (this->fields).clearStack = 1;
        return;
      }
      this_02 = (Stack_1_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchContext_ *)
                (this->fields).stateStack;
      if (this_02 !=
          (Stack_1_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchContext_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::StyleSheets::
        BaseStyleMatcher+MatchContext]::
        Stack_1_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchContext__Clear
                  (this_02,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

