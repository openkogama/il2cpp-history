
/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingSubscriberVehicle::CullingSubscriberVehicle_OnStateChanged
               (CullingSubscriberVehicle *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  distanceBandIndex = (this->fields)._._CullingIndex_k__BackingField;
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = CullingApiWrapper::CullingApiWrapper_Visible
                    (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
  pGVar1 = (this->fields).visualRoot;
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (pGVar1->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  bVar5 = (*pcRam_?)(pvVar3);
  if (bVar5 != value) {
    pGVar1 = (this->fields).visualRoot;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void PositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CullingSubscriberVehicle::CullingSubscriberVehicle_PositionChanged
               (CullingSubscriberVehicle *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_positionChanged);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_positionChanged,(MethodInfo *)0x0);
  if (arg0 != (MVWorldObjectClient *)0x0) {
    puVar1 = (undefined8 *)
             (*(arg0->klass->vtable).get_Position.methodPtr)
                       (auStack_2,arg0,(arg0->klass->vtable).get_Position.method);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar5 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar5 != (BoundingSphere__Array *)0x0) {
      uVar6 = (this->fields)._._CullingIndex_k__BackingField;
      if (uVar6 < (uint)pBVar5->max_length) {
        pBVar5->vector[(int)uVar6].position.x = (float)(int)uVar3;
        pBVar5->vector[(int)uVar6].position.y = (float)(int)((ulonglong)uVar3 >> 0x20);
        pBVar5->vector[(int)uVar6].position.z = fVar4;
        return;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* CullingSubscriberVehicle(GameObject) */

void Assembly-CSharp.dll::CullingSubscriberVehicle::CullingSubscriberVehicle__ctor
               (CullingSubscriberVehicle *this,GameObject *visualRoot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).visualRoot = visualRoot;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).visualRoot >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  fVar6 = _UNK_?;
  (this->fields)._._CullingIndex_k__BackingField = 2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper,fVar6,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar7 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar7 == (BoundingSphere__Array *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar2 = (this->fields)._._CullingIndex_k__BackingField;
  if ((uint)pBVar7->max_length <= uVar2) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pBVar7->vector[(int)uVar2].radius = fVar6;
  return;
}

