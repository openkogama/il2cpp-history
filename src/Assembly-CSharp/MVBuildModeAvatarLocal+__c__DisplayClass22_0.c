
/* Void <OnPositionChanged>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+<>c__DisplayClass22_0::
     MVBuildModeAvatarLocal_c_DisplayClass22_0__OnPositionChanged_b__0
               (MVBuildModeAvatarLocal_c_DisplayClass22_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (((receiver != (SpawnRoleDataReceiver *)0x0) &&
      (pPVar1 = (this->fields).positionChangedEventArgs, pPVar1 != (PositionChangedEventArgs *)0x0))
     && (this_00 = (receiver->fields).position,
        this_00 != (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
              (this_00,(pPVar1->fields).NewPos,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
              );
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

