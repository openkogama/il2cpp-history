
/* Void Reset() */

void Assembly-CSharp.dll::RTG::GizmoHoverInfo::GizmoHoverInfo_Reset
               (GizmoHoverInfo *this,MethodInfo *method)

{
  this->_isHovered = 0;
  pOVar1 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
           CallSiteBinder_BindDelegate((CallSiteBinder *)0x0,unaff_ESI,unaff_EBP,unaff_retaddr);
  this->_handleId = (int32_t)pOVar1;
  this->_handleDimension = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
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

