
/* WorldObjectClientRef(Int32) */

void Assembly-CSharp.dll::WorldObjectClientRef::WorldObjectClientRef__ctor
               (WorldObjectClientRef *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  WorldObjectClientRef`1[MVWorldObjectClient]::WorldObjectClientRef_1_MVWorldObjectClient___ctor
            ((WorldObjectClientRef_1_MVWorldObjectClient_ *)this,woId,
             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__WorldObjectClientRef_int_);
  return;
}

