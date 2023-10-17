
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedAssetToCallback`2[System::Object,System::Object]::
     StreamedAssetToCallback_2_System_Object_System_Object__OnAssetSet
               (StreamedAssetToCallback_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pAVar1 = (this->fields).onAssetSet;
  uVar2 = (*method->klass->rgctx_data->method->virtualMethodPointer)
                    (this,method->klass->rgctx_data->rgctxDataDummy);
  if (pAVar1 != (Action_1_Object_ *)0x0) {
    (*(method->klass->rgctx_data[2].method)->virtualMethodPointer)
              (pAVar1,uVar2,method->klass->rgctx_data[2].rgctxDataDummy);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* StreamedAssetToCallback`2[System.Object,System.Object]() */

void Assembly-CSharp.dll::StreamedAssetToCallback`2[System::Object,System::Object]::
     StreamedAssetToCallback_2_System_Object_System_Object___ctor
               (StreamedAssetToCallback_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
            (this,method->klass->rgctx_data[3].rgctxDataDummy);
  return;
}

