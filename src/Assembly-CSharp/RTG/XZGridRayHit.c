
/* XZGridRayHit(Ray, XZGridCell, Single) */

void Assembly-CSharp.dll::RTG::XZGridRayHit::XZGridRayHit__ctor
               (XZGridRayHit *this,Ray ray,XZGridCell *hitCell,float hitEnter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IXZGrid);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._hitCell = hitCell;
  func_?(&this->fields,hitCell);
  (this->fields)._hitEnter = hitEnter;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                     ((Vector3 *)&pIStack_2,&ray,hitEnter,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields)._hitPoint.x = pVVar1->x;
  (this->fields)._hitPoint.y = fVar3;
  (this->fields)._hitPoint.z = fVar4;
  if ((hitCell == (XZGridCell *)0x0) ||
     (pIVar5 = (IXZGrid__Class *)(hitCell->fields)._parentGrid, pIVar5 == (IXZGrid__Class *)0x0)) {
    func_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar7 = (IXZGrid__Class *)(pIVar5->_0).image;
  uVar8 = 0;
  uVar9._0_1_ = (pIVar7->_1).rank;
  uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
  if (uVar9 != 0) {
    do {
      if (pIVar7->interfaceOffsets[uVar8].interfaceType == (Il2CppClass *)TypeInfo__RTG__IXZGrid) {
        ppMVar10 = &(&(pIVar7->vtable).get_WorldPlane)[pIVar7->interfaceOffsets[uVar8].offset].
                   method;
        goto code_?;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  puStack_11 = (undefined *)0x0;
  pIStack_2 = TypeInfo__RTG__IXZGrid;
  pIStack_12 = pIVar5;
  ppMVar10 = (MethodInfo **)func_?();
code_?:
  puStack_11 = (undefined *)ppMVar10[1];
  pIStack_12 = (IXZGrid__Class *)&pIStack_12;
  pIStack_2 = pIVar5;
  pfVar13 = (float *)(*(code *)*ppMVar10)();
  fVar4 = pfVar13[1];
  fVar3 = pfVar13[2];
  fVar14 = pfVar13[3];
  (this->fields)._hitPlane.m_Normal.x = *pfVar13;
  (this->fields)._hitPlane.m_Normal.y = fVar4;
  (this->fields)._hitPlane.m_Normal.z = fVar3;
  (this->fields)._hitPlane.m_Distance = fVar14;
  fVar3 = (this->fields)._hitPlane.m_Normal.y;
  fVar4 = (this->fields)._hitPlane.m_Normal.z;
  (this->fields)._hitNormal.x = (this->fields)._hitPlane.m_Normal.x;
  (this->fields)._hitNormal.y = fVar3;
  (this->fields)._hitNormal.z = fVar4;
  return;
}

