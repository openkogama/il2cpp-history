
/* OnTransferWosResponseEventArgs(Boolean) */

void Assembly-CSharp.dll::OnTransferWosResponseEventArgs::OnTransferWosResponseEventArgs__ctor
               (OnTransferWosResponseEventArgs *this,bool success,MethodInfo *method)

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
  (this->fields).success = success;
  return;
}

