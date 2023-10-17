
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
  iStack_1 = 0;
  pLVar2 = (this->fields).dragInputRecievers;
  while (pLVar2 != (List_1_IDragInputReciever_ *)0x0) {
    if ((pLVar2->fields)._size <= iStack_1) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).dragInputRecievers;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,iStack_1,
                           MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                          ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
    uVar4 = 0;
    uVar5 = *(ushort *)(*(int *)RVar3 + 0xb2);
    if (uVar5 != 0) {
      do {
        if (*(IDragInputReciever__Class **)(*(int *)(*(int *)RVar3 + 0x58) + (uint)uVar4 * 8) ==
            TypeInfo__IDragInputReciever) {
          puVar6 = (undefined4 *)
                   (*(int *)(*(int *)(*(int *)RVar3 + 0x58) + 4 + (uint)uVar4 * 8) * 8 + 0xbc +
                   *(int *)RVar3);
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    puVar6 = (undefined4 *)func_?(RVar3,TypeInfo__IDragInputReciever,0,0);
code_?:
    (*(code *)*puVar6)(RVar3,puVar6[1]);
    iStack_1 = iStack_1 + 1;
    pLVar2 = (this->fields).dragInputRecievers;
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
  iStack_1 = 0;
  pLVar2 = (this->fields).dragInputRecievers;
  while (pLVar2 != (List_1_IDragInputReciever_ *)0x0) {
    if ((pLVar2->fields)._size <= iStack_1) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).dragInputRecievers;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,iStack_1,
                           MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                          ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
    uVar4 = 0;
    uVar5 = *(ushort *)(*(int *)RVar3 + 0xb2);
    if (uVar5 != 0) {
      do {
        if (*(IDragInputReciever__Class **)(*(int *)(*(int *)RVar3 + 0x58) + (uint)uVar4 * 8) ==
            TypeInfo__IDragInputReciever) {
          puVar6 = (undefined4 *)
                   (*(int *)(*(int *)(*(int *)RVar3 + 0x58) + 4 + (uint)uVar4 * 8) * 8 + 0xcc +
                   *(int *)RVar3);
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    puVar6 = (undefined4 *)func_?(RVar3,TypeInfo__IDragInputReciever,2,0);
code_?:
    (*(code *)*puVar6)(RVar3,puVar6[1]);
    iStack_1 = iStack_1 + 1;
    pLVar2 = (this->fields).dragInputRecievers;
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
  iStack_1 = 0;
  pLVar2 = (this->fields).dragInputRecievers;
  while (pLVar2 != (List_1_IDragInputReciever_ *)0x0) {
    if ((pLVar2->fields)._size <= iStack_1) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).dragInputRecievers;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,iStack_1,
                           MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                          ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
    uVar4 = 0;
    uVar5 = *(ushort *)(*(int *)RVar3 + 0xb2);
    if (uVar5 != 0) {
      do {
        if (*(IDragInputReciever__Class **)(*(int *)(*(int *)RVar3 + 0x58) + (uint)uVar4 * 8) ==
            TypeInfo__IDragInputReciever) {
          puVar6 = (undefined4 *)
                   (*(int *)(*(int *)(*(int *)RVar3 + 0x58) + 4 + (uint)uVar4 * 8) * 8 + 0xc4 +
                   *(int *)RVar3);
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    puVar6 = (undefined4 *)func_?(RVar3,TypeInfo__IDragInputReciever,1,0);
code_?:
    (*(code *)*puVar6)(RVar3,puVar6[1]);
    iStack_1 = iStack_1 + 1;
    pLVar2 = (this->fields).dragInputRecievers;
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).dragInputRecievers;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
              (this_00,(RegexCharClass_SingleRange)inputReciever,
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
  if (this_00 != (List_1_IDragInputReciever_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<IDragInputReciever>__List__);
    (this->fields).dragInputRecievers = this_00;
    func_?(&(this->fields).dragInputRecievers,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

