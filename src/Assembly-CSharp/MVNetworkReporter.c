
/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkReporter::MVNetworkReporter_Update
               (MVNetworkReporter *this,MVNetworkGame *game,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if (game != (MVNetworkGame *)0x0) {
    iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
    if ((float)((uint)(float)((longlong)iVar2 - (this->fields).lastUpdateTimestamp) & _UNK_?
               ) <= _UNK_?) {
      return;
    }
    pMVar3 = (this->fields)._.worldObject;
    if (pMVar3 != (MVWorldObjectClient *)0x0) {
      puVar4 = (undefined8 *)
               (*(pMVar3->klass->vtable).get_Rotation.methodPtr)
                         (&MStack_5,pMVar3,(pMVar3->klass->vtable).get_Rotation.method);
      MStack_5.position._0_8_ = *puVar4;
      MStack_5._8_8_ = puVar4[1];
      if (*(int *)&(TypeInfo__MV__WorldObject__QuaternionCompression->_1).field_0x1c == 0) {
        FUN_?();
      }
      rotation = MVWorldObject.dll::MV::WorldObject::QuaternionCompression::
                 QuaternionCompression_ToBytes((Quaternion *)&MStack_5,(MethodInfo *)0x0);
      pMVar3 = (this->fields)._.worldObject;
      uVar6 = 1;
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        puVar4 = (undefined8 *)(*(pMVar3->klass->vtable).get_Position.methodPtr)(&MStack_7);
        MStack_7.position._0_8_ = *puVar4;
        VStack_8.z = *(float *)(puVar4 + 1);
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)apBStack_10 >> 0xc);
          uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        MStack_7._12_4_ = uStack_1;
        MStack_7.position.z = VStack_8.z;
        MStack_5.position.x = (this->fields).prevSendTransformData.position.x;
        MStack_5.position.y = (this->fields).prevSendTransformData.position.y;
        MStack_5._8_8_ = *(undefined8 *)&(this->fields).prevSendTransformData.position.z;
        MStack_5.rotation = (this->fields).prevSendTransformData.rotation;
        MStack_7.rotation = rotation;
        VStack_8._0_8_ = MStack_7.position._0_8_;
        apBStack_10[0] = rotation;
        bVar15 = MVNetworkReporter+SendTransformData::MVNetworkReporter_SendTransformData_Equals
                          (&MStack_7,&MStack_5,(MethodInfo *)0x0);
        if (bVar15 == 0) {
          bVar15 = 0;
        }
        else {
          if ((this->fields).stopPackageSent != 0) {
            return;
          }
          uVar6 = 2;
          bVar15 = 1;
        }
        (this->fields).stopPackageSent = bVar15;
        bVar14 = iRam_? != 0;
        (this->fields).prevSendTransformData.position.x = VStack_8.x;
        (this->fields).prevSendTransformData.position.y = VStack_8.y;
        *(ulonglong *)&(this->fields).prevSendTransformData.position.z =
             CONCAT44(uStack_1,VStack_8.z);
        (this->fields).prevSendTransformData.rotation = apBStack_10[0];
        if (bVar14) {
          uVar9 = (uint)((ulonglong)&(this->fields).prevSendTransformData.rotation >> 0xc);
          uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pMVar3 = (this->fields)._.worldObject;
        if (pMVar3 != (MVWorldObjectClient *)0x0) {
          iVar2 = (pMVar3->fields)._.id;
          puVar4 = (undefined8 *)
                   (*(pMVar3->klass->vtable).get_Position.methodPtr)
                             (&MStack_5,pMVar3,(pMVar3->klass->vtable).get_Position.method);
          if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
            MStack_7.position._0_8_ = *puVar4;
            MStack_7.position.z = *(float *)(puVar4 + 1);
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObject
                      (this_00,iVar2,&MStack_7.position,rotation,
                       CONCAT31((int3)((uint)in_stack_16 >> 8),uVar6),
                       (MethodInfo *)0x0);
            iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                              (game,(MethodInfo *)0x0);
            (this->fields).lastUpdateTimestamp = (longlong)iVar2;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* MVNetworkReporter(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkReporter::MVNetworkReporter__ctor
               (MVNetworkReporter *this,MVWorldObjectClient *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).lastUpdateTimestamp = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).x;
  fVar4 = (pVVar2->zeroVector).y;
  fVar5 = (pVVar2->zeroVector).z;
  pBVar6 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,3);
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)auStack_8 >> 0xc);
    lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar1 = uVar10 == *puVar11;
      if (bVar1) {
        *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  iVar12 = iRam_?;
  (this->fields).prevSendTransformData.position.x = fVar3;
  (this->fields).prevSendTransformData.position.y = fVar4;
  *(ulonglong *)&(this->fields).prevSendTransformData.position.z = (ulonglong)(uint)fVar5;
  (this->fields).prevSendTransformData.rotation = pBVar6;
  if (iVar12 != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields).prevSendTransformData.rotation >> 0xc);
    lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar1 = uVar10 == *puVar11;
      if (bVar1) {
        *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
      iVar12 = iRam_?;
    } while (!bVar1);
  }
  (this->fields)._.worldObject = owner;
  if (iVar12 != 0) {
    uVar7 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar1 = uVar10 == *puVar11;
      if (bVar1) {
        *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

