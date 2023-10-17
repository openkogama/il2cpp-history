
/* Boolean ForceUpdate(Int32) */

bool Assembly-CSharp.dll::MVGameControllerBase+VersionData::
     MVGameControllerBase_VersionData_ForceUpdate
               (MVGameControllerBase_VersionData *this,int32_t clientVersion,MethodInfo *method)

{
  return clientVersion < (this->fields)._minVersion_k__BackingField;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVGameControllerBase+VersionData::
         MVGameControllerBase_VersionData_ToString
                   (MVGameControllerBase_VersionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_version__0___minVersion__1__);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this = (MVGameControllerBase_VersionData *)(this->fields)._version_k__BackingField;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  iStack_2 = (pMVar1->fields)._minVersion_k__BackingField;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_version__0___minVersion__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}

