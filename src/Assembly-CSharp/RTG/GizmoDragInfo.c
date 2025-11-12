
/* Void Reset() */

void Assembly-CSharp.dll::RTG::GizmoDragInfo::GizmoDragInfo_Reset
               (GizmoDragInfo *this,MethodInfo *method)

{
  cVar1 = cRam_?;
  this->_isDragged = 0;
  this->_handleId = 0;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->_dragBeginPoint).x = (pVVar2->zeroVector).x;
  (this->_dragBeginPoint).y = fVar3;
  (this->_dragBeginPoint).z = fVar4;
  this->_dragChannel = 0;
  this->_handleDimension = 0;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  bVar5 = cRam_? == '\0';
  uVar6 = (pVVar2->zeroVector).x;
  uVar7 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->_relativeOffset).x = (float)uVar6;
  (this->_relativeOffset).y = (float)uVar7;
  (this->_totalOffset).x = (float)uVar6;
  (this->_totalOffset).y = (float)uVar7;
  (this->_relativeOffset).z = fVar4;
  (this->_totalOffset).z = fVar4;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  bVar5 = cRam_? == '\0';
  fVar4 = (pQVar8->identityQuaternion).x;
  fVar3 = (pQVar8->identityQuaternion).y;
  fVar9 = (pQVar8->identityQuaternion).z;
  fVar10 = (pQVar8->identityQuaternion).w;
  (this->_relativeRotation).x = fVar4;
  (this->_relativeRotation).y = fVar3;
  (this->_relativeRotation).z = fVar9;
  (this->_relativeRotation).w = fVar10;
  (this->_totalRotation).x = fVar4;
  (this->_totalRotation).y = fVar3;
  (this->_totalRotation).z = fVar9;
  (this->_totalRotation).w = fVar10;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar11 = (pVVar2->oneVector).x;
  uVar12 = (pVVar2->oneVector).y;
  fVar4 = (pVVar2->oneVector).z;
  (this->_relativeScale).x = (float)uVar11;
  (this->_relativeScale).y = (float)uVar12;
  (this->_totalScale).x = (float)uVar11;
  (this->_totalScale).y = (float)uVar12;
  (this->_relativeScale).z = fVar4;
  (this->_totalScale).z = fVar4;
  return;
}


/* Vector3 get_RelativeScale() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoDragInfo::GizmoDragInfo_get_RelativeScale
                    (Vector3 *__return_storage_ptr__,GizmoDragInfo *this,MethodInfo *method)

{
  fVar1 = (this->_relativeScale).z;
  fVar2 = (this->_relativeScale).y;
  __return_storage_ptr__->x = (this->_relativeScale).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Void set_RelativeScale(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoDragInfo::GizmoDragInfo_set_RelativeScale
               (GizmoDragInfo *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->_relativeScale).x = value->x;
  (this->_relativeScale).y = fVar1;
  (this->_relativeScale).z = fVar2;
  return;
}

