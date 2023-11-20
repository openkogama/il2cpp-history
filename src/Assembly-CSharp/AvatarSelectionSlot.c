
/* Void BuildAvatarSelectionSlot(Int32, Texture2D) */

void Assembly-CSharp.dll::AvatarSelectionSlot::AvatarSelectionSlot_BuildAvatarSelectionSlot
               (AvatarSelectionSlot *this,int32_t index,Texture2D *texture,MethodInfo *method)

{
  (this->fields)._BodyIndex_k__BackingField = index;
  this_00 = (this->fields).image;
  if (this_00 != (RawImage *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
              (this_00,(Texture *)texture,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SlotClicked() */

void Assembly-CSharp.dll::AvatarSelectionSlot::AvatarSelectionSlot_SlotClicked
               (AvatarSelectionSlot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarSelectionSlot___SlotClicked_b__8_0_UnityEngine__EventSystems__IAvatarSlotClicked__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSlotClicked>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSlotClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSlotClicked>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSlotClicked>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__AvatarSelectionSlot___SlotClicked_b__8_0_UnityEngine__EventSystems__IAvatarSlotClicked__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSlotClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSlotClicked>_
            );
  return;
}


/* Void ToggleActive(Boolean) */

void Assembly-CSharp.dll::AvatarSelectionSlot::AvatarSelectionSlot_ToggleActive
               (AvatarSelectionSlot *this,bool active,MethodInfo *method)

{
  this_00 = (this->fields).selectionOutline;
  if (this_00 != (RectTransform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <SlotClicked>b__8_0(IAvatarSlotClicked, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionSlot::AvatarSelectionSlot__SlotClicked_b__8_0
               (AvatarSelectionSlot *this,IAvatarSlotClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IAvatarSlotClicked;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAvatarSlotClicked *)0x0) {
    ppIStack_1 = (IAvatarSlotClicked__Class **)(this->fields)._BodyIndex_k__BackingField;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IAvatarSlotClicked;
    func_?(0);
    return;
  }
  ppIStack_1 = (IAvatarSlotClicked__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

