
/* WorldObjectClientRef(Int32) */

void Assembly-CSharp.dll::WorldObjectClientRef::WorldObjectClientRef__ctor
               (WorldObjectClientRef *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__WorldObjectClientRef_int_)
    ;
    LOCK();
    UNLOCK();
    cRam_? = 1;
    (this->fields)._.woId = woId;
    return;
  }
  (this->fields)._.woId = woId;
  return;
}

