
/* Void Reset() */

void Assembly-CSharp.dll::RTG::GizmoDragInfo::GizmoDragInfo_Reset
               (GizmoDragInfo *this,MethodInfo *method)

{
  this->_isDragged = 0;
  pOVar1 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
            CallSiteBinder_BindDelegate((CallSiteBinder *)0x0,unaff_ESI,unaff_EBP,unaff_retaddr);
  this->_handleId = (int32_t)pOVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar2->zeroVector).x;
  uVar6 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->_relativeOffset).x = (float)uVar5;
  (this->_relativeOffset).y = (float)uVar6;
  (this->_totalOffset).x = (float)uVar5;
  (this->_totalOffset).y = (float)uVar6;
  (this->_relativeOffset).z = fVar4;
  (this->_totalOffset).z = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar7->identityQuaternion).y;
  fVar3 = (pQVar7->identityQuaternion).z;
  fVar8 = (pQVar7->identityQuaternion).w;
  fVar9 = (pQVar7->identityQuaternion).x;
  fVar10 = (pQVar7->identityQuaternion).y;
  fVar11 = (pQVar7->identityQuaternion).z;
  fVar12 = (pQVar7->identityQuaternion).w;
  (this->_relativeRotation).x = (pQVar7->identityQuaternion).x;
  (this->_relativeRotation).y = fVar4;
  (this->_relativeRotation).z = fVar3;
  (this->_relativeRotation).w = fVar8;
  (this->_totalRotation).x = fVar9;
  (this->_totalRotation).y = fVar10;
  (this->_totalRotation).z = fVar11;
  (this->_totalRotation).w = fVar12;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar13 = (pVVar2->oneVector).x;
  uVar14 = (pVVar2->oneVector).y;
  fVar4 = (pVVar2->oneVector).z;
  (this->_relativeScale).x = (float)uVar13;
  (this->_relativeScale).y = (float)uVar14;
  (this->_totalScale).x = (float)uVar13;
  (this->_totalScale).y = (float)uVar14;
  (this->_relativeScale).z = fVar4;
  (this->_totalScale).z = fVar4;
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

