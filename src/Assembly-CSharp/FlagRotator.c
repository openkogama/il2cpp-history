
/* Void Update() */

void Assembly-CSharp.dll::FlagRotator::FlagRotator_Update(FlagRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).flag;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pMVar1 = (this->fields).flag;
  if (pMVar1 != (MeshRenderer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pMVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).y;
    fVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                      ((MethodInfo *)method_00);
    if (this_00 != (Transform *)0x0) {
      fVar4 = fVar4 * (this->fields).rotationSpeed * _UNK_?;
      axis.y = 1.4013e-45;
      axis.x = fVar4;
      axis.z = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                (this_00,axis,fVar4,Space__Enum_Self,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

