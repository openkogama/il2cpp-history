
/* Void Initialize(InventoryItem, RawImage) */

void Assembly-CSharp.dll::InventoryItemPreview::InventoryItemPreview_Initialize
               (InventoryItemPreview *this,InventoryItem *inventoryItem,RawImage *preview,
               MethodInfo *method)

{
  ppIVar1 = &(this->fields).item;
  *ppIVar1 = inventoryItem;
  func_?(ppIVar1,inventoryItem);
  if ((*ppIVar1 != (InventoryItem *)0x0) && (pTVar2 = (this->fields).title, pTVar2 != (Text *)0x0))
  {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,((*ppIVar1)->fields).name,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    if ((*ppIVar1 != (InventoryItem *)0x0) &&
       (pTVar2 = (this->fields).description, pTVar2 != (Text *)0x0)) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,((*ppIVar1)->fields).description,
                 (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

