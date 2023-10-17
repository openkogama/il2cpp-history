
/* Vector2 GetPivot(Vector2) */

Vector2 Assembly-CSharp.dll::ToolTipUI::ToolTipUI_GetPivot
                  (ToolTipUI *this,Vector2 position,MethodInfo *method)

{
  fStack_1 = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  fVar2 = 0.0;
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  if ((float)iVar3 * _UNK_? < position.y) {
    fStack_1 = 1.0;
  }
  VVar4.y = fStack_1;
  VVar4.x = fVar2;
  return VVar4;
}


/* Void Set(Vector2, String) */

void Assembly-CSharp.dll::ToolTipUI::ToolTipUI_Set
               (ToolTipUI *this,Vector2 position,String *tooltip,MethodInfo *method)

{
  pTVar1 = (this->fields).toolTipText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,tooltip,(pTVar1->klass->vtable).set_text.method);
    this_00 = (this->fields).rectTransform;
    fStack_2 = 0.0;
    fStack_3 = 0.0;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    if ((float)iVar4 * _UNK_? < position.x) {
      fStack_2 = 1.0;
    }
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    if ((float)iVar4 * _UNK_? < position.y) {
      fStack_3 = 1.0;
    }
    if (this_00 != (RectTransform *)0x0) {
      value.y = fStack_3;
      value.x = fStack_2;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (this_00,value,(MethodInfo *)0x0);
      pTVar5 = (Transform *)(this->fields).rectTransform;
      if (pTVar5 != (Transform *)0x0) {
        value_00.z = 0.0;
        value_00._0_8_ = position;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar5,value_00,(MethodInfo *)0x0);
        pTVar5 = (Transform *)(this->fields).rectTransform;
        if (pTVar5 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                    (pTVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

