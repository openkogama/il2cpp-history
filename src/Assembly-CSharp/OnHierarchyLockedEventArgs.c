
/* OnHierarchyLockedEventArgs(Int32, Boolean) */

void Assembly-CSharp.dll::OnHierarchyLockedEventArgs::OnHierarchyLockedEventArgs__ctor
               (OnHierarchyLockedEventArgs *this,int32_t worldObjectID,bool success,
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
  (this->fields).worldObjectID = worldObjectID;
  (this->fields).success = success;
  return;
}

