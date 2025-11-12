
/* ScaleArgs(Single) */

void Assembly-CSharp.dll::ScaleArgs::ScaleArgs__ctor
               (ScaleArgs *this,float aScale,MethodInfo *method)

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
  (this->fields).scale = aScale;
  return;
}

