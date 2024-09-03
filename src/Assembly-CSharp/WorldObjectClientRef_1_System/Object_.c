
/* WorldObjectClientRef`1[System.Object](Int32) */

void Assembly-CSharp.dll::WorldObjectClientRef`1[System::Object]::
     WorldObjectClientRef_1_System_Object___ctor
               (WorldObjectClientRef_1_System_Object_ *this,int32_t woId,MethodInfo *method)

{
  (this->fields).woId = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).woId = woId;
  return;
}


/* Object get_WorldObjectClient() */

Object * Assembly-CSharp.dll::WorldObjectClientRef`1[System::Object]::
         WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                   (WorldObjectClientRef_1_System_Object_ *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                       (this_00,(this->fields).woId,method->klass->rgctx_data[1].method);
    return pOVar1;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}

