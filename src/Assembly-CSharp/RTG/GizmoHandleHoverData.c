
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
    (this->fields)._gizmo = pGVar2;
    func_?(&(this->fields)._gizmo,pGVar2);
    (this->fields)._handleDimension = 2;
    (this->fields)._hoverRay.m_Origin.x = hoverRay.m_Origin.x;
    (this->fields)._hoverRay.m_Origin.y = hoverRay.m_Origin.y;
    (this->fields)._hoverRay.m_Origin.z = hoverRay.m_Origin.z;
    (this->fields)._hoverRay.m_Direction.x = hoverRay.m_Direction.x;
    (this->fields)._hoverRay.m_Direction.y = hoverRay.m_Direction.y;
    (this->fields)._hoverRay.m_Direction.z = hoverRay.m_Direction.z;
    (this->fields)._hoverEnter3D = hoverEnter3D;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       (&VStack_4,&(this->fields)._hoverRay,hoverEnter3D,(MethodInfo *)0x0);
    fVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    (this->fields)._hoverPoint.x = pVVar3->x;
    (this->fields)._hoverPoint.y = fVar5;
    (this->fields)._hoverPoint.z = fVar6;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    (this->fields)._gizmo = pGVar2;
    func_?(&(this->fields)._gizmo,pGVar2);
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

