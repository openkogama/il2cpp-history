
/* ConstraintBoxChangedEventArgs(Vector3, IntVector, IntVector) */

void Assembly-CSharp.dll::ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
               (ConstraintBoxChangedEventArgs *this,Vector3 *center,IntVector *minCorner,
               IntVector *maxCorner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = center->z;
  fVar2 = center->y;
  (this->fields).Center.x = center->x;
  (this->fields).Center.y = fVar2;
  (this->fields).Center.z = fVar1;
  iVar3 = minCorner->y;
  (this->fields).MinCorner.x = minCorner->x;
  (this->fields).MinCorner.y = iVar3;
  (this->fields).MinCorner.z = minCorner->z;
  iVar3 = maxCorner->y;
  (this->fields).MaxCorner.x = maxCorner->x;
  (this->fields).MaxCorner.y = iVar3;
  (this->fields).MaxCorner.z = maxCorner->z;
  return;
}

