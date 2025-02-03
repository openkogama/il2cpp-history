
/* Void LateUpdate() */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::Shared::FixedRotation::
     FixedRotation_LateUpdate(FixedRotation *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->zeroVector).x;
  uVar3 = (pVVar1->zeroVector).y;
  euler.y = (float)uVar3 * _UNK_?;
  euler.x = (float)uVar2 * _UNK_?;
  euler.z = (pVVar1->zeroVector).z * _UNK_?;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,*pQVar4,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

