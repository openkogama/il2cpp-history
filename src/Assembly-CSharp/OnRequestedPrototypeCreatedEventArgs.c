
/* OnRequestedPrototypeCreatedEventArgs(Int32) */

void Assembly-CSharp.dll::OnRequestedPrototypeCreatedEventArgs::
     OnRequestedPrototypeCreatedEventArgs__ctor
               (OnRequestedPrototypeCreatedEventArgs *this,int32_t prototypeId,MethodInfo *method)

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
  (this->fields).prototypeId = prototypeId;
  return;
}

