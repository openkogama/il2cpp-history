
/* Void Initialize(String, Int32) */

void Assembly-CSharp.dll::TestItem::TestItem_Initialize
               (TestItem *this,String *text,int32_t slotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    PreviewObject_MethodInfo__UnityEngine__Object__Instantiate<PreviewObject>_PreviewObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,text,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pIVar2 = (this->fields).inventoryItemMetaData;
    if (pIVar2 != (InventoryItemMetaData *)0x0) {
      (pIVar2->fields).slotIndex = slotIndex;
      pPVar3 = (this->fields).previewObject;
      ppPVar4 = &(this->fields).previewObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pPVar3 = (PreviewObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pPVar3,
                          PreviewObject_MethodInfo__UnityEngine__Object__Instantiate<PreviewObject>_PreviewObject_
                         );
      *ppPVar4 = pPVar3;
      func_?(ppPVar4,pPVar3);
      if ((*ppPVar4 != (PreviewObject *)0x0) &&
         (this_00 = (this->fields).image, this_00 != (RawImage *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (this_00,(Texture *)((*ppPVar4)->fields).renderTexture,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TestItem::TestItem_OnDestroy(TestItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).previewObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pPVar1 = (this->fields).previewObject;
    if (pPVar1 == (PreviewObject *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pPVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_Texture(Texture2D) */

void Assembly-CSharp.dll::TestItem::TestItem_set_Texture
               (TestItem *this,Texture2D *value,MethodInfo *method)

{
  pRVar1 = (this->fields).image;
  if (pRVar1 != (RawImage *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    x = (pRVar1->fields).m_Texture;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)value,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      (pRVar1->fields).m_Texture = (Texture *)value;
      func_?();
      (*(code *)(pRVar1->klass->vtable).SetVerticesDirty.method)(pRVar1);
      (*(code *)(pRVar1->klass->vtable).SetMaterialDirty.method)
                (pRVar1,(pRVar1->klass->vtable).get_rectTransform.methodPtr);
    }
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

