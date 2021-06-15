
/* Void Set(RectTransform ByRef) */

void Assembly-CSharp.dll::ChatConsoleModeDef::ChatConsoleModeDef_Set
               (ChatConsoleModeDef *this,RectTransform **targetRectTransform,MethodInfo *method)

{
  this_00 = (Transform *)*targetRectTransform;
  this_01 = (Transform *)(this->fields).rectTransform;
  if (this_01 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,*pVVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

