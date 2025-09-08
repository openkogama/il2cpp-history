
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationRequirementPanel::NotificationRequirementPanel_OnToggleEnabled
               (NotificationRequirementPanel *this,Object *text,Sprite *checkmarkSprite,bool enabled
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).checkmark;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    pTVar1 = (this->fields).textField;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pTVar1 = (this->fields).textField;
    if ((text != (Object *)0x0) &&
       ((*(code *)(text->klass->vtable).ToString.method)(), pTVar1 != (Text *)0x0)) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

