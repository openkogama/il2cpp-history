
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SlotClicked() */

void Assembly-CSharp.dll::AvatarSelectionSlot::AvatarSelectionSlot_SlotClicked
               (AvatarSelectionSlot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSlotClicked>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarSelectionSlot___SlotClicked_m__0_UnityEngine__EventSystems__IAvatarSlotClicked__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSlotClicked>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSlotClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSlotClicked>_
            );
  return;
}


/* Void ToggleActive(Boolean) */

void Assembly-CSharp.dll::AvatarSelectionSlot::AvatarSelectionSlot_ToggleActive
               (AvatarSelectionSlot *this,bool active,MethodInfo *method)

{
  this_00 = (this->fields).selectionOutline;
  if ((this_00 == (RectTransform *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(0);
  return;
}


/* Void <SlotClicked>m__0(IAvatarSlotClicked, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionSlot::AvatarSelectionSlot__SlotClicked_m__0
               (AvatarSelectionSlot *this,IAvatarSlotClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAvatarSlotClicked *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IAvatarSlotClicked,x,
                    (this->fields)._BodyIndex_k__BackingField);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

