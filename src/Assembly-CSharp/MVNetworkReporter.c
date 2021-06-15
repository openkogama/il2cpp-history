
/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkReporter::MVNetworkReporter_Update
               (MVNetworkReporter *this,MVNetworkGame *game,MethodInfo *method)

{
  this_00 = game;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (game != (MVNetworkGame *)0x0) {
    iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
    pBStack_2 = *(Byte__Array **)&(this->fields).lastUpdateTimestamp;
    pMStack_3 = *(MVNetworkGame_OperationRequests **)((int)&(this->fields).lastUpdateTimestamp + 4);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    func_?();
    if ((float)(double)CONCAT44((uint)((ulonglong)(double)(float)in_XMM0_Qa >> 0x20) & _UNK_?
                                ,SUB84((double)(float)in_XMM0_Qa,0) & _UNK_?) <=
        _UNK_?) {
      return;
    }
    pMVar4 = (this->fields)._.worldObject;
    if (pMVar4 != (MVWorldObjectClient *)0x0) {
      puVar5 = (undefined8 *)
               (*(code *)(pMVar4->klass->vtable).get_Rotation.method)
                         (&uStack_6,pMVar4,(pMVar4->klass->vtable).set_Rotation.methodPtr);
      uStack_6 = *puVar5;
      fStack_7 = *(float *)(puVar5 + 1);
      pBStack_8 = *(Byte__Array **)((int)puVar5 + 0xc);
      uVar9 = *(undefined4 *)puVar5;
      uVar10 = *(undefined4 *)((int)puVar5 + 4);
      if ((((uint)(TypeInfo__MV__WorldObject__QuaternionCompression->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
        uVar9 = (float)uStack_6;
        uVar10 = uStack_6._4_4_;
      }
      quaternion.y = (float)uVar10;
      quaternion.x = (float)uVar9;
      quaternion.z = fStack_7;
      quaternion.w = (float)pBStack_8;
      pBStack_2 = MVWorldObject.dll::MV::WorldObject::QuaternionCompression::
                  QuaternionCompression_ToBytes(quaternion,(MethodInfo *)0x0);
      pMVar4 = (this->fields)._.worldObject;
      game._1_3_ = (undefined3)((uint)iVar1 >> 8);
      game = (MVNetworkGame *)CONCAT31(game._1_3_,1);
      if (pMVar4 != (MVWorldObjectClient *)0x0) {
        puVar5 = (undefined8 *)
                 (*(code *)(pMVar4->klass->vtable).get_Position.method)
                           (&fStack_11,pMVar4,(pMVar4->klass->vtable).set_Position.methodPtr);
        uVar12 = *puVar5;
        fStack_7 = *(float *)(puVar5 + 1);
        uStack_6._0_4_ = (float)uVar12;
        uStack_6._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
        fStack_13 = (float)uStack_6;
        fStack_11 = uStack_6._4_4_;
        pBStack_14 = pBStack_2;
        pBStack_8 = pBStack_2;
        uStack_6 = uVar12;
        fStack_15 = fStack_7;
        cVar16 = func_?(&uStack_6,(this->fields).prevSendTransformData.position.x,
                                (this->fields).prevSendTransformData.position.y,
                                (this->fields).prevSendTransformData.position.z,
                                (this->fields).prevSendTransformData.rotation,0);
        if (cVar16 == '\0') {
          bVar17 = 0;
        }
        else {
          if ((this->fields).stopPackageSent != 0) {
            return;
          }
          game = (MVNetworkGame *)CONCAT31(game._1_3_,2);
          bVar17 = 1;
        }
        (this->fields).stopPackageSent = bVar17;
        (this->fields).prevSendTransformData.position.x = fStack_13;
        (this->fields).prevSendTransformData.position.y = fStack_11;
        (this->fields).prevSendTransformData.position.z = fStack_15;
        (this->fields).prevSendTransformData.rotation = pBStack_14;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMStack_3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
        pMVar4 = (this->fields)._.worldObject;
        if (pMVar4 != (MVWorldObjectClient *)0x0) {
          pIStack_18 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)pMVar4,(MethodInfo *)0x0);
          pMVar4 = (this->fields)._.worldObject;
          if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
             (pVVar19 = (Vector3 *)
                       (*(code *)(pMVar4->klass->vtable).get_Position.method)
                                 (&fStack_11,pMVar4,(pMVar4->klass->vtable).set_Position.methodPtr),
             pMStack_3 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObject
                      (pMStack_3,(int32_t)pIStack_18,*pVVar19,pBStack_2,
                       (TransformPackageType__Enum)game,(MethodInfo *)0x0);
            iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                              (this_00,(MethodInfo *)0x0);
            *(int32_t *)&(this->fields).lastUpdateTimestamp = iVar1;
            *(int32_t *)((int)&(this->fields).lastUpdateTimestamp + 4) = iVar1 >> 0x1f;
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* MVNetworkReporter(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkReporter::MVNetworkReporter__ctor
               (MVNetworkReporter *this,MVWorldObjectClient *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  *(undefined4 *)&(this->fields).lastUpdateTimestamp = 0xffffffff;
  *(undefined4 *)((int)&(this->fields).lastUpdateTimestamp + 4) = 0xffffffff;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  method_00 = TypeInfo__System__Byte;
  pBVar6 = (Byte__Array *)func_?(TypeInfo__System__Byte,3);
  (this->fields).prevSendTransformData.position.x = (float)uVar3;
  (this->fields).prevSendTransformData.position.y = (float)uVar4;
  (this->fields).prevSendTransformData.position.z = fVar5;
  (this->fields).prevSendTransformData.rotation = pBVar6;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._.worldObject = owner;
  return;
}

