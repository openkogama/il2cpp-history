
/* Object2ObjectSnap+SnapResult(Object2ObjectSnap+SnapFailReson) */

void Assembly-CSharp.dll::RTG::Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor
               (Object2ObjectSnap_SnapResult *this,Object2ObjectSnap_SnapFailReson__Enum failReson,
               MethodInfo *method)

{
  this->_success = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->_snapPivot).x = (pVVar1->zeroVector).x;
  (this->_snapPivot).y = fVar2;
  (this->_snapPivot).z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->_snapDestination).x = (pVVar1->zeroVector).x;
  (this->_snapDestination).y = fVar2;
  (this->_snapDestination).z = fVar3;
  this->_snapDistance = 0.0;
  this->_failReason = failReson;
  return;
}


/* Object2ObjectSnap+SnapResult(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor_1
               (Object2ObjectSnap_SnapResult *this,Vector3 snapPivot,Vector3 snapDestination,
               float snapDistance,MethodInfo *method)

{
  (this->_snapPivot).x = snapPivot.x;
  (this->_snapPivot).y = snapPivot.y;
  (this->_snapDestination).x = snapDestination.x;
  (this->_snapDestination).y = snapDestination.y;
  (this->_snapPivot).z = snapPivot.z;
  this->_success = 1;
  (this->_snapDestination).z = snapDestination.z;
  this->_snapDistance = snapDistance;
  this->_failReason = 0;
  return;
}

