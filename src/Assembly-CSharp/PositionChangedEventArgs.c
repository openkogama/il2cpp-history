
/* PositionChangedEventArgs(Vector3) */

void Assembly-CSharp.dll::PositionChangedEventArgs::PositionChangedEventArgs__ctor
               (PositionChangedEventArgs *this,Vector3 *newPos,MethodInfo *method)

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
  fVar1 = newPos->y;
  fVar2 = newPos->z;
  (this->fields).NewPos.x = newPos->x;
  (this->fields).NewPos.y = fVar1;
  (this->fields).NewPos.z = fVar2;
  return;
}

