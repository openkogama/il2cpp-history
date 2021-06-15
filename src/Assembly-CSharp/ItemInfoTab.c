
/* Void Initialize(RawImage, InventoryItem) */

void Assembly-CSharp.dll::ItemInfoTab::ItemInfoTab_Initialize
               (ItemInfoTab *this,RawImage *preview,InventoryItem *item,MethodInfo *method)

{
  this_00 = (this->fields).previewImage;
  if (preview != (RawImage *)0x0) {
    value = PrefabPool::PrefabPool_get_MVCheckpointPrefab((PrefabPool *)preview,(MethodInfo *)0x0);
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)value,(MethodInfo *)0x0);
      if ((item != (InventoryItem *)0x0) &&
         (pTVar1 = (this->fields).itemName, pTVar1 != (Text *)0x0)) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
        pTVar1 = (this->fields).description;
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

