
/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingSubscriberVehicle::CullingSubscriberVehicle_OnStateChanged
               (CullingSubscriberVehicle *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  distanceBandIndex = (this->fields)._._CullingIndex_k__BackingField;
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  value = CullingApiWrapper::CullingApiWrapper_Visible
                    (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
  pGVar1 = (this->fields).visualRoot;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 != value) {
      pGVar1 = (this->fields).visualRoot;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,value,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CullingSubscriberVehicle::CullingSubscriberVehicle_PositionChanged
               (CullingSubscriberVehicle *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_positionChanged);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_positionChanged,(MethodInfo *)0x0);
  if (arg0 != (MVWorldObjectClient *)0x0) {
    pVVar1 = (Vector3 *)(*(code *)(arg0->klass->vtable).get_Position.method)(&stack0xfffffff0);
    CullingSubscriberBase::CullingSubscriberBase_set_Position
              ((CullingSubscriberBase *)this,*pVVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CullingSubscriberVehicle(GameObject) */

void Assembly-CSharp.dll::CullingSubscriberVehicle::CullingSubscriberVehicle__ctor
               (CullingSubscriberVehicle *this,GameObject *visualRoot,MethodInfo *method)

{
  CullingSubscriberBase::CullingSubscriberBase__ctor
            ((CullingSubscriberBase *)this,(MethodInfo *)0x0);
  (this->fields).visualRoot = visualRoot;
  func_?(&(this->fields).visualRoot,visualRoot);
  (this->fields)._._CullingIndex_k__BackingField = 2;
  CullingSubscriberBase::CullingSubscriberBase_set_Radius
            ((CullingSubscriberBase *)this,10.0,(MethodInfo *)0x0);
  return;
}

