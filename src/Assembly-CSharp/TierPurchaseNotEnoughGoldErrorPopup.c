
/* Void GetGold() */

void Assembly-CSharp.dll::TierPurchaseNotEnoughGoldErrorPopup::
     TierPurchaseNotEnoughGoldErrorPopup_GetGold
               (TierPurchaseNotEnoughGoldErrorPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  BrowserCommGotoRequests::BrowserCommGotoRequests_GotoPurchaseGold(0,1,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__TierPurchaseNotEnoughGoldErrorPopup->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__TierPurchaseNotEnoughGoldErrorPopup___GetGold_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__TierPurchaseNotEnoughGoldErrorPopup->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__TierPurchaseNotEnoughGoldErrorPopup->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
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
  uVar2 = func_?(&tierToPurchase,0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <GetGold>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierPurchaseNotEnoughGoldErrorPopup::
     TierPurchaseNotEnoughGoldErrorPopup__GetGold_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

