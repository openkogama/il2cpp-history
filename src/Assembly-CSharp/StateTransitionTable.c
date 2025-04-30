
/* IState GetState(Object) */

IState * Assembly-CSharp.dll::StateTransitionTable::StateTransitionTable_GetState
                   (StateTransitionTable *this,Object *evt,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__get_Item_System__Object_
                   );
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).table;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,evt,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__get_Item_System__Object_
                      );
    *unaff_FS_OFFSET = uStack_3;
    return (IState *)TVar4.m_Index;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar6 = (IState *)(*pcVar5)();
  return pIVar6;
}


/* Void SetState(Object, IState) */

void Assembly-CSharp.dll::StateTransitionTable::StateTransitionTable_SetState
               (StateTransitionTable *this,Object *evt,IState *state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).table;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,evt,(Object *)state,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* StateTransitionTable() */

void Assembly-CSharp.dll::StateTransitionTable::StateTransitionTable__ctor
               (StateTransitionTable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<System::Object,_IState>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_IState>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  ((StateTransitionTable__Fields *)method_00)->table = (Dictionary_2_System_Object_IState_ *)this_00
  ;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

