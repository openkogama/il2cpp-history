
/* Void GetGold() */

void Assembly-CSharp.dll::TierPurchaseNotEnoughGoldErrorPopup::
     TierPurchaseNotEnoughGoldErrorPopup_GetGold
               (TierPurchaseNotEnoughGoldErrorPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__TierPurchaseNotEnoughGoldErrorPopup____c___GetGold_b__2_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierPurchaseNotEnoughGoldErrorPopup____c);
    cRam_? = '\x01';
  }
  BrowserCommGotoRequests::BrowserCommGotoRequests_GotoPurchaseGold(0,1,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__TierPurchaseNotEnoughGoldErrorPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction = TypeInfo__TierPurchaseNotEnoughGoldErrorPopup____c->static_fields->__9__2_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__TierPurchaseNotEnoughGoldErrorPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__TierPurchaseNotEnoughGoldErrorPopup____c->static_fields->__9;
    callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__TierPurchaseNotEnoughGoldErrorPopup____c___GetGold_b__2_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TierPurchaseNotEnoughGoldErrorPopup____c->static_fields->__9__2_0 = callbackFunction;
    func_?(&TypeInfo__TierPurchaseNotEnoughGoldErrorPopup____c->static_fields->__9__2_0);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void Initialize(GamePassTier) */

void Assembly-CSharp.dll::TierPurchaseNotEnoughGoldErrorPopup::
     TierPurchaseNotEnoughGoldErrorPopup_Initialize
               (TierPurchaseNotEnoughGoldErrorPopup *this,GamePassTier__Enum tierToPurchase,
               MethodInfo *method)

{
  pTVar1 = (this->fields).tierText;
  tierToPurchase = tierToPurchase & 0xff;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&tierToPurchase,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

