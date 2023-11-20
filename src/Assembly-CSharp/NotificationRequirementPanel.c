
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationRequirementPanel::NotificationRequirementPanel_OnToggleEnabled
               (NotificationRequirementPanel *this,Object *text,Sprite *checkmarkSprite,bool enabled
               ,MethodInfo *method)

{
  this_00 = (this->fields).checkmark;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    pTVar1 = (this->fields).textField;
    if (text != (Object *)0x0) {
      uVar2 = (*(code *)(text->klass->vtable).ToString.method)(text);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1,uVar2);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

