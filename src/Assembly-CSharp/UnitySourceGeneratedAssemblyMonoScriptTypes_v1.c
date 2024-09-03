
/* UnitySourceGeneratedAssemblyMonoScriptTypes_v1+MonoScriptData Get() */

UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *
Assembly-CSharp.dll::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get
          (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *__return_storage_ptr__,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&BF232D878E11BF03C3B06618B834C7835F7AD9D514264DBA73876813BB55AE3A_Field);
    func_?(&D648CC0DBABB2F76583432EAE725AC0596332E171F4173034E8859C9944E43D9_Field);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->FilePathsData = (Byte__Array *)0x0;
  __return_storage_ptr__->TypesData = (Byte__Array *)0x0;
  __return_storage_ptr__->TotalTypes = 0;
  __return_storage_ptr__->TotalFiles = 0;
  *(undefined4 *)&__return_storage_ptr__->IsEditorOnly = 0;
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x2a4b6);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,_BF232D878E11BF03C3B06618B834C7835F7AD9D514264DBA73876813BB55AE3A_Field
             ,(MethodInfo *)0x0);
  __return_storage_ptr__->FilePathsData = pBVar1;
  func_?(__return_storage_ptr__,pBVar1);
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x151cc);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,_D648CC0DBABB2F76583432EAE725AC0596332E171F4173034E8859C9944E43D9_Field
             ,(MethodInfo *)0x0);
  __return_storage_ptr__->TypesData = pBVar1;
  func_?(&__return_storage_ptr__->TypesData,pBVar1);
  __return_storage_ptr__->TotalFiles = 0x81a;
  __return_storage_ptr__->TotalTypes = 0xa9d;
  __return_storage_ptr__->IsEditorOnly = 0;
  return __return_storage_ptr__;
}

