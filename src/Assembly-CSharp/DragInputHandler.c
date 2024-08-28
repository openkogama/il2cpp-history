
/* Void AddInputReciever(IDragInputReciever) */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler_AddInputReciever
               (DragInputHandler *this,IDragInputReciever *newInputReciever,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields).dragInputRecievers;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,(Object *)newInputReciever,
               MethodInfo__System__Collections__Generic__List<IDragInputReciever>__Add_IDragInputReciever_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnBeginDrag(PointerEventData) */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler_OnBeginDrag
               (DragInputHandler *this,PointerEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IDragInputReciever);
    func_?(&MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).dragInputRecievers;
  iStack_1 = 0;
  while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size <= iStack_1) {
      return;
    }
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,iStack_1,
                           MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    uVar3 = 0;
    uVar4 = *(ushort *)(*(int *)RVar2 + 0xb6);
    if (uVar4 != 0) {
      iVar5 = *(int *)(*(int *)RVar2 + 0x58);
      do {
        if (*(IDragInputReciever__Class **)(iVar5 + (uint)uVar3 * 8) == TypeInfo__IDragInputReciever
           ) {
          puVar6 = (undefined4 *)
                   (*(int *)RVar2 + (*(int *)(iVar5 + 4 + (uint)uVar3 * 8) + 0x18) * 8);
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)func_?(RVar2,TypeInfo__IDragInputReciever,0);
code_?:
    (*(code *)*puVar6)(RVar2,puVar6[1]);
    iStack_1 = iStack_1 + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).dragInputRecievers;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler_OnDrag
               (DragInputHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IDragInputReciever);
    func_?(&MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).dragInputRecievers;
  iStack_1 = 0;
  while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size <= iStack_1) {
      return;
    }
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,iStack_1,
                           MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    uVar3 = 0;
    uVar4 = *(ushort *)(*(int *)RVar2 + 0xb6);
    if (uVar4 != 0) {
      iVar5 = *(int *)(*(int *)RVar2 + 0x58);
      do {
        if (*(IDragInputReciever__Class **)(iVar5 + (uint)uVar3 * 8) == TypeInfo__IDragInputReciever
           ) {
          puVar6 = (undefined4 *)
                   (*(int *)RVar2 + (*(int *)(iVar5 + 4 + (uint)uVar3 * 8) + 0x1a) * 8);
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)func_?(RVar2,TypeInfo__IDragInputReciever,2);
code_?:
    (*(code *)*puVar6)(RVar2,puVar6[1]);
    iStack_1 = iStack_1 + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).dragInputRecievers;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnEndDrag(PointerEventData) */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler_OnEndDrag
               (DragInputHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IDragInputReciever);
    func_?(&MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).dragInputRecievers;
  iStack_1 = 0;
  while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size <= iStack_1) {
      return;
    }
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,iStack_1,
                           MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    uVar3 = 0;
    uVar4 = *(ushort *)(*(int *)RVar2 + 0xb6);
    if (uVar4 != 0) {
      iVar5 = *(int *)(*(int *)RVar2 + 0x58);
      do {
        if (*(IDragInputReciever__Class **)(iVar5 + (uint)uVar3 * 8) == TypeInfo__IDragInputReciever
           ) {
          puVar6 = (undefined4 *)
                   (*(int *)RVar2 + (*(int *)(iVar5 + 4 + (uint)uVar3 * 8) + 0x19) * 8);
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)func_?(RVar2,TypeInfo__IDragInputReciever,1);
code_?:
    (*(code *)*puVar6)(RVar2,puVar6[1]);
    iStack_1 = iStack_1 + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).dragInputRecievers;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RemoveInputReciever(IDragInputReciever) */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler_RemoveInputReciever
               (DragInputHandler *this,IDragInputReciever *inputReciever,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields).dragInputRecievers;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              (this_00,(Object *)inputReciever,
               MethodInfo__System__Collections__Generic__List<IDragInputReciever>__Remove_IDragInputReciever_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* DragInputHandler() */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler__ctor
               (DragInputHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<IDragInputReciever>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<IDragInputReciever>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_IDragInputReciever_ *)
            func_?(TypeInfo__System__Collections__Generic__List<IDragInputReciever>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<IDragInputReciever>__List__);
  ppLVar1 = &(this->fields).dragInputRecievers;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

