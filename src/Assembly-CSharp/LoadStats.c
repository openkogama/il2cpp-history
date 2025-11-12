
/* String ToString() */

String * Assembly-CSharp.dll::LoadStats::LoadStats_ToString(LoadStats *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_DomReady__0___PluginInit__1___Ga);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  dStackX_8 = (this->fields).DOMReady;
  arg0 = (Object *)FUN_?(uRam_?,&dStackX_8);
  dStackX_8 = (this->fields).PluginInit;
  arg1 = (Object *)FUN_?(uRam_?,&dStackX_8);
  dStackX_8 = (this->fields).GameStartTime;
  arg2 = (Object *)FUN_?(uRam_?,&dStackX_8);
  pSVar1 = StringLiteral_DomReady__0___PluginInit__1___Ga;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_2,arg0,arg1,arg2,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}

