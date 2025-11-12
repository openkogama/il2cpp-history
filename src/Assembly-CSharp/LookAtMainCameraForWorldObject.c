
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
                         (aVStack_2,this_02,(MethodInfo *)0x0);
      uVar3 = pVVar1->x;
      aVStack_2[0].x = (float)(uVar3 ^ _UNK_?);
      aVStack_2[0].z = (float)((uint)pVVar1->z ^ _UNK_?);
      if (this_01 != (Transform *)0x0) {
        aVStack_2[0].y = (float)((uint)pVVar1->y ^ _UNK_?);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
                  (this_01,aVStack_2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LookAtMainCameraForWorldObject::LookAtMainCameraForWorldObject_Start
               (LookAtMainCameraForWorldObject *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).mainCamera = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}

