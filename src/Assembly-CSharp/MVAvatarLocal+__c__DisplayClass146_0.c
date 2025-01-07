
/* Void <OnRotationChanged>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass146_0::
     MVAvatarLocal_c_DisplayClass146_0__OnRotationChanged_b__0
               (MVAvatarLocal_c_DisplayClass146_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (((receiver != (SpawnRoleDataReceiver *)0x0) &&
      (pRVar1 = (this->fields).rotationChangedEventArgs, pRVar1 != (RotationChangedEventArgs *)0x0))
     && (this_00 = (receiver->fields).rotation,
        this_00 != (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
    SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__set_Value
              (this_00,(pRVar1->fields).NewRotation,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__set_Value_UnityEngine__Quaternion_
              );
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

