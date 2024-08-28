
/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkReporter::MVNetworkReporter_Update
               (MVNetworkReporter *this,MVNetworkGame *game,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  if (game != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
    func_?();
    if ((float)((uint)(float)in_XMM0_Qa & _UNK_?) <= _UNK_?) {
      return;
    }
    pMVar1 = (this->fields)._.worldObject;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      pfVar2 = (float *)(*(code *)(pMVar1->klass->vtable).get_Rotation.method)
                                  (&MStack_3,pMVar1,(pMVar1->klass->vtable).set_Rotation.methodPtr)
      ;
      MStack_3.position.x = *pfVar2;
      MStack_3.position.y = pfVar2[1];
      pfVar4 = pfVar2 + 2;
      MStack_3.position.z = pfVar4[0];
      MStack_3.rotation = (Byte__Array *)pfVar4[1];
      fVar5 = *pfVar4;
      pBVar6 = (Byte__Array *)pfVar2[3];
      if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
        fVar5 = MStack_3.position.z;
        pBVar6 = MStack_3.rotation;
      }
      quaternion.y = MStack_3.position.y;
      quaternion.x = MStack_3.position.x;
      quaternion.z = fVar5;
      quaternion.w = (float)pBVar6;
      pBStack_7 = MVWorldObject.dll::MV::WorldObject::QuaternionCompression::
                  QuaternionCompression_ToBytes(quaternion,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.worldObject;
      cStack_8 = '\x01';
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        puVar9 = (undefined8 *)
                 (*(code *)(pMVar1->klass->vtable).get_Position.method)
                           (&MStack_3.position.y,pMVar1,
                            (pMVar1->klass->vtable).set_Position.methodPtr);
        fVar10 = (float)*puVar9;
        fVar11 = (float)((ulonglong)*puVar9 >> 0x20);
        fVar5 = *(float *)(puVar9 + 1);
        pBVar6 = pBStack_7;
        func_?(&stack0xffffffc0,pBStack_7);
        MStack_3.rotation = pBVar6;
        MStack_3.position.z = fVar5;
        MStack_3.position.x = fVar10;
        MStack_3.position.y = fVar11;
        bVar12 = MVNetworkReporter+SendTransformData::MVNetworkReporter_SendTransformData_Equals
                          (&MStack_3,(this->fields).prevSendTransformData,(MethodInfo *)0x0);
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
        (this->fields).prevSendTransformData.position.z = fVar5;
        (this->fields).prevSendTransformData.rotation = pBVar6;
        func_?(&(this->fields).prevSendTransformData.rotation);
        pMVar13 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        pMVar1 = (this->fields)._.worldObject;
        pMStack_14 = pMVar13;
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          iStack_15 = (pMVar1->fields)._.id;
          puVar9 = (undefined8 *)
                   (*(code *)(pMVar1->klass->vtable).get_Position.method)
                             (auStack_16,pMVar1,(pMVar1->klass->vtable).set_Position.methodPtr);
          MStack_3._8_8_ = *puVar9;
          fStack_17 = *(float *)(puVar9 + 1);
          if (pMVar13 != (MVNetworkGame_OperationRequests *)0x0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__System__Byte);
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                             );
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                             );
              func_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
              func_?(&TypeInfo__System__Int32);
              func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
              cRam_? = '\x01';
            }
            MVar18 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
            if (MVar18 != MVJoinState__Enum_Playing) {
code_?:
              iVar19 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                                 (game,(MethodInfo *)0x0);
              *(int32_t *)&(this->fields).lastUpdateTimestamp = iVar19;
              *(int32_t *)((int)&(this->fields).lastUpdateTimestamp + 4) = iVar19 >> 0x1f;
              return;
            }
            this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                      func_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                     );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object___ctor
                      (this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                      );
            iStack_20 = iStack_15;
            pOVar21 = (Object *)func_?(TypeInfo__System__Int32,&iStack_20);
            if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__Add
                        (this_01,0x16,pOVar21,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              this_00 = (pMStack_14->fields).networkGame;
              if (this_00 != (MVNetworkGame *)0x0) {
                iStack_22 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                                      (this_00,(MethodInfo *)0x0);
                pOVar21 = (Object *)func_?(TypeInfo__System__Int32,&iStack_22);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__Add
                          (this_01,0x23,pOVar21,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          );
                position.z = fStack_17;
                position.x = MStack_3.position.z;
                position.y = (float)MStack_3.rotation;
                MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
                          (position,this_01,(MethodInfo *)0x0);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__Add
                          (this_01,0x9d,(Object *)pBStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          );
                cStack_23 = cStack_8;
                pOVar21 = (Object *)func_?(TypeInfo__System__Byte);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__Add
                          (this_01,0x24,pOVar21,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          );
                SStack_24.DeliveryMode = 0;
                SStack_24.Encrypt = 0;
                SStack_24.Channel = 0;
                SStack_24._6_2_ = 0;
                fStack_17 = (float)CONCAT31(fStack_17._1_3_,cStack_8 == '\x02');
                if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                }
                Photon3Unity3D.dll::ExitGames::Client::Photon::SendOptions::
                SendOptions_set_Reliability(&SStack_24,SUB41(fStack_17,0),(MethodInfo *)0x0);
                pPVar25 = (pMStack_14->fields).peer;
                if (pPVar25 != (PhotonPeer *)0x0) {
                  (*(code *)(pPVar25->klass->vtable).SendOperation.method)
                            (pPVar25,2,this_01,SStack_24.DeliveryMode,SStack_24._4_4_,
                             pPVar25->klass[1]._0.image);
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
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* MVNetworkReporter(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkReporter::MVNetworkReporter__ctor
               (MVNetworkReporter *this,MVWorldObjectClient *owner,MethodInfo *method)

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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._.worldObject = owner;
  func_?(&this->fields,owner);
  return;
}

