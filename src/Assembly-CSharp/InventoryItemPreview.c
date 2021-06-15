
/* Void Initialize(InventoryItem, RawImage) */

void Assembly-CSharp.dll::InventoryItemPreview::InventoryItemPreview_Initialize
               (InventoryItemPreview *this,InventoryItem *inventoryItem,RawImage *preview,
               MethodInfo *method)

{
  (this->fields).item = inventoryItem;
  if ((inventoryItem != (InventoryItem *)0x0) &&
     (pTVar1 = (this->fields).title, pTVar1 != (Text *)0x0)) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,(inventoryItem->fields).name,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pIVar2 = (this->fields).item;
    if ((pIVar2 != (InventoryItem *)0x0) &&
       (pTVar1 = (this->fields).description, pTVar1 != (Text *)0x0)) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,(pIVar2->fields).description,
                 (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      this_00 = (this->fields).previewImage;
      if (preview != (RawImage *)0x0) {
        value = (Texture *)
                (*(code *)(preview->klass->vtable).get_mainTexture.method)
                          (preview,(preview->klass->vtable).OnCullingChanged.methodPtr);
        if (this_00 != (RawImage *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

