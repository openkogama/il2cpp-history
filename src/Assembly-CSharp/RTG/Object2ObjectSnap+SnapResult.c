
/* Object2ObjectSnap+SnapResult(Object2ObjectSnap+SnapFailReson) */

void Assembly-CSharp.dll::RTG::Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor
               (Object2ObjectSnap_SnapResult *this,Object2ObjectSnap_SnapFailReson__Enum failReson,
               MethodInfo *method)

{
  this->_success = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->_snapPivot).x = (pVVar2->zeroVector).x;
  (this->_snapPivot).y = fVar3;
  (this->_snapPivot).z = fVar4;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->_snapDestination).x = (pVVar2->zeroVector).x;
  (this->_snapDestination).y = fVar3;
  (this->_snapDestination).z = fVar4;
  this->_snapDistance = 0.0;
  this->_failReason = failReson;
  return;
}


/* Object2ObjectSnap+SnapResult(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor_1
               (Object2ObjectSnap_SnapResult *this,Vector3 *snapPivot,Vector3 *snapDestination,
               float snapDistance,MethodInfo *method)

{
  fVar1 = snapPivot->y;
  fVar2 = snapPivot->z;
  (this->_snapPivot).x = snapPivot->x;
  (this->_snapPivot).y = fVar1;
  fVar1 = snapDestination->x;
  fVar3 = snapDestination->y;
  (this->_snapPivot).z = fVar2;
  fVar2 = snapDestination->z;
  (this->_snapDestination).x = fVar1;
  (this->_snapDestination).y = fVar3;
  (this->_snapDestination).z = fVar2;
  this->_snapDistance = snapDistance;
  this->_success = 1;
  this->_failReason = 0;
  return;
}


/* Single get_SnapDistance() */

float Assembly-CSharp.dll::RTG::Object2ObjectSnap+SnapResult::
      Object2ObjectSnap_SnapResult_get_SnapDistance
                (Object2ObjectSnap_SnapResult *this,MethodInfo *method)

{
  return this->_snapDistance;
}

