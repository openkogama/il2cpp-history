
/* Void <RelayNewSafePosition>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass133_0::
     MVAvatarLocal_c_DisplayClass133_0__RelayNewSafePosition_b__0
               (MVAvatarLocal_c_DisplayClass133_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__get_Value__
                   );
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff94,0,0x38);
  uVar1 = (this->fields).lastSafePosition.x;
  uVar2 = (this->fields).lastSafePosition.y;
  fVar3 = (this->fields).lastSafePosition.z;
  if ((receiver != (SpawnRoleDataReceiver *)0x0) &&
     (this_00 = (receiver->fields).rotation,
     this_00 != (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    pQVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
             SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__get_Value
                       ((Quaternion *)&stack0xffffffcc,this_00,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__get_Value__
                       );
    fVar5 = pQVar4->x;
    fVar6 = pQVar4->y;
    fVar7 = pQVar4->z;
    fVar8 = pQVar4->w;
    pTVar9 = (this->fields).cam;
    if (pTVar9 != (Transform *)0x0) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,pTVar9,(MethodInfo *)0x0);
      fVar11 = pVVar10->z;
      camPos = *pVVar10;
      pTVar9 = (this->fields).cam;
      if (pTVar9 != (Transform *)0x0) {
        pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffdc,pTVar9,(MethodInfo *)0x0);
        fVar12 = pQVar4->x;
        fVar13 = pQVar4->y;
        fVar14 = pQVar4->z;
        fVar15 = pQVar4->w;
        fVar16 = 0.0;
        pos.y = (float)uVar2;
        pos.x = (float)uVar1;
        pos.z = fVar3;
        rot.y = fVar6;
        rot.x = fVar5;
        rot.z = fVar7;
        rot.w = fVar8;
        SafeSpotData::SafeSpotData__ctor
                  ((SafeSpotData *)&stack0xffffff94,pos,rot,camPos,*pQVar4,(MethodInfo *)0x0);
        this_01 = (receiver->fields).reviveState;
        if (this_01 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0) {
          this_02 = (ReviveState *)
                    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
                    SpawnRoleReceiverVariable_1_System_Object__get_Value
                              ((SpawnRoleReceiverVariable_1_System_Object_ *)this_01,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                              );
          if (this_02 != (ReviveState *)0x0) {
            value.Position.y = fVar12;
            value.Position.x = fVar11;
            value.Position.z = fVar13;
            value.Rotation.x = fVar14;
            value.Rotation.y = fVar15;
            value.Rotation.z = fVar16;
            value.Rotation.w = fStack_17;
            value.CameraPosition.x = fStack_18;
            value.CameraPosition.y = (float)this_02;
            value.CameraPosition.z = fVar11;
            value.CameraRotation.x = fVar12;
            value.CameraRotation.y = fVar13;
            value.CameraRotation.z = fVar14;
            value.CameraRotation.w = fVar15;
            ReviveState::ReviveState_set_SafeGroundedData(this_02,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}

