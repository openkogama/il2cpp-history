
/* SentryGunBeam Create(SentryGunBeam, SentryGunBeamType, MVSentryGun) */

SentryGunBeam *
Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_Create
          (SentryGunBeam *prefab,SentryGunBeamType__Enum beamType,MVSentryGun *owner,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SentryGunBeam_MethodInfo__UnityEngine__Object__Instantiate<SentryGunBeam>_SentryGunBeam__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
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
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    position.z = fVar4;
    position.x = (float)(undefined4)uStack_3;
    position.y = (float)uStack_3._4_4_;
    rotation.y = QStack_2.y;
    rotation.x = QStack_2.x;
    rotation.z = QStack_2.z;
    rotation.w = QStack_2.w;
    pSVar6 = (SentryGunBeam *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                       ((Object *)prefab,position,rotation,
                        SentryGunBeam_MethodInfo__UnityEngine__Object__Instantiate<SentryGunBeam>_SentryGunBeam__UnityEngine__Vector3__UnityEngine__Quaternion_
                       );
    if ((pSVar6 != (SentryGunBeam *)0x0) &&
       (this = (pSVar6->fields).lineRenderer, this != (LineRenderer *)0x0)) {
      pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                         ((Renderer *)this,(MethodInfo *)0x0);
      if (pMVar7 != (Material__Array *)0x0) {
        if ((beamType & 0xff) < pMVar7->max_length) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    ((Renderer *)this,pMVar7->vector[beamType & 0xff],(MethodInfo *)0x0);
          return pSVar6;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar6 = (SentryGunBeam *)(*pcVar8)();
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
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  VVar1.y = end.y - start.y;
  VVar1.x = end.x - start.x;
  VVar1.z = end.z - start.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffe4,VVar1,(MethodInfo *)0x0);
  VVar1 = *pVVar2;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                     ((Quaternion *)&stack0xffffffe0,VVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    fVar4 = pQVar3->w;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,*pQVar3,(MethodInfo *)0x0);
    pLVar5 = (this->fields).lineRenderer;
    (this->fields)._StartPosition_k__BackingField.x = (float)(int)(ulonglong)(uint)fVar4;
    (this->fields)._StartPosition_k__BackingField.y = (float)(int)((ulonglong)(uint)fVar4 >> 0x20);
    (this->fields)._EndPosition_k__BackingField.x = (float)(int)end._0_8_;
    (this->fields)._EndPosition_k__BackingField.y = (float)(int)((ulonglong)end._0_8_ >> 0x20);
    (this->fields)._StartPosition_k__BackingField.z = start.z;
    (this->fields)._EndPosition_k__BackingField.z = end.z;
    if (pLVar5 != (LineRenderer *)0x0) {
      position.y = 0.0;
      position.x = fVar4;
      position.z = start.z;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (pLVar5,0,position,(MethodInfo *)0x0);
      pLVar5 = (this->fields).lineRenderer;
      if (pLVar5 != (LineRenderer *)0x0) {
        auVar6._4_4_ = end.z;
        auVar6._0_4_ = fVar4;
        auVar6._8_4_ = 0;
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                  (pLVar5,1,(Vector3)(auVar6 << 0x20),(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_Update
               (SentryGunBeam *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).deleteTimer <= _UNK_?) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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

