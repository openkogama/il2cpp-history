
/* Void <OnScaleChanged>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass147_0::
     MVAvatarLocal_c_DisplayClass147_0__OnScaleChanged_b__0
               (MVAvatarLocal_c_DisplayClass147_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((receiver != (SpawnRoleDataReceiver *)0x0) &&
      (pSVar1 = (this->fields).scaleChangedEventArgs, pSVar1 != (ScaleChangedEventArgs *)0x0)) &&
     (pSVar2 = (receiver->fields).scale,
     pSVar2 != (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0)) {
    uStack_3._0_4_ = (pSVar1->fields).NewScale.x;
    uStack_3._4_4_ = (pSVar1->fields).NewScale.y;
    fStack_4 = (pSVar1->fields).NewScale.z;
    FUN_?(pSVar2,&uStack_3);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

