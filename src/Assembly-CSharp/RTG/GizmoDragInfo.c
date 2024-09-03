
/* Void Reset() */

void Assembly-CSharp.dll::RTG::GizmoDragInfo::GizmoDragInfo_Reset
               (GizmoDragInfo *this,MethodInfo *method)

{
  this->_isDragged = 0;
  this->_handleId = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->_dragBeginPoint).x = (pVVar1->zeroVector).x;
  (this->_dragBeginPoint).y = fVar2;
  (this->_dragBeginPoint).z = fVar3;
  this->_dragChannel = 0;
  this->_handleDimension = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar1->zeroVector).x;
  uVar5 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->_relativeOffset).x = (float)uVar4;
  (this->_relativeOffset).y = (float)uVar5;
  (this->_totalOffset).x = (float)uVar4;
  (this->_totalOffset).y = (float)uVar5;
  (this->_relativeOffset).z = fVar3;
  (this->_totalOffset).z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar6->identityQuaternion).y;
  fVar2 = (pQVar6->identityQuaternion).z;
  fVar7 = (pQVar6->identityQuaternion).w;
  fVar8 = (pQVar6->identityQuaternion).x;
  fVar9 = (pQVar6->identityQuaternion).y;
  fVar10 = (pQVar6->identityQuaternion).z;
  fVar11 = (pQVar6->identityQuaternion).w;
  (this->_relativeRotation).x = (pQVar6->identityQuaternion).x;
  (this->_relativeRotation).y = fVar3;
  (this->_relativeRotation).z = fVar2;
  (this->_relativeRotation).w = fVar7;
  (this->_totalRotation).x = fVar8;
  (this->_totalRotation).y = fVar9;
  (this->_totalRotation).z = fVar10;
  (this->_totalRotation).w = fVar11;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar12 = (pVVar1->oneVector).x;
  uVar13 = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  (this->_relativeScale).x = (float)uVar12;
  (this->_relativeScale).y = (float)uVar13;
  (this->_totalScale).x = (float)uVar12;
  (this->_totalScale).y = (float)uVar13;
  (this->_relativeScale).z = fVar3;
  (this->_totalScale).z = fVar3;
  return;
}


/* Void set_TotalScale(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoDragInfo::GizmoDragInfo_set_TotalScale
               (GizmoDragInfo *this,Vector3 value,MethodInfo *method)

{
  (this->_totalScale).x = value.x;
  (this->_totalScale).y = value.y;
  (this->_totalScale).z = value.z;
  return;
}

