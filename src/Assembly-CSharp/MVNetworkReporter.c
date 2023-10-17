
/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkReporter::MVNetworkReporter_Update
               (MVNetworkReporter *this,MVNetworkGame *game,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  dVar1 = 0.0;
  if (game != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
    func_?();
    if ((float)((uint)(float)dVar1 & _UNK_?) <= _UNK_?) {
      return;
    }
    pMVar2 = (this->fields)._.worldObject;
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      pfVar3 = (float *)(*(pMVar2->klass->vtable).get_Rotation.methodPtr)
                                  (&MStack_4,pMVar2,(pMVar2->klass->vtable).get_Rotation.method);
      MStack_4.position.x = *pfVar3;
      MStack_4.position.y = pfVar3[1];
      pfVar5 = pfVar3 + 2;
      MStack_4.position.z = pfVar5[0];
      MStack_4.rotation = (Byte__Array *)pfVar5[1];
      fVar6 = *pfVar5;
      pBVar7 = (Byte__Array *)pfVar3[3];
      if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
        fVar6 = MStack_4.position.z;
        pBVar7 = MStack_4.rotation;
      }
      quaternion.y = MStack_4.position.y;
      quaternion.x = MStack_4.position.x;
      quaternion.z = fVar6;
      quaternion.w = (float)pBVar7;
      pBStack_8 = MVWorldObject.dll::MV::WorldObject::QuaternionCompression::
                  QuaternionCompression_ToBytes(quaternion,(MethodInfo *)0x0);
      pMVar2 = (this->fields)._.worldObject;
      cStack_9 = '\x01';
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        puVar10 = (undefined8 *)
                 (*(pMVar2->klass->vtable).get_Position.methodPtr)
                           (&MStack_4.position.y,pMVar2,(pMVar2->klass->vtable).get_Position.method
                           );
        fVar11 = (float)*puVar10;
        fVar12 = (float)((ulonglong)*puVar10 >> 0x20);
        fVar6 = *(float *)(puVar10 + 1);
        pBVar7 = pBStack_8;
        func_?(&stack0xffffffc0,pBStack_8);
        MStack_4.rotation = pBVar7;
        MStack_4.position.z = fVar6;
        MStack_4.position.x = fVar11;
        MStack_4.position.y = fVar12;
        bVar13 = MVNetworkReporter+SendTransformData::MVNetworkReporter_SendTransformData_Equals
                          (&MStack_4,(this->fields).prevSendTransformData,(MethodInfo *)0x0);
        if (bVar13 == 0) {
          bVar13 = 0;
        }
        else {
          if ((this->fields).stopPackageSent != 0) {
            return;
          }
          cStack_9 = '\x02';
          bVar13 = 1;
        }
        (this->fields).stopPackageSent = bVar13;
        (this->fields).prevSendTransformData.position.x = fVar11;
        (this->fields).prevSendTransformData.position.y = fVar12;
        (this->fields).prevSendTransformData.position.z = fVar6;
        (this->fields).prevSendTransformData.rotation = pBVar7;
        func_?(&(this->fields).prevSendTransformData.rotation);
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        pMVar2 = (this->fields)._.worldObject;
        pMStack_15 = pMVar14;
        if (pMVar2 != (MVWorldObjectClient *)0x0) {
          iStack_16 = (pMVar2->fields)._.id;
          puVar10 = (undefined8 *)
                   (*(pMVar2->klass->vtable).get_Position.methodPtr)
                             (auStack_17,pMVar2,(pMVar2->klass->vtable).get_Position.method);
          MStack_4._8_8_ = *puVar10;
          fStack_18 = *(float *)(puVar10 + 1);
          if (pMVar14 != (MVNetworkGame_OperationRequests *)0x0) {
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
              cRam_? = '\x01';
            }
            MVar19 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
            if (MVar19 != MVJoinState__Enum_Playing) {
code_?:
              iVar20 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                                 (game,(MethodInfo *)0x0);
              *(int32_t *)&(this->fields).lastUpdateTimestamp = iVar20;
              *(int32_t *)((int)&(this->fields).lastUpdateTimestamp + 4) = iVar20 >> 0x1f;
              return;
            }
            this_01 = (Dictionary_2_System_Object_System_Object_ *)
                      func_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                     );
            if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                        ((ParameterOverride_1_System_Object_ *)this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              iStack_21 = iStack_16;
              pOVar22 = (Object *)func_?(TypeInfo__System__Int32,&iStack_21);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this_01,(Object *)0x16,pOVar22,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              this_00 = (pMStack_15->fields).networkGame;
              if (this_00 != (MVNetworkGame *)0x0) {
                iStack_23 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                                      (this_00,(MethodInfo *)0x0);
                pOVar22 = (Object *)func_?(TypeInfo__System__Int32,&iStack_23);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (this_01,(Object *)0x23,pOVar22,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          );
                position.z = fStack_18;
                position.x = MStack_4.position.z;
                position.y = (float)MStack_4.rotation;
                MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition_1
                          (position,(Dictionary_2_System_Byte_System_Object_ *)this_01,
                           (MethodInfo *)0x0);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (this_01,(Object *)0x9d,(Object *)pBStack_8,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          );
                cStack_24 = cStack_9;
                pOVar22 = (Object *)func_?(TypeInfo__System__Byte);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (this_01,(Object *)0x24,pOVar22,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          );
                SStack_25.DeliveryMode = 0;
                SStack_25.Encrypt = 0;
                SStack_25.Channel = 0;
                SStack_25._6_2_ = 0;
                Photon3Unity3D.dll::ExitGames::Client::Photon::SendOptions::
                SendOptions_set_Reliability(&SStack_25,cStack_9 == '\x02',(MethodInfo *)0x0);
                pPVar26 = (pMStack_15->fields).peer;
                if (pPVar26 != (PhotonPeer *)0x0) {
                  (*(pPVar26->klass->vtable).SendOperation.methodPtr)
                            (pPVar26,2,this_01,SStack_25.DeliveryMode,SStack_25._4_4_,
                             (pPVar26->klass->vtable).SendOperation.method);
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
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._.worldObject = owner;
  func_?(&this->fields,owner);
  return;
}

