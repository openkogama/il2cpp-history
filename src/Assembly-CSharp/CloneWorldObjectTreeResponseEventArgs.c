
/* CloneWorldObjectTreeResponseEventArgs(Boolean, Int32) */

void Assembly-CSharp.dll::CloneWorldObjectTreeResponseEventArgs::
     CloneWorldObjectTreeResponseEventArgs__ctor
               (CloneWorldObjectTreeResponseEventArgs *this,bool success,int32_t rootId,
               MethodInfo *method)

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
  (this->fields).Success = success;
  (this->fields).RootId = rootId;
  return;
}

