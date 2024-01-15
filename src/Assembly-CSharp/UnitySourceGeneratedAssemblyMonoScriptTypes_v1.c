
/* UnitySourceGeneratedAssemblyMonoScriptTypes_v1+MonoScriptData Get() */

UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *
Assembly-CSharp.dll::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get
          (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *__return_storage_ptr__,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&A013DA4A85B5DAA44DF27B051DC7FFACEA84730EFF070BA2A1CB0E1C9EA7FB2F_Field);
    func_?(&A21200291E02A0435A1A783E1DFAD324366B9DF1C47FD63218EE564A094B22D8_Field);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->FilePathsData = (Byte__Array *)0x0;
  __return_storage_ptr__->TypesData = (Byte__Array *)0x0;
  __return_storage_ptr__->TotalTypes = 0;
  __return_storage_ptr__->TotalFiles = 0;
  *(undefined4 *)&__return_storage_ptr__->IsEditorOnly = 0;
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x1f3b3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,_A21200291E02A0435A1A783E1DFAD324366B9DF1C47FD63218EE564A094B22D8_Field
             ,(MethodInfo *)0x0);
  __return_storage_ptr__->FilePathsData = pBVar1;
  func_?(__return_storage_ptr__,pBVar1);
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x115bf);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,_A013DA4A85B5DAA44DF27B051DC7FFACEA84730EFF070BA2A1CB0E1C9EA7FB2F_Field
             ,(MethodInfo *)0x0);
  __return_storage_ptr__->TypesData = pBVar1;
  func_?(&__return_storage_ptr__->TypesData,pBVar1);
  __return_storage_ptr__->TotalFiles = 0x679;
  __return_storage_ptr__->TotalTypes = 0x8ad;
  __return_storage_ptr__->IsEditorOnly = 0;
  return __return_storage_ptr__;
}

