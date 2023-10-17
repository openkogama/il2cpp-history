
/* WorldObjectClientRef`1[System.Object](Int32) */

void Assembly-CSharp.dll::WorldObjectClientRef`1[System::Object]::
     WorldObjectClientRef_1_System_Object___ctor
               (WorldObjectClientRef_1_System_Object_ *this,int32_t woId,MethodInfo *method)

{
  (this->fields).woId = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).woId = woId;
  return;
}


/* Object get_WorldObjectClient() */

Object * Assembly-CSharp.dll::WorldObjectClientRef`1[System::Object]::
         WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                   (WorldObjectClientRef_1_System_Object_ *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pOVar2 = (Object *)
             (*method->klass->rgctx_data->method->virtualMethodPointer)
                       (pMVar1,(this->fields).woId,method->klass->rgctx_data->rgctxDataDummy);
    return pOVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}

