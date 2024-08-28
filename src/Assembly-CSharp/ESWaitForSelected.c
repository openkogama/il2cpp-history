
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected_Enter
               (ESWaitForSelected *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&StringLiteral_IsNewPrototype);
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_00,(Object *)StringLiteral_IsNewPrototype,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      (this->fields).isNewPrototype = bVar1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected_Execute
               (ESWaitForSelected *this,EditorStateMachine *e,MethodInfo *method)

{
  if (e == (EditorStateMachine *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClient *)0x0) {
    if ((this->fields).useESInsert != 0) {
      FSMEntity::FSMEntity_PushState_1
                ((FSMEntity *)e,EditorEvent__Enum_ESInsert,EditorEvent__Enum_ObjectSelected,
                 (MethodInfo *)0x0);
      return;
    }
    FSMEntity::FSMEntity_PushState_1
              ((FSMEntity *)e,EditorEvent__Enum_ESTranslate,EditorEvent__Enum_ObjectSelected,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected_Exit
               (ESWaitForSelected *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&StringLiteral_IsNewPrototype);
    cRam_? = '\x01';
  }
  if ((this->fields).isNewPrototype == 0) {
    return;
  }
  if (e != (EditorStateMachine *)0x0) {
    this_00 = (e->fields)._.data;
    this = (ESWaitForSelected *)CONCAT13(1,this._0_3_);
    value = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)StringLiteral_IsNewPrototype,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ESWaitForSelected() */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected__ctor
               (ESWaitForSelected *this,MethodInfo *method)

{
  (this->fields).useESInsert = 1;
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  ppWVar2 = &(this->fields)._.tintedWo;
  *ppWVar2 = pWVar1;
  func_?(ppWVar2,&stack0xfffffffc,&UNK_?,ppWVar2,pWVar1);
  return;
}

