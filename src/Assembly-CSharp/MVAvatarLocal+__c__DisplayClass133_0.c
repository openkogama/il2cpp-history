
/* Void <RelayNewSafePosition>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass133_0::
     MVAvatarLocal_c_DisplayClass133_0__RelayNewSafePosition_b__0
               (MVAvatarLocal_c_DisplayClass133_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).lastSafePosition.x;
  uVar1._4_4_ = (this->fields).lastSafePosition.y;
  fVar2 = (this->fields).lastSafePosition.z;
  if (((receiver != (SpawnRoleDataReceiver *)0x0) &&
      (pSVar3 = (receiver->fields).rotation,
      pSVar3 != (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0)) &&
     (pSVar4 = (pSVar3->fields).subscribableVariable,
     pSVar4 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    pTVar5 = (this->fields).cam;
    uVar6 = (pSVar4->fields)._.value.x;
    uVar7 = (pSVar4->fields)._.value.y;
    uVar8 = (pSVar4->fields)._.value.z;
    uVar9 = (pSVar4->fields)._.value.w;
    if (pTVar5 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar10 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar1 = func_?(&UNK_?);
        FUN_?(uVar1,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(pvVar10);
      pTVar5 = (this->fields).cam;
      if (pTVar5 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        QStack_12.x = 0.0;
        QStack_12.y = 0.0;
        QStack_12.z = 0.0;
        QStack_12.w = 0.0;
        pvVar10 = (pTVar5->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar1 = func_?(&UNK_?);
          FUN_?(uVar1,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10,&QStack_12);
        uStack_13 = 0;
        pSVar14 = (receiver->fields).reviveState;
        uStack_15 = 0;
        uStack_16 = 0;
        QStack_17.x = QStack_12.x;
        QStack_17.y = QStack_12.y;
        QStack_17.z = QStack_12.z;
        QStack_17.w = QStack_12.w;
        VStack_18._0_8_ = uVar1;
        VStack_18.z = fVar2;
        fStack_19 = (float)uVar6;
        fStack_20 = (float)uVar7;
        fStack_21 = (float)uVar8;
        uStack_22 = uVar9;
        if (((pSVar14 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0) &&
            (pSVar23 = (pSVar14->fields).subscribableVariable,
            pSVar23 != (SubscribableVariable_1_ReviveState_ *)0x0)) &&
           (this_00 = (pSVar23->fields)._.value, this_00 != (ReviveState *)0x0)) {
          SStack_24.Rotation.x = (float)uVar6;
          SStack_24.Position.z = fVar2;
          SStack_24.Rotation.z = (float)uVar8;
          SStack_24.Rotation.y = (float)uVar7;
          SStack_24._24_8_ = ZEXT48((uint)uVar9);
          SStack_24.CameraPosition.y = 0.0;
          SStack_24.CameraPosition.z = 0.0;
          SStack_24.CameraRotation.x = QStack_12.x;
          SStack_24.CameraRotation.y = QStack_12.y;
          SStack_24.CameraRotation.z = QStack_12.z;
          SStack_24.CameraRotation.w = QStack_12.w;
          SStack_24.Position._0_8_ = uVar1;
          ReviveState::ReviveState_set_SafeGroundedData(this_00,&SStack_24,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

