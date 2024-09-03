
/* Void Reset() */

void Assembly-CSharp.dll::RTG::GizmoHoverInfo::GizmoHoverInfo_Reset
               (GizmoHoverInfo *this,MethodInfo *method)

{
  this->_isHovered = 0;
  this->_handleId = 0;
  this->_handleDimension = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->_hoverPoint).x = (pVVar1->zeroVector).x;
  (this->_hoverPoint).y = fVar2;
  (this->_hoverPoint).z = fVar3;
  return;
}

