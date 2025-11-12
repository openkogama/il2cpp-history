
/* ScaleChangedEventArgs(Vector3) */

void Assembly-CSharp.dll::ScaleChangedEventArgs::ScaleChangedEventArgs__ctor
               (ScaleChangedEventArgs *this,Vector3 *newScale,MethodInfo *method)

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
  fVar1 = newScale->y;
  fVar2 = newScale->z;
  (this->fields).NewScale.x = newScale->x;
  (this->fields).NewScale.y = fVar1;
  (this->fields).NewScale.z = fVar2;
  return;
}

