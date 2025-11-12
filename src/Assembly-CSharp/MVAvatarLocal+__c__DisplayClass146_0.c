
/* Void <OnRotationChanged>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass146_0::
     MVAvatarLocal_c_DisplayClass146_0__OnRotationChanged_b__0
               (MVAvatarLocal_c_DisplayClass146_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__set_Value_UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((receiver != (SpawnRoleDataReceiver *)0x0) &&
      (pRVar1 = (this->fields).rotationChangedEventArgs, pRVar1 != (RotationChangedEventArgs *)0x0))
     && (pSVar2 = (receiver->fields).rotation,
        pSVar2 != (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    fStack_3 = (pRVar1->fields).NewRotation.x;
    fStack_4 = (pRVar1->fields).NewRotation.y;
    fStack_5 = (pRVar1->fields).NewRotation.z;
    fStack_6 = (pRVar1->fields).NewRotation.w;
    FUN_?(pSVar2,&fStack_3);
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

