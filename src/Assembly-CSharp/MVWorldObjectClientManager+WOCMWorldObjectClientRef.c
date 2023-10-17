
/* MVWorldObjectClientManager+WOCMWorldObjectClientRef(Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WOCMWorldObjectClientRef::
     MVWorldObjectClientManager_WOCMWorldObjectClientRef__ctor
               (MVWorldObjectClientManager_WOCMWorldObjectClientRef *this,int32_t woId,
               MethodInfo *method)

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

