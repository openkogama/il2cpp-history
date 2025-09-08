
/* UnitySourceGeneratedAssemblyMonoScriptTypes_v1+MonoScriptData Get() */

UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *
Assembly-CSharp.dll::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get
          (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *__return_storage_ptr__,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&::_4AAA2E927C0CB487603C31FE0655ABA7C6E7D1944130302F336496B569C98D02_Field);
    func_?(&B9E2E851FF5C84C4B85F3B7C927E34087988B2FD8009EED28D4F945005813846_Field);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->FilePathsData = (Byte__Array *)0x0;
  __return_storage_ptr__->TypesData = (Byte__Array *)0x0;
  __return_storage_ptr__->TotalTypes = 0;
  __return_storage_ptr__->TotalFiles = 0;
  *(undefined4 *)&__return_storage_ptr__->IsEditorOnly = 0;
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x2ad86);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,
             __4AAA2E927C0CB487603C31FE0655ABA7C6E7D1944130302F336496B569C98D02_Field,
             (MethodInfo *)0x0);
  __return_storage_ptr__->FilePathsData = pBVar1;
  func_?(__return_storage_ptr__,pBVar1);
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x15503);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,_B9E2E851FF5C84C4B85F3B7C927E34087988B2FD8009EED28D4F945005813846_Field
             ,(MethodInfo *)0x0);
  __return_storage_ptr__->TypesData = pBVar1;
  func_?(&__return_storage_ptr__->TypesData,pBVar1);
  __return_storage_ptr__->TotalFiles = 0x832;
  __return_storage_ptr__->TotalTypes = 0xab8;
  __return_storage_ptr__->IsEditorOnly = 0;
  return __return_storage_ptr__;
}

