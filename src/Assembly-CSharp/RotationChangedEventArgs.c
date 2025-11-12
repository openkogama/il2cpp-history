
/* RotationChangedEventArgs(Quaternion) */

void Assembly-CSharp.dll::RotationChangedEventArgs::RotationChangedEventArgs__ctor
               (RotationChangedEventArgs *this,Quaternion *newRotation,MethodInfo *method)

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
  fVar1 = newRotation->y;
  fVar2 = newRotation->z;
  fVar3 = newRotation->w;
  (this->fields).NewRotation.x = newRotation->x;
  (this->fields).NewRotation.y = fVar1;
  (this->fields).NewRotation.z = fVar2;
  (this->fields).NewRotation.w = fVar3;
  return;
}

