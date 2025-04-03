
/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::HoverInputHandler::HoverInputHandler_OnPointerEnter
               (HoverInputHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HoverInputReceiver);
    func_?(&MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).hoverInputReceivers;
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
                           MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    uVar3 = 0;
    uVar4 = *(ushort *)(*(int *)RVar2 + 0xb6);
    if (uVar4 != 0) {
      iVar5 = *(int *)(*(int *)RVar2 + 0x58);
      do {
        if (*(HoverInputReceiver__Class **)(iVar5 + (uint)uVar3 * 8) == TypeInfo__HoverInputReceiver
           ) {
          puVar6 = (undefined4 *)
                   (*(int *)RVar2 + (*(int *)(iVar5 + 4 + (uint)uVar3 * 8) + 0x18) * 8);
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)func_?(RVar2,TypeInfo__HoverInputReceiver,0);
code_?:
    (*(code *)*puVar6)(RVar2,puVar6[1]);
    iStack_1 = iStack_1 + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).hoverInputReceivers;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::HoverInputHandler::HoverInputHandler_OnPointerExit
               (HoverInputHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HoverInputReceiver);
    func_?(&MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).hoverInputReceivers;
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
                           MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    uVar3 = 0;
    uVar4 = *(ushort *)(*(int *)RVar2 + 0xb6);
    if (uVar4 != 0) {
      iVar5 = *(int *)(*(int *)RVar2 + 0x58);
      do {
        if (*(HoverInputReceiver__Class **)(iVar5 + (uint)uVar3 * 8) == TypeInfo__HoverInputReceiver
           ) {
          puVar6 = (undefined4 *)
                   (*(int *)RVar2 + (*(int *)(iVar5 + 4 + (uint)uVar3 * 8) + 0x19) * 8);
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)func_?(RVar2,TypeInfo__HoverInputReceiver,1);
code_?:
    (*(code *)*puVar6)(RVar2,puVar6[1]);
    iStack_1 = iStack_1 + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).hoverInputReceivers;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SubscribeToHoverInput(HoverInputReceiver) */

void Assembly-CSharp.dll::HoverInputHandler::HoverInputHandler_SubscribeToHoverInput
               (HoverInputHandler *this,HoverInputReceiver *newInputReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields).hoverInputReceivers;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,(Object *)newInputReceiver,
               MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Add_HoverInputReceiver_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnsubscribeToHoverInput(HoverInputReceiver) */

void Assembly-CSharp.dll::HoverInputHandler::HoverInputHandler_UnsubscribeToHoverInput
               (HoverInputHandler *this,HoverInputReceiver *newInputReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields).hoverInputReceivers;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              (this_00,(Object *)newInputReceiver,
               MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Remove_HoverInputReceiver_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* HoverInputHandler() */

void Assembly-CSharp.dll::HoverInputHandler::HoverInputHandler__ctor
               (HoverInputHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<HoverInputReceiver>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_HoverInputReceiver_ *)
            func_?(TypeInfo__System__Collections__Generic__List<HoverInputReceiver>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__List__);
  ppLVar1 = &(this->fields).hoverInputReceivers;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

