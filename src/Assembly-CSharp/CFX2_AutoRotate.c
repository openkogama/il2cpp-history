
/* Void Update() */

void Assembly-CSharp.dll::CFX2_AutoRotate::CFX2_AutoRotate_Update
               (CFX2_AutoRotate *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  uVar1 = (this->fields).speed.x;
  uVar2 = (this->fields).speed.y;
  fVar3 = (this->fields).speed.z;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    eulers.y = (float)uVar2 * fVar4;
    eulers.x = (float)uVar1 * fVar4;
    eulers.z = fVar3 * fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
              (this_00,eulers,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* CFX2_AutoRotate() */

void Assembly-CSharp.dll::CFX2_AutoRotate::CFX2_AutoRotate__ctor
               (CFX2_AutoRotate *this,MethodInfo *method)

{
  uVar1 = (ulonglong)_UNK_?;
  (this->fields).speed.x = (float)(int)(uVar1 << 0x20);
  (this->fields).speed.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields).speed.z = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

