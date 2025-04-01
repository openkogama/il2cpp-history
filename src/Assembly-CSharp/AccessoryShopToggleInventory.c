
/* Void OnValueChanged() */

void Assembly-CSharp.dll::AccessoryShopToggleInventory::AccessoryShopToggleInventory_OnValueChanged
               (AccessoryShopToggleInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryShopToggleInventory___OnValueChanged_b__8_0_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toggle;
  if ((pTVar1 != (Toggle *)0x0) && (pGVar2 = (this->fields).backpackOn, pGVar2 != (GameObject *)0x0)
     ) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,(pTVar1->fields).m_IsOn,(MethodInfo *)0x0);
    pTVar1 = (this->fields).toggle;
    if ((pTVar1 != (Toggle *)0x0) &&
       (pGVar2 = (this->fields).backpackOff, pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,(pTVar1->fields).m_IsOn == 0,(MethodInfo *)0x0);
      pTVar1 = (this->fields).toggle;
      if (pTVar1 != (Toggle *)0x0) {
        pIVar3 = (this->fields).checkBox;
        if ((pTVar1->fields).m_IsOn == 0) {
          if (pIVar3 == (Image *)0x0) goto code_?;
          fVar4 = (this->fields).toggleOffColor.r;
          fVar5 = (this->fields).toggleOffColor.g;
          fVar6 = (this->fields).toggleOffColor.b;
        }
        else {
          if (pIVar3 == (Image *)0x0) goto code_?;
          fVar4 = (this->fields).toggleOnColor.r;
          fVar5 = (this->fields).toggleOnColor.g;
          fVar6 = (this->fields).toggleOnColor.b;
        }
        (*(code *)(pIVar3->klass->vtable).set_color.method)(pIVar3,fVar4,fVar5,fVar6);
        this_00 = (this->fields).canvasGroup;
        if (this_00 != (CanvasGroup *)0x0) {
          bVar7 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_interactable
                            (this_00,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this
                       ,
                       MethodInfo__AccessoryShopToggleInventory___OnValueChanged_b__8_0_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar2,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                      );
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetBackpackIconIsEnabled(Boolean) */

void Assembly-CSharp.dll::AccessoryShopToggleInventory::
     AccessoryShopToggleInventory_SetBackpackIconIsEnabled
               (AccessoryShopToggleInventory *this,bool enable,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  value = _UNK_?;
  if (enable != 0) {
    value = _UNK_?;
  }
  if ((this_00 != (CanvasGroup *)0x0) &&
     (UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,value,(MethodInfo *)0x0), (this->fields).canvasGroup != (CanvasGroup *)0x0)
     ) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)();
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnValueChanged>b__8_0(IAccessoryInventoryControl, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopToggleInventory::
     AccessoryShopToggleInventory__OnValueChanged_b__8_0
               (AccessoryShopToggleInventory *this,IAccessoryInventoryControl *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IAccessoryInventoryControl);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toggle;
  if (pTVar1 != (Toggle *)0x0) {
    bVar2 = (pTVar1->fields).m_IsOn;
    if (x != (IAccessoryInventoryControl *)0x0) {
      pIVar3 = x->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryInventoryControl) {
            ppMVar6 = &(&(x->klass->vtable).DisplayPurchasableItems)
                       [pIVar3->interfaceOffsets[uVar4].offset].method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      ppMVar6 = (MethodInfo **)
                func_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryInventoryControl,0)
      ;
code_?:
      (*(code *)*ppMVar6)(x,bVar2 == 0,ppMVar6[1]);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

