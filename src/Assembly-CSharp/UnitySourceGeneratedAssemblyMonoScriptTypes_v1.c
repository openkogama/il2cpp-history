
/* UnitySourceGeneratedAssemblyMonoScriptTypes_v1+MonoScriptData Get() */

UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *
Assembly-CSharp.dll::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get
          (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *__return_storage_ptr__,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&D865B1F6DC62EEF37576FFF02EF44285C0ABBC42A30BE78367C2CBE8654E86DC_Field);
    func_?(&EACC110E18615A63B68D5310D25D818CF0DBEFF86718AE70C9EB046DAC4C3140_Field);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->FilePathsData = (Byte__Array *)0x0;
  __return_storage_ptr__->TypesData = (Byte__Array *)0x0;
  __return_storage_ptr__->TotalTypes = 0;
  __return_storage_ptr__->TotalFiles = 0;
  *(undefined4 *)&__return_storage_ptr__->IsEditorOnly = 0;
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x2a962);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,_EACC110E18615A63B68D5310D25D818CF0DBEFF86718AE70C9EB046DAC4C3140_Field
             ,(MethodInfo *)0x0);
  __return_storage_ptr__->FilePathsData = pBVar1;
  func_?(__return_storage_ptr__,pBVar1);
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x153b1);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,_D865B1F6DC62EEF37576FFF02EF44285C0ABBC42A30BE78367C2CBE8654E86DC_Field
             ,(MethodInfo *)0x0);
  __return_storage_ptr__->TypesData = pBVar1;
  func_?(&__return_storage_ptr__->TypesData,pBVar1);
  __return_storage_ptr__->TotalFiles = 0x828;
  __return_storage_ptr__->TotalTypes = 0xaad;
  __return_storage_ptr__->IsEditorOnly = 0;
  return __return_storage_ptr__;
}

