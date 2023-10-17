
/* Void LateUpdate() */

void Assembly-CSharp.dll::LookAtMainCameraForWorldObject::LookAtMainCameraForWorldObject_LateUpdate
               (LookAtMainCameraForWorldObject *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).mainCamera;
  if (this_00 != (Camera *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&stack0xffffffe4,this_02,(MethodInfo *)0x0);
      uVar2 = pVVar1->x;
      uVar3 = pVVar1->y;
      if (this_01 != (Transform *)0x0) {
        value.y = (float)(uVar3 ^ 
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
        value.x = (float)(uVar2 ^ 
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
        value.z = (float)((uint)pVVar1->z ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
                  (this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LookAtMainCameraForWorldObject::LookAtMainCameraForWorldObject_Start
               (LookAtMainCameraForWorldObject *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  func_?(pCVar1);
  return;
}

