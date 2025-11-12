
/* EditStateEventArgs(Boolean) */

void Assembly-CSharp.dll::EditStateEventArgs::EditStateEventArgs__ctor
               (EditStateEventArgs *this,bool beingEdited,MethodInfo *method)

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
  (this->fields).BeingEdited = beingEdited;
  return;
}

