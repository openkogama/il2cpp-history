
/* Vector2 GetPivot(Vector2) */

Vector2 Assembly-CSharp.dll::ToolTipUI::ToolTipUI_GetPivot
                  (ToolTipUI *this,Vector2 position,MethodInfo *method)

{
  func_?(&stack0xfffffff4,0,0,0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  VVar1.x = 0.0;
  VVar1.y = 0.0;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  if ((float)iVar2 * _UNK_? < position.y) {
    VVar1.x = 0.0;
    VVar1.y = 1.0;
  }
  return VVar1;
}


/* Void Set(Vector2, String) */

void Assembly-CSharp.dll::ToolTipUI::ToolTipUI_Set
               (ToolTipUI *this,Vector2 position,String *tooltip,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toolTipText;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,tooltip,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields).rectTransform;
    VStack_2.x = 0.0;
    VStack_2.y = 0.0;
    func_?(&VStack_2,0,0,0);
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    if ((float)iVar3 * _UNK_? < position.x) {
      VStack_2.x = 1.0;
    }
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    if ((float)iVar3 * _UNK_? < position.y) {
      VStack_2.y = 1.0;
    }
    if (this_00 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (this_00,VStack_2,(MethodInfo *)0x0);
      pTVar4 = (Transform *)(this->fields).rectTransform;
      if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector2);
      }
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit_1
                         ((Vector3 *)auStack_6,position,(MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar4,*pVVar5,(MethodInfo *)0x0);
        pTVar4 = (Transform *)(this->fields).rectTransform;
        if (pTVar4 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                    (pTVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

