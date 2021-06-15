
/* Void OnValueChanged() */

void Assembly-CSharp.dll::AccessoryShopToggleInventory::AccessoryShopToggleInventory_OnValueChanged
               (AccessoryShopToggleInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toggle;
  pGVar2 = (this->fields).backpackOn;
  if ((pTVar1 != (Toggle *)0x0) &&
     (bVar3 = UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_get_isOn(pTVar1,(MethodInfo *)0x0)
     , pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,bVar3,(MethodInfo *)0x0);
    pTVar1 = (this->fields).toggle;
    pGVar2 = (this->fields).backpackOff;
    if ((pTVar1 != (Toggle *)0x0) &&
       (bVar3 = UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_get_isOn
                          (pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,bVar3 == 0,(MethodInfo *)0x0);
      pTVar1 = (this->fields).toggle;
      if (pTVar1 != (Toggle *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_get_isOn(pTVar1,(MethodInfo *)0x0);
        pIVar4 = (this->fields).checkBox;
        if (pIVar4 != (Image *)0x0) {
          (*(code *)(pIVar4->klass->vtable).set_color.method)();
          this_00 = (this->fields).canvasGroup;
          if (this_00 != (CanvasGroup *)0x0) {
            bVar3 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_interactable
                              (this_00,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
              this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
                                          );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_01,(Object *)this,
                         MethodInfo__AccessoryShopToggleInventory___OnValueChanged_m__0_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar2,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                        );
            }
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetBackpackIconIsEnabled(Boolean) */

void Assembly-CSharp.dll::AccessoryShopToggleInventory::
     AccessoryShopToggleInventory_SetBackpackIconIsEnabled
               (AccessoryShopToggleInventory *this,bool enable,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  value = _UNK_?;
  if (enable == 0) {
    value = _UNK_?;
  }
  if ((this_00 != (CanvasGroup *)0x0) &&
     (UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,value,(MethodInfo *)0x0), (this->fields).canvasGroup != (CanvasGroup *)0x0)
     ) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      func_?(uVar2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnValueChanged>m__0(IAccessoryInventoryControl, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopToggleInventory::
     AccessoryShopToggleInventory__OnValueChanged_m__0
               (AccessoryShopToggleInventory *this,IAccessoryInventoryControl *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).toggle;
  if (this_00 != (Toggle *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_get_isOn(this_00,(MethodInfo *)0x0);
    if (x != (IAccessoryInventoryControl *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IAccessoryInventoryControl,x);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

