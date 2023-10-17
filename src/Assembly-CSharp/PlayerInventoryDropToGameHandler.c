
/* Void OnDrop(PointerEventData) */

void Assembly-CSharp.dll::PlayerInventoryDropToGameHandler::PlayerInventoryDropToGameHandler_OnDrop
               (PlayerInventoryDropToGameHandler *this,PointerEventData *eventData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (eventData != (PointerEventData *)0x0) {
    this_00 = UnityEngine.UI.dll::UnityEngine::EventSystems::BaseEventData::
              BaseEventData_get_selectedObject((BaseEventData *)eventData,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      this_01 = (PlayerInventoryPreviewItem *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (this_00,
                           PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                          );
      if (this_01 != (PlayerInventoryPreviewItem *)0x0) {
        PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_SlotPressed
                  (this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

