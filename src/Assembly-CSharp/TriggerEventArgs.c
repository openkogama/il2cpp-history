
/* TriggerEventArgs(Int32) */

void Assembly-CSharp.dll::TriggerEventArgs::TriggerEventArgs__ctor
               (TriggerEventArgs *this,int32_t woid,MethodInfo *method)

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
  (this->fields).instigatorWOID = woid;
  return;
}

