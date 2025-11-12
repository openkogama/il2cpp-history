
/* Void Initialize(RawImage, InventoryItem) */

void Assembly-CSharp.dll::ItemInfoTab::ItemInfoTab_Initialize
               (ItemInfoTab *this,RawImage *preview,InventoryItem *item,MethodInfo *method)

{
  if ((preview != (RawImage *)0x0) &&
     (this_00 = (this->fields).previewImage, this_00 != (RawImage *)0x0)) {
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
              (this_00,(preview->fields).m_Texture,(MethodInfo *)0x0);
    if ((item != (InventoryItem *)0x0) && (pTVar1 = (this->fields).itemName, pTVar1 != (Text *)0x0))
    {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,(item->fields).name,(pTVar1->klass->vtable).set_text.method);
      pTVar1 = (this->fields).description;
      if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pTVar1->klass->vtable).set_text.methodPtr)
                  (pTVar1,(item->fields).description,(pTVar1->klass->vtable).set_text.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

