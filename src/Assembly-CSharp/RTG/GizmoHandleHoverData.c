
/* GizmoHandleHoverData(Ray, IGizmoHandle, Single) */

void Assembly-CSharp.dll::RTG::GizmoHandleHoverData::GizmoHandleHoverData__ctor
               (GizmoHandleHoverData *this,Ray hoverRay,IGizmoHandle *gizmoHandle,float hoverEnter3D
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoHandle);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (gizmoHandle != (IGizmoHandle *)0x0) {
    iVar1 = func_?(0,TypeInfo__RTG__IGizmoHandle,gizmoHandle);
    (this->fields)._handleId = iVar1;
    pGVar2 = (Gizmo *)func_?(1,TypeInfo__RTG__IGizmoHandle,gizmoHandle);
    ppGVar3 = &(this->fields)._gizmo;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    (this->fields)._handleDimension = 2;
    this_00 = &(this->fields)._hoverRay;
    (this_00->m_Origin).x = hoverRay.m_Origin.x;
    (this->fields)._hoverRay.m_Origin.y = hoverRay.m_Origin.y;
    (this->fields)._hoverRay.m_Origin.z = hoverRay.m_Origin.z;
    (this->fields)._hoverRay.m_Direction.x = hoverRay.m_Direction.x;
    (this->fields)._hoverRay.m_Direction.y = hoverRay.m_Direction.y;
    (this->fields)._hoverRay.m_Direction.z = hoverRay.m_Direction.z;
    (this->fields)._hoverEnter3D = hoverEnter3D;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       (&VStack_5,this_00,hoverEnter3D,(MethodInfo *)0x0);
    fVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    (this->fields)._hoverPoint.x = pVVar4->x;
    (this->fields)._hoverPoint.y = fVar6;
    (this->fields)._hoverPoint.z = fVar7;
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* GizmoHandleHoverData(Ray, IGizmoHandle, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoHandleHoverData::GizmoHandleHoverData__ctor_1
               (GizmoHandleHoverData *this,Ray hoverRay,IGizmoHandle *gizmoHandle,Vector2 hoverPt2D,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoHandle);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (gizmoHandle != (IGizmoHandle *)0x0) {
    iVar1 = func_?(0,TypeInfo__RTG__IGizmoHandle,gizmoHandle);
    (this->fields)._handleId = iVar1;
    pGVar2 = (Gizmo *)func_?(1,TypeInfo__RTG__IGizmoHandle,gizmoHandle);
    ppGVar3 = &(this->fields)._gizmo;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    (this->fields)._handleDimension = 1;
    (this->fields)._hoverRay.m_Origin.x = hoverRay.m_Origin.x;
    (this->fields)._hoverRay.m_Origin.y = hoverRay.m_Origin.y;
    (this->fields)._hoverRay.m_Origin.z = hoverRay.m_Origin.z;
    (this->fields)._hoverRay.m_Direction.x = hoverRay.m_Direction.x;
    (this->fields)._hoverRay.m_Direction.y = hoverRay.m_Direction.y;
    (this->fields)._hoverRay.m_Direction.z = hoverRay.m_Direction.z;
    (this->fields)._hoverPoint.x = hoverPt2D.x;
    (this->fields)._hoverPoint.y = hoverPt2D.y;
    (this->fields)._hoverPoint.z = 0.0;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

