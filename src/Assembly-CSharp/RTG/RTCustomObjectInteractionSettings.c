
/* RTCustomObjectInteractionSettings() */

void Assembly-CSharp.dll::RTG::RTCustomObjectInteractionSettings::
     RTCustomObjectInteractionSettings__ctor
               (RTCustomObjectInteractionSettings *this,MethodInfo *method)

{
  pVVar1 = Vector3Ex::Vector3Ex_FromValue(&VStack_2,0.5,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields)._noVolumeObjectSize.x = pVVar1->x;
  (this->fields)._noVolumeObjectSize.y = fVar3;
  (this->fields)._noVolumeObjectSize.z = fVar4;
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  return;
}


/* Void set_NoVolumeObjectSize(Vector3) */

void Assembly-CSharp.dll::RTG::RTCustomObjectInteractionSettings::
     RTCustomObjectInteractionSettings_set_NoVolumeObjectSize
               (RTCustomObjectInteractionSettings *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).x;
    fVar4 = (pVVar2->zeroVector).y;
    fVar5 = (pVVar2->zeroVector).z;
    if (fVar5 <= value.z) {
      fVar5 = value.z;
    }
    if (fVar3 <= value.x) {
      fVar3 = value.x;
    }
    if (fVar4 <= value.y) {
      fVar4 = value.y;
    }
    (this->fields)._noVolumeObjectSize.x = fVar3;
    (this->fields)._noVolumeObjectSize.y = fVar4;
    (this->fields)._noVolumeObjectSize.z = fVar5;
  }
  return;
}

