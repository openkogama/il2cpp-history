
/* SelectedEventArgs(Boolean) */

void Assembly-CSharp.dll::SelectedEventArgs::SelectedEventArgs__ctor
               (SelectedEventArgs *this,bool selected,MethodInfo *method)

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
  (this->fields).Selected = selected;
  return;
}

