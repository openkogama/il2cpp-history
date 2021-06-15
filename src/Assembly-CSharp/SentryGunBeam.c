
/* SentryGunBeam Create(SentryGunBeam, SentryGunBeamType, MVSentryGun) */

SentryGunBeam *
Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_Create
          (SentryGunBeam *prefab,SentryGunBeamType__Enum beamType,MVSentryGun *owner,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (owner != (MVSentryGun *)0x0) {
    puVar1 = (undefined8 *)
             (*(code *)(owner->klass->vtable).get_WorldPosition_1.method)
                       (&QStack_2.y,owner,(owner->klass->vtable).set_WorldPosition.methodPtr);
    uStack_3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    pQVar5 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                       (&QStack_2,(MVWorldObjectClient *)owner,(MethodInfo *)0x0);
    QStack_2.x = pQVar5->x;
    QStack_2.y = pQVar5->y;
    QStack_2.z = pQVar5->z;
    QStack_2.w = pQVar5->w;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    position.z = fVar4;
    position.x = (float)(undefined4)uStack_3;
    position.y = (float)uStack_3._4_4_;
    rotation.y = QStack_2.y;
    rotation.x = QStack_2.x;
    rotation.z = QStack_2.z;
    rotation.w = QStack_2.w;
    pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                       (prefab,position,rotation,
                        SentryGunBeam_MethodInfo__UnityEngine__Object__Instantiate<SentryGunBeam>_SentryGunBeam__UnityEngine__Vector3__UnityEngine__Quaternion_
                       );
    if ((pSVar6 != (SentryGunBeam *)0x0) &&
       (this = (pSVar6->fields).lineRenderer, this != (LineRenderer *)0x0)) {
      pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                         ((Renderer *)this,(MethodInfo *)0x0);
      if (pMVar7 != (Material__Array *)0x0) {
        if (pMVar7->max_length <= (beamType & 0xff)) goto code_?;
        if (this != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    ((Renderer *)this,pMVar7->vector[beamType & 0xff],(MethodInfo *)0x0);
          return pSVar6;
        }
      }
    }
  }
  func_?(0);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  pSVar6 = (SentryGunBeam *)(*pcVar9)();
  return pSVar6;
}


/* Void RefreshTime() */

void Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_RefreshTime
               (SentryGunBeam *this,MethodInfo *method)

{
  (this->fields).deleteTimer = 1.0;
  return;
}


/* Void SetBeamPositions(Vector3, Vector3) */

void Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_SetBeamPositions
               (SentryGunBeam *this,Vector3 start,Vector3 end,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            ((Vector3 *)&stack0xffffffdc,end,start,(MethodInfo *)0x0);
  puVar1 = (ulonglong *)func_?(&puStack_2,&stack0xffffffd0,0);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
  uVar6._0_4_ = pVVar5->x;
  uVar6._4_4_ = pVVar5->y;
  fVar7 = pVVar5->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    uVar3._4_4_ = (float)(uVar3 >> 0x20);
    uVar3 = CONCAT44(uVar3._4_4_,TypeInfo__UnityEngine__Quaternion);
    func_?();
  }
  uVar3 = uVar3 & 0xffffffff00000000;
  forward.z = fVar4;
  uVar3._4_4_ = (float)(uVar3 >> 0x20);
  forward.x = (float)uVar8;
  forward.y = uVar3._4_4_;
  upwards.z = fVar7;
  upwards.x = (float)(int)uVar6;
  upwards.y = (float)(int)((ulonglong)uVar6 >> 0x20);
  pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                     ((Quaternion *)&puStack_10,forward,upwards,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,*pQVar9,(MethodInfo *)0x0);
    pLVar11 = (this->fields).lineRenderer;
    (this->fields)._StartPosition_k__BackingField.x = (float)(int)start._0_8_;
    (this->fields)._StartPosition_k__BackingField.y = (float)(int)((ulonglong)start._0_8_ >> 0x20);
    (this->fields)._EndPosition_k__BackingField.x = (float)(int)end._0_8_;
    (this->fields)._EndPosition_k__BackingField.y = (float)(int)((ulonglong)end._0_8_ >> 0x20);
    (this->fields)._StartPosition_k__BackingField.z = start.z;
    (this->fields)._EndPosition_k__BackingField.z = end.z;
    if (pLVar11 != (LineRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (pLVar11,0,start,(MethodInfo *)0x0);
      pLVar11 = (this->fields).lineRenderer;
      if (pLVar11 != (LineRenderer *)0x0) {
        position.y = 0.0;
        position.x = start.z;
        position.z = end.z;
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                  (pLVar11,1,position,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_Update
               (SentryGunBeam *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).deleteTimer <= _UNK_?) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    return;
  }
  (*(code *)(this->klass->vtable).OnUpdate.method)(this,this->klass[1]._0.image);
  fVar1 = (this->fields).deleteTimer;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  (this->fields).deleteTimer = fVar1 - fVar2;
  return;
}


/* Vector3 get_StartPosition() */

Vector3 * Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_get_StartPosition
                    (Vector3 *__return_storage_ptr__,SentryGunBeam *this,MethodInfo *method)

{
  fVar1 = (this->fields)._StartPosition_k__BackingField.y;
  fVar2 = (this->fields)._StartPosition_k__BackingField.z;
  __return_storage_ptr__->x = (this->fields)._StartPosition_k__BackingField.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void set_EndPosition(Vector3) */

void Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_set_EndPosition
               (SentryGunBeam *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._EndPosition_k__BackingField.x = value.x;
  (this->fields)._EndPosition_k__BackingField.y = value.y;
  (this->fields)._EndPosition_k__BackingField.z = value.z;
  return;
}


/* Void set_StartPosition(Vector3) */

void Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_set_StartPosition
               (SentryGunBeam *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._StartPosition_k__BackingField.x = value.x;
  (this->fields)._StartPosition_k__BackingField.y = value.y;
  (this->fields)._StartPosition_k__BackingField.z = value.z;
  return;
}

