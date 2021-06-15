
/* Void Initialize(String, Int32) */

void Assembly-CSharp.dll::TestItem::TestItem_Initialize
               (TestItem *this,String *text,int32_t slotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,text,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (LockCursorManager3DMode *)(this->fields).inventoryItemMetaData;
    if (this_00 != (LockCursorManager3DMode *)0x0) {
      LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                (this_00,(Action_1_Boolean_ *)slotIndex,(MethodInfo *)0x0);
      original = (this->fields).previewObject;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_02 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          ((XpBoostParticlePreviewer *)original,
                           PreviewObject_MethodInfo__UnityEngine__Object__Instantiate<PreviewObject>_PreviewObject_
                          );
      (this->fields).previewObject = (PreviewObject *)this_02;
      this_01 = (this->fields).image;
      if (this_02 != (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) {
        value = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_02,(MethodInfo *)0x0);
        if (this_01 != (RawImage *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_01,(Texture *)value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TestItem::TestItem_OnDestroy(TestItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).previewObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pPVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    x = (pRVar1->fields).m_Texture;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)value,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pRVar3 = pRVar1->klass;
      (pRVar1->fields).m_Texture = (Texture *)value;
      (*(code *)(pRVar3->vtable).SetVerticesDirty.method)
                (pRVar1,(pRVar3->vtable).SetMaterialDirty.methodPtr);
      (*(code *)(pRVar1->klass->vtable).SetMaterialDirty.method)
                (pRVar1,(pRVar1->klass->vtable).get_rectTransform.methodPtr);
    }
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

