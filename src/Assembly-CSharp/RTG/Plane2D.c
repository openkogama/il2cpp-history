
/* Single GetDistanceToPoint(Vector2) */

float Assembly-CSharp.dll::RTG::Plane2D::Plane2D_GetDistanceToPoint
                (Plane2D *this,Vector2 point,MethodInfo *method)

{
  return ((this->fields)._normal.x * point.x + (this->fields)._normal.y * point.y) -
         (this->fields)._distance;
}


/* Boolean Raycast(Vector2, Vector2, Single ByRef) */

bool Assembly-CSharp.dll::RTG::Plane2D::Plane2D_Raycast
               (Plane2D *this,Vector2 rayOrigin,Vector2 rayDir,float *t,MethodInfo *method)

{
  *t = 0.0;
  fVar1 = (this->fields)._normal.x * rayDir.x + (this->fields)._normal.y * rayDir.y;
  if (_UNK_? <= (float)((uint)fVar1 & _UNK_?)) {
    fVar1 = (float)((uint)(((this->fields)._normal.x * rayOrigin.x +
                           (this->fields)._normal.y * rayOrigin.y) - (this->fields)._distance) ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) / fVar1
    ;
    *t = fVar1;
    return 0.0 <= fVar1;
  }
  return 0;
}


/* Plane2D(Vector2, Single) */

void Assembly-CSharp.dll::RTG::Plane2D::Plane2D__ctor
               (Plane2D *this,Vector2 normal,float distance,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  VVar1 = (Vector2)func_?(&normal,0);
  (this->fields)._normal = VVar1;
  (this->fields)._distance = distance;
  return;
}


/* Plane2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::Plane2D::Plane2D__ctor_1
               (Plane2D *this,Vector2 normal,Vector2 pointOnPlane,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  VVar1 = (Vector2)func_?(&normal,0);
  (this->fields)._normal = VVar1;
  (this->fields)._distance = pointOnPlane.y * VVar1.y + pointOnPlane.x * VVar1.x;
  return;
}


/* Void set_Normal(Vector2) */

void Assembly-CSharp.dll::RTG::Plane2D::Plane2D_set_Normal
               (Plane2D *this,Vector2 value,MethodInfo *method)

{
  VVar1 = (Vector2)func_?(&value,0);
  (this->fields)._normal = VVar1;
  return;
}

