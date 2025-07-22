
/* UnitySourceGeneratedAssemblyMonoScriptTypes_v1+MonoScriptData Get() */

UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *
Assembly-CSharp.dll::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get
          (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *__return_storage_ptr__,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&::_074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    func_?(&CA3DD746A7BD8AAF3849B03D4F3CE896A4D24A95C3E5B4EC85446CAFC0B0B2D5_Field);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->FilePathsData = (Byte__Array *)0x0;
  __return_storage_ptr__->TypesData = (Byte__Array *)0x0;
  __return_storage_ptr__->TotalTypes = 0;
  __return_storage_ptr__->TotalFiles = 0;
  *(undefined4 *)&__return_storage_ptr__->IsEditorOnly = 0;
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x2aacc);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,
             __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field,
             (MethodInfo *)0x0);
  __return_storage_ptr__->FilePathsData = pBVar1;
  func_?(__return_storage_ptr__,pBVar1);
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x15470);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,_CA3DD746A7BD8AAF3849B03D4F3CE896A4D24A95C3E5B4EC85446CAFC0B0B2D5_Field
             ,(MethodInfo *)0x0);
  __return_storage_ptr__->TypesData = pBVar1;
  func_?(&__return_storage_ptr__->TypesData,pBVar1);
  __return_storage_ptr__->TotalFiles = 0x82d;
  __return_storage_ptr__->TotalTypes = 0xab3;
  __return_storage_ptr__->IsEditorOnly = 0;
  return __return_storage_ptr__;
}

