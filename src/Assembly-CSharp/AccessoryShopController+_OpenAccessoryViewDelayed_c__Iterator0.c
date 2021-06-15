
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryShopController+<OpenAccessoryViewDelayed>c__Iterator0::
     AccessoryShopController_OpenAccessoryViewDelayed_c_Iterator0_MoveNext
               (AccessoryShopController_OpenAccessoryViewDelayed_c_Iterator0 *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
              func_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
    (this->fields)._current = (Object *)this_02;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
  pAVar2 = (this->fields)._this;
  if (((pAVar2 == (AccessoryShopController *)0x0) ||
      (this_00 = (pAVar2->fields).inventoryController, this_00 == (InventoryController *)0x0)) ||
     (pAVar3 = (AccessoryViewController *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                          ((Component_1 *)this_00,
                           AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
                          ), pAVar2 == (AccessoryShopController *)0x0)) goto code_?;
  (pAVar2->fields).accessoryViewController = pAVar3;
  pAVar2 = (this->fields)._this;
  if (pAVar2 == (AccessoryShopController *)0x0) goto code_?;
  pAVar3 = (pAVar2->fields).accessoryViewController;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 == 0) goto code_?;
  pAVar2 = (this->fields)._this;
  if (pAVar2 == (AccessoryShopController *)0x0) goto code_?;
  pAVar3 = (pAVar2->fields).accessoryViewController;
  accessoryData = (pAVar2->fields).accessoryDataToShow;
  if ((pAVar3 == (AccessoryViewController *)0x0) ||
     (pAVar5 = (pAVar3->fields).accessoryView, pAVar5 == (AccessoryView *)0x0))
  goto code_?;
  pAVar6 = (pAVar5->fields).accessoryDataClient;
  if (pAVar6 == (AccessoryDataClient *)0x0) {
code_?:
    bVar7 = false;
  }
  else {
    if (accessoryData == (AccessoryDataClient *)0x0) goto code_?;
    if ((pAVar6->fields)._.aMDID != (accessoryData->fields)._.aMDID) goto code_?;
    bVar7 = true;
  }
  if (!bVar7) {
    AccessoryViewController::AccessoryViewController_HideScreens(pAVar3,(MethodInfo *)0x0);
    pAVar5 = (pAVar3->fields).accessoryView;
    if (pAVar5 == (AccessoryView *)0x0) goto code_?;
    AccessoryView::AccessoryView_Initialize(pAVar5,accessoryData,(MethodInfo *)0x0);
    pAVar5 = (pAVar3->fields).accessoryView;
    if ((pAVar5 == (AccessoryView *)0x0) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pAVar5,(MethodInfo *)0x0), this_01 == (GameObject *)0x0)
       ) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    pAVar8 = (pAVar3->fields).backbackController;
    if ((pAVar8 == (AccessoryShopToggleInventory *)0x0) ||
       (pCVar9 = (pAVar8->fields).canvasGroup, pCVar9 == (CanvasGroup *)0x0)) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar9,0.5,(MethodInfo *)0x0);
    pCVar9 = (pAVar8->fields).canvasGroup;
    if (pCVar9 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
              (pCVar9,0,(MethodInfo *)0x0);
    pAVar10 = (pAVar3->fields).previewer;
    if (pAVar10 == (AvatarAccessoryPreviewer *)0x0) goto code_?;
    AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation(pAVar10,(MethodInfo *)0x0);
    pAVar10 = (pAVar3->fields).previewer;
    if (pAVar10 == (AvatarAccessoryPreviewer *)0x0) goto code_?;
    AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform
              (pAVar10,(MethodInfo *)0x0);
    pAVar2 = (this->fields)._this;
  }
  if (pAVar2 != (AccessoryShopController *)0x0) {
    (pAVar2->fields).accessoryDataToShow = (AccessoryDataClient *)0x0;
code_?:
    (this->fields)._PC = -1;
    return 0;
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  bVar4 = (*pcVar11)();
  return bVar4;
}


/* Void Reset() */

void Assembly-CSharp.dll::AccessoryShopController+<OpenAccessoryViewDelayed>c__Iterator0::
     AccessoryShopController_OpenAccessoryViewDelayed_c_Iterator0_Reset
               (AccessoryShopController_OpenAccessoryViewDelayed_c_Iterator0 *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

