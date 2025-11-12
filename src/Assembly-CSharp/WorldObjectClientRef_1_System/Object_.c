
/* WorldObjectClientRef`1[System.Object](Int32) */

void Assembly-CSharp.dll::WorldObjectClientRef`1[System::Object]::
     WorldObjectClientRef_1_System_Object___ctor
               (WorldObjectClientRef_1_System_Object_ *this,int32_t woId,MethodInfo *method)

{
  (this->fields).woId = woId;
  return;
}


/* Object get_WorldObjectClient() */

Object * Assembly-CSharp.dll::WorldObjectClientRef`1[System::Object]::
         WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                   (WorldObjectClientRef_1_System_Object_ *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pOVar3 = (Object *)(*pcVar2)();
    return pOVar3;
  }
  key = (this->fields).woId;
  pMVar4 = method->klass->rgctx_data[1].method;
  if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar4);
    }
  }
  this_00 = (pMVar1->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)&stack0x00000008,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if ((*(byte *)((longlong)((pMVar4->field7_0x38).rgctx_data)->rgctxDataDummy + 0x135) & 1) == 0)
    {
      FUN_?(((pMVar4->field7_0x38).rgctx_data)->rgctxDataDummy);
    }
    return (Object *)0x0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar2)();
  return pOVar3;
}

