
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
  this_00 = (Stack_1_System_Int32Enum_ *)(this->fields).stateStack;
  if (this_00 != (Stack_1_System_Int32Enum_ *)0x0) {
    if (0 < (this_00->fields)._size) {
      this = (FSMEntity *)
             mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
             Stack_1_System_Int32Enum__Pop
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
    this_00 = (Stack_1_System_Int32Enum_ *)(this->fields).stateStack;
    if (this_00 == (Stack_1_System_Int32Enum_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    if (0 < (this_00->fields)._size) {
      this = (FSMEntity *)
             mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
             Stack_1_System_Int32Enum__Pop
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
    this_00 = (Stack_1_System_Int32Enum_ *)(this_01->fields).stateStack;
    pOVar1 = (this_01->fields).curEvent;
    if ((this_00 == (Stack_1_System_Int32Enum_ *)0x0) || (pOVar1 == (Object *)0x0)) {
      func_?();
      pOVar1 = extraout_ECX;
      pEVar2 = extraout_EDX;
    }
    else {
      pEVar2 = TypeInfo__EditorEvent;
      if ((pOVar1->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
        pIVar3 = (Int32Enum__Enum *)func_?(pOVar1);
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
        Stack_1_System_Int32Enum__Push(this_00,*pIVar3,method_00);
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
  this_00 = (Stack_1_System_Int32Enum_ *)(this->fields).stateStack;
  if (overridePushState == EditorEvent__Enum_UndefinedState) {
    pOVar1 = (this->fields).curEvent;
    if ((this_00 != (Stack_1_System_Int32Enum_ *)0x0) && (pOVar1 != (Object *)0x0)) {
      pEVar2 = TypeInfo__EditorEvent;
      if ((pOVar1->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
        pIVar3 = (Int32Enum__Enum *)func_?(pOVar1);
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
        Stack_1_System_Int32Enum__Push(this_00,*pIVar3,method_00);
        goto code_?;
      }
      goto code_?;
    }
  }
  else if (this_00 != (Stack_1_System_Int32Enum_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
    Stack_1_System_Int32Enum__Push
              (this_00,overridePushState,
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
  if ((this->fields).currentState != (IState *)0x0) {
    func_?(1,TypeInfo__IState,(this->fields).currentState,this);
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (this->fields).data = this_00;
    func_?(&(this->fields).data,this_00);
    (this->fields).clearStack = 1;
    this_01 = (Stack_1_System_Object_ *)
              func_?(TypeInfo__System__Collections__Generic__Stack<EditorEvent>);
    if (this_01 != (Stack_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
      Stack_1_System_Object___ctor
                (this_01,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Stack__);
      method_00 = (MethodInfo *)&(this->fields).stateStack;
      (this->fields).stateStack = (Stack_1_EditorEvent_ *)this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
             (*(value->klass->vtable).ToString.methodPtr)
                       (value,(value->klass->vtable).ToString.method);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
    return;
  }
  (this->fields).nextEvent = value;
  func_?(&(this->fields).nextEvent,value);
  if (value == (Object *)0x0) {
    pIVar2 = (this->fields).currentState;
    if (pIVar2 != (IState *)0x0) {
      func_?(2,TypeInfo__IState,pIVar2,this);
      (this->fields).currentState = (IState *)0x0;
      func_?(&(this->fields).currentState,0);
      return;
    }
  }
  else {
    this_00 = (this->fields).transitionTable;
    if (this_00 != (StateTransitionTable *)0x0) {
      pIVar2 = StateTransitionTable::StateTransitionTable_GetState(this_00,value,(MethodInfo *)0x0);
      if (pIVar2 != (IState *)0x0) {
        if ((this->fields).currentState != (IState *)0x0) {
          func_?(2,TypeInfo__IState,(this->fields).currentState,this);
        }
        pSVar1 = (String *)
                 (*(value->klass->vtable).ToString.methodPtr)
                           (value,(value->klass->vtable).ToString.method);
        (this->fields).stateName = pSVar1;
        func_?(&(this->fields).stateName,pSVar1);
        (this->fields).currentState = pIVar2;
        func_?(&(this->fields).currentState,pIVar2);
        (this->fields).nextEvent = (Object *)0x0;
        func_?(&(this->fields).nextEvent,0);
        pOVar3 = (this->fields).curEvent;
        (this->fields).prevEvent = pOVar3;
        func_?(&(this->fields).prevEvent,pOVar3);
        (this->fields).curEvent = value;
        func_?(&(this->fields).curEvent,value);
        pIVar2 = (this->fields).currentState;
        if (pIVar2 == (IState *)0x0) goto code_?;
        func_?(0,TypeInfo__IState,pIVar2,this);
        this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)(this->fields).data;
        if (this_01 ==
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
        Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                  );
      }
      if ((this->fields).clearStack == 0) {
        (this->fields).clearStack = 1;
        return;
      }
      this_02 = (Stack_1_System_Int32Enum_ *)(this->fields).stateStack;
      if (this_02 != (Stack_1_System_Int32Enum_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
        Stack_1_System_Int32Enum__Clear
                  (this_02,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
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

