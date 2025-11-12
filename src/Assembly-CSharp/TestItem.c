
/* Void Initialize(String, Int32) */

void Assembly-CSharp.dll::TestItem::TestItem_Initialize
               (TestItem *this,String *text,int32_t slotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PreviewObject_MethodInfo__UnityEngine__Object__Instantiate<PreviewObject>_PreviewObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,text,(pTVar1->klass->vtable).set_text.method);
    pIVar2 = (this->fields).inventoryItemMetaData;
    if (pIVar2 != (InventoryItemMetaData *)0x0) {
      (pIVar2->fields).slotIndex = slotIndex;
      pPVar3 = (this->fields).previewObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pPVar3 = (PreviewObject *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar3,
                           PreviewObject_MethodInfo__UnityEngine__Object__Instantiate<PreviewObject>_PreviewObject_
                          );
      bVar4 = iRam_? != 0;
      (this->fields).previewObject = pPVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).previewObject >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      pPVar3 = (this->fields).previewObject;
      if ((pPVar3 != (PreviewObject *)0x0) &&
         (pRVar9 = (this->fields).image, pRVar9 != (RawImage *)0x0)) {
        pRVar10 = (pPVar3->fields).renderTexture;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,pRVar10,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pRVar11 = (RenderTexture *)(pRVar9->fields).m_Texture;
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
        if (pRVar10 != (RenderTexture *)0x0 || pRVar11 != (RenderTexture *)0x0) {
          if (pRVar10 == (RenderTexture *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pRVar11 == (RenderTexture *)0x0) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            bVar4 = (pRVar11->fields)._._.m_CachedPtr == (void *)0x0;
          }
          else if (pRVar11 == (RenderTexture *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar4 = (pRVar10->fields)._._.m_CachedPtr == (void *)0x0;
          }
          else {
            bVar4 = pRVar11 == pRVar10;
          }
          if (!bVar4) {
            bVar4 = iRam_? != 0;
            (pRVar9->fields).m_Texture = (Texture *)pRVar10;
            if (bVar4) {
              uVar5 = (uint)((ulonglong)&(pRVar9->fields).m_Texture >> 0xc);
              puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar7 = *puVar6;
                LOCK();
                uVar8 = *puVar6;
                if (uVar7 == uVar8) {
                  *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
              } while (uVar7 != uVar8);
            }
            (*(pRVar9->klass->vtable).SetVerticesDirty.methodPtr)
                      (pRVar9,(pRVar9->klass->vtable).SetVerticesDirty.method);
            (*(pRVar9->klass->vtable).SetMaterialDirty.methodPtr)
                      (pRVar9,(pRVar9->klass->vtable).SetMaterialDirty.method);
          }
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TestItem::TestItem_OnDestroy(TestItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).previewObject;
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
  if (pPVar1 != (PreviewObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pPVar1 = (this->fields).previewObject;
      if (pPVar1 == (PreviewObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pPVar1,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void set_Texture(Texture2D) */

void Assembly-CSharp.dll::TestItem::TestItem_set_Texture
               (TestItem *this,Texture2D *value,MethodInfo *method)

{
  pRVar1 = (this->fields).image;
  if (pRVar1 == (RawImage *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,value,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar3 = (Texture2D *)(pRVar1->fields).m_Texture;
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
  if (value != (Texture2D *)0x0 || pTVar3 != (Texture2D *)0x0) {
    if (value == (Texture2D *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pTVar3 == (Texture2D *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar4 = (pTVar3->fields)._._.m_CachedPtr == (void *)0x0;
    }
    else if (pTVar3 == (Texture2D *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar4 = (value->fields)._._.m_CachedPtr == (void *)0x0;
    }
    else {
      bVar4 = pTVar3 == value;
    }
    if (!bVar4) {
      bVar4 = iRam_? != 0;
      (pRVar1->fields).m_Texture = (Texture *)value;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(pRVar1->fields).m_Texture >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      (*(pRVar1->klass->vtable).SetVerticesDirty.methodPtr)
                (pRVar1,(pRVar1->klass->vtable).SetVerticesDirty.method);
      (*(pRVar1->klass->vtable).SetMaterialDirty.methodPtr)
                (pRVar1,(pRVar1->klass->vtable).SetMaterialDirty.method);
    }
  }
  return;
}

