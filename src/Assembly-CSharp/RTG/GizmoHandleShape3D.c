
/* GizmoHandleShape3D(Shape3D) */

void Assembly-CSharp.dll::RTG::GizmoHandleShape3D::GizmoHandleShape3D__ctor
               (GizmoHandleShape3D *this,Shape3D *shape,MethodInfo *method)

{
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._shape = shape;
  func_?(&(this->fields)._shape,shape);
  return;
}

