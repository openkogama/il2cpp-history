
/* Void Initialize(InventoryItem, RawImage) */

void Assembly-CSharp.dll::InventoryItemPreview::InventoryItemPreview_Initialize
               (InventoryItemPreview *this,InventoryItem *inventoryItem,RawImage *preview,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).item = inventoryItem;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).item >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pIVar6 = (this->fields).item;
  if ((pIVar6 != (InventoryItem *)0x0) && (pTVar7 = (this->fields).title, pTVar7 != (Text *)0x0)) {
    (*(pTVar7->klass->vtable).set_text.methodPtr)
              (pTVar7,(pIVar6->fields).name,(pTVar7->klass->vtable).set_text.method,method);
    pIVar6 = (this->fields).item;
    if ((pIVar6 != (InventoryItem *)0x0) &&
       (pTVar7 = (this->fields).description, pTVar7 != (Text *)0x0)) {
      (*(pTVar7->klass->vtable).set_text.methodPtr)
                (pTVar7,(pIVar6->fields).description,(pTVar7->klass->vtable).set_text.method);
      pRVar8 = (this->fields).previewImage;
      if ((preview != (RawImage *)0x0) &&
         (pTVar9 = (Texture *)
                   (*(preview->klass->vtable).get_mainTexture.methodPtr)
                             (preview,(preview->klass->vtable).get_mainTexture.method),
         pRVar8 != (RawImage *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,pTVar9,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pTVar10 = (pRVar8->fields).m_Texture;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pTVar9 != (Texture *)0x0 || pTVar10 != (Texture *)0x0) {
          if (pTVar9 == (Texture *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pTVar10 == (Texture *)0x0) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            bVar1 = (pTVar10->fields)._.m_CachedPtr == (void *)0x0;
          }
          else if (pTVar10 == (Texture *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar1 = (pTVar9->fields)._.m_CachedPtr == (void *)0x0;
          }
          else {
            bVar1 = pTVar10 == pTVar9;
          }
          if (!bVar1) {
            bVar1 = iRam_? != 0;
            (pRVar8->fields).m_Texture = pTVar9;
            if (bVar1) {
              uVar2 = (uint)((ulonglong)&(pRVar8->fields).m_Texture >> 0xc);
              puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar4 = *puVar3;
                LOCK();
                uVar5 = *puVar3;
                if (uVar4 == uVar5) {
                  *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (uVar4 != uVar5);
            }
            (*(pRVar8->klass->vtable).SetVerticesDirty.methodPtr)
                      (pRVar8,(pRVar8->klass->vtable).SetVerticesDirty.method);
            (*(pRVar8->klass->vtable).SetMaterialDirty.methodPtr)
                      (pRVar8,(pRVar8->klass->vtable).SetMaterialDirty.method);
          }
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

