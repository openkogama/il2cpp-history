
/* Void ChangeColor(Color, Color) */

void Assembly-CSharp.dll::SpawnRoleSkillIconController::SpawnRoleSkillIconController_ChangeColor
               (SpawnRoleSkillIconController *this,Color newIconColor,Color newBackgroundColor,
               MethodInfo *method)

{
  pIVar1 = (this->fields).skillIcon;
  if (pIVar1 != (Image *)0x0) {
    (*(code *)(pIVar1->klass->vtable).set_color.method)
              (pIVar1,newIconColor.r,newIconColor.g,newIconColor.b,newIconColor.a,
               (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
    pIVar1 = (this->fields).negativeIcon;
    if (pIVar1 != (Image *)0x0) {
      (*(code *)(pIVar1->klass->vtable).set_color.method)
                (pIVar1,newIconColor.r,newIconColor.g,newIconColor.b,newIconColor.a,
                 (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
      pIVar1 = (this->fields).negativeBackgroundIcon;
      if (pIVar1 != (Image *)0x0) {
        (*(code *)(pIVar1->klass->vtable).set_color.method)
                  (pIVar1,newBackgroundColor.r,newBackgroundColor.g,newBackgroundColor.b,
                   newBackgroundColor.a,(pIVar1->klass->vtable).get_raycastTarget.methodPtr);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ChangeSize(Single, Single) */

void Assembly-CSharp.dll::SpawnRoleSkillIconController::SpawnRoleSkillIconController_ChangeSize
               (SpawnRoleSkillIconController *this,float width,float height,MethodInfo *method)

{
  this_00 = (this->fields).skillIcon;
  if (this_00 != (Image *)0x0) {
    this_01 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)this_00,(MethodInfo *)0x0);
    if (this_01 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (this_01,(Vector2)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleNegativeState(Int32) */

void Assembly-CSharp.dll::SpawnRoleSkillIconController::
     SpawnRoleSkillIconController_HandleNegativeState
               (SpawnRoleSkillIconController *this,int32_t skillCost,MethodInfo *method)

{
  pIVar1 = (this->fields).negativeIcon;
  if (pIVar1 != (Image *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pIVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,(byte)((uint)skillCost >> 0x1f),(MethodInfo *)0x0);
      pIVar1 = (this->fields).negativeBackgroundIcon;
      if (pIVar1 != (Image *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar1,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,(bool)pIVar1,(MethodInfo *)0x0);
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

