
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this = (MVGameControllerBase_VersionData *)(this->fields)._version_k__BackingField;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  iStack_2 = (pMVar1->fields)._minVersion_k__BackingField;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_version__0___minVersion__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}

