
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationRequirementPanel::NotificationRequirementPanel_OnToggleEnabled
               (NotificationRequirementPanel *this,Object *text,Sprite *checkmarkSprite,bool enabled
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,text,checkmarkSprite,
                  CONCAT71(in_register_00000089,enabled));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).checkmark;
  if (this_00 == (Image *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
            (this_00,checkmarkSprite,(MethodInfo *)0x0);
  pTVar2 = (this->fields).textField;
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
  if (pTVar2 != (Text *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pTVar2->fields)._._._._._._._ != (void *)0x0) {
      pTVar2 = (this->fields).textField;
      if ((text != (Object *)0x0) &&
         (uVar3 = (*(text->klass->vtable).ToString.methodPtr)
                            (text,(text->klass->vtable).ToString.method), pTVar2 != (Text *)0x0)) {
        (*(pTVar2->klass->vtable).set_text.methodPtr)
                  (pTVar2,uVar3,(pTVar2->klass->vtable).set_text.method);
        return;
      }
      goto code_?;
    }
  }
  return;
}

