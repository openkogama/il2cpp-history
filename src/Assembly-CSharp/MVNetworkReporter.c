
/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkReporter::MVNetworkReporter_Update(MVNetworkReporter *this,MVNetworkGame *game,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  if (game != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
    func_?();
    if (ABS(fVar1) <= 200.0) {
      return;
    }
    pMVar2 = (this->fields)._.worldObject;
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      pfVar3 = (float *)(*(code *)(pMVar2->klass->vtable).get_Rotation.method)(&MStack_4,pMVar2,(pMVar2->klass->vtable).set_Rotation.methodPtr);
      MStack_4.position.x = *pfVar3;
      MStack_4.position.y = pfVar3[1];
      pfVar5 = pfVar3 + 2;
      MStack_4.position.z = pfVar5[0];
      MStack_4.rotation = (Byte__Array *)pfVar5[1];
      fVar1 = *pfVar5;
      pBVar6 = (Byte__Array *)pfVar3[3];
      if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
        fVar1 = MStack_4.position.z;
        pBVar6 = MStack_4.rotation;
      }
      quaternion.y = MStack_4.position.y;
      quaternion.x = MStack_4.position.x;
      quaternion.z = fVar1;
      quaternion.w = (float)pBVar6;
      pBStack_7 = MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToBytes(quaternion,(MethodInfo *)0x0);
      pMVar2 = (this->fields)._.worldObject;
      cStack_8 = '\x01';
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        puVar9 = (undefined8 *)(*(code *)(pMVar2->klass->vtable).get_Position.method)(&MStack_4.position.y,pMVar2,(pMVar2->klass->vtable).set_Position.methodPtr);
        fVar10 = (float)*puVar9;
        fVar11 = (float)((ulonglong)*puVar9 >> 0x20);
        fVar1 = *(float *)(puVar9 + 1);
        pBVar6 = pBStack_7;
        func_?(&stack0xffffffc0,pBStack_7);
        MStack_4.rotation = pBVar6;
        MStack_4.position.z = fVar1;
        MStack_4.position.x = fVar10;
        MStack_4.position.y = fVar11;
        bVar12 = MVNetworkReporter+SendTransformData::MVNetworkReporter_SendTransformData_Equals(&MStack_4,(this->fields).prevSendTransformData,(MethodInfo *)0x0);
        if (bVar12 == 0) {
          bVar12 = 0;
        }
        else {
          if ((this->fields).stopPackageSent != 0) {
            return;
          }
          cStack_8 = '\x02';
          bVar12 = 1;
        }
        (this->fields).stopPackageSent = bVar12;
        (this->fields).prevSendTransformData.position.x = fVar10;
        (this->fields).prevSendTransformData.position.y = fVar11;
        (this->fields).prevSendTransformData.position.z = fVar1;
        (this->fields).prevSendTransformData.rotation = pBVar6;
        func_?(&(this->fields).prevSendTransformData.rotation);
        pMVar13 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
        pMVar2 = (this->fields)._.worldObject;
        pMStack_14 = pMVar13;
        if (pMVar2 != (MVWorldObjectClient *)0x0) {
          pMVar15 = (this->fields)._.worldObject;
          iStack_16 = (pMVar2->fields)._.id;
          pMVar17 = pMVar15->klass;
          puVar9 = (undefined8 *)(*(code *)(pMVar17->vtable).get_Position.method)(auStack_18,pMVar15,(pMVar17->vtable).set_Position.methodPtr);
          MStack_4._8_8_ = *puVar9;
          fStack_19 = *(float *)(puVar9 + 1);
          if (pMVar13 != (MVNetworkGame_OperationRequests *)0x0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__System__Byte);
              func_?(&MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_);
              func_?(&MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__);
              func_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>);
              func_?(&TypeInfo__System__Int32);
              func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
              cRam_? = '\x01';
            }
            MVar20 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
            if (MVar20 != MVJoinState__Enum_Playing) {
code_?:
              iVar21 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
              *(int32_t *)&(this->fields).lastUpdateTimestamp = iVar21;
              *(int32_t *)((int)&(this->fields).lastUpdateTimestamp + 4) = iVar21 >> 0x1f;
              return;
            }
            this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?(TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::Dictionary_2_System_Byte_System_Object___ctor(this_01,MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__);
            iStack_22 = iStack_16;
            pOVar23 = (Object *)func_?(TypeInfo__System__Int32,&iStack_22);
            if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::Dictionary_2_System_Byte_System_Object__Add(this_01,0x16,pOVar23,MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_);
              this_00 = (pMStack_14->fields).networkGame;
              if (this_00 != (MVNetworkGame *)0x0) {
                iStack_24 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
                pOVar23 = (Object *)func_?(TypeInfo__System__Int32,&iStack_24);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::Dictionary_2_System_Byte_System_Object__Add(this_01,0x23,pOVar23,MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_);
                position.z = fStack_19;
                position.x = MStack_4.position.z;
                position.y = (float)MStack_4.rotation;
                MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition(position,this_01,(MethodInfo *)0x0);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::Dictionary_2_System_Byte_System_Object__Add(this_01,0x9d,(Object *)pBStack_7,MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_);
                cStack_25 = cStack_8;
                pOVar23 = (Object *)func_?(TypeInfo__System__Byte);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::Dictionary_2_System_Byte_System_Object__Add(this_01,0x24,pOVar23,MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_);
                SStack_26.DeliveryMode = 0;
                SStack_26.Encrypt = 0;
                SStack_26.Channel = 0;
                SStack_26._6_2_ = 0;
                fStack_19 = (float)CONCAT31(fStack_19._1_3_,cStack_8 == '\x02');
                if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                }
                Photon3Unity3D.dll::ExitGames::Client::Photon::SendOptions::SendOptions_set_Reliability(&SStack_26,SUB41(fStack_19,0),(MethodInfo *)0x0);
                pPVar27 = (pMStack_14->fields).peer;
                if (pPVar27 != (PhotonPeer *)0x0) {
                  (*(code *)(pPVar27->klass->vtable).SendOperation.method)(pPVar27,2,this_01,SStack_26.DeliveryMode,SStack_26._4_4_,pPVar27->klass[1]._0.image);
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* MVNetworkReporter(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkReporter::MVNetworkReporter__ctor(MVNetworkReporter *this,MVWorldObjectClient *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  *(undefined4 *)&(this->fields).lastUpdateTimestamp = 0xffffffff;
  *(undefined4 *)((int)&(this->fields).lastUpdateTimestamp + 4) = 0xffffffff;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_2._0_4_ = (pVVar1->zeroVector).x;
  uStack_2._4_4_ = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  pBStack_4 = (Byte__Array *)func_?(TypeInfo__System__Byte,3);
  uVar5 = uStack_2;
  func_?(&pBStack_4,pBStack_4);
  fStack_6 = (float)uVar5;
  fStack_7 = (float)((ulonglong)uVar5 >> 0x20);
  method_00 = (MethodInfo *)&(this->fields).prevSendTransformData.rotation;
  (this->fields).prevSendTransformData.position.x = fStack_6;
  (this->fields).prevSendTransformData.position.y = fStack_7;
  (this->fields).prevSendTransformData.position.z = fVar3;
  (this->fields).prevSendTransformData.rotation = pBStack_4;
  func_?(method_00,0);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._.worldObject = owner;
  func_?(&this->fields,owner);
  return;
}

