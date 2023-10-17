
/* String ToString() */

String * Assembly-CSharp.dll::LoadStats::LoadStats_ToString(LoadStats *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Double);
    func_?(&StringLiteral_DomReady__0___PluginInit__1___Ga);
    cRam_? = '\x01';
  }
  dStack_1 = (this->fields).DOMReady;
  arg0 = (Object *)func_?(TypeInfo__System__Double,&dStack_1);
  dStack_2 = (this->fields).PluginInit;
  arg1 = (Object *)func_?(TypeInfo__System__Double,&dStack_2);
  dStack_3 = (this->fields).GameStartTime;
  arg2 = (Object *)func_?(TypeInfo__System__Double,&dStack_3);
  pSVar4 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_DomReady__0___PluginInit__1___Ga,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar4;
}

