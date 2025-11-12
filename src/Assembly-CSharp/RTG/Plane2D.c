
/* Single GetDistanceToPoint(Vector2) */

float Assembly-CSharp.dll::RTG::Plane2D::Plane2D_GetDistanceToPoint
                (Plane2D *this,Vector2 point,MethodInfo *method)

{
  fStackX_c = point.y;
  fStackX_8 = point.x;
  return (fStackX_c * (this->fields)._normal.y + fStackX_8 * (this->fields)._normal.x) -
         (this->fields)._distance;
}


/* Boolean Raycast(Vector2, Vector2, Single ByRef) */

bool Assembly-CSharp.dll::RTG::Plane2D::Plane2D_Raycast
               (Plane2D *this,Vector2 rayOrigin,Vector2 rayDir,float *t,MethodInfo *method)

{
  *t = 0.0;
  fStackX_c = rayDir.y;
  fStackX_8 = rayDir.x;
  fVar1 = fStackX_c * (this->fields)._normal.y + fStackX_8 * (this->fields)._normal.x;
  if (_UNK_? <= (float)((uint)fVar1 & _UNK_?)) {
    fStack_2 = rayOrigin.x;
    fStack_3 = rayOrigin.y;
    fVar1 = (float)((uint)((fStack_3 * (this->fields)._normal.y +
                           fStack_2 * (this->fields)._normal.x) - (this->fields)._distance) ^
                   _UNK_?) / fVar1;
    *t = fVar1;
    return 0.0 <= fVar1;
  }
  return 0;
}


/* Plane2D(Vector2, Single) */

void Assembly-CSharp.dll::RTG::Plane2D::Plane2D__ctor
               (Plane2D *this,Vector2 normal,float distance,MethodInfo *method)

{
  aVStack_1[0] = normal;
  uVar2 = FUN_?(aVStack_1);
  fStackX_8 = (float)uVar2;
  fStackX_c = (float)((ulonglong)uVar2 >> 0x20);
  (this->fields)._distance = distance;
  (this->fields)._normal.x = fStackX_8;
  (this->fields)._normal.y = fStackX_c;
  return;
}


/* Plane2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::Plane2D::Plane2D__ctor_1
               (Plane2D *this,Vector2 normal,Vector2 pointOnPlane,MethodInfo *method)

{
  VStack_1 = normal;
  uVar2 = FUN_?(&VStack_1);
  fStackX_8 = (float)uVar2;
  fStackX_c = (float)((ulonglong)uVar2 >> 0x20);
  (this->fields)._normal.x = fStackX_8;
  (this->fields)._normal.y = fStackX_c;
  fStack_3 = pointOnPlane.y;
  fStack_4 = pointOnPlane.x;
  (this->fields)._distance = fStackX_c * fStack_3 + fStackX_8 * fStack_4;
  return;
}


/* Void set_Distance(Single) */

void Assembly-CSharp.dll::RTG::Plane2D::Plane2D_set_Distance
               (Plane2D *this,float value,MethodInfo *method)

{
  (this->fields)._distance = value;
  return;
}


/* Void set_Normal(Vector2) */

void Assembly-CSharp.dll::RTG::Plane2D::Plane2D_set_Normal
               (Plane2D *this,Vector2 value,MethodInfo *method)

{
  aVStack_1[0] = value;
  uVar2 = FUN_?(aVStack_1);
  fStackX_8 = (float)uVar2;
  fStackX_c = (float)((ulonglong)uVar2 >> 0x20);
  (this->fields)._normal.x = fStackX_8;
  (this->fields)._normal.y = fStackX_c;
  return;
}

