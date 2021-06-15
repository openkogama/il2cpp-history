
/* Void LateUpdate() */

void Assembly-CSharp.dll::LookAtMainCameraForWorldObject::LookAtMainCameraForWorldObject_LateUpdate
               (LookAtMainCameraForWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).mainCamera;
  if (this_00 != (Camera *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&stack0xffffffe8,this_02,(MethodInfo *)0x0);
      uVar2._0_4_ = pVVar1->x;
      uVar2._4_4_ = pVVar1->y;
      fVar3 = pVVar1->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        puVar4 = &UNK_?;
        pVVar5 = TypeInfo__UnityEngine__Vector3;
        func_?();
        uVar2 = CONCAT44(pVVar5,puVar4);
      }
      a.z = fVar3;
      a.x = (float)(int)uVar2;
      a.y = (float)(int)((ulonglong)uVar2 >> 0x20);
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                         ((Vector3 *)&stack0xffffffe8,a,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
                  (this_01,*pVVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LookAtMainCameraForWorldObject::LookAtMainCameraForWorldObject_Start
               (LookAtMainCameraForWorldObject *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  return;
}

