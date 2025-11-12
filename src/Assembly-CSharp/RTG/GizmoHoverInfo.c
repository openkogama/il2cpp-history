
/* Void Reset() */

void Assembly-CSharp.dll::RTG::GizmoHoverInfo::GizmoHoverInfo_Reset
               (GizmoHoverInfo *this,MethodInfo *method)

{
  this->_isHovered = 0;
  bVar1 = cRam_? == '\0';
  this->_handleId = 0;
  this->_handleDimension = 0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->_hoverPoint).x = (pVVar2->zeroVector).x;
  (this->_hoverPoint).y = fVar3;
  (this->_hoverPoint).z = fVar4;
  return;
}

