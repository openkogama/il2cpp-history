
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
  fVar1 = (this->fields)._normal.x;
  fVar2 = (this->fields)._normal.y;
  fVar3 = fVar1 * rayDir.x + fVar2 * rayDir.y;
  if (_UNK_? <= (float)((uint)fVar3 & _UNK_?)) {
    fVar3 = (float)((uint)((fVar1 * rayOrigin.x + fVar2 * rayOrigin.y) - (this->fields)._distance) ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) / fVar3
    ;
    *t = fVar3;
    return 0.0 <= fVar3;
  }
  return 0;
}


/* Plane2D(Vector2, Single) */

void Assembly-CSharp.dll::RTG::Plane2D::Plane2D__ctor
               (Plane2D *this,Vector2 normal,float distance,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  VStack_1.x = normal.x;
  VStack_1.y = normal.y;
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize(&VStack_1,(MethodInfo *)0x0);
  (this->fields)._normal.x = VStack_1.x;
  (this->fields)._normal.y = VStack_1.y;
  (this->fields)._distance = distance;
  return;
}


/* Plane2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::Plane2D::Plane2D__ctor_1
               (Plane2D *this,Vector2 normal,Vector2 pointOnPlane,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  VStack_1.x = normal.x;
  VStack_1.y = normal.y;
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize(&VStack_1,(MethodInfo *)0x0);
  (this->fields)._normal.x = VStack_1.x;
  (this->fields)._normal.y = VStack_1.y;
  (this->fields)._distance = pointOnPlane.y * VStack_1.y + pointOnPlane.x * VStack_1.x;
  return;
}


/* Void set_Normal(Vector2) */

void Assembly-CSharp.dll::RTG::Plane2D::Plane2D_set_Normal
               (Plane2D *this,Vector2 value,MethodInfo *method)

{
  VStack_1.x = value.x;
  VStack_1.y = value.y;
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize(&VStack_1,(MethodInfo *)0x0);
  (this->fields)._normal.x = VStack_1.x;
  (this->fields)._normal.y = VStack_1.y;
  return;
}

