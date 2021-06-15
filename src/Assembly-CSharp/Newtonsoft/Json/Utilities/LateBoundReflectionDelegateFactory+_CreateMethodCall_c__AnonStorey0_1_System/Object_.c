
/* Object <>m__0(Object, Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<CreateMethodCall>c__AnonStorey0`1[System::Object]::
         LateBoundReflectionDelegateFactory_CreateMethodCall_c_AnonStorey0_1_System_Object____m__0
                   (LateBoundReflectionDelegateFactory_CreateMethodCall_c_AnonStorey0_1_System_Object_
                    *this,Object *o,Object__Array *a,MethodInfo *method)

{
  this_00 = (this->fields).c;
  if (this_00 != (ConstructorInfo *)0x0) {
    pOVar1 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                       (this_00,a,(MethodInfo *)0x0);
    return pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Object <>m__1(Object, Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<CreateMethodCall>c__AnonStorey0`1[System::Object]::
         LateBoundReflectionDelegateFactory_CreateMethodCall_c_AnonStorey0_1_System_Object____m__1
                   (LateBoundReflectionDelegateFactory_CreateMethodCall_c_AnonStorey0_1_System_Object_
                    *this,Object *o,Object__Array *a,MethodInfo *method)

{
  pMVar1 = (this->fields).method;
  if (pMVar1 != (MethodBase *)0x0) {
    pOVar2 = (Object *)
             (*(code *)(pMVar1->klass->vtable).__unknown_8.method)
                       (pMVar1,o,0,0,a,0,(pMVar1->klass->vtable).__unknown_9.methodPtr);
    return pOVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}

