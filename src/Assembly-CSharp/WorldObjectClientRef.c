
/* WorldObjectClientRef(Int32) */

void Assembly-CSharp.dll::WorldObjectClientRef::WorldObjectClientRef__ctor
               (WorldObjectClientRef *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__WorldObjectClientRef_int_
                   );
    cRam_? = '\x01';
  }
  WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
            ((WorldObjectClientRef_1_System_Object_ *)this,woId,
             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__WorldObjectClientRef_int_);
  return;
}

