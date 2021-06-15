
/* MVWorldObjectClientManager+WOCMWorldObjectClientRef(Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WOCMWorldObjectClientRef::
     MVWorldObjectClientManager_WOCMWorldObjectClientRef__ctor
               (MVWorldObjectClientManager_WOCMWorldObjectClientRef *this,int32_t woId,
               MethodInfo *method)

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

